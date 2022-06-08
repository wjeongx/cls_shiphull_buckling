
FUNCTION s_lc_result(lc, grp_name, res_type)
/*
  input ; 
     string lc[]        - loadcase name
     string grp_name[]  - groupName 
     string res_type[]  - "XX","YY","XY","VONM"
  
  output ; 
     return integer dummy ( Maximun data in selected group )

*/

STRING lc[], grp_name[], res_type[]
STRING s_label[80](VIRTUAL)
STRING label[90], title[80]
STRING val[VIRTUAL] , grp_list[64](1), triElm[VIRTUAL], quadElm[VIRTUAL]
STRING shellElm[VIRTUAL]


INTEGER ncases, nsub2, nres, i, j
INTEGER lcids(VIRTUAL), nsub(VIRTUAL), subids(VIRTUAL), primary_id(VIRTUAL)
INTEGER secondary_id(VIRTUAL)
INTEGER data_type, resloc
INTEGER eids(VIRTUAL)
INTEGER nresults(VIRTUAL), minloc(12), maxloc(12)
INTEGER result_ids(VIRTUAL)
INTEGER nlayers
INTEGER i_pos , i_str_length
INTEGER dummy, type
INTEGER nullflag
INTEGER lcid(1), pid(1), sid(1), lid(VIRTUAL)


REAL xyz(3), origin(3), matrix(3, 3)
REAL result(VIRTUAL), r_data, z_data, theta
REAL sorted_results(VIRTUAL)


grp_list(1) = grp_name


$ FOR shellElement ( tri + quad ) $
list_create_elem_ass_group( 3, grp_list , 1, "lista", triElm )
i = str_length(triElm)
shellElm = ""
list_create_elem_ass_group( 4, grp_list , 1, "lista", quadElm )
j= 	str_length(quadElm)
sys_allocate_string( shellElm, i+j )
shellElm = triElm//" "//quadElm






$res_utl_get_loadcases(ncases, lcids, nsub)
ncases = 1
sys_allocate_array(lcids,1,1)
db_get_load_case_id (lc, lcids(1))




lcid(1) = lcids(1)
res_utl_get_subcases(lcids(1), nsub2, subids)
res_utl_get_result_ids( 1, lcid, subids, @
nres, primary_id , secondary_id)


FOR( j=1 TO nres )


db_get_primary_res_label(primary_id(j),title)
IF ( title == "Stress Tensor") THEN
pid(1) = primary_id(j)
END IF


END FOR




$FOR (j=1 TO nres)
$ db_get_secondary_res_label( pid(1),secondary_id(j),title)
/* this is tricky */

sid(1) = secondary_id(1)
$END FOR


sys_reallocate_array(result_ids,1,4)
result_ids(1) = lcid(1)
result_ids(2) = subids(1)
result_ids(3) = pid(1)
result_ids(4) = sid(1)






res_utl_get_result_layers( result_ids, @
nlayers, @
lid, @
s_label )




sys_reallocate_array(result_ids,1,5)


result_ids(1) = lcid(1)
result_ids(2) = subids(1)
result_ids(3) = pid(1)
result_ids(4) = sid(1)
result_ids(5) = lid(2)




res_utl_extract_elem_results (/* input */ @
result_ids, @
shellElm, @
res_type, @
"C", @
"IJK", @
/* output */@
data_type, resloc, nres, eids, nresults, result, minloc, maxloc)






sys_allocate_array(sorted_results,1,nres,1,2)




FOR (j=1 TO nres)
sorted_results(j,1) = mth_round(result(j),2)
END FOR


mth_sort_column ( sorted_results , 1 , FALSE )


$dump sorted_results(1,1)
dummy = sorted_results(1,1)
uil_list_a.clear( )
dump nres, result
RETURN dummy




END FUNCTION
