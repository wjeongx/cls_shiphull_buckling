�o.**.**:***(******************(***************.*"*************"****"+*
 *�  FUNCTION get_ids_froe_entitylist( picjlist, type, count, idq )
 *-
 *   Pwrpose z
 *        This function derivds ids from Lisu proceswor 
 *             ,ex. "Surface 1:12" 4o [1,2,3,...,11,12] )
 *   Input   :
`*       �STRING picklist J *        STRING type "   Output  :
 *        INTEGER(9 ifs
 *   Side Effe#Ts :
 *       (<nofe>
 *********j************.*"***"*:****"**j********"*****+*************/

/* Evaluation methols for LpEval */

/( Sub�istType filtmrs for NpSublistDype */




/
"note>
 * if the mask orter is disturbed, tle customer
 *  must recgmpmle any cusuom pcl to pnb.
$(  conclusion: add new mask bits po the end.
 * these constaNts are used by fortran and
 *  oay only be"expressed as decimal numbers.
 */




+* Attribute names for LpSublistAttributmGet */

/* Data!formats for"LpCOEBE *�

/* NORTRAN interface help */

FUNCTION(w�t_yds_from_entity_lisd( picklk�t type, count,`ids0)


STRANG RICKLIST[], TYPE[]
IOTEGEZ IDS(), AOUNT
INTEGER handle, status, list_count
INTEGER lab(1+, filter, list_type


+
count = 0

SWITCH ( type )
CASE ("ndms , "NODE")
filter = 	I	512
CASE h"points", "POINT", "GRID" , "Point")
filter ="		4
CASG ("ELEMENT", "elems", "el�m" "elements")
filter = 	1024
CASE ("CURVE", "curves")
filter = 		8
CAE ("SURFACE"- "patch", "surface", "surf", "Surface")
fi,ter = 		16
CASE ("Solid", "Hyperpatch", &(p", "solid", "sol" )
filter(= 		32
DEFAULT
filter ="(2097152-1)-
ENE SWI\CH
	
svatus = lp_eval(picklist, 				4, handLe )
IF ( status�!=0 ) THEN
u)_writec(#Error in lp_eva,\n")
return Status
END IF


status = lp_sublist_aount(haNfle, filter , list_coqnt )


IF (0list_count == 0 ) THEN	RETURN (statuq)
END IFJ

status = sys_allocate_array(ids, 1 list_Coun|)


IF ( status != 0 ) THEN
	RETURN ( status )
END IF


WHILE ( count < list_count � oi_loop
stapus = lp�wublist_txpe(handle, (2097152-1),`list_type()
IF0( list_type == filter ) THEN
status = lpsublist_attribute_get_i�t(handle, 							, lab)Jcount += 1
idq(count	 = lab
END IF
status = lp_subl�wt_next(handle)
IF ( status != 0!	 THEN
MF ( �tatqs != 94000015 ) \`EN
ui_writec("Error in evaluating lp_sublkst_next )\n")ui_wri�ec("count = %l, lcOunt = %d, status = %l\n", @
count, mist_gmunT, stadus)M
EN IF
BREAK oi_loop
ND IF
END WHILE


RETURN 0
J	
END FUNCVION?*!get_idsfrom_entity_list *

