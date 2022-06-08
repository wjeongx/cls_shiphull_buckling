

/* $Header: /banff/vbs/Dev.X700/cCase/d1/src_1/./lp/include/RCS/lpenums.p,v 1.1 91/05/21 15:58:43 deiner Exp $ */
/* Evaluation methods for LpEval */

/* SublistType filters for LpSublistType */




/* note:
 * if the mask order is disturbed, the customer
 *  must recompile any custom pcl to plb.
 *  conclusion: add new mask bits to the end.
 * these constants are used by fortran and
 *  may only be expressed as decimal numbers.
 */




/* Attribute names for LpSublistAttributeGet */

/* Data formats for LpCOERCE */

/* FORTRAN interface help */


CLASS UTL


CLASSWIDE INTEGER i_prjCrd


FUNCTION getNormVect(s_grpName)/* get Projected coordinate system */


STRING s_grpName[], s_buff[VIRTUAL]
INTEGER i_count, ia_elemIDs(VIRTUAL),ia_nodeIDs(VIRTUAL), status
REAL ra_normVect(3)


uil_entity_group_members_get( s_grpName, 124, s_buff )
$ normal vector check
get_ids_from_entity_list(s_buff,"elem",i_count,ia_elemIDs)
$i_count = fem_u_count_id_list(		1024, s_buff, false, status)
$sys_allocate_array(ia_elemIDs, 1, i_count)
$fem_u_get_id_list(		1024, s_buff, i_count, TRUE, ia_elemIDs)


SYS_ALLOCATE_ARRAY(ia_nodeIDs,1,1,1,4)
db_get_nodes_for_elems(1,4,ia_elemIDs(1:1),ia_nodeIDs)
UTL_getNormVect(ia_nodeIDs(1,1:3), ra_normVect)


IF ( (abs(ra_normVect(1)) ==1) && ra_normVect(2)==0 && ra_normVect(3)==0 ) THEN
/* SECT PART*/

i_prjCrd = 2
DUMP "SECT"
ELSE IF ( (abs(ra_normVect(2)) ==1) && ra_normVect(1)==0 && ra_normVect(3)==0 ) THEN
/* ELEV PART */

i_prjCrd = 1
DUMP "ELEV"
ELSE IF ( (abs(ra_normVect(3)) ==1) && ra_normVect(1)==0 && ra_normVect(2)==0 ) THEN
/* DECK PART */

i_prjCrd = 1
ELSE
i_prjCrd = 1 	
END IF	


END FUNCTION




FUNCTION get2DElm(s_grpName)


STRING s_grpName[], s_buff[VIRTUAL]
INTEGER i_count, ia_elemIDs(VIRTUAL), i, i_2DCount,ia_2DElemIDs(VIRTUAL)
INTEGER shape(VIRTUAL), nnod(VIRTUAL), topo_codes(VIRTUAL), status
	
uil_entity_group_members_get( s_grpName, 124, s_buff )
if( s_buff =="" ) then return ""	
get_ids_from_entity_list(s_buff,"elem",i_count,ia_elemIDs)
$i_count = fem_u_count_id_list(		1024, s_buff, false, status)
$sys_allocate_array(ia_elemIDs, 1, i_count)
$fem_u_get_id_list(		1024, s_buff, i_count, TRUE, ia_elemIDs)


SYS_ALLOCATE_ARRAY( topo_codes, 1, i_count )
SYS_ALLOCATE_ARRAY( shape , 1, i_count )
SYS_ALLOCATE_ARRAY( nnod , 1, i_count )	


db_get_elem_etop( i_count, ia_elemIDs, topo_codes )
db_get_elem_topology_data( i_count, topo_codes,shape, nnod)	


ga_group_create( "_GET_2D_ELM" )
	
i_2DCount=1
FOR ( i =1 TO i_count )
IF( shape(i)==3 || shape(i)==4 ) THEN
	ga_group_entity_add( "_GET_2D_ELM", "Elm "//str_from_integer(ia_elemIDs(i)) )
	SYS_REALLOCATE_ARRAY(ia_2DElemIDs,1,i_2DCount)
	ia_2DElemIDs(i_2DCount)=ia_elemIDs(i)
	i_2DCount = i_2DCount+1
END IF
END FOR 	


uil_entity_group_members_get( "_GET_2D_ELM" , 124, s_buff )
uil_group_delete_group.delete_groups( FALSE, 1, ["_GET_2D_ELM"] )	 	


$ UTL_setArrayToString(ia_2DElemIDs,i_2DCount-1,s_buff)


RETURN s_buff


END FUNCTION






FUNCTION getPrjCrd()
RETURN i_prjCrd
END FUNCTION





END CLASS
	