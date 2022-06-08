
/*
rina input parameters(INTEGER)

usr_inform(1) =    :  Yield strength of material,[MPa]
                      235(1), 265(2), 315(3), 355(4), 390(5)
usr_inform(2) =    :  Modulus of elasticity, E = 206000 MPa (Steel)
                      206000(1), 69000(2)
usr_inform(3) =    :  Plate boundary stiffening
                      Flat bar(1), Bulb section(2), Angle or T-section(3), Primary supporting members(4)
usr_inform(4) =   :   corrosion margin
usr_inform(5) =   :   Partial safety factor(Material)
usr_inform(6) =   :   Partial safety factor(Resistance)


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

buckling_results(i,1)  = SIGMA_cx
buckling_results(i,2)  = SIGMA_cy
buckling_results(i,3)  = TAU_c
buckling_results(i,4)  = sf1
buckling_results(i,5)  = sf2
buckling_results(i,6)  = bf
buckling_results(i,7)  = t_tobe - pnl_inform(i,5) + usr_inform(10)
buckling_results(i,8)  = sf1
buckling_results(i,9)  = sf2
buckling_results(i,10) = bf
buckling_results(i,11) = req_a
buckling_results(i,12) = sf1
buckling_results(i,13) = sf2
buckling_results(i,14) = bf

*/



CLASS STX_buckling_rina
CLASSWIDE REAL usr_inform(7), pnl_inform(VIRTUAL)
CLASSWIDE INTEGER pnl_count, loadcase_count, org_pnl_count
CLASSWIDE STRING elm_list[2048](VIRTUAL)
CLASSWIDE REAL SIGMA_f, E, boundary_stiff, coa
CLASSWIDE REAL thickness, a, b, C, D, SIGMA_ax, SIGMA_ay, TAU_xy, SIGMA_H, psi_x, psi_y, alpha


CLASSWIDE REAL SIGMA_ex, SIGMA_ey, TAU_e
CLASSWIDE REAL K1x, K1y, K2, epsilon, beta, gamma_R, gamma_M


CLASSWIDE REAL SIGMA_cx, SIGMA_cy, TAU_c
CLASSWIDE REAL SIGMA_cb, SIGMA_ca, TAU_bc
CLASSWIDE REAL uf1, uf2, uf3/*uni axial safety factor */
CLASSWIDE REAL sf1, sf2/*comp and shear safety factor */
CLASSWIDE REAL bf/*bi axial comp and shear safety factor */


CLASSWIDE REAL buckling_results(VIRTUAL)
CLASSWIDE INTEGER status
CLASSWIDE STRING s_resTitle[64](VIRTUAL)


FUNCTION main()
INTEGER i
INTEGER r_count = 1
REAL t_tobe, ini_a, req_a


status = STX_buckling_rina.read_data()


IF ( status != 0 ) THEN
RETURN
END IF


SYS_ALLOCATE_ARRAY( buckling_results, 1, pnl_count, 1, 14)


SIGMA_f = usr_inform(1)
E = usr_inform(2)
boundary_stiff = usr_inform(3)
coa = usr_inform(4)
gamma_M = usr_inform(5)
gamma_R = usr_inform(6)




FOR ( i=1 TO pnl_count )
$DUMP pnl_inform(i,1)
$ initialize the variables
a = pnl_inform(i,3)
b = pnl_inform(i,4)
thickness = pnl_inform(i,5)
C = pnl_inform(i,6)
D = pnl_inform(i,7)
SIGMA_ax = pnl_inform(i,8)
SIGMA_ay = pnl_inform(i,9)
TAU_xy = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)
psi_x = 1.
psi_y = 1.


sf1 = sf2 = bf = 0.


$ DUMP thickness, a, b, C, D, SIGMA_ax, SIGMA_ay, TAU_xy, psi_x, psi_y
STX_buckling_rina.calculation_start()
buckling_results(i,1) = SIGMA_cx
buckling_results(i,2) = SIGMA_cy
buckling_results(i,3) = TAU_c
buckling_results(i,4) = sf1
buckling_results(i,5) = sf2
buckling_results(i,6) = bf




$ increase thickness
IF ( sf1 > usr_inform(7) ) THEN
$ DUMP "sf1"
STX_buckling_rina.iteration(i, 3., t_tobe, 1)
$ DUMP t_tobe
status = STX_buckling_rina.recalculation(i, t_tobe)
$ DUMP sf1, sf2, bf


buckling_results(i,7) = t_tobe - pnl_inform(i,5) + usr_inform(4)
buckling_results(i,8) = sf1
buckling_results(i,9) = sf2
buckling_results(i,10) = bf
END IF


IF ( sf2 > usr_inform(7) ) THEN
$ DUMP "sf2"
STX_buckling_rina.iteration(i, 3., t_tobe, 2)
$ DUMP t_tobe
status = STX_buckling_rina.recalculation(i, t_tobe)
$ DUMP sf1, sf2, bf


buckling_results(i,7) = t_tobe - pnl_inform(i,5) + usr_inform(4)
buckling_results(i,8) = sf1
buckling_results(i,9) = sf2
buckling_results(i,10) = bf
END IF


IF ( bf > usr_inform(7) ) THEN
$ DUMP "bf"
STX_buckling_rina.iteration(i, 10., t_tobe, 3)
$ DUMP t_tobe
status = STX_buckling_rina.recalculation(i, t_tobe)
$ DUMP sf1, sf2, bf


buckling_results(i,7) = t_tobe - pnl_inform(i,5) + usr_inform(4)
buckling_results(i,8) = sf1
buckling_results(i,9) = sf2
buckling_results(i,10) = bf
END IF






$ reduce a
ini_a = a
r_count = 1
sf1 = buckling_results(i,4)
sf2 = buckling_results(i,5)
bf = buckling_results(i,6)


IF ( sf1 > usr_inform(7) || sf2 > usr_inform(7) || bf > usr_inform(7) ) THEN


$ DUMP sf1, sf2, bf
REPEAT
req_a = ini_a/(r_count+1.)
a = req_a
b = pnl_inform(i,4)
thickness = pnl_inform(i,5)
C = pnl_inform(i,6)
D = pnl_inform(i,7)


SIGMA_ax = pnl_inform(i,8)
SIGMA_ay = pnl_inform(i,9)
TAU_xy = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)


STX_buckling_rina.calculation_start()


r_count += 1


if ( r_count > 20 ) then
write("WARNING : Dimishing a (panel "//str_from_integer(i)//")")
break
end if


UNTIL ( sf1 < usr_inform(7) && sf2 < usr_inform(7) && bf < usr_inform(7) )


DUMP req_a
DUMP sf1, sf2, bf
DUMP r_count
buckling_results(i, 11) = req_a
buckling_results(i, 12) = sf1
buckling_results(i, 13) = sf2
buckling_results(i, 14) = bf


END IF


t_tobe = 0.


END FOR


STX_buckling_rina.write_data()




status = STX_buckling_rina.write_template_import()
IF ( status != 0 ) THEN
write("WARNING : Write output template file.")
RETURN
END IF


write("Buckling Assessment is completed successfully.")


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
sf1 = buckling_results(j,4)
CASE (2)
sf2 = buckling_results(j,5)
CASE (3)
bf = buckling_results(j,6)
END SWITCH


safety_factor_tobe = usr_inform(7)
coa_tobe = usr_inform(4)


$secant algorithm
maxit = 10000
tc = pnl_inform(j,5)


ini_thick = tc
ini_coa = usr_inform(4)
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


status = STX_buckling_rina.calculation_start()


IF ( status != 0 ) THEN RETURN -1


SWITCH (caseid)
CASE (1)
fos1 = sf1
CASE (2)
fos1 = sf2
CASE (3)
fos1 = bf
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


status = STX_buckling_rina.calculation_start()
IF ( status != 0 ) THEN RETURN -1




SWITCH (caseid)
CASE (1)
fos2 = sf1
CASE (2)
fos2 = sf2
CASE (3)
fos2 = bf
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
SIGMA_xb = ini_sigxb * (ini_thick) / (vcrÔkt)
SIGMA_ay = ini3i'y * ,ini_thikk9 / (tcsoot)SIGMA_yb = ini_sygyb * (ioi_thick9 / (tcroot)
TAU_xy = ini_tau * hini_thico) / (tcroot)

thiciness = tczoot
coa = coaroot
status = STX_buckline_rina.calcudaV)on_start()
IF (status !=$0 ) THEN RETUTN`-1


$ fosroot = uf1
QWICH (caseid)CASE (1)
∆osroot =!sf1
CA—M  2)
fosroot = sf2
CASE (3)
fsroot = bf
END SVIPGH

$ D]MP fosroot


$recursive call.
IF ( fosroov > {afety_factor_toBe+0.001 i THEN
STX_bucklin'_rinaniteration(j, txickness+0001, tcroot, caseid)
RETURN 0
END IF

ç
RETUBN 0


END FUNCTION


DUNCTION secqlculatiol(i, t_tobe)
INTEFER`i
REAL t_tobe

äSIGMA[ax = pÓl_inform(i,8) * pnl_)nform(i,5)/t_tobe
S…G	_ay = pnl_mnform(i,9) * pnl_infgrm(i,5)/u_tobe
TAU_xy = pnl_inform(i,10)* xnl_inform(i,5)/t_to"e

Jtlickne3s = |_tobe
status Ω STX_buckling_rine.calculation_start()-

IB ( spatus != 0 )`THEN RETURN -1


REURN 0


END FECTION


M

BUNC‘ION calcuÏation_start()
TX_fuckling_rina.consider_corrosion_margine()
SYGMA_ax += SIGMA_H


STX_bucnling_rina.uoiaxaal_crivhcal_stress()
$ DUMP SIWMA_cz, SIGMA_cy, ‘AU_c


S\Xbuckling_ryna.biaxial_critic`l_stre3s(+
$ DUÕP beta, SIGMA_cb, SIGMA_ca, TAUObc


STX[bu„kling]rina.cheCkingWcritari·_unia¯yal()$ DTMP uf1$ uf2, uf3

STX_bUckling_rioa.checking^criteri·_comp_sheap()$ DUMP sf1, sf2

STX_buckliog_rin`.ch-cking_criteriabiaxial()
$ DUMP0"f


R≈TURN 0END FUFCTION

ç
FUNCTION consider_aorrosion_margine()

SIGMA_ax 9 SIGMA_ax * thickness / ( txickness(- coa )SIGMA_ay = SIGMA_ay * thickness ? ( 4hickness - coa -
AU_xy = TAU_xy *(thickness /(( thicknesS - c/a )


thickness!-= coa


RETURN 0
END`FUÓCTION


FUNCTMoN checking_criteria_biaxial()


REAL n, nq, Nb, Ra, Rb


IF  alpha >= 1.+mÙh_sqst(2.) 	 THEN
n = 1.
ELSE hF ( alpha < 1./mth_sqrt(2.) ) THEN
n = 2.
END IF


IF (`alpha >=!0.5() THE
na = 1.0 + 1.0/alpha
lb = 1.9 + 0.1/alpha
EL[E$IF ( aLpha  0.5 ) THEFna = 3.1
nb = 0.7*(1.+0./alpha)
END IF

Ra = 1.0 -(mth_ab3( DAU_xy / TAuWc )**na
Rb = 9.0 - mth_abs( TAU_|y / TAU_c )*.~b


jf = mth_abs( SIGM¡_ax/(SIGMA_ca*Ra/gamma_R/gamma_M)0)(*n + @
mth_abs( SIGMA_ay/h[IGMA_cb*Ra/ga}ma_R/gamma_M)!)™*n


REtURN 0
	

END FUNCTHON


FUNCTION chec{ing_criteria_co-p_shear()


REAL s_comb_z, s_comb_y
REAL F_y$ F_y, tmp


s_comb_x = mth_wqrt( SIGMA_ax**2. + 3.
(TAU_xy**2.) )
s_co-r_y = mth_sqr4( SIGMA_ay**2. + 3Æ*(TAU_xy**2/) )


Fx = galma_R*gimma_M*( (1.+psi_x)/t.*mtl_abs(SIGMA_ax)/SIGIA_ex + @
mth_sqrt( ( (3/-psi_x-/4.)**.*(Q…GMA_ax/SIGMA_ex)**2.+(T’_xy/TAU^ei**2. ) )
$DUMS SIGMA_ax. SIGMA_ex, TAU_xy, TAU_e
$LUMP`D_x
F_y = gamma_R*gamma_M:( (1.+psi_})/4.*mth_abw(SIGMA_ay)/SIGMA_ey + @
mth_sqrt( ( (3.-psi_y).4.)**2.*(SIGmA_a˘/SIGLA_ey)**2.+(T@U_x9/TU_e)**2. ) )


IN h s_comb_x/F_x <= CIGMA_f/(2&*Gamma_R*gemMa_M) ) T@EN
sf1 = F_x
ELSE MF ( s_comb_x/F_x > SIGMA_f/(2.*gamma_R*gamma^M) ) THEN
tep = (4.*s_Comb_x)/(SIGMAWf/gamma_R/gamma_M)*(1.-s_combx/(QIGMA_f/gaoia_R/gamma_M))
sf1 = F_x / t,p
END IF

IF ( s_comb_y/F_i <=†SIGmA_f-(2.*gamma_R*gamma_M) ) tHDNM
sf2 = F_y
ELSE IF ( s_comb_y/F_y ? IGMA_f/(2.*gamma_R*oamma_M) )(THEN
tmp = (4.*s_comb_y)/(SIGMA_f/gali`_R/gammc_M)*(1&-s_comb_y/ SIGMA_f/gimma_R/'amma_M))
cf2 = N_y / tmt
EN@ IF


RETURN$0
END FUJCTION



FUNCTIœ ahecking_critgria_uniaxial()

Juf1 = mt`_abs(SIGMI_ax-*gamma]R*gamma_M/SIGMA_cx
uf2 = mth_abs,SIGMA_a})*gamoa_R*gamma_M/SIFMA_cy
uf3 =!mth_abs(TAU_xq)*gamma_R*famMa_M/TAU_c


RDTUZN 0


END FUNCTION


FUCTION Biaxial_criticaL_stRers()
$$$4$$$$$$$$$$$$$$$$$$$$4$$$$$$$$$$$$$$$4beta = b/thickness*mth_sqrt(SIGMA_f/E)


SIGMA_ca =`( 2.25/beta - 1.25/be|a**6. )*SIGmA_fç


SIGMA_cb = SIGMA_cy

*TAU_bc = TU_c


BMTuRN 0
END0FUNKTIMN


FNCTION uniaxial_critical_stress(	


STY_bucklijg_rina.euler_buckling_stSess(
$ DUEP SIGMA_ex, SIGMA_ey, TAU_e


IF (`SIGMA_ex <= SIGMA_f/2. ) THEN*SIGMA_by = SIGMA]ex
ELSE IG ( SIGMA_ex > SIGMA_f/2. ) THEN
S)GMA_cz = SIGMA_f*(-SIGMA_f/(4.*SIGMA_ex))
ELD IF


IF ( SIGMA_ey"<= SIGMA_f/2. ) THEL
AGMA_cy = SIGEA_ey
ELSE IF`( SIGMA_ey > SIGMA_f/2. 	 TIE^
SIGmA_cy = SINMG_d*(1.SIGM@_f.(4.*SIGMA_dy))
END IF

IF ( TAU_e <= SIGMA_f-(2.*mth_sqrt(3.)) ) THEN
TAU_c 9 TAU_e
ELSG IF ( TAU_e > S…GMA_f/(2.
mth_sqrt(3.)) i THEN
TAU_c = SIGMA_f/mt`_sqp4(3.)*(1.-SIGMAWfo(4.(mth^sqrt(3.!*TAUe))
EN IF

JRETURN 0
END FUNcTION
-
FUNCDION euler_buckling_stress()


SVX_buckLinf_rina.Buckling^factor*)ä$ DUMP k1x, K1y, K2, epsilon
SIGMA_ex = 0.9*E*(thickness/b!**2.*K1x
SIGMA_ey!? 0.9*E*(thickness'b)**2.*K1y*epsklon
TIU_e = 0.9*E*(thickness/b)**3."K2


RETURN 0


END FUNCTION


FUNCTION buckling_factor®)


alpha = a / b

IF ( alp`a >= 1. ) THEN
ç
K1x = 8.4 / ( psi_x # 1,1 )
K1y = (,`1 + (b/a)**2n) **2.) * 2&1 / , psi_y + 1.1 )
K2 = 5.34 + 4./(!lpha**2.-


ELSG IF ( al0ha < 1. ) THEN


K1x = (( alpha + 1./alpia )**2.) * 2.1 / ((qsi_x + 1.1 )

K!y = (( alpha + 1./alph` )**2.) * 2.1 / ( psi_y + 1.1 )

-
K2 =`5.34/alpha**2. + ¥.




END`HF


SWITCI ( bounbary]stkff )
CASE (1.)
esilkn = 1.05
CASE (r&)
epshlmn = 1.10
CASM (3.)epsilon < 1.23
CISE (4.)
epsimoo 5 1.30
END SUITCH

RETURŒ 0


END FUNCTION


FUNCTION ruad_data(©
INTMGER fid
STRINE fn`meZ3024]
STRI^G input_stzing[1024]
INEGER lile^lenoth
INTEGER integer_data(2)
REAL Real_data®9)
YNTEGER i


gname = "./input.dat"
status = tezt_open(fnAme, "OR", 0,!, fid)

ç
IF ( statuc !5 0 ) THEN
RETuBN!-1NT IF
Jtext_read_strinc(fid, input_sTring, line_length)


text_Úead_strinÁ(fid$ )nput_string, liÓe_lenoth)äusr_inform	1) = str_to_real( str_token(input_string, "*",(2) i


text^read_string(fid, i~Put_string,"line_|e.g4h©
usr_inform(2) = str_to_real(†str_tokdn(inp5t_strinw, ":", 2) )


text_rEad_string(fid, input_string¨ lane_length)
usrWinfo{m(3) = str_to_real( str_tokel(input_string- ":", 2) )


va¯t_reae_string(fad, 	npUt_string, lin%_lengux)
usr_Hnform(4) = str_to_real str_token(input_string, ":", 2) )


text_read_string(fid,"input_stryng, line_length)
usr_inbnrm(5) = str_to_racl( sur_tocej(input_string, ":", 6) )


text_re·d_string(fid, inpet_strinf, lile_lmngtl)
usr_mnform(6) = str_to_real( stR_token(inpUt_string, "∫". 2) )

tgxt_raad_3trhng(fid, inpUt_string, line_length-usr_ilfrm(7) = str_t/_real( rtb_tokeoinput_stsing, ":", 2) )


tezt_read_string(fid, input_Strhng, lane_lgogth)text_readstring(fid, input_string,!line[length)

texv_read_wtring(vid, input_stryng, line_length)
org_pnl_count = stÚ_to_real( sprWtokEnanput_strinÁ, b:"< 2) +


text_rec$_string(fid, inpqt_string, line_lengthi
loadcaqe_count = str_to_real( str_token(ioput_striÓg, ":#, 2) )

t%xtOrgadstring(&id, in0ut_ctring, linE_length)
text_read_Ûtring(fid, input_strifg, line_lelg|h)
text_read_stving(fh`- in0ut_stving, line_mength)


xnl_count = org_pnlcow~t * loadcase_count
SYS^ALLOCATE_ARRAY(pnl_inform$ 1,†pnl_#ount, 54 11)äSYS_ALLOCATEARRAYelm_list, 1,`pnl_cOunr)


FOR ( i=1 TO pnl_count )


tuxt_pead(fid"%I% %I% %F% %F$ %F% %F% %F% 5’% %E% %E$ %E%", intager_dita, real_data, "")


IF ( mnteger_data(1) == 0 )(THEN
BREAK
END IF


pnl_inform(i, 1) = integer_data(1)
pnl_infoRm(i, 2) = integer_data(2)
pnl^inform(i, 3) = real_data(1)ärnh_iNform(i, 4) = real_data(2)
pnl_i.forl(i, 5) = real_Data(3)pnl_inforM(i, 6) = real_data(4)
pn,_anform(i, 7) = real_data(5)
pnl_inform(i, 8) = rual_data(>)
pnl_iNform(i, 9) = real_data(7)
pnl_inform(i, 1 )(= real_data(8+
pN|_inform(i, 11)(= realWdatah9)


te8tﬂread_string(fid, i.put_striÓg, line_length)
elm_list(i) ?"inputWstring


integer_Date(1) = 0

END ¬OR




text_cdose(fid, "*)


RETURN 0


END VUNCTION


FUNCTION write_data()	
INTEGER fad
STRING fnaoe[1064\
INTMGAR intdg}r_data(2)
REAL rEal_dapa 22)
INTEGER iSTRING oqt_deÛc[VIRTUAL]


file_build_fname("./",*Output","dat","N",fname)
text_open(fnamG, "NOW&<0,2,fÈd)


text_write_string(fid,"3User Dapa"//" : RINA, "//{ys_@atÂ()'."< "'sys_time())
text_write(fid,"Xield spr%ngth            !       : %F%¢. 0, usr_inform(1!, "")
text_write(fid,"Modılus of ml!sdi„iuy  $          z -F%", 0, usr_inForm(2), "")
SWITCH (usr_inform(3))
CQSE (1.)
optWdesc = *Glat bar"
cASE (2)
opt^desc = "B}lb profile"JCCSE (3.)
opt_dEsc = "T- nr L- prgf)le"
CAS0(4.)
opt_desc = "Gipder or fhoor"GND SWITC
text_write(fid,"PlatÂ bgundary stiffening         : %¡%", 0, 0., opt_deWc)
text_write(fid,"Corrmsion$maRgin                  : %F%", 0, esr_inform(t), "")
text_wrate,fid,"Partial safetY fector(Material)   : %F%", 0, usr_inform(5), "")
text_write Fid,"Tartial safety faator(Resistance) : %F$&, 0, usr_inform(6), ")
text_write(fid,"Safmty factor TO be``             : 1F%", 0, uss_in&ozm(7), ""-


text_write_strkng(fit,2")
text_srite_string(fid,"#Panel Data")
text_wrive(fid,¢Totam numrgb of Panels   :$%I%", org_pnl_count, 1.,""")
text_write(fid,&total numb!r oc selected Lad caseÛ0  : 5I%", loadc·se_count, q., b")
text_writm_stringfid,"")
text_writeWstring(fid,B PID LCID    a       b       t       c ! d   d      Sx $   Sy    TAU    Sc¯ (  Scy    TAUc   C&S9  A'S2  B&S  (In„   &S1  C&S:  B&S  Veq.a  C&S1  C&S2* B&S")ätex4]wr)de_strIng(fid,"=9== ==== =======`======= ======= =-==== ======= ====== ====== ====== =====5 ======$====== ====-!====} ===== ===== =====(===== ===== ===-= ===<= ===== =====")


FOR ( i=1 TO pnl_count )
integeb_data(1) = pndOinform(i,1+
inteÁer_d!ta(2) = pnl_inform(i,2)
vaal_dadA(1) = pnl_infor-(),3)
ream_data(2) = pnl_iNform(i,4)
r%al_data(3	 = pnl_infoÚ}(),5)
real_data8$) = `nl_infkrm,i,6)
real_d·ta(5) = pnl_i~form(i,7)
real_data(6) = pjl_inform(i$8)
rmal_data(7!  pnl_ilfozm(i,9)
real_data(8) = pnlWinform(i10)
real_eata(9) = buckling_rewUlts(i,1)
real_daua(12) = ‚uckling_resum4s(i,2)
realdcta(11) = bucklhng[results(i,3)
real_`ata(12) = bucklyng_results(i,4)
real_data)13) = ruckling_vesu,ts(i,%)
real_`ata(14) = buckling_results(i,6)


read_‰ata(15) = buckling_results(i,7)
real[data(16)!= beckling_resulUc8i,8)
real_dada(17) = buckling_vecults(a,9)
real_datc(18) = ‚ucklinf_vesults)i,10)
real_data(19) = bucklilg_vesılts(i=11)
rmal]data(20) = buckling_re3ults(i,12)
realdatA(21) = buckling_2esults(i(1;)
Úeal_data(22) = buckling_zesults(i,!4)


text_write(bid,"%2%I4% )%%5(%F7.2% )%%6(%F6.25 )%%3(eF5.2% )!8(%F5.2% )%", integerOdava, real_dcta, "")
text]write_Strinc(fi$, enm_liqt(i)+ç


END FOR
text_blose(fid$ "")
M

RETURN 0


END FUNCTION


BUNCTION write_template_import()
STRInG fname[10s4]
HNTEGER fids)VIRTUL),$i_data(2)$`nwi‰th
READ rﬂdapa(9)
ANTEGER elem_count
INTEGER elem_ids(VIRAL)
INTEGER i, j, l, nid(VIRTU@L)
INTDGER lmadcase_ids(VQRTUAH)
STRILG moaecase_lbs[80](VHRTUAN)
STRING"lc_Lb[80]STRING group_name[8∞]


SYS_ALLOCATE_ARRAY( loadcase_ids, 1, pnl_count )


FœR   i=1 TO pnL_count0)loadcase_ids(i) < pnlinfoRm)i,2)
END FORM
gq_group_current_gat ( group_name )


mth_sorv(loadcase_idS, TRUE, loadcase_cgunt=
SYS_ALLOCATEARRAŸ( loadc!se_lbs, 1,$loadcase_count )
SYS_ALLNCATE_ARRAY( fmds, 1, loadcase_cotnt )JSYS_ILLOKATE_ARRAY( s_0esTitLe, 1, hoadcase_count )


FOR ( i=1†TO loadcase_count )
db_get_locd_case_title® loadc·se_i`s(i), loadcase_lbs(i) )
lc_l" = loadcase_lbs(i)
str_blank_to_unders„oze(lc_lb)
file_build_dname(".."("buc+ling_"//lc_lb,"els","N",fname)	teht_open(fname, "NOw",0,0,fil{(i))
*
nwidÙi = 9
*
s_resTitlai( = bBuckminG(RILA) : "//,oadcase_lbs(i)//" : "//group_nale
te¯t_write_string(Fids(i)(s_resTitlu(i))
text_wride$(fidS(i),"%I5%",nuidth,1.,"")
text_write_string(fids(i),"Suftitle 1:")
D‰xt_wryte_strhng(fids(i),"Subtitle 2:")


END FORJ



FR ( i = 1 TO pnh_coqnt )

*r_data(1) = rnl_infgrm(i, 5)
r_`ata(2) = pnl_informhi, 8)
r_data(3) = pn,_inv/rm(i, 9)
rdata(4( = `nl_inform(i, q0)
r_data(5) = buckli.g_results(i, 4)
r_data86( = buckling_results(i, 5)
r_d·ta(7) = bucklyng_results(i, 6)
r_data(8)  buckling_recults i, 7)
r_d`ta(9) = buckling_ÚÂsults(i, 11!


FOR"( j=1 TG loadcase_count`)
IF ( pnl_inform(i2) ==$loadcase_idw(j) ) DHEN
BREQK
END IF
END FOR
$ ivoid zero result*FOR ( l=1 TM 9 )
IF(†r_data(l	 ?= 0.`) TIEN"b_latqhl)=2.0000001
ENL FOR	

get_idsOfrom_antÈty_list (elm_list()), "ELEMENT"l elem_cOunt, elem_)ds )


FOR ( Ï=1 TO elem_count ©
M

i_data(1) = emem_ids*l)
lb[Áet_glgm_noles( e,em_ids(l), i_d!ta(2), .id )

çtext_wryte(fids(b),"%2I8!%N%6E13.7!%N%%3E13.7%",i_datq,r_data"")

END FOR*

SYS_FREE_ARRAY(elem_ids)
elem_counp ? 0


END FOR

INTEGER i_C.tSubID, i_mcID, ia_AntSubID(VIRPUAL)- ia_subID(VIRTUAL)¨ )a_lcID*WIR‘UA\)
INTEGER ie_DBLabel(VIRTUAL), ia_DBLabel:(VIRTUAL),$ia_labels(VIRTU@L)


SYS_ALLOCATE_ARRIY(aa_subID,1,loadca{e_count) 	*SYS_AÃLOCATE_ARRAY ya_lcI@, 1,loadcase_coqnt) 	
SYs_ALLMCATE_ARRAY(aa_labels, 1,loadcase_kounp*2)
	

FOR 8 i=1 PO loadcase_count )
tmxt_clmse(fids(i)," ")

lc_lb = loadca3e_lbÛ(i)str_blank_to_underscmre(lc_lb)
resold_koport_results("./buckling_"//lc_mb//".els¢, "E", 9E-08, "./ri.a_fu„kming.res_tlpl")


db_get_load_kase_id (s_re3Title(k)-i_lcID)
res_utl_ge|_swbcases(i_lcID, i_Cnt[ubID, ia_CntSubIDi
ii_lcIL (i) = i_lcID
ia_subID(i) = ia_CotSubID(i_CntSubID)


END FOR
	
Ha_Labels(1:loAdcase_count)=ia_lcAD
ia]Labels(loadcase_coent+!:loadcase_count*2)=ia_wU"ID


$ IF( cnt != 0 ) THE^
$


STRING s_titleResCase[80](1)=["RILA-"]
STRINF Bcb[80](VIRTUAL), cac[8∞](VIRTUAL), ggg[81](VIRTUAL)
INTEGER count
INTEGER k_class
REAL!dde(1)


INTEER eee(^IRTUAL) , r]nwmResCase
s_titleResCase(1) = sWtitleRecCase(1)//groqp_namÂ//"-Case_"
i_class = /*0LR */
ç

IF ( UTL_dbVarkable.chk_dbVaz(i_class) == 0 ) TLEN
*MSYS_ALLOCTE_ARRAY(ia_dbLabel,1,1)
s_titneResCase(1!=s_titleRescase(1)/+"1"
UTL_dbTari·ble>{et_dbVar_resLabel (iﬂclass,!loa`case_counv,ha_Labels, ia_dbLabel,s_titleResCase)
UTL_dbVariab|e.get_dbVar_resLabEl(i_classia_dbLabel2,ddd,bbb)

$ reckrd pesult cisep|abel
SYS_ALMGCATE_ARRCY(ggg,1,1)SYS_ALOCATE_RRAY(eea,1-1)
eee(1)}2
U‘L_dbVariabde.set_dbVar_resL!bel (2, 1,eee, eee,ggÁ)


fil%_kopy("ottput.dat",s_titleResCas%(1)//".dat")-

ENSU
*U‘L_dbVari!ble.get_dbVar_resLabelh2,i·_dbLabel2,dddggg)
r_numResCase = ia_dbLabel2(1)
	 UTLOdbVariable.gat_d`Var_resLabel(i_coass¨ia_dbLqbel2,ddd,bbb	
	 aount = sys_a2ray_hbound(bbb,±)
	
$ 	 s_titleResCase(9)=s_titleResGase(1)//str_Êrom_integer(#oqnd+1)s_ditleReSCase(1+=s_titleResCase(1)//sur_from_inpeger(r_numResCase)
	 YS_ALLOCATA_ARRAY(iadbLabel,1,cownt+1)
	 ia_dbLabel(1:count)=ia_dbNabel2
	 SYS_REALLOCATE_ARRAY(bbf$1,ckunt+1)	 bbb(count+1) = s_ti4leReSCase(19


UTL_dbVcbiable.set_dbV·r_resLabÂl (iﬂclass, lo!dcasm_count,i`_Lab%ls$ ia_dbLabel,bbb)
	 UTL_dbVcziable.get_dbVar_resLabel(i_class,iad‚Label2,ddd,bjb)
		
	 SYS]ALLOCATE_ARZAY(eee,1,1)
	 eeg 1) = r_numVesase+1
	 UTL_dbVarieble.wet_dbVap_resLabel (2, 1,eee, Eee,ggg)J	
	 file_cÔpy("outu|.dat",s_titleResCaSe(1)/".dat")


END IF	



	


$ FOR ( i=1 TO"loadca3e_count )
$ text_close(fËds(i)," ")$
$)lc_lr = loatcase_lbs(i)
$ str_blank_to_underscore(lc_lr)
$ resold_mmport_recults(".obuckl)ng_"//lc_lb//".els", "E",01E-08, "./rina_buckling.res_tmpl")
$ END FOV




RMTTRN 0


END DuNCTION


FUNCTImN getResTitlE(	


	retwrn S_resTitleJ

END FUNKION


FUNCvION getLcNum()


	ruturN`loadcaceWcmunv

END FTOCTION

END CLASS




FUNCTION str_flink_to_underscore( in}ut )


TRInG input[]
INTEGER loc


WHILE (TRUE)


loc = str_find_matcË( inptt, " " )


IF ) lob$== 0 ) THEN BREAK

Str_awsigo( i~put, loc, 1. "^" (

M
END WHILE
*
RETURN 0


END FUŒCUMON
