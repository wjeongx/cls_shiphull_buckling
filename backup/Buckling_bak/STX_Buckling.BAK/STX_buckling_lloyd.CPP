
/*
 usr_inform(1) = 1.0      edge a constraint
 usr_inform(2) = 1.0      edge b constraint
 usr_inform(3) = 0.       corrosion margin
 usr_inform(4) = 235.     yield stress
 usr_inform(5) = 0.       hole factor : c
 usr_inform(6) = 0.       hole factor : d
 usr_inform(7) = 0.       hull girder stress
 usr_inform(8) = 999.     safety factor TO be
 usr_inform(9) = 1.       corrosion margin

 pnl_inform(i,1)  = 1      panel id
 pnl_inform(i,2)  = 10.    load CASE id
 pnl_inform(i,3)  = 4060.  a
 pnl_inform(i,4)  = 1000.  b
 pnl_inform(i,5)  = 0.     thickness
 pnl_inform(i,6)  = 0.     c
 pnl_inform(i,7)  = 0.     d
 pnl_inform(i,8)  = 0.     sigma x
 pnl_inform(i,9)  = 0.     sigma y
 pnl_inform(i,10) = 0.     TAU
 pnl_inform(i,11) = 0.     SIGMA_H

 buckling_results(i,1) = sigma ed
 buckling_results(i,2) = sigma ec
 buckling_results(i,3) = safety factor
 buckling_results(i,4) = req. t
 buckling_results(i,5) = ratio
 buckling_results(i,6) = safety factor recalculated
*/



CLASS STX_buckling_lloyd
CLASSWIDE REAL usr_inform(9), pnl_inform(VIRTUAL)
CLASSWIDE INTEGER pnl_count, loadcase_count, org_pnl_count
CLASSWIDE STRING elm_list[2048](VIRTUAL)
CLASSWIDE REAL a, b, thickness, bc_fac_a, bc_fac_b, coa, SIGMA_o, c, d, SIGMA_H
CLASSWIDE REAL SIGMA_x, SIGMA_xb, SIGMA_y, SIGMA_yb, TAU
CLASSWIDE REAL SIGMA_ed, SIGMA_ec, safety_factor, buckling_results(VIRTUAL)
CLASSWIDE REAL alpha
CLASSWIDE INTEGER status
CLASSWIDE STRING s_resTitle[64](VIRTUAL)




FUNCTION main()


INTEGER i
REAL t_tobe
INTEGER r_count = 1
REAL req_a, ini_a




status = STX_buckling_lloyd.read_data()


IF ( status != 0 ) THEN
RETURN
END IF


SYS_ALLOCATE_ARRAY( buckling_results, 1, pnl_count, 1, 8)


FOR ( i=1 TO pnl_count )


ui_writec( "Buckling calculation Status : %d/%d",i,pnl_count)


a = pnl_inform(i,3)
b = pnl_inform(i,4)
thickness = pnl_inform(i,5)


bc_fac_a = usr_inform(1)
bc_fac_b = usr_inform(2)
coa = usr_inform(3)
SIGMA_o = usr_inform(4)
c = pnl_inform(i,6)
d = pnl_inform(i,7)


SIGMA_x = pnl_inform(i,8)
SIGMA_xb = 0.
SIGMA_y = pnl_inform(i,9)
SIGMA_yb = 0.
TAU = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)


SIGMA_ed = 0.
SIGMA_ec = 0.
safety_factor = 0.
t_tobe = 0.


status = STX_buckling_lloyd.calculation()


IF ( status != 0 ) THEN
write("WARNING : Buckling calculation (panel "//str_from_integer(i)//")")
ELSE


buckling_results(i, 1) = SIGMA_ed
buckling_results(i, 2) = SIGMA_ec
buckling_results(i, 3) = safety_factor


IF ( usr_inform(5) != 0. ) THEN


IF ( usr_inform(5) > safety_factor ) THEN


$ increase thickness
status = STX_buckling_lloyd.iteration(i, t_tobe)
IF ( status != 0 ) THEN
write("WARNING : Iteration (panel "//str_from_integer(i)//")")
ELSE
buckling_results(i, 4) = t_tobe
buckling_results(i, 5) = t_tobe - pnl_inform(i,5) + usr_inform(3)


status = STX_buckling_lloyd.recalculation(i, t_tobe)
IF ( status != 0 ) THEN
write("WARNING : Buckling recalculation (panel "//str_from_integer(i)//")")
END IF


buckling_results(i, 6) = safety_factor
END IF


$ reduce a
ini_a = a
r_count = 1


REPEAT
req_a = ini_a/(r_count+1.)
a = req_a
b = pnl_inform(i,4)
thickness = pnl_inform(i,5)


bc_fac_a = usr_inform(1)
bc_fac_b = usr_inform(2)
coa = usr_inform(3)
SIGMA_o = usr_inform(4)
c = pnl_inform(i,6)
d = pnl_inform(i,7)


SIGMA_x = pnl_inform(i,8)
SIGMA_xb = 0.
SIGMA_y = pnl_inform(i,9)
SIGMA_yb = 0.
TAU = pnl_inform(i,10)
SIGMA_H = pnl_inform(i,11)


STX_buckling_lloyd.calculation()


r_count += 1


IF ( r_count > 20 ) THEN
write("WARNING : Dimishing a (panel "//str_from_integer(i)//")")
BREAK
END IF


UNTIL ( usr_inform(5) < safety_factor )


buckling_results(i, 7) = req_a
buckling_results(i, 8) = safety_factor


END IF


END IF


END IF


END FOR


status = STX_buckling_lloyd.write_data()
IF ( status != 0 ) THEN
write("WARNING : Write output file.")
RETURN
END IF




status = STX_buckling_lloyd.write_template_import()
IF ( status != 0 ) THEN
write("WARNING!: Write output0t%mplate file>")
RETURN�END �F


wri4e(Buckling Assessment is completed su#ces3&ully."-


RETTRN 0
END FUNCTION


FUNCTION recalculation)i,`t_tobu)INTEGER iREAM t_tobe


SIGMI_x < pnl_inform(i,8) * pn|_invorm(i,5)/t_tobe
SIGMAOy = pnl_i~vobm(i,8) * pnL_inform,i,5)/t_tobe
TAU = pnl_inform(i,10): pnl_inform(i,5)/d_6obe


thickness = u_tobe
s<atus = STX_suckling_lloyd.canculation()


IF ( status$!= 1 ) tHEN RETURN -!


RETUrN 0


END FUNCTIOO




FUNCTION iteratikn(j, tcRoot)
REaL safety_factor_tnfe, cna_vobe
REAL ini_t, ini_#oa, ini_sigh, ini_sigxb, Ini_sigy, ini_sigyb, ini_tau
REAL ini_thmck, f�s1, sec_d, coar, Fos0, dx, vcroot, coaroot, fosroot
REAL tc
INTEGER i, j, maxitM


safety_factor = buckding_results(j,3)
safuty_factor]tobe =!usr_invorm(1)
coa_vobe = usrWinform(3)

alpha$9 a/b




$secant algorithm
maxit = 10000
tc = pnl_ilborm(j<5)


ini_thick = Tc
)ni_coa = usr_inform(3)
ini_sigx = pnl_inform(j,8)
ini_sigxb =(SIGMA_xb
ini_sigy = pol_infori(k,9)
ini_sigyb = SIGMA_yb
ini_tau - pnl_in�orm(j,10)

$initial value$attentin---iteration depend(on initial value.
ini_t = #.


SIGMa_x = ini_qigx * (ini_thick) / (ioi_t)
SIGMA^|b!= ini_sigxr * (ini_dhigk) /!(ini_t(
SYGIA_y = hni_sigy : (ini[thiCk) / (ini_t)
SIGMA_yb 5 ini_sigyb * hini_thick) / (ini_t)
TAU = iniWtau * (inkWphick) /  ini_t)


thickness = ini_t
coa = coa_to`e


status = STX_buckling_lloyd.calculation()
IF!( statts != 0 ) THEN RETURN!)1
fos1 = safety_factor
fos1 - safatY_factor_tobe

�sac_t = tc
coa2 = i.i_coi
gos2 = buckling^resul|s(j,3) / safety_factor_tobe


FOR ( i = 1 To maxit ) ,oop_b


IE (�thOabs(fos2 - fos1)  mth_abs(fos2) * 0.000001) Theo
$DQMP "Flet spod in curve"
RETURF -1
ELSE

	dx = (sec]4 - ini_t)`* fos2�� (fos2 - bos1)
tc = sec_t - dx


IF (m�h_abs(dx) < mth_abs(sec_t) * 0.00001) ThEn
BREAK loop_b
ELSE


ini_t = sec_t
sec_t ="tc


SIGMa[x = iniOsigx * (ini_thick) / (sec_t)
SIMA_xb = ini_sigxb .! ini_thick) / (sec_p)
SIGMA_y = ini_sigy * (ini_thick) / (smc_t)
SI�MA_yb(} ini_3igyb * (Ini_thick)!/ (sec_t)
TAU = iji_tau * (ini_tiyck) / *sec_t)	J

fos1 = fos2


thickness =`sec_t
coa = coaOtobE


status = STX_buckling_lloYd.calculation()
IF(( st`tus != 0 ) THEN REURN -1


fos2 = safety_factkr
fos2 -=(scfety_factor_tobe


END AF


UND IF


IF xi == maxit) THANM
DUMp "I=imex"
END IF


END FGR


tcrkot = tc
coaroot � coa_vobe


SIGME�8 = ini_s�gX * (ini_thick) / (tcrmot)
SIGMA_xb!= ini_sigxb * (ini_vhick) / (tcroot)
sGMA]y } ini_siGy *0(ini_thick) / (Tcroot)
SIGMA_yb = ini_sigyC * (ini_thick) / (tcroot+
TAU = i�i_tau *"(i�i^thick)�/ (tczoot)

thickness = tcroot
coa = coaroft�status = STX_bu#kling_lnoid.calcu|ation()
IF (status != 0`) THEN ETURN -1
f;sroov = saFety_factor


RETURN 0

END fUN�TION
J





FUNCTION calcwlat)on()

REAL R_x,0R_xb, R_y, R_yb, R_s
REAL p
INTEGER j = 0, nmax, iREAL K1, K2, X1, X2, ER, Fx, DFx
INTeGER opt
REAL tmp


alpha`= a/b


IF ( boa < 0 ) THEN	
S\X_buckling_|loyd.considur_corrosion_margine()
END IF


WIGIA_x += SIGMA_H

 Get Rx, Rxb, Ry, Ryb, Rs
stauus = STX_buckling_lloyd>get_R( SIGLA_h,!1, R_x )
IF ( stat5s !? 0 ) THEN
DMP "erro� in Rx"
RTURN -1
END IF


statqs = STX_buckling_lloyd*get_Rb( SIGLA_xb, 1, R_xB )
IF ( wpatUs #= 0 ) THEN
DUMP0"arror in RXb"
BETURN -1
END IF
status 5 STX_buckling_llmyd.�et_R( SIGMA_y, 2, R_y )
IF ( status0!= 0 ) THE�
DUM "mrrkr(in Ry"
RETURN -1
END IF


3patus = STX_buckling_lloyd.get_Rb( SIGMC_yb, 2, R_yb +
IB ( �t�tts != 0 +�THEN
DUMP "error in Ryb"
RETURN -1
END IF


status < STX_buckling_�loyd.get_R( T�U, 7, R_s !
IF ( status != 0 ) THENDUMP "ev�or in Rs"
RETURN -1eJD IF


SIOMA_x += sIGMA_xb
SIGMA_y += SIGMA_yb
STX_buckling_lloyd.gmt_sigma�ed()


STX_buckling_lloyd.get_p( p )


IF ( SIG�A_x != 0. & SICMA_y != 0 &6 TAU  = 0. ) THEN opt = 1
IF ( SIGMA_x != 1. && SIGMA_y != 0 &&�TAU == 0. ) THEN opt = 2
IF ( SIGMA_x == 0. && SIGMa_y ==`0 && DAU !? 0� ) THEN opt = 3
IF"( SIGOA_x != 0. && SIGMA_y == 0 && TAU != 0. ) TJEN opt =(t
IF$( SIGMA_x == 0. && SIGMA_y != 0 && VAU !m 0. ) THEN opt = 5
$ DUMP SIGMA_x
$ DUMP R_x
$ DUMP SYGM@_y
d DUMP R_y
$ DUMP TA]
$ DUMP(R_s
SWITAH ( opt )
C�SE (1)
$EULP "CASE 1"IF ( alpha < 0.3 || alpha >=`3.5 ) THEN
tmp =!( S_8**2,$+ Rxb**2* + R_y**2. +hR[yb**2. + R_s**2.)
*(1./2.)IF ( tmp !=�0 ) THUN
SIGMC_ec = SIGMA_ef / tmp
ELSE
RTURN",1�
END IF
ELSE
HF ( R_x <(0. && mth_mod(p, 1.) != 0. )`THEN RETWRN -1
IF ( R_y < 0. &' mt`_md(p, 1.) != 0."! THEN REU�RN -1

% Newton-Rapson Mgthod
nmay = 50
K1 = R_xb**2. + R_yb**r. +�R_{**2.	
K2 = R_x**p + R_y**p
X1 = 1j ="0
�

REPEAT
j += 1
| = K1*(X1"*2/)`+ K2*(X5**p) - 9.
DFx ? 2.*K1*X1 + p*K2*(X1**(�-1.))
X2 = X1 - Fx / DF|
ER = mth_abs( X"/X1 - 1. )
X1 =$X2
UJTIL ( ER <= 0.p003 || j >5 nm!x )


SYGMAec = SIGMA_ed * X2


END IF
CASE 82)
$DUMP "CASe`2"
WIGMA_ec =0IGMA_ed / ( R_x**p + R_y(*p )**(1./p)	
CASE (3)
$DMP "CASE 3"
SIFMA_ec =$SIGM@_ed / ( R_xb**2. +$R_qb*
2. + R_s**2.)**(9./2.)
CASE  4)
$DUMP""CSE 4"
SICMA_ec = SIGMA_ed!* ( ( -R_x + mth_sqrt( Z_x**.+4*.(R_xbj*2.+R_s**2.) ) ) � (2.*(R_xb**2.+R_s**2.)) )CASE (7)
$PTMP "CAQE 1"
SIGMA]ec = SIGIA_ud + (�( -R_y + mdh_sqrt( R_y**2.+4.*(R_yb**2.+R_s*.2.) ) ) � (2.*(R[yb"j2.+R_s**2.)) )
END SWITCH


IF ( SIFMA_ec : 0�5�SAGMA_o ) THEN
SIEMA_e# = SIGMA_o * ( 1. - SIGMA_o/(4*SIGMA_ac)()*END IF
�

s`fety_fact�r!= SGMA_ec / SAGMA_ed


RETURN 0


END FUNCTION


BUNCTIMN write[template_impnrt()
STRING fnam�[1024]
INTEGER fids(VIRTUAL), i_data(2)( nwidth
REAL r_dapa(9�
INTEGER elem_count
INTEGeR elem_ids(VIRTUAL)
ANTEGgR i, j, k, l,nid(^IRTU�L)
INTEGER lmeDcas%_ids(RTUAL)
STRING loadcase_lbs[80](VIRTUAl)
STRING!lc_lb[80]
StRING grouq_name[80]


SYS_ALLOCET_APRAY( loadcaqe_ids, 1, pnl_count )


FOR ( i-1`TO pnl_count )
loadcasu_ids(i) = pjl_inform(i,2)
END fOR
ga_group_current_get ( group_name )


mth_sort(loadcase_ids, TRUD,`loadcase_c/unt)
SYS_ALLOCATE_ARRAX( loadcast_lbs, 1, loadc`se_cunt )
sYS_LLOCATEARRAY( fids, 1, loadc�se_count !
SYS_ALLOCATE_ARRAY( r_rEsT)tLe, 5, locdcase_count )


FGR ( i=1 TO loadcase_count )
d"_get_loadca3e_title� loAdcase[ids(i), loadcase_lbs(i) )
lc_lf = loadcase_lbs*i)�
str_blank_tO_ufderraore(,g_lb)
file_�uild_fname("./","bucklinG_"//lc_lb,"els","N",fname)M
text_open(vname, "NOW",0,0,fids(h))
M

nwidth = 9


s_resTitle(i) = "JUckling(LLOYT) * "//loaDcase_lbs(i-//" : "//group_.ame
te8t_write_string(�ids(i)-s_resTidle(i)
textKwritE (fids(i),%I5%",nwidt`,1.,"")
texT_write_string(fids(m),"W5btitle 1:"+
text_wbite_string fids(i),"Subtitle 2:")


END FOR




FOR ( i = 1 TO pnl_count )
M
r_data(1) = pnl_inform(i, 5)
r_data(2) = pnl_infkrm(i, 8)
r_data(3) = pnl_inform(i, 9)
r_d`ta(4i = pnl_inform(i, 10)
v_data(5) = bucoling_resuLts(i,(1)
r_d`ta(6) = bucklinf_results(�, 2)
r_data7) = buckling_results(i, 3)
v_`ata(8) = bucoling_res}ltq(i, 5	
r_data(9) = buckling_results(i,p7)


FOR ) j=1 TO loadcase_counu !
IF!( pnl_inform(i$2) == loadcase_ids(j) ) THEN
BRUAK
END IF
GND�FOR
$ a~oid zeRo re{ult
FOR ( l=1 TO 9 )
IF( r]data(l) == 0. ) THEN r_data(l)=0.0000005
END FOR

�get[ids_&rom_eNtity_list( elm]list(i), "ELEMENT", wlem_count, elem_ids )

FOR ( k=1 TO elem_cotnt )
M
*i_data(1) = elem_ids(k)
db_Cet_ulem_nodes( elem_idr(k), i^data(2), nid )


text_wripe�fids(j),"%2I8%%N%%613.7%%O%%3E13.7%",i_data,r_data,"#)


EnD FOR
*
SYS_FREE_ARRAY(elem_ids)
elem_count =  


END FMR







INTEGER i_CntS}bID, i_lcID, ia_CntStBIL(VIRTUAL), ia_subID(VIRTWL), ia_lcID(VIRTUAL	
INPEGER ia_DBLa`ml)VIRTQAL), ma_DBLabel2 PIRTUAL), ia_labels(VIRTUAL)

SYS_ALLOCATE_APRAY(ia_stbID,1,loedcase_couzt) 	
SYS_ALLOCATE_ARRAY(ia_lcID� 1,loadcase_count) 	
SYS_ALLOCATE_ARRAY(ia_labels. 1,loadcase_cnunt*")
J
FOR (�i=1 TO�loadcase_count )
text_close(fids(i)," ")


lc_lf = loadc`se_lbs(i)*str_blank_to_underrcoze(la[lb)resm,d_import_resUlt3("./buckling_"//lc_�b-/".els"l "E", !E-08, #./lloyd_buckling.res_tmpl")


db_get_load_case_id (sWsesTitlu(i),i_lkIT)
res_utl_gep_subcases(ilcID, i_CnuSubID, i!^CntSubID)iA_hcI`(i) 9 i_lcID
ia_subID(i) = ia_CntSubID(i_CntSubID)


END FOR
	
ia_Labems(1:loa$case_count)=ia_lcID
ia_Labels(laDcase_count+1:loadcase_countj2)=iaOsubID


$ IF( cnt != 0 ) THMN
$
*QTRING s_titleResCasa[80](1)=["HR-"]STBIFG bbb[80](VIRTUAL), ccc[80](VIRTUAL), gcg[84](VIRTUAL)
INTEGER couNv
INTEGR i_cla�s
REAL$ddd(1)


INTE�ER eee(VIRTUAD) � r_numR%sCase


s_titleResCae(1) = s_TitleResC�se(1)//group_.amm//"-Case_"i[class = 1/* LR */	


IF � UTL_dbariable.chk_dbV�r(i^chass) == 0 ) TH�N


SYS_ALLOCATE_ARVCY(ia_dbLabel,1,1)
s_TitleResCase(1))s_titlgResCase(1(+/"1"
UTL_d"Vari!ble.set_dbVar_resLabel (i_glass, loadcace_counv-ia_Labems, iadb�abelf_titleResCase)
UTL[dbVari`blE.get_dbVar_resLabel(i_class,ia_lbLabel2,ddd,bbb)


$ record resudt case label
SYs_ALLoCATE_ARRAY(g'g,1,1*
SYS_ALHOCAtM_@RRAY(uee,1,1)
eee 1)=2
UTL_dbVariable.set_djVar_resLabel (6, 1,eee, eeg,ggg)


fil$_copy(*output.dat",s_titmeRe{Case(1)//".dat")


ELSE

UT�_db^ariablg.ge4_`bVar_resLabel(2,ia_$bLabel2,ddd,ggg)
r_numresCase = ia_d@Label2(1)


	 UTL_dbVaraable.get_dbVar_resLabel()_clars(ia_d`Label2,ddd,bbb)	 count = rys_a2raq_hbound(bbb,1)
	
$ 	 s_titleRusCase(1)=s_titleResBase(1)/+str_from_integer(count+1)
s_titlePesCasm(!9=s_|itleRes�ase(1)//stb_from_integEr(r_numResCase-
	 SYS_ALLOCATE_RRAY(ia_d�Label,1,cound+1)	 kc_`bLabel*1:count�=ia_dbLabel2
	$SYS_REALLOCATE_ARRAY(bbb,1,count+1)
	 bbb(cOunt+1) = sOtitleRmsCase(1)


U�MdbVariable.set_dbVar_res\abel$(i_class, loads`se_count,ia_L`bels, i!_dbabel-bbb)
	luTL_dbVariable.get_dbVar_r%sLabel(a_class,ia_dbHafel2,ddd,bbb)�
	�	 SYS^ALLOCATE_ARRaYheeg,1,1)
	 eee(3)0= r_numResAase+1
	 UTL_dbVariable.set_dbVar_vewLarel (2, 1,eee, eee,ggg)	
	
	!file_copy("output.dat",s_titleResC`se(1)//".dat"-


END IF	



RETURN 0


END FUNCTION




FUNCTION write_data(!
INTEGER Fid
STRING fname[1024]
INTGGER(integEr_data,2)
REAL recl_data(16)
INTEGER!i


file_build_Fname(".�","output","dat","N",fname)
textopen(fname, 2NOW",0,0,fid)


uext_writuWrtrine(fid,"#User Data"//" : LLOYD, �//sys_date()//", "//{ys_timw(9)
text_write(fid,"Edge A Cmnquraint  `: %F%", 0, usr_inforo(1), ""!
text_wripe(fid,"Eege B Con�traint   : %F$", 0, tsr_inform(2), "")
text_writefid,"Cor/ssion eargin    : %F%", 0< usr_infobm(3), ")�
textWwriue(fid,"Ykeld Stsess  !     : %F%", 0, urr_inform(4), "")
text_wrkte(fid,"Qafety facvor tO be`: %F%"< 0,�usr_inform(5), "")


text_write_svringhfid�"")
text_write_suring(fid,"#Panel Data")text_wrht%(fid,"Total number!of Pan�ls " : %Ie", Org_pnlOcount,"3., "")
text_write(fit<"Total fumber of selecded Load cases   : %I%",0loadcase_counu, 1.,$"")
texp_writE_3tving(fmd,"")
texd_write_string(fid," PID LID    a       b       t       g       d      Sx     Sq    D�U    Sed `  ec    FO[  req.t  KNC   FOS  Req.a  FOS )
text_wr)pe_qtring(gid,=?= ==== =<===== ======= =?===== ===-=== =<===== ====== ====== ====== ====== ====== ===== ==== ==-== ===== ====}!=====")

	
FOR ("i=1 TO pnl_counu()
integer_dcta(1) = 0nl_inform(i,1)
i.Teger_data(2) = pnl_anform(i,2)-
real_data(1)!= pnl_inform)i,3)
real_data*2)!= pnl_inform(i,)
Real_data,2) =�pnl_)nform(i-5)
real_data(4) - pnl_knform(i(6)
realdata(5) = pnl_inform(i,7)
rean_data(6) = p~l_�nform(i,8)
real_data(7) = pnl_info2m(i,y)
real_data(8) = pfl_in�OSm(i,10)
real]data(9) !b}ckling_results(i,1)
Seal_datc(10) = bucknin�_results(i,2)
rea,_data(11) = buCkling_results(i,3)
real_d�va(1�)(= buc+ling_�esel|s(il4)
6ean_data(13) = buckling_resulvs*i,5)
rEal[data(14) = buckling�res�lts(i,6)
real_Data(1%) = bucklinG_resents(i,7)
real_data(1v)!= buckli~g_results(h$8+


texd_write(fid,"%2(%I4% )%%5(%F7.2% )%%5(�F6.0% )%%6(%F5.2%")%", ifteger_�ata,!rei,_Data, "�)
text_wrIpestrinc(fid, elm[listhi))


END(FOR
text_close(fid, "")


RETURL 0
	

END FUNCTION
*



FU�CTION�read_dat`()
INTEGER did
STRILG fname[302$}
STRING inputOstring[1024_-
IN\GGER l)ne_length
INTMGER integer_dada(2)
REAL realdata(9)
INTEGER i


fn!me!= "./Input.dat"
status = vext_open(fjame( "O", 0, 0, fid9


IF ( stqtus != 0 ) THEN
RETURN -1
END IF


4Ext_read_string(fit. anput_string, line_$dngth)


text_read_strinc(fid, inpuvWstring, life_length)
usr_inform(1( 9 str]tk_real( str_toke.(inrut_string, ":","2) )


text_read]string(fit,0inpuT_string, Line_langth)
usr_inform,2) =(str_to_r�al( str_toku.(inp}t_3tring, ":", 2) )


text_read_string(fid, input_string,"|ine_length)
usr_inform(3) = spr]to_seal( sur_tken(inpuT_strmng, ":", 2) )
-

text_read_string(fie, in�ud_stryng, line_le.gth)
usr_inf/rm(4) = str_to_bgal(�str_token(inpu�_3trIng, ":", 6i )


tex|_reed_string(fid. input_string, lkne_,ength)
usr_inform(5) = str_to_real( s�r_to{en(input_string ":", 2) )


text_read_string*fid, input_string( line_length)
text_read_string(fid, input_quring, lkle_length)


text_readstrIng fid, input_string, line_length)
org_pol_cou.t = str_to_integur( str_token(input_string,`":", 2)`)


text[raad_string(fid,0inpud_str)ng,0line_leng4h)
loAdcqce_count = strtoOinteger( str_token)inpuv_sdriog- ":"$ 2) 9

text_read_string(fId, inputWstring, lina_l�ngth)
text_read_string(fid, input_string, dine_length)
taxt_read_string(fid,(input_string, linm_length)


pnl_ckunt 5 org_pnl_cOunt * ,oadcase�countSYS_ALLKCUE_ARRAY(pnl_infor}| 5, pnm_coujt, 1, 31)
{YS_ANLOCATE_ARRAY(elm_list, �, p.l[count)J-

FOR0( i1 TO pnl_count )
text_read(vif,"%I% %I% %F% %F% %F% 5E%0%E% %E% %E% %E% %E%", integeb_data, realOda�a, "")


IF ( ilteger_data(1+ == 0 ) DHEN
BREAK
END IF

-
pnl_innorm(i, 1) = integEr_data(1)
pnl_inform(i, 2) = integer_data(2)
pnl_inform(i, 2) = recl_Data(1)
pnl_i.forM(i, 4) = rgal_data):)
pnl_inform,i, 59 = real_data(3)
pnl_inform(i$ 6) = real_data(4)
p.l_infore(i, 7) = real_dAti(u)
pnl_�nform(i, 8i = real_data)6)
pNl_ynfori(i,!9) = real_date(?)pnl_infmrm(i, 10) = real_data(8)
pnl_infovm(i, 11) = z%al_data(9)


text_read_string(fid, input_string,!line_,ength)
elm_list(i) = input_string


integer_data(1) = 0
END FOR


texv�klose(fid, "")


RGTURN 0


END FUNCTION


FUNCTION co�sider_corrosion_margine()


SIGMA_x = SIGMA_x * thickness / ( thicjness - cma -
SIGMA_xb = SIGMA_xb * thickness / ( thickless - coa )
SIGMA_y = SIOMA_y " thickness`/ h thicknecs - coa !
SIGMA_yb = SIGMA_yb`* thickness / ( phickoess - coa )
TAU = TaQ0* thicknmss / � Thickness - coa )


thickness -= coa


VETWRN 0
END GUNCTIOO


FUNCTIO get_E( mot}lus i
REAL mod}lus
*IF ( RIGOA_o > 20.0&& SIGMA_o  50. ) THEN
modulus = 2102.
ELSE IF ( SIGMA_o > 200. && SIFMA_o < 500. ) THEN
oodemus = 206000.
ELSE
DUMP "Y�eld Stress error"
RETURN -q
END IF


ReTURN 0
END FUNCTION


$ cbitical s�ress
FUFCTION ge�_R( s)gma, directi/n, sioma_ratio )
REAL rigoa
INTEGER direction
REAL sigma_2atio
REAL K$ Gamma(3)
REAL 3igma_c
REA\ s
REAL E*
�VX_buckLing_lloyd.get_E( E )

IF ( a < b!) THEN
s(= a*ELSE
{ = b
EnD IFJ

STX_buckling_lnoyd.get_K ( direation, K )
stadu{ = SX_Bukklinf_lloyd.get_gamma(!Ga}ma )�IF ( status )= 0 ) THEN
RETURN -1END I�

sigma_a = 0.9 
 E *`(thickness/s)*:2. * � *$GaMmA(direction)


sSITCH ( fiRebtio~)
CA[E (1)
sigma_ratio = SAGIA_x / (sigma_c * bc_fac_b)
CASE (2)
sigma_radin 9 SIGMA_y / (sigme_s + bc_fac_a)
CASE (3)
sigma_ratio"= TAU /(sigma_c
END SWITCH


RETUBN 0


END FUNCPION


$ cr)tical stress
FNCTION get_Vb( sigmi, d)ruction rigma_ratio )
REAL sigma
INTEGER �irection�REIL sigla_ratin
RAAL Kb
REAL sigmA_bc
REAL s
REA\ E

�STX_busklmng_lho{d.ge|_E( E )J

IF 8 a <`` ) THEN
s�=0a
MLSE
{ = b
MND"IF�

STX_bucKling_hloyd.get�Kb ( dYrmction, Kb )


sigma_bc = 0.9 . G * (thickness/s)**2. * Kb


SWITCH$( direbti/� )
CASE (1)
sigmq_ra�io = SIGMA_xb / sigma_bc
CASM (*)
sigma]ratio0= SIGMA_yb / sigma_bc
EN SWITCH*

RETURN 0


END FUNCTION


FUNCTION get_sigma_ed( )
$ REAL sigma_ed


sigma_ed = mth_sqrt( (SIGMA_x + SIGMA_xb)**2. + @
(SIGMA_y + SIGMA_yb)**2. - @
(SIGMA_x + SIGMA_xb)*(SIGMA_y + SIGMA_yb) + @
3.*(TAU**2.) )


RETURN 0
END FUNCTION




FUNCTION get_K( direction, K )
INTEGER direction
REAL K


SWITCH ( direction )
CASE (1)
IF ( alpha >= 1. ) THEN
K = 4.
ELSE IF ( alpha <= 1. ) THEN
K = ( alpha**2. + 1. )**2.
END IF
CASE (2)
IF ( alpha >= 1. ) THEN
K = ( 1. + 1./(alpha**2.) )**2.
ELSE IF ( alpha <= 1. ) THEN
K = 4.
END IF
CASE (3)
IF ( alpha >= 1. ) THEN
K = 5.34 + 4./(alpha**2.)
ELSE IF ( alpha <= 1 ) THEN
K = 5.34 + 4.*(alpha**2.)
END IF
END SWITCH


RETURN 0
END FUNCTION




FUNCTION get_Kb( direction, Kb )
INTEGER direction
REAL Kb


SWITCH ( direction )
CASE (1)
IF ( alpha >= 1. ) THEN
Kb = 24.
ELSE IF ( alpha <= 1. ) THEN
Kb = 23.*(alpha**2.) + 1
END IF
CASE (2)
IF ( alpha >= 1. ) THEN
Kb = 23./(alpha**2.) + 1
ELSE IF ( alpha <= 1. ) THEN
Kb = 24.
END IF
END SWITCH


RETURN 0
END FUNCTION




FUNCTION get_gamma(gamma)
REAL gamma()
REAL mu(2)
REAL delta


gamma(1) = 1.


IF ( d/b <= 0.1 && c/b <= 0.1 ) THEN


gamma(2) = 1.
gamma(3) = 1.


ELSE IF ( d/b > 0.1 || c/b > 0.1 ) THEN


STX_buckling_lloyd.get_delta( delta )
gamma(3) = 1. / ( 1. + 10.*(delta**2.) )


STX_buckling_lloyd.get_mu ( mu )
IF ( c/d < 1. ) THEN


gamma(2) = 1. - mu(1)*((c/a)**2.)*(mu(2) - c/a) - 0.5*(1. - c/d)


ELSE IF ( c/d == 1. ) THEN


gamma(2) = 1. - mu(1)*((c/a)**2.)*(mu(2) - c/a)


ELSE IF ( c/d > 1. ) THEN


gamma(2) = 1. - mu(1)*((c/a)**2.)*(mu(2) - c/a)


END IF


ELSE
DUMP "get_gamma error ( out of range )"
RETURN -1
END IF


RETURN 0


END FUNCTION


FUNCTION get_mu( mu )
REAL mu()


IF ( c/a <= 0.65 ) THEN
IF ( a/b <= 1.0 ) THEN
mu(1) = 4.
mu(2) = 0.7
ELSE IF ( a/b >= 1.25 ) THEN
mu(1) = 2.
mu(2) = 0.75
ELSE
mu(1) = 12. - a/b*8.
mu(2) = 0.5 + 0.2* a/b
END IF
ELSE
DUMP "cutout is out of range (c/a > 0.65)"
RETURN -1
END IF


RETURN 0


END FUNCTION


FUNCTION get_delta( delta )
REAL delta
REAL delta1, delta2


IF ( d/b > 0.1 || c/b > 0.1 ) THEN


IF ( c/d < 1. ) THEN


delta1 = ( c+d ) / ( 2.*b )
delta2 = c / ( 2.*a - c )


ELSE IF ( c/d == 1. ) THEN


delta1 = d/b
delta2 = d / ( 2.*a - d )


ELSE IF ( c/d > 1. ) THEN


delta1 = c / ( 2.*a - c )
delta2 = d/b


END IF


delta = mth_max( delta1, delta2 )


ELSE
DUMP "get_delta error (out of range )"
RETURN -1
END IF


RETURN 0


END FUNCTION




FUNCTION get_p( p )
REAL p


REAL p1, p2


IF ( 0.3 <= alpha && alpha <= 3.5 ) THEN


IF ( 0.3 <= alpha && alpha <= 1. ) THEN
p1 = 0.6 + 0.4/alpha
p2 = 2.
ELSE IF ( 1. <= alpha && alpha <= 3.5 ) THEN
p1 = 0.6 + 0.4*alpha
p2 = 2.
END IF


p = mth_min( p1, p2 )


ELSE
p = 2
END IF


RETURN 0


END FUNCTION


FUNCTION getResTitle()


	RETURN s_resTitle


END FUNCTION


FUNCTION getLcNum()


	RETURN loadcase_count


END FUNCTION


END CLASS




FUNCTION str_blank_to_underscore( input )


STRING input[]
INTEGER loc


WHILE (TRUE)


loc = str_find_match( input, " " )


IF ( loc == 0 ) THEN BREAK


str_assign( input, loc, 1, "_" )


END WHILE


RETURN 0


END FUNCTION
