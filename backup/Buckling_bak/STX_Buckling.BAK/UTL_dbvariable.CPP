






CLASS UTL_dbVariable


FUNCTION init()
INTEGER i_label, i_status, id, i
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length
LOGICAL	p_logical_data(1)
INTEGER	p_integer_data(1)
REAL	p_real_data(1)
STRING	p_string_data[1](1)




client_type = 11


client_data = 11/* initial maximum_ID */
i_status = db_create_client_data(id, client_data, client_type, @
num_logicals, num_integers, num_reals, num_strings,max_string_length,@
p_logical_data, p_integer_data, p_real_data, p_string_data)




END FUNCTION




FUNCTION chk_dbVar(i_label)


INTEGER i_label, i_status, id
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length
LOGICAL	p_logical_data(1)
INTEGER	p_integer_data(1)
REAL	p_real_data(1)
STRING	p_string_data[25](1)


client_data = i_label
client_type = 111
i_status = db_create_client_data(id, client_data, client_type, @
num_logicals, num_integers, num_reals, num_strings,max_string_length,@
p_logical_data, p_integer_data, p_real_data, p_string_data)


IF( i_status ==0 ) THEN db_delete_client_data(client_data)


RETURN i_status


END FUNCTION


FUNCTION set_dbVar_resLabel (i_label,i_CntLc, ia_labels,p_integer_data, p_string_data)
$ save INTEGER, STRING
$ ia_labels : loadcase_id + subcase_id
$ p_integer_data : dblabels on each STRING data


INTEGER i_label, i_status, id, i_nbound, i
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers, num_integers2
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length


LOGICAL	p_logical_data(1)
INTEGER	p_integer_data()
REAL	p_real_data(1)
STRING	p_string_data[]()


INTEGER ia_labels(), i_CntLc
	
client_type = 111
max_string_length = 80


num_integers = sys_array_hbound(p_integer_data,1)
num_strings = sys_array_hbound(p_string_data, 1)


FOR ( i=1 TO num_integers )
$ input random label
IF( p_integer_data(i) == 0 ) THEN
db_get_next_client_entity_label(p_integer_data(i))
client_data = p_integer_data(i)
num_integers2 = sys_array_hbound(ia_labels,1)
p_real_data(1) = i_CntLc


$ input ia_labels, p_real_data
i_status = db_create_client_data(id, client_data, client_type, @
0, num_integers2, 1, 0,0, @
p_logical_data, ia_labels, p_real_data, p_string_data)


END IF 	
END FOR	




client_data = i_label
db_delete_client_data(client_data)
i_status = db_create_client_data(id, client_data, client_type, @
0, num_integers, 0, num_strings,max_string_length, @
p_logical_data, p_integer_data, p_real_data, p_string_data)


	
END FUNCTION




FUNCTION get_dbVar_resLabel(i_label, p_integer_data,p_real_data, p_string_data)
$
$ p_integer_data : ia_db_integer_label
$ p_string_data : sa_db_string_label
$ p_real_data : ra_loadcase_count(1)


INTEGER i_label, i_status, id, i_nbound, i, i_id
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length


LOGICAL	p_logical_data(1)
INTEGER	p_integer_data()
REAL	p_real_data()
STRING	p_string_data[]()


client_data = i_label
db_get_client_data(client_data,id,client_type,num_logicals,num_integers,num_reals,num_strings,max_string_length)


IF( num_integers !=0 ) THEN
	SYS_ALLOCATE_ARRAY(p_integer_data,1,num_integers)
ELSE
	RETURN -1/*  num_integers  >0 */
END IF	
IF( num_strings !=0 ) THEN SYS_ALLOCATE_ARRAY(p_string_data, 1,num_strings)


db_get_client_id_by_label(i_label, i_id)


db_get_all_client_data	(i_id, @
num_logicals, @
num_integers, @
num_reals, @
num_strings, @
max_string_length, @
p_logical_data, p_integer_data, p_real_data, p_string_data)




END FUNCTION


FUNCTION set_dbVar_resData(i_label,p_integer_data,p_real_data)


INTEGER i_label, i_status, id, i_nbound, i
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length


LOGICAL	p_logical_data(1)
INTEGER	p_integer_data()
REAL	p_real_data()
STRING	p_string_data[1](1)
	
client_data = i_label
client_type = 222
num_integers = sys_array_hbound(p_integer_data,1)
num_reals = sys_array_hbound(p_real_data,1)*sys_array_hbound(p_real_data,2)
client_data = i_label


REAL ra_test(3);num_reals=num_reals+10
db_delete_client_data(client_data)
> i_status = db_create_client_data(id, client_data, client_type, @
1, num_integers, num_reals, 1,1, @
p_logical_data, p_integer_data, p_real_data, p_string_data)




END FUNCTION




FUNCTION get_dbVar_resData(i_label,p_integer_data,p_real_data)


INTEGER i_label, i_status, id, i_nbound, i, i_id
INTEGER client_data
INTEGER	client_type
INTEGER	num_logicals
INTEGER	num_integers
INTEGER	num_reals
INTEGER	num_strings
INTEGER	max_string_length


LOGICAL	p_logical_data(1)
INTEGER	p_integer_data()
REAL	p_real_data()
STRING	p_string_data[1](1)


INTEGER i_pnlCnt, i_clmCnt
client_data = i_label
db_get_client_data(client_data,id,client_type,num_logicals,num_integers,num_reals,num_strings,max_string_length)


SYS_ALLOCATE_ARRAY(p_integer_data,1,num_integers)
$ SYS_ALLOCATE_ARRAY(p_real_data, 1,i_pnlCnt, 1,i_clmCnt)


db_get_client_id_by_label(i_label, i_id)
db_get_all_client_data	(i_id, @
num_logicals, @
num_integers, @
num_reals, @
num_strings, @
max_string_length, @
p_logical_data, p_integer_data, p_real_data, p_string_data)




i_pnlCnt = p_integer_data(1)*p_integer_data(2)
i_clmCnt = p_integer_data(3)
SYS_ALLOCATE_ARRAY(p_real_data, 1,i_pnlCnt, 1,i_clmCnt)




db_get_all_client_data	(i_id, @
num_logicals, @
num_integers, @
num_reals, @
num_strings, @
max_string_length, @
p_logical_data, p_integer_data, p_real_data, p_string_data)




END FUNCTION




END CLASS