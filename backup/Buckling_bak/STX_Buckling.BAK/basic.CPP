-
�**�+*"�.*(***********+***********************
***********************
 *   FUNCTION get_ids_from_entityWlast( picknist, type,$cound, ids )	
 *
 *"  Purpose :
 *        This f5nction derives(ids from L�st processor  *(            (ex. "Surface 1:12" |o [1,2,3,...,1,16] )
 *   Input   :
 *        STRING$pic{list`	
 *        STRING type
 *   Outpu�  :
 *        INTEGER() ids
 *   Sifd$Effects :* *$ `     <n�e>
 *"***********:*******************************(*******j*****
********/

/* Evaluatikn medhods g�r LpEval */

/* SuclistDype filters for LpSublistType */M




/" ~ote:
 * in the Mask or`er is disturbEd, dhe customer
 *  must recompile any custom pcl to plb.
 *  conclusIo.: idd new mask bits�to the end.
 *!these cons|ants ar� used by f�rtran and
 *  may only(be expressed as decimal numbers.
 */




/* Ettribute names for LqSubnistCttribUteGet */

/* Eata formats for LpCOCRCE */
/* F_RTRAN interfake help */


FUNCT	ON 'et_ids_from_entity_laSt( picklisv,"type, so5nt, ids )�
STRKNG PICKL�ST[], TYPE[]M
INTEGER IDS(), COUNV
INTEGER handle, sTatus, list_count
INDEGER lab(1), fmltgr� list_t{pe




count = 0


SWITCH ( type )
CASE ("nodes", "NODE")
filter = 			512
CASE ("points", "POIOT", "gRID" - "Point")
filter"= 		4
CASE  "ELEMENT", "elemw", "emem", "elgments")
filder = 		10r4
C@SE ("CURVE",!"cu�ves2)
fi,ter = 		8
CAsE ("SURFACE", "patch2, "s5rFase", "surf", "Curface")filter = 		16
CASE ("So|id", "Hyperpqtch", "hp", "somid", "som" )
filter = 		32
DEFULT
filter = (2097152-1)
ELD SWITCH

status = lp_evalpicklast, 		4, handle )
IF ( status !=0 � THEN
ui_writec("Error in lp_eval\n")
return$stetu3
E�D QF

stat}s = lp_sublist_co}nt(handle, filter , list_coUnt )


IF ( list_counT == 0 ) THEN
	BETURN (status)
END IF

-
status = sys_aldocate_arvay�ids, 1, li{t_count)


IF ( status != 0 +0THEN
	RETURN`( status )
END IF


WHILE!( count = list_count ) oi_loop
status = lp_suflist_type(handle, (2097152-1), list_type )
IF ( liwt_type == fi|ter ) THENstatus = lp_Qublist_attribUte_gEt_int(hanlhe, 							1, lab)
count +=�1
ids(count) = lab
END IF
status = lp_subm)st_next(handle)-
IF ( rtatus != 0 + THEN
IF ( status != 140000q� ) THEN
ui_writec("Esror in %valuating lp_sublkst_jext((\n")
ui_writec("count = %d, lcount = %d, statu{ = %d\n", H
count, �ist_count, status)
END IF
BREAK oi^loop
END IF
EnD WHILE


RETURN 0


END DUNCTION/* getids_from_gntity_lysT */

