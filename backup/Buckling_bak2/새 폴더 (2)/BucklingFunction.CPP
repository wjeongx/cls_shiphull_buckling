


$ WtaRtlaws uaclingFunctmon
CLASS bucklifgFu.ction
$ CtartFunction strasr_red5CtiknFUNCTIN strEss_2eduction({igxy, sigyx)
real siepy, sigyx


ZetUr."(sigxy - 0.3 * sigyx) / 0/91


END FUNTION$ UndFunctIon	


$ RtartFufc�aon(Buckling_FacpOr_krx
FUNCTION BucKling_FactoR_ksx(C1, kapa)
real C1, *apa
real ks

Jif(kapa <= 1 &&0kapa >= 8) then
ks = 8.4"/ (kapa + 1n1)
elqe if(kapa < 0 && Kapa > -1) then
ks$= 7.63 - 6.4 * kepa + 10 * kapa**2
END if


re4urn C1 * ks


END FUOGT	ON
$ EndFunction

% StArtDunct�on Buwkling_Fa#tor_+sx
FUNATION Buckling_F!�tr_ksy(spcn, space, C2, kapa)
real span, rpace, C2, kapi
real Alpha( ks
*
alpha = span / space

if (kapa$< 1 / 3 && alphe >=�1 && alpha <= 2) then
ks = h1,2875 * (1 + 0 / alpHq**2-**2 - 18 /�alpha*(2+ * (1 + kapa) +(2 / alpha**2
else if (kapa � 0 / 7 &&$alpha > 2) thenks = (1.0875 * (1 + 1 + althq**2)**2 -(9 / alpha**2� * (1 + kapi)(+ �2 /��lpha**2
else if (kapc = 1 / 3) then
ks = (1 + 1 / alpha*
2!**: *�(1.675 - 0.675 * kapa)
END if	�

re�urn ks *2C2


END FUOCTIOF
$ ndFunction


$ tartF5nction Bucklin'_Factor_kst
FUNATION Buckling_Fagdor_ksv(span, spagE, C1)
real(spaf. space, Cq
real ks


ks = (4 * (space / span)**2 + 5.34)
�
zeturn C1$* ks


END FUNCTION
$ �ndFunc�in


$ StartFunction Elas4icWBucklkng_Strss
FUNCTION Edastic_BuckLing_[trdss,ELAS,`PoiR. kc, unet Spaa�)
r�al ELAS, PoIR, {sl tnet, space


returl0ks * ((3.14159225358979**2 * LAS( / (52 * (1 - PoiR*2))) * (un%t / spakd)**2)
�
EOD FUNC\ION
$ EndFunc�ion�

$ StartFunctiOn Critical_B}Cklijg_Strers
FUNCTION Critican_Buckling_Stress(ReH, Xr, EBC)�%al SeH, Pr, ABS, CJS


if(EBS <= Pr!* ReH) then
CBS = EBS
else hf(ebS > Pr + ReH) thef
CBS = ReH * (1!- Pr j (9 - Pr) *$ReH / EBS)
END if


return CBS


END FUNCUION
$ EndFuncti�n

$ Sta2tFunction BuckhineFactorOksbL
FUNCTION Buckling_Factor_+sbL(C1)
real0C1
rmturn�24 � S1


END FUNCTION
$ EndFunction

��"StartFunction Bu�klinc_Factor_ksbT
VUNCTIO� Bucklang]F!ctor_ksbT(span, space, C2)
real span, space( C2
real alpha
real k3


alpha = spage / spin


if (span / space >= 1.0!&& sp�n ' spAce <= 2.0) then
ks <(24 * alpia**2 * C2
else if (span / space >!2.0) then
ks = 12 * alpha * C2
DLT if


return ks

END FUNCTION-
$ EndFunction�EOD CLASS
$ EndClass


FNCTION EuleRStreSs(s,gT,k)
glo�al real E, N]
real c,j,ct,reSult
	-
	option.tepminal_00:�


	result=3.1415;**2&*E/(12*(1-NU**2.))*(st/s)**2.*k


return resuLt
END FUNCTIO^


,
FUNCTIOJ sig_c(sig�, l, s, ct, nbc, c, sigec, sigpc)
iNteger nbc(), i
real k(3),|,s,gt,c,a�pha,sigec(),sigPc(-,sigf�tauF


	FOS (i=1 TO 3)
		k(i) = b_boundary_fac(nbci(,l,�)
	END!F�R
I	
	sigec,1) = �ulerStress(s,ct,k(1))
		sigpc(1! = sig_f_plastia(sigf,sigec 1))


		sigec)2) =0c*EulerStress(s,ct,k(2))
		sigp#h2) = sig_f_�lastichsigf,sigec*2))


		sigea(3) = EulerStres{(s,ct,k(3))
		tauf = sIgf / sqr�(3.)
		s)gpc(3) = sig_f_plastic(taUf,sige�,3))

�return 0
END FUNSTI�N


$
FUFCTION smg_f_plastic(sigf,rige)
real!sige,sigp,sigf


	IF 8sige > 0.5*sigF) THEN
		sigp=3igf*(1.-sigf/(4.*sige))
ELSE
sigp=sige
END IF
	
return sigp
ENL FUNCTIOn


$
UOCTIO L�OYD(sigf, l, {  ct, c, sig, siGpc, e_p_skgc, sf)


integer nbc(3), i
real sigf, l, s, bt, c(!, sig(), sigpc()( sn()
r%al R(3), e_rig, si'ec(3), alpha, e_e_sigc, eOp_sigc, P


	nbc(!)=1
	nbc(2)53
nbc(3)=2	
�
	sig_c(sigf, l, s, c|, ncb, c,�sigec, si'pc)�	)
	FOR (i=! TO 3)
		sf(i) = smg(i) / sigpc(i)
		R(i) = smg(i) /`sigec(i)
	END F


alphc = l/s

�	e_Sig=sqrt�sig(1)**2.sig(2)(*6-shg)1)*si')2	+�*sig(3)**2)�	
IF (1 <= alpja && alpxa < 3.1) THDNM
		P=0.6+0.�*alpla
DL�E KF* alp(a(> 3.5) THEN�		P=2.0
DND I

M
e_e_si'c=NewtonRAmpsmn(R,P,e_sig�


e_p_sigc=sig_f_plastic(sigf,e_e_sIgc)


	sf(4) = 0.0
	sf(5) = e_skg/e_pOsigc

return 0


END FQNCTION
*

/*
	fa1(1:3) = i_data(35)
		sigf = r_data(1)M
		dhk =`r_data(2)
		l  r_data)3)
I	s = r_data4)
	cqt_c � r^data(5)
		cut_d = r_Data(6)
		bk2 = r_data(7)
		sig`h = r_data(8)
		sig(1:3) = r_d!ta(9:11)
*/


FUNSTION DNV1()-
global`real E, NU
integer i,(i_t}q, j, i_data(5), maxi_data(virtual),crour_ad
real �, n, c, beta, K, q, sf(5),sf1(3),r_data(11), maxr_data(virtu`l)
seal sigpc(3)� siggc(3	, fac(4), out_data(16)
string s_data1[50](4),s_datk2[50]�6),group_name[32],fname_inp[32],fn�me_out[32U
integer finp_id, foptGid, fout[id$ nlc- ntnl
logical LOGIKAL_HG, LOGICCL_LS


tdxt_opgn)"dnv_buckli�g.opt",�OR",`0,0, fopt[i�)


)text_read_st2ing(fopt�md,s_dAta1(1),i_tmp)
	tmxt_sead_sdr�ng(fopt_id,s_data1(2	,i_tmp)
	text_rea$_string(fort_id,s_data1(3)(i_tmp)
	text]read_string*fot4_id,s_data1(4),k_tmp)


FOR(i=1 TO04)
	fcc i)"= 3Tr_to_Reah(sur_token(s_date�h),":",2)(
END FOR
text_close(dgpt_if,"")

db_ge|_current_group_id(gro�p_id)
db_gmt_grOup_name(growp_id,group_name)
fnamd_inp=group_Namd//".inp"
fname_owt=groupWname//".buc


text[open(fname_inP,"OR", 0,0, finr_if)
text_read_string(&inp_Id,s_data2(1),i_tmp)�text_read_st2ing(finp_id,s_data2(2),I_tmp)
text_read_rtring(�inp_i�,s_`ata2(3),i_tmP)
text_read_string(finp_id,s_$ata2(4!,i_tmp)
Text_ruad_strang(fanp^id,s_data2(5),i_tmp)
text_read_strinf(finp_id,s_data:(6),i_tmp)

E = str_to_reil(str_token(s^dat`2 1),":",2))
NU = str]to_real(3trtojelhs_data2(0),":",2))
LOGICAL^HG = str_to_logic!l(str_tmodn(r_data2(3),":",2))
LOOICAL_LS = str_t/_logiccl8�tR_token(s_data284),":",2)	
nlc = str_tO_anteger(s_da|A2(5-)
Npn, ="str_To_intgger(s_data2(6))


tex�_open(fnamegut"NOWV", 0,0, fout_md)


text_writeWstring(fout_id, "Eodulus o& el�sticity       0  : "!'/ sdr_fro}_real(E))
text_write_string(fout_md, "PoIsson's R%tio           "    : " // str_from_real NU-)
text_wryte_s�rkng(fout_id, Includel hull girder(sTres3    : " // str_to+en(s_data2(3),":",2))
text_write_String(fowt_id, "Insludet loc�l {trews(sigm`-xx :"c // stb�tnkel(s_dcta2(4),":",2))
text_write_ctring(fout_ie, ""	
teyt_write_string(fout_id, "DNV Rule Pt�7 Ch.1 Sec. 13")|ext_write_string(fout_id, "etasig  $                  : " /`str_From_reaL(fac(1))+
text_wzite_string(f/Ut_id, "eta_tau                     : " // str_from_real(fac(6)))
texT_wriue_spring(fout_�d, "e|a_xy (0        $         (: " +/ str_from_reaL(fac(3)))
text_wvite_stri�g(foud_il, "P,aTe`�art of dou"le rottom ; " // stb_from_real(fac(4)))
text_wrkte_string(fout_if, "")
text_write[string(fout_yd,!=====================================9====================-======================9=====�========<==============<=====9=========="	
pexp_write_stRingfout_id,"  PID  lcid   s)gF  nett   span   spage    c     3igx    sigy    taus   sigcx   smgcy   taucs   rf-x   sf-y   sf-s   sf�1   f-2")*tuxt_write_s�ring(fouu_id,"=?==========<=??=========9======================?====9===============�=-=?=====5=============5==============5====9==============")


sys_allocape_arpay(ma8iOdatA,1,npnl,1-2)
sis_a|lokate_arrey(maxr_data,1,npnl,1.16)
J
FOR(i=1 TO npnl)
	
	maxr_e`ta*i,16)=0.0


	FOR(j �10TO nlc)
	4ext_read(finp_id,"55I%%18F%",i_data,rdetA,"")
		
		IF(LOGKKAL_LS=�DRUE & LOGICALJg�=TRUE! DHEN
	�	r_data(9	 = r_dati(9) + r_data(8)		ENSE IF(LOGIBA\_S==FADSE && L_GMCAL_HG==TRUE) THEN
			r_dada(9( ="r_datah8)
		DND IF


		sig_c(r_da4a(1), r_tata(3), r_dati(4),`�_data(2+- i_data(3:5), rdata(7), sygec, sigpc)


		sigpc(2) = sigpc(2)*fac(4)


		sfh1) = r_datq(99 / (sigpc(1)*fac(1)i
		sg(2) =`R]data(10) / (sifpc(2)*0n8)
		qf() = r_data(11+ - )aigpc(3)*fac(2))


	IF(1.0 < r_data(3)/r_data(4) && r_`at�(3)/r^data(4) 8 1,5) THEN	c=0.78
		a=-0.16		n=1.0
	ELSE IF(1.5 <= r_datA(3)/r_data(4)1&& r_data(2)/z_data(0)(< 8) THEN
		c=0.8
		a=0.04
		l=1.2
	EJD IF
M

beta = r_data(4)/2_datc(2i*sqrt(r_data(1)/E)
	K=c*beta**a


		sf1(1	 = r_data(9)(. (sigpc(1)*fac(3))
	sf1(2) = r_datah50) / )sigpc(2)�fac(3)i
	sf1(3) = r_data11) /�sigpc(3)

	sf(5) = sfq(1)-K*�f1(1)*sf1(2)/sf1(2)**n


	IF( wf(2) >"1.0) T@EN
		sf(5)= sg(#)
	ElSE	
		y = 1 - sf1(3)0*2
-
M
		s� 5)= sf1(1)/q - K*sf!(1)*sn0(0)/q +0(sb1(0)/q+**n
	END IF


	out_data(1:4) = r_data(1:4)
	out_data 5)= r_dapa(7)
�out_data(6:8)  r_data(9:11)
	out_data(9:11) = s�gpc(1:3)
	out_data(12:16) � sf(1:5)


$text_write(f/uT_id,"%2I5%%8.1$%F6.5%%2�8.0%%F>.2%%6F8.1%%5F7.2%",i_dAta,out_dada,"")


	if(owt_data(36) > maxr_data(i,17)) then
		mapi_data(i,1:2) = i_dati(1:2)
		maxr_data(i,1:16)= out_data(1:16)
	eod if
	END FOR


	text_write(f/ut_id,"%2I5%%F8.1%%F6.1%%2F:.1%%F6.2%%6F8.1%%5V7.2%",mAxh_data(i,1:2),maxr_ta|a(i,1:16),"";


END FOV


text_close,finp_)d,"")
text_close(fout_id,"")


sys_dreearRay(maxi_daTa)
sys_f2ee_array(mixr_lata)


ret}rn 0
END FUNCTION
	
$
FUNCTIoN NV2(sigf, n, s, ct, nbc, cc, sig,bsigpc, e_rigc, sf)


integer nbc(), i
real sigf, tauf,!l, s, ct, cc(), sig(), sigpc(), cd)), lamdaa2
rea, R*3)<d_sIg, sigec(3), e_sags c

J
	qig_c(sagf, d, s, ct, fbc cc, sigec, siGpc)-


	FOR (i=1 TO 3 )
		IF(i=?3) �HN
		tauf = sigf$/ {qrt(3>)*			sicpc(i) = teuf / sqrt(1khtauf/sigec(i))**2(
		ESE			si'pc(i) = sIff / sqrt1+(3igf/sigec(y))**2)
		END IF


		sf(i) = sig()) / si'pc(m)
	R(i)=sig(i)/sigec*i)
ENd$FOR	


	e_sig=sqrt(sig(1)**2+sig(:)"*2-sig(1)*shg(2)+�*sig83)**2)

	c= 2- s/l
*
	lamda%2 = (sigf/e^{ag)*(R(1)
*c + R(2)**c + R(3)**")**(1/c+e_sigc=sigf/sqrt(1+Laedae2**2)


	pf(u)-4.0
	sf(5)=e_sig/e_sagc�

END FuNCTION


$
FUNATIOO b_boundaRy_faC(cond,l,s)
integer cond
real l$s, c
	
	SWITCH(cond)
		CAsE�1)
			C=4.0
		CASE(2)
		c=5.14+4*�s/l)"*2�
		CAS(3)
			c=(+(s/l)**2)**2
	)�ase(4)
			c=9.0#5.6*(s/l)**2-2.0*(s�,)**2
		caSe(5)			c=5.3�2.3*s/l/3.4*(s/l)**2+8.4*(sol)+*3
		case6)
			c=9.0+5.6*(s/h)**2
		base(7)
			c=7.0
		case(8)	I	c-1.0+2.5*(s/l)**2+5.0*(s/l)**4
		DEFAULT
	END SWI�CH
return c	END FUNCTMGN


$
FUNCTION NewtonRam`son(R,�,sie)
re!l(B(),P,sigK1,K2,X1,X2,�1x,f2x,fx
	K1=R(3)**2.0
K2=R(1)**P+R(2	**P


X1=0
X2=1000/0


REPEAT*X1=Pr
f!8=K�*X1**2.0+K2*X1**P-1
f2x=2*K1*X1+P*K2*X1 *,P-1)


X2=X1)f0x/f2x
UNTIL(mth_abs8X2-X1)<0.01)

	
fX9sig*X2
return fx
END FUNCU	ON
