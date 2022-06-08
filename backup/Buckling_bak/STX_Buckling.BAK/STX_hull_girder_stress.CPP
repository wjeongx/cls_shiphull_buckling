
/*
input param (1)  :  L   (m)
input param (2)  :  Mss (kNm)
input param (3)  :  Msh (kNm)
input param (4)  :  Mws (kNm)
input param (5)  :  Mwh (kNm)
input param (6)  :  I   (m^4)
input param (7)  :  NA  (m)
input param (8)  :  Dist_fwd (m)
input param (9)  :  Dist_aft (m)
input param (10) :  I_fwd    (m^4)
input param (11) :  I_aft    (m^4)
input param (12) :  NA_fwd   (m)
input param (13) :  NA_aft   (m)
*/

FUNCTION test()
REAL a(3)
REAL min, max


a(1) = 17180.
a(2) = -850.
a(3) = 13950.


get_min_max_from_db_FEM(1, min, max)


STX_hull_girder_stress.main(a, min, max)
END FUNCTION


FUNCTION get_input()
REAL input(12)
input(1) = 200.
input(2) = 850000
input(3) = 810000.
input(4) = 1450000.
input(5) = 1000000.
input(6) = 132.446
input(7) = 7.462
input(8) = 10.
input(9) = 100.
input(10) = 110.
input(11) = 5.
input(12) = 6.


RETURN input
END FUNCTION


CLASS STX_hull_girder_stress
CLASSWIDE REAL L, Mss, Msh, Mws, Mwh, I, NA
CLASSWIDE REAL D_aft, I_fwd, I_aft, NA_fwd, NA_aft
CLASSWIDE REAL ksm, kwm


CLASSWIDE REAL cur_pos, fwd_pos, aft_pos, I_act, NA_act
CLASSWIDE REAL SIGMA, y, Z


FUNCTION main( XYZ )
REAL XYZ()
REAL input_param(6)
$ REAL d_min, d_max
$ DUMP XYZ
input_param = STX_HullGirder.getHullInfo()


$ L = input_param(1) * 1000.
Mss = input_param(1) * 1E6
Msh = input_param(2) * 1E6
Mws = input_param(3) * 1E6
Mwh = input_param(4) * 1E6
I = input_param(5) * 1E12
NA = input_param(6) * 1000.
$ D_aft = input_param(8) * 1000.
$ I_fwd = input_param(9) * 1E12
$ I_aft = input_param(10) * 1E12
$ NA_fwd = input_param(11) * 1000.
$ NA_aft = input_param(12) * 1000.

/*
 IF ( L==0. || Mss==0. || Msh==0. || Mws==0. || Mwh==0. ) THEN
      SIGMA = 0.
      RETURN SIGMA
 END IF
*/


IF ( Mss==0. && Msh==0. && Mws==0. && Mwh==0. ) THEN
SIGMA = 0.
RETURN SIGMA
END IF


$ cur_pos = ( D_aft + ( XYZ(1) - d_min ) ) / L
$ aft_pos = D_aft / L
$ fwd_pos = ( D_aft + ( d_max - d_min ) ) / L


$ DUMP cur_pos, aft_pos, fwd_pos


$ STX_hull_girder_stress.get_ksm()
$ STX_hull_girder_stress.get_kwm()
$ DUMP ksm, kwm
ksm = 1.0
kwm = 1.0


$ STX_hull_girder_stress.get_moment_of_inertia()
$ DUMP I_act
I_act = I


$ STX_hull_girder_stress.get_neutral_axis()
$ DUMP NA_act
NA_act = NA


y = XYZ(3) - NA_act
$ DUMP y
Z = I_act / y
$ DUMP Z
Mss = ksm * Mss
Msh = ksm * Mws
Mws = kwm * Mws
Mwh = kwm * Mwh


$ DUMP Mss, Msh, Mws, Mwh


IF ( y >= 0 ) THEN
SIGMA = mth_abs(Mss + Mws)/Z
ELSE IF ( y < 0 ) THEN
SIGMA = mth_abs(Msh + Mwh)/Z
END IF
$ DUMP SIGMA


RETURN SIGMA


END FUNCTION


FUNCTION get_neutral_axis()


IF ( cur_pos < 0.3 ) THEN
NA_act = (NA-NA_aft)/(0.3-aft_pos)*cur_pos + NA - (NA-NA_aft)/(0.3-aft_pos)*0.3
ELSE IF ( 0.3 <= cur_pos && cur_pos <= 0.7 ) THEN
NA_act = NA
ELSE IF ( 0.7 < cur_pos && cur_pos < 1.0 ) THEN
NA_act = (NA_fwd-NA)/(fwd_pos-0.7)*cur_pos + NA - (NA_fwd-NA)/(fwd_pos-0.7)*0.7
END IF


RETURN 0
END FUNCTION


FUNCTION get_moment_of_inertia()


IF ( cur_pos < 0.3 ) THEN
I_act = (I-I_aft)/(0.3-aft_pos)*cur_pos + I - (I-I_aft)/(0.3-aft_pos)*0.3
ELSE IF ( 0.3 <= cur_pos && cur_pos <= 0.7 ) THEN
I_act = I
ELSE IF ( 0.7 < cur_pos && cur_pos < 1.0 ) THEN
I_act = (I_fwd-I)/(fwd_pos-0.7)*cur_pos + I - (I_fwd-I)/(fwd_pos-0.7)*0.7
END IF


RETURN 0
END FUNCTION


FUNCTION get_kwm()


IF ( 0.0 < cur_pos && cur_pos < 0.4 ) THEN
kwm = 1.0 / 0.4 * cur_pos
ELSE IF ( 0.4 <= cur_pos && cur_pos <= 0.65 ) THEN
kwm = 1.0
ELSE IF ( 0.65 < cur_pos && cur_pos < 1.0 ) THEN
kwm = -1.0 / 0.35 * cur_pos + 1.0 / 0.35
END IF


RETURN 0
END FUNCTION




FUNCTION get_ksm()


IF ( 0.0 < cur_pos && cur_pos < 0.1 ) THEN
ksm = 0.15 / 0.1 * cur_pos
ELSE IF ( 0.1 <= cur_pos && cur_pos < 0.3 ) THEN
ksm = 0.85 / 0.2 * cur_pos - 0.275
ELSE IF ( 0.3 <= cur_pos && cur_pos < 0.7 ) THEN
ksm = 1.0
ELSE IF ( 0.7 <= cur_pos && cur_pos < 0.9 ) THEN
ksm = -0.85 / 0.2 * cur_pos + 3.975
ELSE IF ( 0.9 <= cur_pos && cur_pos < 1.0 ) THEN
ksm = -0.85 / 0.1 * cur_pos + 8.5
END IF


RETURN 0


END FUNCTION


END CLASS


FUNCTION get_min_max_from_db_FEM(dir, d_min, d_max)
INTEGER dir
REAL d_min, d_max


STRING group_name[7]
STRING node_list[VIRTUAL]
INTEGER node_count = 0, node_ids(VIRTUAL)
REAL coord(3)


INTEGER i


group_name = "Min_Max"


ga_group_create(group_name)


ga_group_entity_add(group_name, "Node 1:#")


uil_entity_group_members_get(group_name, 123, node_list)
get_ids_from_entity_list(node_list, "NODE", node_count, node_ids)


d_min = 999999999999.
d_max = -999999999999.


FOR ( i=1 TO node_count )
db_get_node(node_ids(i), coord)


d_max = mth_max(d_max, coord(dir))
d_min = mth_min(d_min, coord(dir))
END FOR


ga_group_delete(group_name)


SYS_FREE_STRING(node_list)
SYS_FREE_ARRAY(node_ids)


RETURN 0


END FUNCTION
