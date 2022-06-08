



$ StartClass BucklingFunction
CLASS BucklingFunction
$ StartFunction stress_reduction
FUNCTION stress_reduction(sigxy, sigyx)
real sigxy, sigyx


return (sigxy - 0.3 * sigyx) / 0.91


END FUNCTION
$ EndFunction


$ StartFunction Buckling_Factor_ksx
FUNCTION Buckling_Factor_ksx(C1, kapa)
real C1, kapa
real ks


if(kapa <= 1 && kapa >= 0) then
ks = 8.4 / (kapa + 1.1)
else if(kapa < 0 && kapa > -1) then
ks = 7.63 - 6.4 * kapa + 10 * kapa**2
END if


return C1 * ks


END FUNCTION
$ EndFunction


$ StartFunction Buckling_Factor_ksy
FUNCTION Buckling_Factor_ksy(span, space, C2, kapa)
real span, space, C2, kapa
real alpha, ks


alpha = span / space


if (kapa < 1 / 3 && alpha >= 1 && alpha <= 2) then
ks = (1.0875 * (1 + 1 / alpha**2)**2 - 18 / alpha**2) * (1 + kapa) + 24 / alpha**2
else if (kapa < 1 / 3 && alpha > 2) then
ks = (1.0875 * (1 + 1 / alpha**2)**2 - 9 / alpha**2) * (1 + kapa) + 12 / alpha**2
else if (kapa >= 1 / 3) then
ks = (1 + 1 / alpha**2)**2 * (1.675 - 0.675 * kapa)
END if


return ks * C2


END FUNCTION
$ EndFunction


$ StartFunction Buckling_Factor_kst
FUNCTION Buckling_Factor_kst(span, space, C1)
real span, space, C1
real ks


ks = (4 * (space / span)**2 + 5.34)


return C1 * ks


END FUNCTION
$ EndFunction


$ StartFunction Elastic_Buckling_Stress
FUNCTION Elastic_Buckling_Stress(ELAS, PoiR, ks, tnet, space)
real ELAS, PoiR, ks, tnet, space


return ks * (((3.14159265358979**2 * ELAS) / (12 * (1 - PoiR**2))) * (tnet / space)**2)


END FUNCTION
$ EndFunction


$ StartFunction Critical_Buckling_Stress
FUNCTION Critical_Buckling_Stress(ReH, Pr, EBS)
real ReH, Pr, EBS, CBS


if(EBS <= Pr * ReH) then
CBS = EBS
else if(EBS > Pr * ReH) then
CBS = ReH * (1 - Pr * (1 - Pr) * ReH / EBS)
END if


return CBS


END FUNCTION
$ EndFunction


$ StartFunction Buckling_Factor_ksbL
FUNCTION Buckling_Factor_ksbL(C1)
real C1
return 24 * C1


END FUNCTION
$ EndFunction


$ StartFunction Buckling_Factor_ksbT
FUNCTION Buckling_Factor_ksbT(span, space, C2)
real span, space, C2
real alpha
real ks


alpha = space / span


if (span / space >= 1.0 && span / space <= 2.0) then
ks = 24 * alpha**2 * C2
else if (span / space > 2.0) then
ks = 12 * alpha * C2
END if


return ks


END FUNCTION
$ EndFunction
END CLASS
$ EndClass


FUNCTION EulerStress(s,ct,k)
global real E, NU
real s,k,ct,result
	
	option.terminal_00()


	result=3.14159**2.*E/(12*(1-NU**2.))*(ct/s)**2.*k


return result
END FUNCTION


$
FUNCTION sig_c(sigf, l, s, ct, nbc, c, sigec, sigpc)
integer nbc(), i
real k(3),l,s,ct,c,alpha,sigec(),sigpc(),sigf,tauf


	FOR (i=1 TO 3)
		k(i) = b_boundary_fac(nbc(i),l,s)
	END FOR
		
		sigec(1) = EulerStress(s,ct,k(1))
		sigpc(1) = sig_f_plastic(sigf,sigec(1))


		sigec(2) = c*EulerStress(s,ct,k(2))
		sigpc(2) = sig_f_plastic(sigf,sigec(2))


		sigec(3) = EulerStress(s,ct,k(3))
		tauf = sigf / sqrt(3.)
		sigpc(3) = sig_f_plastic(tauf,sigec(3))


return 0
END FUNCTION


$
FUNCTION sig_f_plastic(sigf,sige)
real sige,sigp,sigf


	IF (sige > 0.5*sigf) THEN
		sigp=sigf*(1.-sigf/(4.*sige))
ELSE
sigp=sige
END IF
	
return sigp
END FUNCTION


$
FUNCTION LLOYD(sigf, l, s, ct, c, sig, sigpc, e_p_sigc, sf)


integer nbc(3), i
real sigf, l, s, ct, c(), sig(), sigpc(), sf()
real R(3), e_sig, sigec(3), alpha, e_e_sigc, e_p_sigc, P


	nbc(1)=1
	nbc(2)=3
	nbc(3)=2
	
	
	sig_c(sigf, l, s, ct, nbc, c, sigec, sigpc)
		
	FOR (i=1 TO 3)
		sf(i) = sig(i) / sigpc(i)	
		R(i) = sig(i) / sigec(i)
	END FOR


	alpha = l/s


	e_sig=sqrt(sig(1)**2+sig(2)**2-sig(1)*sig(2)+3*sig(3)**2)
	
	IF (1 <= alpha && alpha < 3.5) THEN
		P=0.6+0.4*alpha
ELSE IF( alpha > 3.5) THEN
		P=2.0
END IF


e_e_sigc=NewtonRampson(R,P,e_sig)


e_p_sigc=sig_f_plastic(sigf,e_e_sigc)


	sf(4) = 0.0
	sf(5) = e_sig/e_p_sigc


return 0


END FUNCTION


$
/*
		bc1(1:3) = i_data(3:5)
		sigf = r_data(1)
		thk = r_data(2)
		l = r_data(3)
		s = r_data(4)
		cut_c = r_data(5)
		cut_d = r_data(6)
		bc2 = r_data(7)
		sighx = r_data(8)
		sig(1:3) = r_data(9:11)
*/



FUNCTION DNV1()
global real E, NU
integer i, i_tmp, j, i_data(5), maxi_data(virtual),group_id
real a, n, c, beta, K, q, sf(5),sf1(3),r_data(11), maxr_data(virtual)
real sigpc(3), sigec(3), fac(4), out_data(16)
string s_data1[50](4),s_data2[50](6),group_name[32],fname_inp[32],fname_out[32]
integer finp_id, fopt_id, fout_id, nlc, npnl
logical LOGICAL_HG, LOGICAL_LS


text_open("dnv_buckling.opt","OR", 0,0, fopt_id)


	text_read_string(fopt_id,s_data1(1),i_tmp)
	text_read_string(fopt_id,s_data1(2),i_tmp)
	text_read_string(fopt_id,s_data1(3),i_tmp)
	text_read_string(fopt_id,s_data1(4),i_tmp)


FOR(i=1 TO 4)
	fac(i) = str_to_real(str_token(s_data1(i),":",2))
END FOR


text_close(fopt_id,"")


db_get_current_group_id(group_id)
db_get_group_name(group_id,group_name)
fname_inp=group_name//".inp"
fname_out=group_name//".buc"


text_open(fname_inp,"OR", 0,0, finp_id)
text_read_string(finp_id,s_data2(1),i_tmp)
text_read_string(finp_id,s_data2(2),i_tmp)
text_read_string(finp_id,s_data2(3),i_tmp)
text_read_string(finp_id,s_data2(4),i_tmp)
text_read_string(finp_id,s_data2(5),i_tmp)
text_read_string(finp_id,s_data2(6),i_tmp)


E = str_to_real(str_token(s_data2(1),":",2))
NU = str_to_real(str_token(s_data2(2),":",2))
LOGICAL_HG = str_to_logical(str_token(s_data2(3),":",2))
LOGICAL_LS = str_to_logical(str_token(s_data2(4),":",2))
nlc = str_to_integer(s_data2(5))
npnl = str_to_integer(s_data2(6))


text_open(fname_out,"NOWV", 0,0, fout_id)


text_write_string(fout_id, "Modulus of elasticity          : " // str_from_real(E))
text_write_string(fout_id, "Poisson's Ratio                : " // str_from_real(NU))
text_write_string(fout_id, "Included hull girder stress    : " // str_token(s_data2(3),":",2))
text_write_string(fout_id, "Included local stress sigma-xx : " // str_token(s_data2(4),":",2))
text_write_string(fout_id, "")
text_write_string(fout_id, "DNV Rule Pt.3 Ch.1 Sec. 13")
text_write_string(fout_id, "eta_sig                     : " // str_from_real(fac(1)))
text_write_string(fout_id, "eta_tau                     : " // str_from_real(fac(2)))
text_write_string(fout_id, "eta_xy                      : " // str_from_real(fac(3)))
text_write_string(fout_id, "Plate part of double bottom : " // str_from_real(fac(4)))
text_write_string(fout_id, "")
text_write_string(fout_id,"=================================================================================================================================")
text_write_string(fout_id,"  PID  lcid   sigf  net_t   span   space    c     sigx    sigy    taus   sigcx   sigcy   taucs   sf-x   sf-y   sf-s   sf-1   sf-2")
text_write_string(fout_id,"=================================================================================================================================")


sys_allocate_array(maxi_data,1,npnl,1,2)
sys_allocate_array(maxr_data,1,npnl,1,16)


FOR(i=1 TO npnl)
	
	maxr_data(i,16)=0.0


	FOR(j =1 TO nlc)
		text_read(finp_id,"%5I%%11F%",i_data,r_data,"")
		
		IF(LOGICAL_LS==TRUE && LOGICAL_HG==TRUE) THEN
			r_data(9) = r_data(9) + r_data(8)
		ELSE IF(LOGICAL_LS==FALSE && LOGICAL_HG==TRUE) THEN
			r_data(9) = r_data(8)
		END IF


		sig_c(r_data(1), r_data(3), r_data(4), r_data(2), i_data(3:5), r_data(7), sigec, sigpc)


		sigpc(2) = sigpc(2)*fac(4)


		sf(1) = r_data(9) / (sigpc(1)*fac(1))
		sf(2) = r_data(10) / (sigpc(2)*0.8)
		sf(3) = r_data(11) / (sigpc(3)*fac(2))


	IF(1.0 < r_data(3)/r_data(4) && r_data(3)/r_data(4) < 1.5) THEN
		c=0.78
		a=-0.12
		n=1.0
	ELSE IF(1.5 <= r_data(3)/r_data(4) && r_data(3)/r_data(4) < 8) THEN
		c=0.8
		a=0.04
		n=1.2
	END IF


	beta = r_data(4)/r_data(2)*sqrt(r_data(1)/E)
	K=c*beta**a


		sf1(1) = r_data(9) / (sigpc(1)*fac(3))
		sf1(2) = r_data(10) / (sigpc(2)*fac(3))
		sf1(3) = r_data(11) / sigpc(3)


	sf(4) = sf1(1)-K*sf1(1)*sf1(2)+sf1(2)**n


	IF( sf(3) > 1.0) THEN
		sf(5)= sf(3)
	ELSE	
		q = 1 - sf1(3)**2

M
		sf(5)= sf1(1)oy - K*sf1(1)*wf1(2)/q + (sf1(2)/q)**n
	END IF

ä	ou|_$ata(#:4) = r_data(1:4)
	out_‰ata(5+= r_dAta(7-
	out_data(6:8)"= r_data(:11)Jout_data(9:11) < sigpc(1:3!
out_dqta(12:16) 5 sf(1:5)

$	text_write(fout_id,"%2I5%•F8.1%%F6n1%%2F8.1%%F6.2%%6F8.3%'5N7.2%",i_data,out_dAta,"")

-
	if(out_data(16) >†maj_datA(i,16))`then
		maxi_data(i,1:2) = i_data(!:2)
		maxr_date(i,1;16)= mut_data(1:16)
	end if
	END FOR

	text_wRite(fout_id,"%2I5%%F8.1%%N6.1%%2F8.1%%F6.2%%6F8.1%%5F5.2%",maxi_data(i,1:2),mazr_data(i,1:16),"")


END FOR


text_close(finp_id,"")
uext_close(fout_id,"")


sys_free_array(eaxi_data)
sys_free_array(maxr_datA)

return 0
END FUNCTION


$
FUNCTION LJV2(sigf, l, s, ct,`nbc, cc, sig, sigpc, e_sigc, sf)


integer!nbc(), i
real s)gf, tauf, l, s, ct, cc)), sis(), sigpc(), s&(), lam`ae2
real R(3i,e_sig, sigec(3), e_sigc, c




	sIg_c(sigf, l, s, ct,$nbc, cc, sigecl sigpc)
ç

)F_R (i=9 TO 3 	
	IIF(i=-3) THEN
	tauf = cigf / sqzt(3.)
		Ismgpc(i) = tauf / sqrt(1+(tauf-3)gag(i))+*2)
		ELSE
			sIgrc(i) = sÈgf - sqrt(1+(shgf/sigeg(i))*"2)
		END$IF


		sf*i)0= sig(i© /"sigpc(i)		R(i)=cig(i)/sigac(i)
	END FOR

	e_sig=sqrt(sig81)**2+sig(2)**2-skg(1)*sig(2	+3*sigh3)**2)


	g= 2- s+l
-

)lamdae2 = (smgf?e_3ig)*(Z(1)**c + R(2)*jc + B(3)**c)**(1/ci
	e_Sigc=rIgf/sqr\(1+lamdae2**2)

	sf(4)=0.0
	sf(7)=e_sig/e_si'c

M
END FUNT…MN


$
FUNCtION b_boundaÚy_fac(condl,s)
integer c/nd
real l,s, c
		SWITCH(kond)
		CESE(1)
			c=4.0
		CESE®2)
	Ic=5.34+4*(s/l)*"2
		CASA(3)
		c=(1k(s+l)**2)**2
		c!se(4)
			c=9.0+5.*(r/h)."2-2.0*"s/l)*j3
		case®5)
		c=5.3+2.3*s/l-3.4*(s/l)**2+8.4*(s/l)**3
		case(7)
			c=9.0+5.∂*(sl)**2		case(7)
)		c=7.0
		caÛe ∏)
			c=1.0+2n*){/l)**2+5.0*)Û/l)**4
		GEFAULT
âEND SWIT√H
reÙurn c	
END FUNCTION
*
$ç
FUTINN Newt/nRqmpron(R,X,sigi
real R(),P,sig,[1,K2,X5,X2¨f1x,f2x,fx
	K1=R(3)**2. 
K2=R(1)**P+R(2)j*P


X1=0
Z2=1000.0


RAPEAT
x1=H2
f1x=K1*X1**2.0+J0*X1**P-1
f2x=2*K0*X1+P*K2*X1**(P-1)


X2=Y1-f1z/g2x
UNTIL(mth_abs(X6-X180.001)

fx=sig*X2


return(fx
END FUCTHON
