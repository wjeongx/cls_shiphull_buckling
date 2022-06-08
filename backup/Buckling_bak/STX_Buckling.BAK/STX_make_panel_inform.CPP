


FUNCTION test_lloyd()
REAL usr_inform(5)
REAL pnl_inform(2,7)
STRING elm_list[2048](2)
STRING load_case[32](1)
INTEGER pnl_ids(2)


usr_inform(1) = 1.0/* edge a constraint  */
usr_inform(2) = 1.0/* edge b constraint  */
usr_inform(3) = 0./* corrosion margin   */
usr_inform(4) = 235./* yield stress       */
usr_inform(5) = 1.2/* safety factor TO be */


pnl_inform(1,1) = 1877.000/* a */
pnl_inform(1,2) = 595.022/* b */
pnl_inform(1,3) = 0./* angle */
pnl_inform(1,4) = 1/* project direction 1, 2, 3 */
pnl_inform(1,5) = 0./* center of panel x coordinate */
pnl_inform(1,6) = 0./* center of panel y coordinate */
pnl_inform(1,7) = 0./* center of panel z coordinate */
pnl_inform(2,1) = 4060./* a */
pnl_inform(2,2) = 1000./* b */
pnl_inform(2,3) = 0./* angle */
pnl_inform(2,4) = 1/* project direction 1, 2, 3 */
pnl_inform(2,5) = 0.
pnl_inform(2,6) = 0.
pnl_inform(2,7) = 0.
load_case(1) = "Load Case 1"
$ load_case(2) = "Load Case 2"


elm_list(1) = "Elm 570 603:637:17"
elm_list(2) = "Elm 654 667:701:17"


pnl_ids(1) = 3
pnl_ids(2) = 4


STX_make_panel_inform.lloyd_main(load_case, pnl_ids, elm_list, pnl_inform, usr_inform)


END FUNCTION




FUNCTION test_dnv()
REAL usr_inform(11)
REAL pnl_inform(2,7)
STRING elm_list[2048](2)
STRING load_case[32](1)
INTEGER pnl_ids(2)


usr_inform(1) = 235./* :  Yield strength of material,[MPa] */
$235(1), 265(2), 315(3), 355(4), 390(5)
usr_inform(2) = 206000./* :  Modulus of elasticity, E = 206000 MPa (Steel) */
$206000(1), 69000(2)
usr_inform(3) = 1./* :  Plate boundary stiffening */
$Flat bar(1), Bulb profile(2), T-or L-profile(3), Girder or floor(4)
usr_inform(4) = 1./* :  Cut out edge stiffening, ( h stiff > 8*t stiff ) */
$None(1), Ring stiffening(2), Buckling stiff. on both sides(3), Stiffeners along longer edge(4), Stiffeners along shorter edge(4)


usr_inform(5) = 1./* :  eta_sigma */
$1.0, Part of deck, single bottom, long. Stiff. side plating or local plate with extreme load level(1)
$0.9, Part of bottom, inner bottom or transv. stiffened side plate(2)
$0.8, Local plate with normal load level(3)
usr_inform(6) = 1./* :  eta_tau */
$0.9, Part of side or BHD subject TO hull girder shear forces(1)
$0.85, Local panel in a girder web and nominal shear is useed(2)
usr_inform(7) = 0./* :  eta_xy */
$1.0, Longtudinal stress as given in B205 incorporated in sigax or sigay (TRUE(1) or FALSE(0))


usr_inform(8) = 1./* :  plate part of double bottom */
$TRUE(1) or FALSE(0)
usr_inform(9) = 0./* :  Allowable elastic buckling. */
$TRUE(1) or FALSE(0)
usr_inform(10) = 2./* :  corrosion margin */
usr_inform(11) = 1.0/* safety factor TO be */


pnl_inform(1,1) = 4060./* l */
pnl_inform(1,2) = 1000./* s */
pnl_inform(1,3) = 0./* angle */
pnl_inform(1,4) = 1/* project direction 1, 2, 3 */
pnl_inform(1,5) = 11.
pnl_inform(1,6) = 22.
pnl_inform(1,7) = 33.


pnl_inform(2,1) = 4060./* l */
pnl_inform(2,2) = 1000./* s */
pnl_inform(2,3) = 0./* angle */
pnl_inform(2,4) = 1/* project direction 1, 2, 3 */
pnl_inform(2,5) = 11.
pnl_inform(2,6) = 22.
pnl_inform(2,7) = 33.


load_case(1) = "Load Case 1"
$ load_case(2) = "Load Case 2"


elm_list(1) = "Elm 570 603:637:17"
elm_list(2) = "Elm 654 667:701:17"
pnl_ids(1) = 3
pnl_ids(2) = 4


STX_make_panel_inform.dnv_main(load_case, pnl_ids, elm_list, pnl_inform, usr_inform)


END FUNCTION


FUNCTION test_rina()
REAL usr_inform(7)
REAL pnl_inform(2,7)
STRING elm_list[2048](2)
STRING load_case[32](2)
INTEGER pnl_ids(2)


usr_inform(1) = 235./* yield stress      */
usr_inform(2) = 206000./* elastic modulus   */
usr_inform(3) = 1./* edge constraint      */
usr_inform(4) = 0./* corrosion margin    */
usr_inform(5) = 1.02/* Partial safety factor(Material) */
usr_inform(6) = 1.10/* Partial safety factor(Resistance) */
usr_inform(7) = 1.0/* safety factor */


pnl_inform(1,1) = 1877.000/* a */
pnl_inform(1,2) = 595.022/* b */
pnl_inform(1,3) = 0./* angle */
pnl_inform(1,4) = 1/* project direction 1, 2, 3 */
pnl_inform(1,5) = 0.
pnl_inform(1,6) = 0.
pnl_inform(1,7) = 0.
pnl_inform(2,1) = 4060./* a */
pnl_inform(2,2) = 1000./* b */
pnl_inform(2,3) = 0./* angle */
pnl_inform(2,4) = 1/* project direction 1, 2, 3 */
pnl_inform(2,5) = 0.
pnl_inform(2,6) = 0.
pnl_inform(2,7) = 0.
load_case(1) = "Load Case 1"
load_case(2) = "Load Case 2"


elm_list(1) = "Element 1987 27318"
elm_list(2) = "Elm 516 600 614 631"
pnl_ids(1) = 3
pnl_ids(2) = 4


STX_make_panel_inform.rina_main(load_case, pnl_ids, elm_list, pnl_inform, usr_inform)


END FUNCTION




CLASS STX_make_panel_inform


CLASSWIDE INTEGER elem_count, elem_ids(VIRTUAL), e_count, e_ids(VIRTUAL), e_loc
CLASSWIDE REAL stress(VIRTUAL)
CLASSWIDE REAL sum_area, area(VIRTUAL)
CLASSWIDE REAL min, max


FUNCTION rina_main( load_case, pnl_ids, elm_list, pnl_inform, usr_inform )
STRING load_case[]()
INTEGER pnl_ids()
STRING elm_list[]()
REAL pnl_inform()
REAL usr_inform()


INTEGER pnl_count
INTEGER loadcase_count
INTEGER projected_cid_dir
INTEGER loadcase_ids(VIRTUAL)
REAL thickness, angle
REAL pnl_stress(VIRTUAL)
STRING fname[1024]
INTEGER fid
INTEGER integer_data(2)
REAL real_data(9)
INTEGER i, j
REAL SIGMA_H


pnl_count = sys_array_hbound( pnl_ids, 1 )


loadcase_count = sys_array_hbound(load_case, 1)
SYS_ALLOCATE_ARRAY( loadcase_ids, 1, loadcase_count )


FOR ( i=1 TO loadcase_count)
db_get_load_case_id(load_case(i), loadcase_ids(i))
END FOR


file_build_fname("./","input","dat","N",fname)
text_open(fname, "NOW",0,0,fid)


text_write_string(fid,"#User Data"//" : RINA, "//sys_date()//", "//sys_time())
text_write(fid,"Yield strength                    : %F%", 0, usr_inform(1), "")
text_write(fid,"Modulus of elasticity             : %F%", 0, usr_inform(2), "")
text_write(fid,"Plate boundary stiffening         : %F%", 0, usr_inform(3), "")
text_write(fid,"Corrosion margin                  : %F%", 0, usr_inform(4), "")
text_write(fid,"Partial safety factor(Material)   : %F%", 0, usr_inform(5), "")
text_write(fid,"Partial safety factor(Resistance) : %F%", 0, usr_inform(6), "")
text_write(fid,"Safety factor TO be               : %F%", 0, usr_inform(7), "")


text_write_string(fid,"")
text_write_string(fid,"#Panel Data")
text_write(fid,"Total number of Panels   : %I%", pnl_count, 1., "")
text_write(fid,"Total number of selected Load cases   : %I%", loadcase_count, 1., "")
text_write_string(fid,"")
text_write_string(fid," PID LCID     a        b        t        c        d       SIGMA ax      SIGMA ay        TAU         SIGMA H")
text_write_string(fid,"==== ==== ======== ======== ======== ======== ======== ============= ============= ============= =============")


extractStress.doit(loadcase_ids, elm_list, elem_count, elem_ids, stress)


FOR ( i=1 TO pnl_count )


ui_writec( "Panel Checking Status : %d/%d",i,pnl_count)


get_ids_from_entity_list( elm_list(i), "ELEMENT", e_count, e_ids )


STX_make_panel_inform.get_pnl_area()


STX_make_panel_inform.get_thickness( thickness )


FOR ( j=1 TO loadcase_count )


STX_make_panel_inform.get_pnl_stress( j, pnl_stress )


angle = pnl_inform(i,3)


IF ( angle > 0. ) THEN
STX_make_panel_inform.stress_transform( pnl_stress, angle )
END IF


STX_make_panel_inform.consider_compression( pnl_stress )


$ calculation Hull girder stress
SIGMA_H = STX_hull_girder_stress.main(pnl_inform(i, 5:7))


$ write input data TO file
integer_data(1) = pnl_ids(i)
integer_data(2) = loadcase_ids(j)


real_data(1) = pnl_inform(i,1)
real_data(2) = pnl_inform(i,2)
real_data(3) = thickness
real_data(4) = 0.
real_data(5) = 0.
real_data(6) = pnl_stress(1)
real_data(7) = pnl_stress(2)
real_data(8) = pnl_stress(3)
real_data(9) = SIGMA_H


text_write(fid,"%2(%I4% )%%5(%F8.3% )%%4(%E13.7% )%", integer_data, real_data, "")
text_write_string(fid, elm_list(i))


SYS_FREE_ARRAY(pnl_stress)


END FOR


e_count = 0
SYS_FREE_ARRAY(e_ids)


END FOR


text_write_string(fid, "#End Data")
text_close(fid,"")


RETURN 0


END FUNCTION




FUNCTION dnv_main( load_case, pnl_ids, elm_list, pnl_inform, usr_inform )
STRING load_case[]()
INTEGER pnl_ids()
STRING elm_list[]()
REAL pnl_inform()
REAL usr_inform()


INTEGER pnl_count
INTEGER loadcase_count
INTEGER projected_cid_dir
INTEGER loadcase_ids(VIRTUAL)
REAL thickness, angle
REAL pnl_stress(VIRTUAL)
STRING fname[1024]
INTEGER fid
INTEGER integer_data(2)
REAL real_data(9)
INTEGER i, j
REAL SIGMA_H


pnl_count = sys_array_hbound( pnl_ids, 1 )


loadcase_count = sys_array_hbound(load_case, 1)
SYS_ALLOCATE_ARRAY( loadcase_ids, 1, loadcase_count )


FOR ( i=1 TO loadcase_count)
db_get_load_case_id(load_case(i), loadcase_ids(i))
END FOR


file_build_fname("./","input","dat","N",fname)
text_open(fname, "NOW",0,0,fid)


text_write_string(fid,"#User Data"//" : DNV, "//sys_date()//", "//sys_time())
text_write(fid,"Yield strength              : %F%", 0, usr_inform(1), "")
text_write(fid,"Modulus of elasticity       : %F%", 0, usr_inform(2), "")
text_write(fid,"Plate boundary stiffening   : %F%", 0, usr_inform(3), "")
text_write(fid,"Cut out edge stiffening     : %F%", 0, usr_inform(4), "")
text_write(fid,"Eta sigma                   : %F%", 0, usr_inform(5), "")
text_write(fid,"Eta tau                     : %F%", 0, usr_inform(6), "")
text_write(fid,"Eta xy                      : %F%", 0, usr_inform(7), "")
text_write(fid,"Plate part of double bottom : %F%", 0, usr_inform(8), "")
text_write(fid,"Allowable elastic buckling  : %F%", 0, usr_inform(9), "")
text_write(fid,"Corrosion margin            : %F%", 0, usr_inform(10), "")
text_write(fid,"Safety factor TO be         : %F%", 0, usr_inform(11), "")


text_write_string(fid,"")
text_write_string(fid,"#Panel Data")
text_write(fid,"Total number of Panels   : %I%", pnl_count, 1., "")
text_write(fid,"Total number of selected Load cases   : %I%", loadcase_count, 1., "")
text_write_string(fid,"")
text_write_string(fid," PID LCID     l        s        t        a        b       SIGMA ax      SIGMA ay        TAU         SIGMA H")
text_write_string(fid,"==== ==== ======== ======== ======== ======== ======== ============= ============= ============= =============")


extractStress.doit(loadcase_ids, elm_list, elem_count, elem_ids, stress)


FOR ( i=1 TO pnl_count )


ui_writec( "Panel Checking Status : %d/%d",i,pnl_count)


get_ids_from_entity_list( elm_list(i), "ELEMENT", e_count, e_ids )


STX_make_panel_inform.get_pnl_area()


STX_make_panel_inform.get_thickness( thickness )


FOR ( j=1 TO loadcase_count )


STX_make_panel_inform.get_pnl_stress( j, pnl_stress )


angle = pnl_inform(i,3)


IF ( angle > 0. ) THEN
STX_make_panel_inform.stress_transform( pnl_stress, angle )
END IF


STX_make_panel_inform.consider_compression( pnl_stress )


$ calculation Hull girder stress
SIGMA_H = STX_hull_girder_stress.main(pnl_inform(i, 5:7))


$ write input data TO file
integer_data(1) = pnl_ids(i)
integer_data(2) = loadcase_ids(j)


real_data(1) = pnl_inform(i,1)
real_data(2) = pnl_inform(i,2)
real_data(3) = thickness
real_data(4) = 0.
real_data(5) = 0.
real_data(6) = pnl_stress(1)
real_data(7) = pnl_stress(2)
real_data(8) = pnl_stress(3)
real_data(9) = SIGMA_H


text_write(fid,"%2(%I4% )%%5(%F8.3% )%%4(%E13.7% )%", integer_data, real_data, "")
text_write_string(fid, elm_list(i))


SYS_FREE_ARRAY(pnl_stress)


END FOR


e_count = 0
SYS_FREE_ARRAY(e_ids)


END FOR


text_write_string(fid, "#End Data")
text_close(fid,"")


RETURN 0


END FUNCTION


FUNCTION lloyd_main( load_case, pnl_ids, elm_list, pnl_inform, usr_inform )


STRING load_case[]()
INTEGER pnl_ids()
STRING elm_list[]()
REAL pnl_inform()
REAL usr_inform()


INTEGER pnl_count
INTEGER loadcase_count
INTEGER projected_cid_dir
INTEGER loadcase_ids(VIRTUAL)
REAL thickness, angle
REAL pnl_stress(VIRTUAL)
STRING fname[1024]
INTEGER fid
INTEGER integer_data(2)
REAL real_data(9)
INTEGER i, j
REAL SIGMA_H


pnl_count = sys_array_hbound( pnl_ids, 1 )


loadcase_count = sys_array_hbound(load_case, 1)
dump loadcase_count
SYS_ALLOCATE_ARRAY( loadcase_ids, 1, loadcase_count )


FOR ( i=1 TO loadcase_count)
db_get_load_case_id(load_case(i), loadcase_ids(i))
END FOR


file_build_fname("./","input","dat","N",fname)
text_open(fname, "NOW",0,0,fid)


text_write_string(fid,"#User Data"//" : LLOYD, "//sys_date()//", "//sys_time())
text_write(fid,"Edge A Constraint   : %F%", 0, usr_inform(1), "")
text_write(fid,"Edge B Constraint   : %F%", 0, usr_inform(2), "")
text_write(fid,"Corossion margin    : %F%", 0, usr_inform(3), "")
text_write(fid,"Yield Stress        : %F%", 0, usr_inform(4), "")
text_write(fid,"Safety factor TO be : %F%", 0, usr_inform(5), "")


text_write_string(fid,"")
text_write_string(fid,"#Panel Data")
text_write(fid,"Total number of Panels   : %I%", pnl_count, 1., "")
text_write(fid,"Total number of selected Load cases   : %I%", loadcase_count, 1., "")
text_write_string(fid,"")
text_write_string(fid," PID LCID     a        b        t        c        d       SIGMA x       SIGMA y         TAU         SIGMA H")
text_write_string(fid,"==== ==== ======== ======== ======== ======== ======== ============= ============= ============= =============")




extractStress.doit(loadcase_ids, elm_list, elem_count, elem_ids, stress)


FOR ( i=1 TO pnl_count )


ui_writec( "Panel Checking Status : %d/%d",i,pnl_count)


get_ids_from_entity_list( elm_list(i), "ELEMENT", e_count, e_ids )


STX_make_panel_inform.get_pnl_area()


STX_make_panel_inform.get_thickness( thickness )


FOR ( j=1 TO loadcase_count )


STX_make_panel_inform.get_pnl_stress( j, pnl_stress )


angle = pnl_inform(i,3)
$ angle = mth_acosd( pnl_inform(i,3) )
IF ( angle > 0. ) THEN
STX_make_panel_inform.stress_transform( pnl_stress, angle )
END IF


STX_make_panel_inform.consider_compression( pnl_stress )


$ calculation Hull girder stress
SIGMA_H = STX_hull_girder_stress.main(pnl_inform(i, 5:7))


$ write input data TO file
integer_data(1) = pnl_ids(i)
integer_data(2) = loadcase_ids(j)
real_data(1) = pnl_inform(i,1)
real_data(2) = pnl_inform(i,2)
real_data(3) = thickness
real_data(4) = 0.
real_data(5) = 0.
real_data(6) = pnl_stress(1)
real_data(7) = pnl_stress(2)
real_data(8) = pnl_stress(3)
real_data(9) = SIGMA_H


$ text_write_string(fid, "pnl #
text_write(fid,"%2(%I4% )%%5(%F8.3% )%%4(%E13.7% )%", integer_data, real_data, "")
text_write_string(fid, elm_list(i))


SYS_FREE_ARRAY(pnl_stress)


END FOR


e_count = 0
SYS_FREE_ARRAY(e_ids)


END FOR


text_write_string(fid, "#End Data")
text_close(fid,"")


RETURN 0


END FUNCTION


FUNCTION consider_compression( pnl_stress )
REAL pnl_stress()
INTEGER i


FOR ( i=1 TO 2 )


IF ( pnl_stress(i) > 0 ) THEN
pnl_stress(i) = 0.
ELSE
pnl_stress(i) = mth_abs( pnl_stress(i) )
END IF


END FOR


RETURN 0


END FUNCTION


FUNCTION get_pnl_stress( lc_idx, pnl_stress )
INTEGER lc_idx
REAL pnl_stress()
INTEGER i
REAL sum_stress_xx, sum_stress_yy, sum_stress_xy


SYS_ALLOCATE_ARRAY( pnl_stress, 1, 3 )


sum_stress_xx = 0.
sum_stress_yy = 0.
sum_stress_xy = 0.


FOR ( i=1 TO e_count )
e_loc = mth_array_search( elem_ids, e_ids(i), FALSE )
sum_stress_xx += stress(lc_idx, 3*e_loc-2)*area(i)
sum_stress_yy += stress(lc_idx, 3*e_loc-1)*area(i)
sum_stress_xy += stress(lc_idx, 3*e_loc )*area(i)
END FOR


pnl_stress(1) = sum_stress_xx/sum_area
pnl_stress(2) = sum_stress_yy/sum_area
pnl_stress(3) = sum_stress_xy/sum_area


RETURN 0
END FUNCTION


FUNCTION get_pnl_area()
INTEGER i


SYS_ALLOCATE_ARRAY(area, 1, e_count)
sum_area = 0.


FOR ( i=1 TO e_count )
get_element_area( e_ids(i), area(i) )
sum_area += area(i)
END FOR


RETURN 0
END FUNCTION




FUNCTION stress_transform( pnl_stress, angle )
REAL pnl_stress()
REAL angle
REAL xx, yy, xy




xx = pnl_stress(1) * (mth_cosd(angle))**2. + pnl_stress(2) * (mth_sind(angle))**2. + @
2*pnl_stress(3)*mth_sind(angle)*mth_cosd(angle)


yy = pnl_stress(1) * (mth_sind(angle))**2. + pnl_stress(2) * (mth_cosd(angle))**2. - @
2*pnl_stress(3)*mth_sind(angle)*mth_cosd(angle)


xy = -1.*pnl_stress(1) * mth_cosd(angle)*mth_sind(angle) + pnl_stress(2)*mth_cosd(angle)*mth_sind(angle) + @
pnl_stress(3) * ( (mth_cosd(angle))**2. - (mth_sind(angle))**2. )


pnl_stress(1) = xx
pnl_stress(2) = yy
pnl_stress(3) = xy


RETURN 0


END FUNCTION


FUNCTION get_thickness( t )


REAL t


REAL thick_sum = 0.
INTEGER i, rids(VIRTUAL)
INTEGER gener_elem_type, dof_set_flag, condense_flag
INTEGER geom_flag, form_flag, lam_flag, layer_count
INTEGER mat_id, material_lin, material_dir
STRING pName[32]
REAL real_array(3)
INTEGER data_type, material_id
INTEGER int_value,coord_value, node_value, field_value
STRING string_value[31]


$ SYS_ALLOCATE_ARRAY( thickness, 1, elem_count )
SYS_ALLOCATE_ARRAY( rids, 1, e_count )


db_get_region_for_elements ( e_count, e_ids,rids)


FOR ( i = 1 TO e_count )


db_get_region_definition( @
/* region ID        */rids(i), @
/* set name         */pName, @
/* element type ID  */gener_elem_type, @
/* dof set flag     */dof_set_flag, @
/* condense flag    */condense_flag, @
/* geom flag        */geom_flag, @
/* form flag        */form_flag, @
/* lam_flag         */lam_flag, @
/* layer count      */layer_count, @
/* material id      */mat_id, @
/* material linear  */material_lin, @
/* material direct  */material_dir)


db_get_prop_value( @
/* region ID        */rids(i), @
/* word of interest */36, @
/* material ID      */material_id, @
/* data type        */data_type, @
/* INTEGER value    */int_value, @
/* REAL array       */real_array, @
/* char STRING      */string_value, @
/* coord ID         */coord_value, @
/* node ID          */node_value, @
/* field ID         */field_value)


$thickness(i) = real_array(1)
thick_sum += real_array(1)*area(i)


END FOR


t = thick_sum / sum_area


SYS_FREE_ARRAY( rids )


RETURN 0


END FUNCTION


END CLASS





FUNCTION get_triangle_area( n0, n1, n2, area )


REAL n0(), n1(), n2()
REAL area


REAL a,b,c,s


a = mth_sqrt( ( n0(1) - n1(1) )**2. + ( n0(2) - n1(2) )**2. + ( n0(3) - n1(3) )**2. )
b = mth_sqrt( ( n1(1) - n2(1) )**2. + ( n1(2) - n2(2) )**2. + ( n1(3) - n2(3) )**2. )
c = mth_sqrt( ( n2(1) - n0(1) )**2. + ( n2(2) - n0(2) )**2. + ( n2(3) - n0(3) )**2. )
s = (a+b+c)/2.


area = mth_sqrt( s*(s-a)*(s-b)*(s-c) )


RETURN 0


END FUNCTION


FUNCTION get_element_area( eid, area )
INTEGER eid, numnode
REAL area


INTEGER nid(4)
REAL n1(3), n2(3), n3(3), n4(3), area1, area2


$SYS_REALLOCATE_ARRAY( nid, 1, numnode )
db_get_elem_nodes( eid, numnode, nid )


SWITCH ( numnode )
CASE ( 3 )
db_get_node(nid(1), n1)
db_get_node(nid(2), n2)
db_get_node(nid(3), n3)
get_triangle_area( n1, n2, n3, area )
CASE ( 4 )
db_get_node(nid(1), n1)
db_get_node(nid(2), n2)
db_get_node(nid(3), n3)
db_get_node(nid(4), n4)
get_triangle_area( n1, n2, n3, area1 )
get_triangle_area( n3, n4, n1, area2 )
area = area1 + area2
END SWITCH


$ SYS_FREE_ARRAY(nid)


RETURN 0


END FUNCTION


