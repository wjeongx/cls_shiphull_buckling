
/*********************************************************************
 *   FUNCTION get_ids_from_entity_list( picklist, type, count, ids )
 *
 *   Purpose :
 *        This function derives ids from List processor 
 *             (ex. "Surface 1:12" to [1,2,3,...,11,12] )
 *   Input   :
 *        STRING picklist 
 *        STRING type
 *   Output  :
 *        INTEGER() ids
 *   Side Effects :
 *        <none>
 ********************************************************************/

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


FUNCTION get_ids_from_entity_list( picklist, type, count, ids )


STRING PICKLIST[], TYPE[]
INTEGER IDS(), COUNT
INTEGER handle, status, list_count
INTEGER lab(1), filter, list_type




count = 0


SWITCH ( type )
CASE ("nodes", "NODE")
filter = 			512
CASE ("points", "POINT", "GRID" , "Point")
filter = 		4
CASE ("ELEMENT", "elems", "elem", "elements")
filter = 		1024
CASE ("CURVE", "curves")
filter = 		8
CASE ("SURFACE", "patch", "surface", "surf", "Surface")
filter = 		16
CASE ("Solid", "Hyperpatch", "hp", "solid", "sol" )
filter = 		32
DEFAULT
filter = (2097152-1)
END SWITCH
	
status = lp_eval(picklist, 				4, handle )
IF ( status !=0 ) THEN
ui_writec("Error in lp_eval\n")
return status
END IF


status = lp_sublist_count(handle, filter , list_count )


IF ( list_count == 0 ) THEN
	RETURN (status)
END IF


status = sys_allocate_array(ids, 1, list_count)


IF ( status != 0 ) THEN
	RETURN ( status )
END IF


WHILE ( count < list_count ) oi_loop
status = lp_sublist_type(handle, (2097152-1), list_type )
IF ( list_type == filter ) THEN
status = lp_sublist_attribute_get_int(handle, 							1, lab)
count += 1
ids(count) = lab
END IF
status = lp_sublist_next(handle)
IF ( status != 0 ) THEN
IF ( status != 14000015 ) THEN
ui_writec("Error in evaluating lp_sublist_next()\n")
ui_writec("count = %d, lcount = %d, status = %d\n", @
count, list_count, status)
END IF
BREAK oi_loop
END IF
END WHILE


RETURN 0


END FUNCTION/* get_ids_from_entity_list */

