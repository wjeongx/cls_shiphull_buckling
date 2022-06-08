
/*
DNV input parameters(INTEGER)

usr_inform(1) =    :  Yield strength of material,[MPa]
                      235(1), 265(2), 315(3), 355(4), 390(5)
usr_inform(2) =    :  Modulus of elasticity, E = 206000 MPa (Steel)
                      206000(1), 69000(2)
usr_inform(3) =    :  Plate boundary stiffening
                      Flat bar(1), Bulb profile(2), T-or length-profile(3), Girder or floor(4)
usr_inform(4) =    :  Cut out edge stiffening, ( h stiff > 8*t stiff )
                      None(1), Ring stiffening(2), Buckling stiff. on both sides(3), Stiffeners along longer edge(4), Stiffeners along shorter edge(4)

usr_inform(5) =    :  eta_sigma
                      1.0, Part of deck, single bottom, long. Stiff. side plating or local plate with extreme load level(1)
                      0.9, Part of bottom, inner bottom or transv. stiffened side plate(2)
                      0.8, Local plate with normal load level(3)
usr_inform(6) =    :  eta_tau
                      0.9, Part of side or BHD subject TO hull girder shear forces(1)
                      0.85, Local panel in a girder web and nominal shear is useed(2)
usr_inform(7) =    :  eta_xy
                      1.0, Longtudinal stress as given in B205 incorporated in SIGMA_ax or SIGMA_ay (TRUE(1) or FALSE(0))

usr_inform(8) =    :  plate part of double bottom
                      TRUE(1) or FALSE(0)
usr_inform(9) =    :  Allowable elastic buckling.
                      TRUE(1) or FALSE(0)
usr_inform(10) =   :  corrosion margin
usr_inform(11) =   :  safety factor

panel inform (REAL)
pnl_inform(1) =    :  panel id
pnl_inform(2) =    :  loadcase id
pnl_inform(3) =    :  length
pnl_inform(4) =    :  spac
pnl_inform(5) =    :  thickness
pnl_inform(6) =    :  A
pnl_inform(7) =    :  B
pnl_inform(8) =    :  SIGMA_ax
pnl_inform(9) =    :  SIGMA_ay
pnl_inform(10) =   :  TAU_xy
pnl_inform(11) =   :  Hull girder stress

buckling_results(i,1)  : critical buckling stress x
buckling_results(i,2)  : critical buckling stress y
buckling_results(i,3)  : critical buckling stress xy
buckling_results(i,4)  : usafe factor 1
buckling_results(i,5)  : usafe factor 2
buckling_results(i,6)  : usafe factor 3
buckling_results(i,7)  : biaxial compression criteria (org)
buckling_results(i,8)  : biaxial compression and shear criteria (org)
buckling_results(i,9)  : thickness increment
buckling_results(i,10) : biaxial compression criteria (rev)
buckling_results(i,11) : biaxial compression and shear criteria (rev)
buckling_results(i,12) : length diminishment
buckling_results(i,13) : biaxial compression criteria (rev)
buckling_results(i,14) : biaxial compression and shear criteria (rev)


*/



CLASS STX_buckling_dnv
CLASSWIDE REAL usr_inform(11), pnl_inform(VIRTUAL)
CLASSWIDE INTEGER pnl_count, loadcase_count, org_pnl_count
CLASSWIDE STRING elm_list[2048](VIRTUAL)
CLASSWIDE REAL SIGMA_f, E, boundary_stiff, cut_out, eta_sigma, eta_tau, eta_xy, coa
CLASSWIDE LOGICAL dbl_bott, ultimate, chk
CLASSWIDE REAL thickness, length, spac, A, B, SIGMA_ax, SIGMA_ay, TAU_xy, SIGMA_H, psi_x, psi_y


CLASSWIDE REAL f1fact, f2fact, f3fact, f4fact
CLASSWIDE REAL fs_1, fs_2, fs_3, fs_13
CLASSWIDE REAL r_corr
CLASSWIDE REAL ks, kl, kt
CLASSWIDE REAL sigcx1, sigcy1, sigux1, siguy1
CLASSWIDE REAL sigely, sigelx, tauf, tauel
CLASSWIDE REAL etax, etay, etaxy, eta1
CLASSWIDE REAL K, Q, nfact
CLASSWIDE REAL eta_comb1, eta_comb2, eta_c1ult, eta_c2ult


CLASSWIDE REAL sigcx, sigcy, tauc
CLASSWIDE REAL etabiax1, etabiax2
CLASSWIDE REAL uf1, uf2, uf3


CLASSWIDE REAL buckling_results(VIRTUAL)
CLASSWIDE INTEGER status
CLASSWIDE STRING s_resTitle[64](VIRTUAL)


FUNCTION main()
INTEGER i, r_count=1
REAL t_tobe, ini_a, req_a


status = STX_buckling_dnv.read_data()


IF ( status != 0 ) THEN
RETURN
END IF


SYS_ALLOCATE_ARRAY( buckling_results, 1, pnl_count, 1, 14)


SIGMA_f = usr_inform(1)
E = usr_inform(2)
boundary_stiff = usr_inform(3)
cut_out = usr_inform(4)
eta_sigma = usr_inform(5)
eta_tau = usr_inform(6)
eta_xy = usr_inform(7)
coa = usr_inform(10)


STX_buckling_dnv.get_intermediate_input_param()
$ DUMP dbl_bott, ultimate, etax, etay, etaxy, eta1


FOR ( i=1 TO pnl_count )
$ DUMP pnl_inform(i,1)
$ initialize the variables
f1fact = f2fact = f3fact = f4fact = 0.
fs_1 = fs_2 = fs_3 = fs_13 = 0.
r_corr = 0.
ks = kl = kt = 0.
sigcx1 = sigcy1 = sigux1 = siguy1 = 0.
sigely = sigelx = tauf = tauel = 0.
K = Q = nfact = 0.
eta_comb1 = eta_comb2 = eta_c1ult = eta_c2ult = 0.
sigcx = sigcy = tauc = 0.
etabiax1 = etabiax2 = 0.
uf1 = uf2 = uf3 = 0.


length = pnl_inform(i,3)
spac = pnl_inform(i,4)
thickness = pnl_inform(i,5)
A = pnl_inform(i,6)
B = pnl_inform(i,7)
SIGMA_ax = pnl_inform(i,8)
SIGMA_ay = pnl_inform(i,9)
TAU_xy = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)
psi_x = 1.
psi_y = 1.
$ DUMP thickness, length, spac, A, B, SIGMA_ax, SIGMA_ay, TAU_xy, psi_x, psi_y
STX_buckling_dnv.calculation_start()
$ DUMP sigcx, sigcy, tauc
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2


STX_buckling_dnv.save_buckling_results(i)


$ IF ( uf1 > 1. ) THEN
$ DUMP "uf1"
$ STX_buckling_dnv.iteration(i, 3., t_tobe, 1)
$ DUMP t_tobe
$ status = STX_buckling_dnv.recalculation(i, t_tobe)
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2
$ END IF
$
$ IF ( uf2 > 1. ) THEN
$ DUMP "uf2"
$ STX_buckling_dnv.iteration(i, 3., t_tobe, 2)
$ DUMP t_tobe
$ status = STX_buckling_dnv.recalculation(i, t_tobe)
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2
$ END IF
$
$ IF ( uf3 > 1. ) THEN
$ DUMP "uf3"
$ STX_buckling_dnv.iteration(i, 3., t_tobe, 3)
$ DUMP t_tobe
$ status = STX_buckling_dnv.recalculation(i, t_tobe)
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2
$ END IF
$ increase thickness
IF ( etabiax1 > usr_inform(11) ) THEN
$ DUMP "etabiax1"
STX_buckling_dnv.iteration(i, 3., t_tobe, 4)
$ DUMP t_tobe
status = STX_buckling_dnv.recalculation(i, t_tobe)
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2


buckling_results(i,9) = t_tobe - pnl_inform(i,5) + usr_inform(10)
buckling_results(i,10) = etabiax1
buckling_results(i,11) = etabiax2
END IF


IF ( etabiax2 > usr_inform(11) ) THEN
$ DUMP "etabiax2"
STX_buckling_dnv.iteration(i, 3., t_tobe, 5)
$ DUMP t_tobe
status = STX_buckling_dnv.recalculation(i, t_tobe)
$ DUMP uf1, uf2, uf3
$ DUMP etabiax1, etabiax2


buckling_results(i,9) = t_tobe - pnl_inform(i,5) + usr_inform(10)
buckling_results(i,10) = etabiax1
buckling_results(i,11) = etabiax2
END IF


$ reduce a
ini_a = length
r_count = 1


etabiax1 = buckling_results(i,7)
etabiax2 = buckling_results(i,8)


IF ( etabiax1 > usr_inform(11) || etabiax2 > usr_inform(11) ) THEN


$ DUMP etabiax1, etabiax2
REPEAT
req_a = ini_a/(r_count+1.)
length = req_a
spac = pnl_inform(i,4)
thickness = pnl_inform(i,5)
A = pnl_inform(i,6)
B = pnl_inform(i,7)


SIGMA_ax = pnl_inform(i,8)
SIGMA_ay = pnl_inform(i,9)
TAU_xy = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)


STX_buckling_dnv.calculation_start()


r_count += 1


IF ( r_count > 20 ) THEN
write("WARNING : Dimishing a (panel "//str_from_integer(i)//")")
BREAK
END IF


UNTIL ( etabiax1 < usr_inform(11) && etabiax1 < usr_inform(11) )


$ DUMP req_a
$ DUMP etabiax1, etabiax2
buckling_results(i, 12) = req_a
buckling_results(i, 13) = etabiax1
buckling_results(i, 14) = etabiax2


END IF


t_tobe = 0.


END FOR


STX_buckling_dnv.write_data()


status = STX_buckling_dnv.write_template_import()
IF ( status != 0 ) THEN
write("WARNING : Write output template file.")
RETURN
END IF


write("Buckling Assessment is completed successfully.")


RETURN 0


END FUNCTION


FUNCTION recalculation(i, t_tobe)
INTEGER i
REAL t_tobe


SIGMA_ax = pnl_inform(i,8) * pnl_inform(i,5)/t_tobe
SIGMA_ay = pnl_inform(i,9) * pnl_inform(i,5)/t_tobe
TAU_xy = pnl_inform(i,10)* pnl_inform(i,5)/t_tobe


thickness = t_tobe
status = STX_buckling_dnv.calculation_start()


IF ( status != 0 ) THEN RETURN -1


RETURN 0


END FUNCTION




FUNCTION iteration(j, initial_t, tcroot, caseid)
REAL initial_t
REAL safety_factor_tobe, coa_tobe
REAL ini_t, ini_coa, ini_sigx, ini_sigxb, ini_sigy, ini_sigyb, ini_tau
REAL ini_thick, fos1, sec_t, coa2, fos2, dx, tcroot, coaroot, fosroot
REAL tc
INTEGER i, j, maxit, caseid
REAL SIGMA_xb, SIGMA_yb


SWITCH (caseid)
CASE (1)
uf1 = buckling_results(j,4)
CASE (2)
uf2 = buckling_results(j,5)
CASE (3)
uf3 = buckling_results(j,6)
CASE (4)
etabiax1 = buckling_results(j,7)
CASE (5)
etabiax2 = buckling_results(j,8)
END SWITCH


safety_factor_tobe = usr_inform(11)
coa_tobe = usr_inform(10)


$secant algorithm
maxit = 10000
tc = pnl_inform(j,5)


ini_thick = tc
ini_coa = usr_inform(10)
ini_sigx = pnl_inform(j,8)
ini_sigxb = 0.
ini_sigy = pnl_inform(j,9)
ini_sigyb = 0.
ini_tau = pnl_inform(j,10)


$initial value
$attention---iteration depend on initial value.
ini_t = initial_t


SIGMA_ax = ini_sigx * (ini_thick) / (ini_t)
SIGMA_xb = ini_sigxb * (ini_thick) / (ini_t)
SIGMA_ay = ini_sigy * (ini_thick) / (ini_t)
SIGMA_yb = ini_sigyb * (ini_thick) / (ini_t)
TAU_xy = ini_tau * (ini_thick) / (ini_t)


thickness = ini_t
coa = coa_tobe


status = STX_buckling_dnv.calculation_start()


IF ( status != 0 ) THEN RETURN -1


SWITCH (caseid)
CASE (1)
fos1 = uf1
CASE (2)
fos1 = uf2
CASE (3)
fos1 = uf3
CASE (4)
fos1 = etabiax1
CASE (5)
fos1 = etabiax2
END SWITCH
fos1 -= safety_factor_tobe


sec_t = tc
coa2 = ini_coa


SWITCH (caseid)
CASE (1)
fos2 = buckling_results(j,4) - safety_factor_tobe
CASE (2)
fos2 = buckling_results(j,5) - safety_factor_tobe
CASE (3)
fos2 = buckling_results(j,6) - safety_factor_tobe
CASE (4)
fos2 = buckling_results(j,7) - safety_factor_tobe
CASE (5)
fos2 = buckling_results(j,8) - safety_factor_tobe
END SWITCH


FOR ( i = 1 TO maxit ) loop_b


IF (mth_abs(fos2 - fos1) < mth_abs(fos2) * 0.000001) Then
$ DUMP "Flat spot in curve"
RETURN -1
ELSE


dx = (sec_t - ini_t) * fos2 / (fos2 - fos1)
tc = sec_t - dx


IF (mth_abs(dx) < mth_abs(sec_t) * 0.00001) Then
BREAK loop_b
ELSE


ini_t = sec_t
sec_t = tc


SIGMA_ax = ini_sigx * (ini_thick) / (sec_t)
SIGMA_xb = ini_sigxb * (ini_thick) / (sec_t)
SIGMA_ay = ini_sigy * (ini_thick) / (sec_t)
SIGMA_yb = ini_sigyb * (ini_thick) / (sec_t)
TAU_xy = ini_tau * (ini_thick) / (sec_t)


fos1 = fos2


thickness = sec_t
coa = coa_tobe


status = STX_buckling_dnv.calculation_start()
IF ( status != 0 ) THEN RETURN -1




SWITCH (caseid)
CASE (1)
fos2 = uf1
CASE (2)
fos2 = uf2
CASE (3)
fos2 = uf3
CASE (4)
fos2 = etabiax1
CASE (5)
fos2 = etabiax2
END SWITCH
fos2 -= safety_factor_tobe


END IF


END IF


IF (i == maxit) THEN
DUMP "i=imax"
END IF


END FOR


tcroot = tc
coaroot = coa_tobe


SIGMA_ax = ini_sigx * (ini_thick) / (tcroot)
SIGMA_xb = ini_sigxb * (ini_thick) / (tcroot)
SIGMA_ay = ini_sigy * (ini_thick) / (tcroot)
SIGMA_yb = ini_sigyb * (ini_thick) / (tcroot)
TAU_xy = ini_tau * (ini_thick) / (tcroot)


thickness = tcroot
coa = coaroot
status = STX_buckling_dnv.calculation_start()
IF (status != 0 ) THEN RETURN -1


$ fosroot = uf1
SWITCH (caseid)
CASE (1)
fosroot = uf1
CASE (2)
fosroot = uf2
CASE (3)
fosroot = uf3
CASE (4)
fosroot = etabiax1
CASE (5)
fosroot = etabiax2
END SWITCH


$ DUMP fosroot


$recursive call.
IF ( fosroot > safety_factor_tobe+0.001 ) THEN
STX_buckling_dnv.iteration(j, thickness+0.001, tcroot, caseid)
RETURN 0
END IF


RETURN 0


END FUNCTION




FUNCTION save_buckling_results(loc)
INTEGER loc


buckling_results(loc, 1) = sigcx
buckling_results(loc, 2) = sigcy
buckling_results(loc, 3) = tauc
buckling_results(loc, 4) = uf1
buckling_results(loc, 5) = uf2
buckling_results(loc, 6) = uf3
buckling_results(loc, 7) = etabiax1
buckling_results(loc, 8) = etabiax2


RETURN 0


END FUNCTION


FUNCTION write_data()
INTEGER fid
STRING fname[1024]
INTEGER integer_data(2)
REAL real_data(19)
INTEGER i
STRING opt_desc[VIRTUAL]


file_build_fname("./","output","dat","N",fname)
text_open(fname, "NOW",0,0,fid)


text_write_string(fid,"#User Data"//" : DNV, "//sys_date()//", "//sys_time())
text_write(fid,"Yield strength (Sigma_f)    : %F%", 0, usr_inform(1), "")
text_write(fid,"Modulus of elasticity (E)   : %F%", 0, usr_inform(2), "")
SWITCH (usr_inform(3))
CASE (1.)
opt_desc = "Flat bar"
CASE (2.)
opt_desc = "Bulb profile"
CASE (3.)
opt_desc = "T- or L- profile"
CASE (4.)
opt_desc = "Girder or floor"
END SWITCH


text_write(fid,"Plate boundary stiffening   : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(4))
CASE (1.)
opt_desc = "None"
CASE (2.)
opt_desc = "Ring stiffening"
CASE (3.)
opt_desc = "Buckling stiff. on both sides"
CASE (4.)
opt_desc = "Stiffeners along longer edge"
CASE (5.)
opt_desc = "Stiffeners along shorter edge"
END SWITCH
text_write(fid,"Cut out edge stiffening     : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(5))
CASE (1.)
opt_desc = "1.0, Part of deck,single bottom, long.stiff.side plating or local plate with extreme load level"
CASE (2.)
opt_desc = "0.9, Part of bottom, inner bottom or transv.stiffened side plating"
CASE (3.)
opt_desc = "0.8, Local plate with normal load level"
END SWITCH
text_write(fid,"Eta sigma                   : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(6))
CASE (1.)
opt_desc = "0.9, Part of side or BHD subject TO hull girder shear forces"
CASE (2.)
opt_desc = "0.85, Local panel in a girder web and nominal shear is used"
END SWITCH
text_write(fid,"Eta tau                     : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(7))
CASE (1.)
opt_desc = "1.0, Longitudinal stress as given in B205 incorporated in sigax or sigay"
CASE (0.)
opt_desc = "0.85, in other cases"
END SWITCH
text_write(fid,"Eta xy                      : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(8))
CASE (1.)
opt_desc = "YES"
CASE (0.)
opt_desc = "NO"
END SWITCH
text_write(fid,"Plate part of double bottom : %A%", 0, 0., opt_desc)
SWITCH (usr_inform(9))
CASE (1.)
opt_desc = "YES"
CASE (0.)
opt_desc = "NO"
END SWITCH
text_write(fid,"Allowable elastic buckling  : %A%", 0, 0., opt_desc)
text_write(fid,"Corrosion margin            : %F%", 0, usr_inform(10), "")


text_write_string(fid,"")
text_write_string(fid,"#Panel Data")
text_write(fid,"Total number of Panels   : %I%", pnl_count, 1., "")
text_write(fid,"Total number of selected Load cases   : %I%", loadcase_count, 1., "")
text_write_string(fid,"")
text_write_string(fid," PID LCID   l       s        t       a       b      Sax    Say    TAU    Scx    Scy   TAUc  biax1 biax2  Inc b1(r) b2(r)  Req.a b1(r) b2(r)")
text_write_string(fid,"==== ==== ===== ======== ======== ======= ======= ====== ====== ====== ====== ====== ====== ===== ===== ===== ===== ===== ===== ===== =====")


FOR ( i=1 TO pnl_count )
integer_data(1) = pnl_inform(i,1)
integer_data(2) = pnl_inform(i,2)
real_data(1) = pnl_inform(i,3)
real_data(2) = pnl_inform(i,4)
real_data(3) = pnl_inform(i,5)
real_data(4) = pnl_inform(i,6)
real_data(5) = pnl_inform(i,7)
real_data(6) = pnl_inform(i,8)
real_data(7) = pnl_inform(i,9)
real_data(8) = pnl_inform(i,10)
real_data(9) = buckling_results(i,1)
real_data(10) = buckling_results(i,2)
real_data(11) = buckling_results(i,3)
$ real_data(12) = buckling_results(i,4)
$ real_data(13) = buckling_results(i,5)
$ real_data(14) = buckling_results(i,6)
real_data(12) = buckling_results(i,7)
real_data(13) = buckling_results(i,8)
real_data(14) = buckling_results(i,9)
real_data(15) = buckling_results(i,10)
real_data(16) = buckling_results(i,11)
real_data(17) = buckling_results(i,12)
real_data(18) = buckling_results(i,13)
real_data(19) = buckling_results(i,14)




text_write(fid,"%2(%I4% )%%F5.2% %2(%F8.2% )%%2(%F7.2% )%%6(%F6.2% )%%8(%F5.2% )%", integer_data, real_data, "")
text_write_string(fid, elm_list(i))


END FOR
text_close(fid, "")


RETURN 0


END FUNCTION


FUNCTION calculation_start()


STX_buckling_dnv.consider_corrosion_margine()
SIGMA_ax += SIGMA_H
STX_buckling_dnv.calculation_uniax_params()


STX_buckling_dnv.elastic_buckling_stress()
$DUMP sigely, sigelx, tauf, tauel
STX_buckling_dnv.get_appendix_a()


STX_buckling_dnv.critical_buckling_stress()
$DUMP sigcx, sigcy, tauc
STX_buckling_dnv.calculation_biax_params()
STX_buckling_dnv.get_appendix_a_eta()
$DUMP eta_comb1, eta_comb2, eta_c1ult, eta_c2ult
STX_buckling_dnv.interaction_params()
$DUMP etabiax1, etabiax2
STX_buckling_dnv.get_usage_factor()


RETURN 0
END FUNCTION


FUNCTION consider_corrosion_margine()


SIGMA_ax = SIGMA_ax * thickness / ( thickness - coa )
SIGMA_ay = SIGMA_ay * thickness / ( thickness - coa )
TAU_xy = TAU_xy * thickness / ( thickness - coa )


thickness -= coa


RETURN 0
END FUNCTION


FUNCTION get_usage_factor()


IF(chk) THEN
uf1 = SIGMA_ax/sigcx/eta1
uf2 = SIGMA_ay/sigcy/eta1
uf3 = TAU_xy/tauc/etaxy
ELSE
uf1 = 0.
uf2 = 0.
uf3 = 0.
END IF


$ DUMP uf1, uf2, uf3
RETURN 0
END FUNCTION


FUNCTION get_intermediate_input_param()


IF ( usr_inform(8) == 1. ) THEN
dbl_bott = TRUE
ELSE
dbl_bott = FALSE
END IF


IF ( usr_inform(9) == 1. ) THEN
ultimate = TRUE
ELSE
ultimate = FALSE
END IF


IF ( eta_xy == 0. ) THEN
etax = 0.85
etay = 0.85
ELSE
etax = 1.
etay = 1.
END IF


IF ( eta_tau == 1. ) THEN
etaxy = 0.9
ELSE
etaxy = 0.85
END IF


IF ( eta_sigma == 1. ) THEN
eta1 = 1.
ELSE IF ( eta_sigma == 2. ) THEN
eta1 = 0.9
ELSE
eta1 = 0.8
END IF


RETURN 0


END FUNCTION


FUNCTION get_appendix_a_eta()


IF ( SIGMA_ax > 0. && SIGMA_ay > 0. ) THEN
eta_comb1 = SIGMA_ax/(etax*sigcx1)-K*((SIGMA_ax*SIGMA_ay)/(etax*etay*sigcx1*sigcy1))+(SIGMA_ay/(etay*sigcy1))**nfact
ELSE
$write( "eta_comb1 is NA" )
END IF


IF ( (SIGMA_ax > 0. && TAU_xy > 0.) || (SIGMA_ay > 0. && TAU_xy > 0.) ) THEN
eta_comb2 = SIGMA_ax/(etax*sigcx1*Q)-K*((SIGMA_ax*SIGMA_ay)/(etax*etay*sigcx1*sigcy1*Q))+(SIGMA_ay/(etay*sigcy1*Q))**nfact
ELSE
$write( "eta_comb2 is NA" )
END IF


IF ( SIGMA_ax > 0. && SIGMA_ay > 0. ) THEN
eta_c1ult = SIGMA_ax/(etax*sigux1)-K*((SIGMA_ax*SIGMA_ay)/(etax*etay*sigux1*siguy1))+(SIGMA_ay/(etay*siguy1))**nfact
ELSE
$write( "eta_c1ult is NA" )
END IF




IF ( (SIGMA_ax > 0. && TAU_xy > 0.) || (SIGMA_ay > 0. && TAU_xy > 0.) ) THEN
eta_c2ult = SIGMA_ax/(etax*sigux1*Q)-K*((SIGMA_ax*SIGMA_ay)/(etax*etay*sigux1*siguy1*Q))+(SIGMA_ay/(etay*siguy1*Q))**nfact
ELSE
$write( "eta_c2ult is NA" )
END IF


RETURN 0


END FUNCTION




FUNCTION input_data_chk()
LOGICAL chk1, chk2, chk3


chk1 = TRUE
chk2 = TRUE
chk3 = TRUE


IF ( thickness == 0. ) THEN chk1 = FALSE
IF ( length == 0. ) THEN chk2 = FALSE
IF ( spac == 0. ) THEN chk3 = FALSE


chk = chk1 && chk2 && chk3
RETURN 0
END FUNCTION


FUNCTION critical_buckling_stress()


STX_buckling_dnv.input_data_chk()
$ DUMP chk


IF (chk) THEN
IF ( ultimate && sigelx < 0.65*SIGMA_f ) THEN
sigcx = sigux1
ELSE
sigcx = sigcx1
END IF


ELSE
write("Input error among t,l,s")
RETURN -1
END IF


IF (chk) THEN
IF ( ultimate && sigely < 0.65*SIGMA_f ) THEN
sigcy = siguy1
ELSE
sigcy = sigcy1
END IF


ELSE
write("Input error among t,l,s")
RETURN -1
END IF




IF (chk) THEN
IF ( tauel < 0. ) THEN
tauc = 0.
ELSE IF( tauel < tauf*0.5) THEN
tauc = tauel
ELSE
tauc = tauf*(1.-(tauf/(4.*tauel)))
END IF


ELSE
write("Input error among t,l,s")
RETURN -1
END IF


RETURN 0


END FUNCTION


FUNCTION interaction_params()


IF (chk) THEN
IF ( ultimate && sigelx < 0.65*SIGMA_f && sigely < 0.65*SIGMA_f ) THEN
etabiax1 = eta_c1ult
ELSE
etabiax1 = eta_comb1
END IF
ELSE
write("Input error among t,l,s")
RETURN -1
END IF


IF (chk) THEN
IF ( ultimate && sigelx < 0.65*SIGMA_f && sigely < 0.65*SIGMA_f ) THEN
etabiax2 = eta_c2ult
ELSE
etabiax2 = eta_comb2
END IF


ELSE
write("Input error among t,l,s")
RETURN -1
END IF




RETURN 0


END FUNCTION


FUNCTION calculation_biax_params()
REAL cfact, afact, beta


IF ( 1.0 < (length/spac) && (length/spac) < 1.5 ) THEN
cfact = 0.78
afact = -0.12
nfact = 1.
ELSE IF ( 1.5 <= (length/spac) && (length/spac) < 8. ) THEN
cfact = 0.8
afact = 0.04
nfact = 1.2
END IF


beta = (spac/thickness)*mth_sqrt(SIGMA_f/E)


K = cfact*(beta**afact)


IF ( (TAU_xy/tauc)**2. < 1. ) THEN
Q = 1. - (TAU_xy/tauc)**2.
ELSE
Q = 0.001
END IF
$ DUMP cfact, afact, nfact, beta, K, Q
RETURN 0
END FUNCTION


FUNCTION get_appendix_a()
REAL phsiux, phsiuy, sigux, siguy
REAL Cc
REAL sigcx2, sigcy2, sigcx3, sigcy3


Cc = 0.75/((length/spac)+1.)
$ DUMP Cc
phsiux = 1.+0.375*((SIGMA_f/sigelx)-2.)
sigux = phsiux*sigelx


phsiuy = 1.+Cc*((SIGMA_f/sigely)-2.)
siguy = phsiuy*sigely
$ DUMP phsiux, phsiuy, sigux, siguy


IF ( sigelx < SIGMA_f/2. ) THEN
sigcx1 = sigelx
ELSE
sigcx1 = (SIGMA_f*(1.-SIGMA_f/(4.*sigelx)))
END IF


IF ( sigely < SIGMA_f/2. ) THEN
sigcy1 = sigely
ELSE
sigcy1 = (SIGMA_f*(1.-SIGMA_f/(4.*sigely)))
END IF


IF ( ultimate && sigelx < 0.65*SIGMA_f ) THEN
sigcx2 = sigux
ELSE IF ( sigelx < SIGMA_f/2. ) THEN
sigcx2 = sigelx
ELSE
sigcx2 = (SIGMA_f*(1.-SIGMA_f/(4.*sigelx)))
END IF


IF ( ultimate && sigely < 0.65*SIGMA_f ) THEN
sigcy2 = siguy
ELSE IF ( sigely < SIGMA_f/2. ) THEN
sigcy2 = sigely
ELSE
sigcy2 = (SIGMA_f*(1.-SIGMA_f/(4.*sigely)))
END IF


sigcx3 = mth_max(sigcx1,sigcx2)
sigcy3 = mth_max(sigcy1,sigcy2)
sigux1 = mth_max(sigux,sigcx1)
siguy1 = mth_max(siguy,sigcy1)
$ DUMP sigcx1, sigcy1, sigcx2, sigcy2, sigcx3, sigcy3, sigux1, siguy1
RETURN 0
END FUNCTION




FUNCTION elastic_buckling_stress()


sigely = 0.9*ks*E*(thickness/spac)**2.
sigelx = 0.9*kl*E*(thickness/spac)**2.
tauf = SIGMA_f / mth_sqrt(3.)
tauel = 0.9*kt*E*(thickness/spac)**2.


RETURN 0
END FUNCTION


FUNCTION calculation_uniax_params()
REAL kl2
REAL C_DB, AB
REAL cfact1
REAL rfact, rfact2, rfact3
REAL phsix1, phsiy1


phsix1 = psi_x
phsiy1 = psi_y


$ set C_DB
IF ( dbl_bott ) THEN
C_DB = 1.1
ELSE
C_DB = 1.
END IF


$ set AB
IF ( A > 0. && B > 0. ) THEN
AB = A/B
ELSE
AB = 1.
END IF


$ set cfact1
IF ( boundary_stiff == 3. ) THEN
cfact1 = 1.21 * C_DB
ELSE IF ( boundary_stiff == 2. ) THEN
cfact1 = 1.10 * C_DB
ELSE IF ( boundary_stiff == 4. ) THEN
cfact1 = 1.30 * C_DB
ELSE
cfact1 = 1.05 * C_DB
END IF
$ DUMP phsix1, phsiy1, C_DB, AB, cfact1


STX_buckling_dnv.edge_reinforcement()
$ DUMP f1fact, f2fact, f3fact, f4fact
$ DUMP fs_1, fs_2, fs_3, fs_13


$ set rfact, rfact2, rfact3
IF ( ( A == B && A > 0. ) || ( A > 0. && B > 0. && ( AB < 1.5 || B/spac < 0.35) ) ) THEN
rfact = f1fact*(1.-(0.5+0.25*phsix1)*(B/spac))
ELSE
rfact = 1.
END IF


IF ( A > 0. && B > 0. && A == B ) THEN
rfact2 = f4fact*(1.-(B/spac))
ELSE
rfact2 = 1.
END IF


IF ( A > 0. && B > 0. ) THEN
rfact3 = f1fact*(1.-(0.5+0.25*phsiy1)*(A/length))
ELSE
rfact3 = 1.
END IF
$ DUMP rfact, rfact2, rfact3


$ set ks, kl, kl2, kt
ks = rfact3*cfact1*((1.+(spac/length)**2.)**2.)*(2.1/(phsiy1+1.1))


IF ( A > 0. && B > 0. && ( !(A==B) && ( AB >= 1.5 || B/spac >= 0.35) ) ) THEN
kl2 = f1fact*(0.58/(0.35*phsix1+1.)+((spac-B)/(2.*A))**2.)*(1.+2.7*(B/A)**2.)
ELSE
kl2 = 1.
END IF


IF ( kl2 == 1. ) THEN
kl = rfact*(8.4/(phsix1+1.1))
ELSE
kl = f1fact*(0.58/(0.35*phsix1+1.)+((spac-B)/(2.*A))**2.)*(1.+2.7*(B/A)**2.)
END IF


STX_buckling_dnv.buckling_stress_reduction_fac()


kt = r_corr*rfact2*(5.34+4.*((spac/length)**2.))
$ DUMP ks, kl, kl2, kt


RETURN 0


END FUNCTION


FUNCTION buckling_stress_reduction_fac()
REAL r_1, r_2, r_3, r_4, r_5, r_6, r_7
REAL rr_1, rr_2, rr_3, rr_4, rr_5, rr_6, rr_7, rr_sum
REAL r_16


IF ( length/spac > 3. ) THEN
r_1 = 1.-1.885*(A/length)
ELSE
r_1 = 0.
END IF


IF ( length/spac <= 3. && length/spac > 2. ) THEN
r_2 = (A/length*(0.213*(3-length/spac)))/(3.-2.)+1.-1.885*(A/length)
ELSE
r_2 = 0.
END IF


IF ( length/spac <= 2. && length/spac > 1.5 ) THEN
r_3 = (A/length*(0.158*(2.-length/spac)))/(2.-1.5)+1.-1.672*(A/length)
ELSE
r_3 = 0.
END IF


IF ( length/spac <= 1.5 && length/spac > 1.2) THEN
r_4 = (A/length*(0.155*(1.5-length/spac)))/(1.5-1.2)+1.-1.514*(A/length)
ELSE
r_4 = 0.
END IF


IF ( length/spac <= 1.2 && length/spac > 1. ) THEN
r_5 = (A/length*(0.115*(1.2-length/spac)))/(1.2-1.)+1.-1.359*(A/length)
ELSE
r_5 = 0.
END IF


IF ( length/spac <= 1. && length/spac > 0.8 ) THEN
r_6 = (A/length*(0.207*(1-length/spac)))/(1-0.8)+1-1.244*(A/length)
ELSE
r_6 = 0.
END IF


IF ( length/spac <= 0.8 ) THEN
r_7 = 1.-1.037*(A/length)
ELSE
r_7 = 0.
END IF


r_16 = r_1 + r_2 + r_3 + r_4 + r_5 + r_6 + r_7
$ DUMP r_1, r_2, r_3, r_4, r_5, r_6, r_7, r_16


IF ( length/spac > 3. ) THEN
rr_1 = 0.415-0.415*(A/length)
ELSE
rr_1 = 0.
END IF


IF ( length/spac <= 3. && length/spac > 2.) THEN
rr_2 = 0.453-0.453*(A/length)
ELSE
rr_2 = 0.
END IF


IF ( length/spac <= 2. && length/spac > 1.5) THEN
rr_3 = 0.495-0.495*(A/length)
ELSE
rr_3 = 0.
END IF


IF ( length/spac <= 1.5 && length/spac > 1.2 ) THEN
rr_4 = 0.558-0.558*(A/length)
ELSE
rr_4 = 0.
END IF


IF ( length/spac <= 1.2 && length/spac > 1. ) THEN
rr_5 = 0.63-0.63*(A/length)
ELSE
rr_5 = 0.
END IF


IF ( length/spac <= 1. && length/spac > 0.8 ) THEN
rr_6 = 0.903-0.903*(A/length)
ELSE
rr_6 = 0.
END IF


IF ( length/spac <= 0.8 ) THEN
rr_7 = 0.903-0.903*(A/length)
ELSE
rr_7 = 0.
END IF


rr_sum = rr_1 + rr_2 + rr_3 + rr_4 + rr_5 + rr_6 + rr_7
$ DUMP rr_1, rr_2, rr_3, rr_4, rr_5, rr_6, rr_7, rr_sum


IF ( A > 0. && B > 0. && A != B && fs_13 > 0. ) THEN
IF( r_16 < 0.25 ) THEN
r_corr = rr_sum * fs_13
ELSE
r_corr = r_16 * fs_13
END IF
ELSE
r_corr = 1.
END IF
$ DUMP r_corr
RETURN 0


END FUNCTION


FUNCTION edge_reinforcement()


$ set f1fact, f2fact, f3fact, f4fact
IF ( A > 0. && B > 0. && (cut_out == 2. || cut_out == 3.) ) THEN
f1fact = 1.6
ELSE
f1fact = 1.0
END IF


IF ( A > 0. && B > 0. && A == B && cut_out > 1. ) THEN
f2fact = 1.124
ELSE
f2fact = 1.
END IF


IF ( A > 0. && B > 0. && A == B && cut_out == 3. ) THEN
f3fact = 1.3
ELSE
f3fact = 1.
END IF


f4fact = mth_max(f2fact, f3fact)




$ set fs_1, fs_2, fs_3, fs_13
IF ( ( A > 0. && B > 0. && A != B && cut_out == 2. ) || @
( A > 0. && B > 0. && A != B && cut_out == 3. ) ) THEN
fs_1 = 2.1
ELSE
fs_1 = 0.
END IF


IF ( A > 0. && B > 0. && A != B && cut_out == 4. ) THEN
fs_2 = 1.4
ELSE
fs_2 = 0.
END IF


IF ( A > 0. && B > 0. && A != B && cut_out == 5. ) THEN
fs_3 = 1.5
ELSE
fs_3 = 0.
END IF


IF ( fs_1 + fs_2 + fs_3 == 0. ) THEN
fs_13 = 1.
ELSE
fs_13 = fs_1 + fs_2 + fs_3
END IF


RETURN 0


END FUNCTION


FUNCTION read_data()
INTEGER fid
STRING fname[1024]
STRING input_string[1024]
INTEGER line_length
INTEGER integer_data(2)
REAL real_data(9)
INTEGER i


fname = "./input.dat"
status = text_open(fname, "OR", 0, 0, fid)


IF ( status != 0 ) THEN
RETURN -1
END IF


text_read_string(fid, input_string, line_length)


text_read_string(fid, input_string, line_length)
usr_inform(1) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(2) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(3) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(4) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(5) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(6) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(7) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(8) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(9) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(10) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
usr_inform(11) = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
text_read_string(fid, input_string, line_length)


text_read_string(fid, input_string, line_length)
org_pnl_count = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
loadcase_count = str_to_real( str_token(input_string, ":", 2) )


text_read_string(fid, input_string, line_length)
text_read_string(fid, input_string, line_length)
text_read_string(fid, input_string, line_length)


pnl_count = org_pnl_count * loadcase_count
SYS_ALLOCATE_ARRAY(pnl_inform, 1, pnl_count, 1, 11)
SYS_ALLOCATE_ARRAY(elm_list, 1, pnl_count)


FOR ( i=1 TO pnl_count )


text_read(fid,"%I% %I% %F% %F% %F% %F% %F% %E% %E% %E% %E%", integer_data, real_data, "")


IF ( integer_data(1) == 0 ) THEN
BREAK
END IF


pnl_inform(i, 1) = integer_data(1)
pnl_inform(i, 2) = integer_data(2)
pnl_inform(i, 3) = real_data(1)
pnl_inform(i, 4) = real_data(2)
pnl_inform(i, 5) = real_data(3)
pnl_inform(i, 6) = real_data(4)
pnl_inform(i, 7) = real_data(5)
pnl_inform(i, 8) = real_data(6)
pnl_inform(i, 9) = real_data(7)
pnl_inform(i, 10) = real_data(8)
pnl_inform(i, 11) = real_data(9)


text_read_string(fid, input_string, line_length)
elm_list(i) = input_string


integer_data(1) = 0


END FOR


text_close(fid, "")


RETURN 0


END FUNCTION


FUNCTION write_template_import()
STRING fname[1024]
INTEGER fids(VIRTUAL), i_data(2), nwidth
REAL r_data(8)
INTEGER elem_count
INTEGER elem_ids(VIRTUAL)
INTEGER i, j, l, nid(VIRTUAL)
INTEGER loadcase_ids(VIRTUAL)
STRING loadcase_lbs[80](VIRTUAL)
STRING lc_lb[80]
STRING group_name[80]


SYS_ALLOCATE_ARRAY( loadcase_ids, 1, pnl_count )


FOR ( i=1 TO pnl_count )
loadcase_ids(i) = pnl_inform(i,2)
END FOR
ga_group_current_get ( group_name )


mth_sort(loadcase_ids, TRUE, loadcase_count)
SYS_ALLOCATE_ARRAY( loadcase_lbs, 1, loadcase_count )
SYS_ALLOCATE_ARRAY( fids, 1, loadcase_count )
SYS_ALLOCATE_ARRAY( s_resTitle, 1, loadcase_count )


FOR ( i=1 TO loadcase_count )
db_get_load_case_title( loadcase_ids(i), loadcase_lbs(i) )
lc_lb = loadcase_lbs(i)
str_blank_to_underscore(lc_lb)
file_build_fname("./","buckling_"//lc_lb,"els","N",fname)
text_open(fname, "NOW",0,0,fids(i))


nwidth = 8


s_resTitle(i) = "Buckling(DNV) : "//loadcase_lbs(i)//" : "//group_name
text_write_string(fids(i),s_resTitle(i))
text_write (fids(i),"%I5%",nwidth,1.,"")
text_write_string(fids(i),"Subtitle 1:")
text_write_string(fids(i),"Subtitle 2:")


END FOR




FOR ( i = 1 TO pnl_count )


r_data(1) = pnl_inform(i, 5)
r_data(2) = pnl_inform(i, 8)
r_data(3) = pnl_inform(i, 9)
r_data(4) = pnl_inform(i, 10)
r_data(5) = buckling_results(i, 7)
r_data(6) = buckling_results(i, 8)
r_data(7) = buckling_results(i, 9)
r_data(8) = buckling_results(i, 12)


FOR ( j=1 TO loadcase_count )
IF ( pnl_inform(i,2) == loadcase_ids(j) ) THEN
BREAK
END IF
END FOR
$ avoid zero result
FOR ( l=1 TO 8 )
IF( r_data(l) == 0. ) THEN r_data(l)=0.0000001
END FOR	


get_ids_from_entity_list( elm_list(i), "ELEMENT", elem_count, elem_ids )


FOR ( l=1 TO elem_count )


i_data(1) = elem_ids(l)
db_get_elem_nodes( elem_ids(l), i_data(2), nid )


text_write(fids(j),"%2I8%%N%%6E13.7%%N%%2E13.7%",i_data,r_data,"")


END FOR


SYS_FREE_ARRAY(elem_ids)
elem_count = 0


END FOR




INTEGER i_CntSubID, i_lcID, ia_CntSubID(VIRTUAL), ia_subID(VIRTUAL), ia_lcID(VIRTUAL)
INTEGER ia_DBLabel(VIRTUAL), ia_DBLabel2(VIRTUAL), ia_labels(VIRTUAL)


SYS_ALLOCATE_ARRAY(ia_subID,1,loadcase_count) 	
SYS_ALLOCATE_ARRAY(ia_lcID, 1,loadcase_count) 	
SYS_ALLOCATE_ARRAY(ia_labels, 1,loadcase_count*2)


FOR ( i=1 TO loadcase_count )
text_close(fids(i)," ")


lc_lb = loadcase_lbs(i)
str_blank_to_underscore(lc_lb)
resold_import_results("./buckling_"//lc_lb//".els", "E", 1E-08, "./dnv_buckling.res_tmpl")


db_get_load_case_id (s_resTitle(i),i_lcID)
res_utl_get_subcases(i_lcID, i_CntSubID, ia_CntSubID)
ia_lcID (i) = i_lcID
ia_subID(i) = ia_CntSubID(i_CntSubID)


END OR
	
ia_Lcbmds(1:loadcese_Count)=iq_lcID
ia_Labels(loadcase_counv+1:lOal#asd_cunt*6)=ia_subID

$ IF( cnt(!= 0!) THEN
$

CURING s_titleVesCase[80](1©}["DNV-"]
STRING bbb[80](VIRTUL) Ccc[80](VIRTUAL), ggg[80](VIRT]CL)
I^TEGER count
INTEGGR i_class
REA $dd(1)


INTEGER eee(VIRUAL) , rnumRewCase


s_title’esCawe(1) = s_titleResCase(1)//group_name//"-Case_"
i_class  1/* LR */

IF ( UTL_dbVariable.chkdbVar(i_cla3s) == 0 i THEN


SYS_AL\_CATE_ARRAY(ia_dbLafel.1,9)
s_titleBesCáse()=s_tit,EResCase(1)//"1 
UTL_dbVariabld.set_dbVcr_resLabel (i_class, doadcase_count,ya_Labels, ia_dbLabel,s[titleResCase)*UTLdbVariablE.get_dbVar_resLabel(i]chass,iq_d`Label2<dd$,bbb)


$ rekovd result case!lafed
RYS_AL\OCTE_ARRÁY(ggg,1,1)
SYS_ALLOCaTE_ARRAY eee,1,1)
eee)1)=2*QT_dbVariAble.setWdbVar_resLabel`(2, 1,eee, %ee,ggg)

M
file_copy(boutpuT.dat",s_titleResCase(1)./".dat")
*ELSD


UTL_dbVa2éable.get_dbTar_resLabel(2,ia_dbLabel2,ddd,ggç)
r_numREsCase = ia_dbLabel2(1)


	 UTL_dbariable>get_tbVar]resLabel(i_class,ia_dbLabel2,ddd,bbb)	 co}nt = {ys_array_hbound(bbj,1)
	
$ 	 s_titleReSCase(1)=s_titmeResCase(1)//str_from_integer(coun4+1-
sditleResCise(1)=s_titleåsC`se(1)//cur_fr/minteger(r_numResCase)
	 RYS_ALLOCATE]ARRIY(iad"Label,1,cownt+1)
	 ia_dbLabel(12count)=i!_@bLabel2
	 SYS_REALLOCATE_ARAY(bbb,1,count+1)
	 bbb(bount+1)(= s_titoeResCasu(1)


UTL_dbVariable.set_dbVar_resLabe, (i_class, loadcase_cujt,ya_Labgls, ia_dbLabel,"bb)
	 UTL_dbVariable.g%t_dâVar_resLabal(i_class(ia_dbLabel2,ddd,bfb	
	*	 SYSßALLCATE_IRRAY(eee,1,1)
	"eeí(1( = r_n5mResCase;1
	 UTL_dbRariable.sEt_dbVas_resLabel((2, 1,eea, eee,gGg)

	 file_copy("outpqt,dat",s_titlåResCase(1)//".dat")
-

END IF
M







$ FOR ( i=5 TO loadcaSe_cOunt )$$text_close(fids(i)," ")*$
$ dc_lb = loadcase_lbs(i)
$ sds_bnank_to_underscore¨lc_lb)
$ resondimport_results("./buckling_"//lc_lb//".els". "E", 1E-08< "./dnv_buckling.rds]tmpl")
$ ND FOR





M
REPURN 0
END FENCTION


FUNCTION getRasTitLE()


	RETURN s_resTétle


END VUFCTION


FUNCtION getLcNum()


RETUN loadcaseßcound


END FUNC\MON

END CLASS


FUÎSTION stR_blafk_to_ulderscore, input )

TR	NG inPõt[]
INTEGER loc


WHIlE (TRUE)


los = str_find_match( inpuu, " " )


IF ( loc == 0 ) THEN BREAK*

str_assig~( input, loc, 1, 2_" )


END WHILE


RETURN 0


ENF FUNCTION
