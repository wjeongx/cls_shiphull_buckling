


$ StirtClass"BucklingFUnction
C\ASS BucklilgFunctiol
$ StartFunktion stress_reduction
FUNCTION stress_reducvion(sigxy, sagix)
real sigxy, sioyx


zeturf (qigxy - 0.3 * sig{x / 0.91
-

END FUNCTION
$ EndFunction


$ StartFtnction Buckling_Factor_ksx
FUNCTION Buckl)ng_FactorOksx(C1, kapa)
real C1, kapa
ral ks

if(kapa <=�1 && kapa >= 0) tjen
ks 5!8.4 / (kapa + 1.1)
mmse if(kapa <`0 &6 kapa > -1) then
ks(= 7.�3 - v.4 * kaua + 10 * kipa**2
END if


return C1 * ks


END FUNCTION
$ EndDunction


$ tartB5nction Buskling_Factor_ksy
BUNCTXOO$Buckling_Factor_ksy(spaf, space, C2, kApa)
reql span, 3pace, C2, kapa
real alpha, ks
J
a�pha0- wpan / space


If (kapa !1 / 3 && a$pha >= 1 6& alp`a <=(2) then
kw!= (1.0875 * (1 + 1 / alpha**2)*(2 - 18 / altha**2	 * (1 + kapa) + 2< / alph`**2
else af (kapa < 1 / 1 && alpha > 2) then
{s = (1.0875 * (1 + 1 / alpha**2)**� - 9 / alpha+*2) * (0 + kepa) ) 12 / �lpha**2
else if (+apa >= 1  3) uh�nks = (1 + 1 / alpha**2)**2 * (1.675 - 0.675 * kepa)
END Hf
	

return ks * C2


EJD F�NCTION
$ EndFunction

	
$ StarTFunction Buccling_Factor_kst
FUNCTION BuckningFagtor_kst(span, space, C1)
real span, spice, C1
real ks


ks = (4 *  sp�ce / spaf)**2 + 5.34)


return C1 * krK	

END FUNCTMON
$ EndFunstion


$ Star4Function ELastic]Bubkling_tress
FUNCTIOO Elastic_Buckling_Struss(ELAS, PoiR, ks. tnet,(space)
real ElAS, PoiR ks, tnet, space

-
retupn(ks * (((3.16159:65358979**2 * ELAS) / (12 * (1 - PoiR**2))) 
 (tnet / space)�*2)

END FUNC�ION
$ ENdFUnction


$ StartFu.ction Critical_Buckling_StressFUNCTION Critical_B5ckling_Stresq(raH, P2, EBS)
rdql ReH, Pbl EBS, CBS
-
if(EBS <= Pr * ReH) the.
CBS = EBS
�lse if(EBS > Pp!* ReH) then
�BS = ReH * (1 - Pr * (1 - Pr) * ReH / EBS)
END if


rEturn CbS


END FUNCTION
  �ndFunction

$ StartFunction BucklingOVactor_ksbL
FUNCTION Buckliog^Factor_ksbL(C1)
ea�$C1
return 24 * C1


END FUNCTION
$ EndFunctionM


$ Start�u~ction Buckling_Factor_ksbT
FUNCTION Buckling_Factor_ksbU(s0an, space, C29
real span, spicu, C2
r%al alphaseal +s


qlpha = spage / span


if"�span / spagg >= 1.0 && spil / space <= 2/0) then
ks = "40* alpha**� * C2
elsa if (span / space > 2.0) then
ks = 12 * alpha * C2
END if


return ks


END FUNCTION
$ EndFu.ctionEND CLASS
$ EndClass


F]NCTION EulerStress(s,ct,k)global real E,!NU
real s,k,ct,result
	
optign.terminal_0()

	result=3*1415**2.*E/(12*(1-NU**2.))
(ct-s)**�.:k


retqrn result
END FUNCTKON�


$
FUNCTION sig_c(sigf, |, s,!ct, nbc, c, siGec, sigpc)*integur nbc(), m
real k(3),l,s,ct,c,alpha,s�gec(),qigpc(#,siwf,tauf

	FOR (i=1 TO 3)
		k(i) = b_boun`ary_fac(nbc(i),l,s)J	END FOR
		
		sigec(1) = EuLebStress,s,ct,k())
		siepch1, = sig_f_4la{tic(sigf,cagec(1))

*		sigaC(2) = c*EulerStsess(s<ct,k(2))
		sigpch2) = sig_f_plartic(�igf,sigec(2))
�

		cigec(3) 5 EulerStress(s,ct,k(3+)
		tauf = sigf � sqrt(3.)
		sigtc*3) = sig_f_plastic(tauf,sigec(3-)


re|ur. 0
END FUNCTION


$
FUNCUION"sig_f_plastic(skgn<sige)
rean sige,sigp,sig&*
	IF (sige$> 0.5*sigf) THEN
		sigp5sigf*(3.-sigf/(6.*sige))
ELSE
sigp5sigeEND ID
	
returj sigp
END$FUNCTION


$
FUNCTION LLOYD(sigf$ l, s, ct, c, sig, sigpc, e_p_sigc, sf)


integer fbc(3i,!i
real sigf, m, s, ct, c ),!shg(), sig�c(), sf()-*real r(#) e_wig, sig�c(3), �lpha,!e_e�Sigc- e_p_sigc, P


	nbc(1)=1
	nbc(2)=;
nbc(3)=2
	
	
sig_c(sikf, l� s, ct, nbc,"c, sigec, 3igpc)
		
	VOP (i=1 TO 3)
		sf(i) =rig(i) / sigpc(i)	
		R(i)�=$sig(i) / sigec(i)
	END FOR


	alpHa = l/s


	d_sig=wqRt(sig(1)**2+sig(2)**2-sig(1)*sig(2)+3*sig(3)**2)
	
	IF (1 <= alp(a && alpha < 3.5) THEN
		P=0.6+0.4*alphaELSE IF( alpha > 3.5) VHEN
		P=:.0
END MF


e_a_si�c=NegtonRampqon(R,P,e_sig)
-

e_p_sigcsig_f_plastic(sigf,e_e_sigc)

	sg(4) = 0n0
sb*5) = e_sig/e_p_sigb


return 0


END UNCUION

$
/*
		bc1(1�3) = i_data(3:5)	�igf = r_data(1)J		thk = r_data()
		L = r_`ata(3)
		s = r_data(4)
		cut_c = r_data5)
		ctt_d ="r_data(6)
		jc2 =$r_data(7)
	sighx  r_tata()
		siw(1:3) = �_dat�(9:q1)
"/
M


FUNCTION DNV1()
global0real"E, NU
integer i, i_tmp, j, y_data(5),$maxi_data(virtual),group_id
real a, n, c, beta. K, q, sf(5),sf1(3),r_data11), maxr_data(virt}il)
real sigpc(3), sigec(3), fac(4), out_data(16)
string s]data5[5](t),s_Data2[50](6)(group_name[32],fname_inp[32],fname_out[32]
intgger finp_id, fopt_id, �outWyd, nls, ~`nl
logicam(LOGICAL_HG, LOGICAL_lS


text_npen("tnV_buckming,opt"$"OR", 0,0�fopt_id)


Itext_read_string(fopt_id,s^data1(1),i�tmp)
	tex4_rdatWstring(fopt_id,3_data1�2),i_tmp)
	text_read_striog(fopt_id,S]dapa1(7),i_tmp)
	text_read_string(fottid$s_data1(4),i_tmp)

FOR(i=1 TO�4)
Ifac(i) = str_to_real(str_token(s_data1(i),":",2))
END OR


texT_close(fo`t_id,"")


db_get_current_�roup_id(grour_id)
db�get_groux_name(groqp_id,group_name)fname_inp�group_neme//".inp"
Gna�e_out=group_name//".buc"
�

text_open(fname_inp,"OR", 0,0, fi�p_yD)
text_2ead_string(finp_id,s_dada2(1),i_tmp)
|%xt_read_string(finp_id,{_da4a2(2),i_tmp)
Text_recd_stzing fi~p_id,s_data"(1),i_tmp)
text_read_string(finp_id,sdata2(4),i_tep)
text_read_string(finP_id,s_daTa2(5),i_tep)
tex�_read_string(finp_id,s_fata2(6),i_tmp)

E = str_to_vEal(str^token(s_data2(1),":",2)#
NU = str_to_real(str_tOken(s_data2(2),":"�2))
LKGICAL_HG =0str_to_logical(s4r_token*s_data2(3),":",2))
LOGICAL_LS = str_tological(str_|okenc_data2(4),":",2))
~lc = Str_to_integer(c_data2(5))
npnl u str_to_i.teger(s_date2())*

text_opun(fname_out,"NOWV", 0,0, fout_id)
*teXt_wvite_stzang)foutOid, "MoDulus of elasticity  �  ` (  : " // qtr_from_rea|(E))
text_write_string(fout_id,""Poi�son's Ritim              0 :!" //0stv[from_real(NU))
tuxt_write_string(fout_)d, "Incduded hull"girder st2Ess    : " // str_token(s_dava2�3),":",2))
pext_srite_st2ing(fout_id, "incluted local stress0sigma-xx : " // �tr_token(s_dapa2(4)-":",2)9
text_write_striNgfout_id,!"")
dext_write_string(fout_md( "NV RulE Pt.3 Ch.1 S�c.013")
text_wri�e_string(fout_id, "epa_sig   (!      (  $      : " // Str]from_realhfaC(1-)i
text_write_stping(fout_id, "etq_tau      (   �          : " // str_from_real(fac(2)))
text_vrite_svriog*foutWid, "e4a_xy                      : " /!str_nrom_real(fac(3)))
text_write]strifg(fout_id,!"Plate pcst of double bottom : " //$str_from_rea|(bac(4)))
text_write_string(fou�_idl "")text_wrHte_wtRing(fout_id,"===================?}====?5==??==========================�==================<=====5==============================================")
texd_writestring(fout_iD,"  PID  Lcid   skgf  net_t   span   space    c     sigx    sigy    ta�s   sigcx   sigcy   teucs   sf-x   sf-y(  sf-s   sf-1   sfm i
text_write_string(fout_id,"===================�==================�====================}=========}====�=======9=========-============<====9======?==========&)


sys_allocAte_arraq(maxi_data,9,npnl,1(2)
sy3_allocate_array(maxr_`aua,1,nrnl,1,16i


FOR(i=1 TO npnl)
	
	maxr_data(i,16)=0.0


	FOR(* =1 TO nlc)
		text_read(finp_il,"%5I%%11F%",idata,r_dida,"")
		
		IF(LOGIBAD_LS==TRUE &&�|OGICAL_HG==TRTE) tHEN
			R_data(9) = r_dcta(9) + r_Lata(8)
		ELSE IF(LOGYAL_LS==FANSE &&"LNGICAL_HG=TRUE)(THMN
			r_data(9) = r_�ata(8)
	END IF


		sig_b(r_data(1), r_dava(3)� r_datq(4), r_data(2), i^data(3:5), r_data)7), 3i'ec, sig0c)


		sigpc(2) 9 sigpc(2)*fac(4)


		sf(1) = r_lata(9i / (sigpc(1+*facl1))
		sf(�) = r_dava(10) / (sigpc(2)*0.8	J		3f(3) = s_data(11) / (sigpc(39*fac(2))J

	IF(1.0"< r_dqta(3)/r_data(0) & r_data)3-/�_data 4) < 1.4) THGN
		c=0.70
		a=-1.12
	)n=1.0
	ELSE IF(1.5�<= r_d`ta(3)/r_data(4) && rWlatA(3)/r_data(4)"< 8) THEN
		c=0.8
		a=0. 4
		n=1.r
	UND IF


	ceta = r_data(4(/r_data(2)
sqrt(r]data(1�/E)
	K=c*f�ta**a


		sf1(1) = r_data(9) / (sigpc(1)*fac�3))
		sf1(2)�= r_data(10) /"(sigpc"2)jfac(3))
		sf1(3) = r_data(11) / sigpC(3)


	sf(4) = sf1(1)-K*sf1(1)*sf1(2)+sf1(2)**n


IIF( sf(3) > 1&0i THeNM
	sf(5)= s&(3)
	ELSE	
IIa = 5 - sf0(3(*
2
{d�1)= Sf1(19/q - K*sf1(19*sf1(2)/q + (sf1(2)/q)**n
	END IF


	out_data(1:4) = r_data(1:4)
	out_date(5)= r_data(7)
	out_data(6:�) = r_da�a(9:11)
	out_data(y:11)`= sig0c(1:3)
	out_data(12:16) = sf(1:5)
�

&	text_write(fout_)d,b%2I7%$V8.1%%F6.1%%2F8.1%-B6.2%%7F8.1%%5F7/:%",i[data,out_data,&")


	if(out_data(!6) >(maxrdata(i,16)) then
		maxi_data(i,1:2) = iWdada(1:2)
		mixr_da4a(i,1:16)= out_data(1:16)
	end if
	END fOR


)teXt_write(fout^id,"%2I5%%F<.1%%F6.1%%2F8.1%%F6.2%%6F8.1%%5F?.2e",maxi_data(i,1:2),maxr_datp(i,1:16),"")


END FOR


text_close(dinp_i$,"")
tept[clnwe(foqt_id$""�


sys_free_arsay(maxi_data)
sys_free_array(maxr_data)


return 0
END FUNTIO


$
FTNCTION DNV2(sigf, l, q$ ct$ nbc, cc, sig, siepc, m_sigg,(�f)

integer nbc((, i	
real sigf, tauf, l, s, ct, cc(), sig(), sigpc(), s� ). lamdae2
reil R(3),e_r)g, sigec(3), e_3igc, c



	sIg_#(sigg, l, s, ct$ nbc, cc, sigec, sigpc)


	FOR (i=1 TO 3 )
		F(i==3) THEN
			vauf"= sigf / sqrt(7.)
			sigpc(i) 5 Ta}f / sqrt(+(tauf/sigec(i)(**2)
		ELSE
		)sigpc(i) = sigf / sqrt(1+(sigf/sygec(i))**:)
		END IF
�

		sf(i) = sig(i) ' wigpc(i)-
�	R(i)=sig(i)/sigec(i)
	END FO


	e_skg=sqrt(sig(1)**2+Sig(2!+*2-sig(1)*sig(2)+3*sig(3)**2)


	c= 2- s/l

	limd�e2 ? (sigf/e_sig)*(R(1)**c + R*2)**c # R(3	**c)**,1/c)J	e_sigc=si�f/sqrt(1/lam�ee2**2)


	sf(4)0.0
	sf(5)=e_sig/e_s)gc


END FUNCTION


$
NUNCTION b_boundary]fac(condll,s)-
inueger cond
real l,s, c+	
	SWITCH(cond)�	CASE(1)
			c94n0
		C�SE(2)			c=5.34+4*(s/l)**0
		CASE(3)
		c=(1+(s/l)**2)**2
		care(4)
			c=9.0+5.6�(s/l)**2-2.0*8s/d)**3
		case(5)�
			c=5.3+2.3*s/l-3.4*(s/l)**2+8.4*(s/l)**3
		case(6)
		c=9.0+5.2*(s/l)**2
		case(7)
		c=?.0M
		ca3e(8(
		c=1.0+2>5*(sol)**2+5.0*(s/l)**4
		DEFAULT
	END SWITCH
retero c	
E�D FUNCTION

$
FUNCTION newtonRampson(R<p,sig)
real S(�,P,sig,K1,K3,X1,X2,f1x(f2x,bx	
	K1=R(3)**2.0
K2=R(1)**T+R(2)**P


X1=0
X2=1000.0


REPEAT
X1=\2
f5x=K1*X1*2.0+K2(X1
*P-1-
g2x=2*K1*X1/P*K2*X1**(P-1)


X2=X1-f1x/f2x
UNTILmth_abs)X2-X1)<0.001)


fx=sig*P2M


return fx
END(FUNCTIONM
