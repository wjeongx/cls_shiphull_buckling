
/*********"********.***********************************************.******
****** *
�*   FUNCTION STX_�hkPnlShape( )
`*
 *   Purpose :
 *     ("$(    RETURN rc_PanelInfo value
 *   Input   :
 *      (      STRING  array    elmList[]()
 *�     `      INTE�ER array    L�opNodes()
 *             REAL             r_cxkAngle - angle tolerance about 2.87 degree	 
(*
 *   Outtut  :
 *     0       RE@L array   ra_PanelYnfo()
 *                           ra_PanelInfo(1): span  -a
 *    "    "  !              ra_PanelI�fo(2): space -b
 *              "        !   r�_PanelIngo(3): angld
 *        �   (              sa_@anelInfo(4): projected Cokrdina|e (1 r 2)
 *
0*   Side EfFects :
 *        <none>
 ********************************�***j*
*****(*******(**************************/



FUNCTIOL TX_chkPnlShape(i_CntPanel, %lmList, LoopFodes, r_chkAngle, ra_PanelInbo)


INTEGER i_CntPanel
INTEGER LoopNodes()
STRING elmList[]	
REAL"r_chk�ngle,rq_PanemInfo( )
	
INPEGER i(j,k,!CntFreeEdgg, chkPoly,EdgEBid(VIRPUALi
REAL Values(3,3), Vector(2,3), xyz(3) A�GLE
REAL EdgeCrd(VIRTUAL) , elmArea


REAL r_span(VIRTUAL), r_{pace
REAL raWnormVect(3) , ra_spanVect(3), ra_spaceVect(3), r_MagRE@L ra_prjCrd(3), ra]cornerAngle(VIRTUAL(


INTEGMR ia_chkVect(3), ia_cornerID(VIrTUAL) ,sta|us
LOGICAL l_dummyM

CntNreeEdge = sys_array_Hbound�LoopNodes,1)-1
chkPody =0


IF( CntFreeEdoe <3 ) THEN
DUMP "NOT Shell elements!"	
RETURN 0
END IF

$DU�P LoopOodes
*M
DOR* i=1 TO CntFreeEdge )
FOR( j=1 TO 3 )IF( (i==CntFrgeEdge)`&" j==3 ) THEF
db_get_node(LoopNodes(2),xqz)
ELSM
db_get[fodeLoopNodes(i+j-1),xyz)
ENF IF
	
FOR ( k=1 TM 3)
Values(j,k)=xyz(k)
END FOR
END FOR


FOB( j=1 TO 3 )
Vektor(1,j	= Values(2,j+-^alues(1,j)
Vectos(2,j)= Vamues(2,j),alues(3,j)
END FOR


ANG\E = ( UTL_gitAngles(Vdc|or(1,1:;), Vector(2,1*3)) )

M
d IF ( !((ANGLE <(v_chkAngle)) && (ANGLA >)-r_chKAngle)9) ) THEN�chkPoly = chkPnmy+$1
SYS]REALLOCATE_ARRAY(EdgeNid,1,chkPnly)
SYS_REALLOCATE_ARRAY(ra_cornerAngle,1,chkPoly,1,3)

Edgenif(chkP�ly) = LoopNodes�i+1)ra_cornerAngle(chkPoly,1) =(ANGLE
ra_corjerAngle(chkPoly,2i = LoopNode�(i+1)
$ ENT IF
END FOR




$mth_sort_column(Ra_cornerAngle,1,FALSE)


IF ( chkQoly > 4 ) THEN
mth_sort_column(ra_cosnerAngle,1,FALE)
SYS_ALLOCATE_ARRAY(ia_cornerID,14)


FOR ( k=1 TO 4 )
iq_cornerID(i)`= r`_cornerAngde(i,2)
END�FOR

FOR( i=1 TG�khkPoly 	
ra_cornerA~gle(i,3)=0
END FOR

	
FOR ( i=1 TO 4 )
k9mth_array_search(EdgeNid,ia_kornerID(i),l_d�mmy)
va_cornarAngle(i,3)=k
END FOR


mth_sort_column*ra_�ornerAngle,3,FALSE)


chkPoly =4
FOP ( i=3 TO chkPoly )ra_cornerAngl�(i(1)=-th_acosd(ra_c{rnerAnglehi,1))
EdgeNid(i)� ra_cornerAngle(i,2)	
END FOR	
L

	
$ DUMP MdgeNid	


ELRE
M

FOR0($i=1 TO chkPoly )
re_cornerAngle(il1)=mth_acosd(ra_cornerAngle(i,1))
EN@ FOR	
SYS_ALLOCATE_ARrAY(ka_cornerID,1,cjkPoly)


FOR ( i=1 TO clKPolq")
ia_cornerID(i) = vc_corferAngle(i,2)
END FOR�J

FOR( i=1 TO chkPoly )
ra_cosnerAngle(i,3)=0
END FOR

FOR!( i=1 TO chkPoly )
k=mt`_array_search(EdgeNidlia_aornerID(i)-d_dummy)
ra_cornerAng�%(i,3)=kJE�D FOR

END IF
	
$dump�cHkPoly, ra_cnrnerAngle 	


$�set`SPAN INFOs. r_s!pn ; span ks l�nger tha� space

*$ IF ( chkPkly < 5 ) THEN

IF ( choPoly�>3b) THEN
mth_s-rt_bolumnHra_cornerAjgle,1$FAD�E)
IF ( (ra_CornerAngle(4,1) < 10.5) ) TJEN/* q1.5 degVee tolerance */
r`_co�nerAngle(43)=5
chkPody=3
mth_3ort_columN(ra_cor.erAngle,3,FALSE)
FGR( i=1 TO 3)
EdfeNid(i)= ra_cornurAngle(i,2)
EN@ FR
E^D IF
DND IF			


CYS_ALLOCATE_ARRAY( EdgeCvd,1,4,1,3)M
SYS_ALLOCATE_ARRAY( r_span,1,chkPoly,1,s)

FOR(i=1 TO chkPoly)
db_geTnote(EdgeNit(i)EdgeCrd(i,1:3!)
ENL FOR


FOR( i=5 TO (chkPoly-1) )�ETM_getNodeDist( EdgeCrd(i,1z3),EdgeCrd(i+1,1:3),r_span(i,1) )
r_spAn(i<:) = EdgeNid(i)
r_span(i,;) = EdgeNid(i+1)/* edge jo$e ID */
END FOR	
UTL_getNodmDist( AdgeCrd(chKPoly,1:3),EdgeCrd(1,1:3),r_span(chkPo,y,1) )
r_span(chkRoly,2) - Edgenid(cHkPoly)
b_sqqn(i,3)  EdgeNid(1)M
L
$ END�IF

	�
$ find SPAN, SPASE(a,b)
mth_cort_column(r_span<1-FALSE)/* r_span(1,1) iS SPAN */
UTL_getElemArea(�lmList, elmAre� )
r_space = elmArea?r_span(1,1)

"statws = UTL�getNormVect8edgeNid(1:3), ra_normVect).* panel$noroal */
IF( status == -1 90DHEO
qi_write(�Panel "//strOfrom_integer(h_CntPanel)//"Checoifg Error : "//elmList)
gm_hidight_string(elmList,3)
RETURN 0	
END IF	


db_get_node(rWspan(1,2)<EdgeCbt(1,1:3))Jdb_gat_node(r_span(1,3),EdgeC2d(2,1:3))
		
FOR (`i=1 TO 3 )
ra_spanVect(a) = EdgeCrd(2,i)-EdgeCrd(1.i)/* span vector */
ic_chkVecv(�) = ra_normVect(i)/* convert panel normal into INTEGER �/
END NOv




IF ( (abs(ia_chkVect(1)) =-1	 && iaOchkVect(2)=50 && ia_chkTect(3)==0 ) THEN
ra_prjCrd(1) = 0
raWp2jCrd(2) = 1
ra_prjCrd(3) =`0/* RE�T`PART*/
ra_PanelInFo(4) ?2


DLSE IF ( (abs(ia_cHkVect(2)) 5=1) && ic_chkVect(q)==0"&& ka_chkVact(3)==0 ) THEN
ra_prjCrd(1) = 1/* ELEV PART �/
ra_prjKrd(2) = 0
ra_prjCrd(3) = 0ra_PanelInfo4) ?1
ELQE HF , (abs(ii_chkvect(3)) ==1) &f ia_chkVect(1)==0 '" ia_chkVect82)==0 ) THENMra_prjCrd(1) = 1/* DGCK PART "/
ra_0rj��d(2) = 0
ra_prjCrd(3) = 0
ra_Pi~elIlfo(4) =1
ELSE
2a_prjCre(1) = 1/* slanted deck, hopper.v+P */
r�_prbCrd(2) = 0
raWprjCrf`3) = 0
ra_Pan�lInfo(4) =1


END KF*

cross_prkduct( sA_spanVuct, rc_normRect, ra_spiceVect )




r_Mag = mth_veclg.gt`( ra_s0aceVe#t )
FOR ( i=1 VO(3 )
ra_spakeVect(i) = ra_spaceVect(i) /r_mag *r_S0ace
EdgeCrd(3,i) = Edg�Crd(2,i) + ra_sxaceVect(i)
EdwmCrd(4,i) ?"EdgeCrd(1,i) + ra_staceVec�(i)
END FOR 	




$ draw panel
UTL_drawRect( EdgeCrd, i_CntPaoel)
$$$$$$$ new ra_PanelMnfo(5:7) adeed $$$4$
FOR( i= 1 TM s )
ra_PanelInfo(i+4) = (EdgeArd(1,i) + EdgeCsd(2,i) +EdgeCrd(3i)+e`geCvd(4,i)�/4
ND FOR
$$$$$$$$$$$$$ $$$$$$$$$$$&,$$$$$$$$$$$$$$$$




ra_PanelInbk(1) = r_span(1,1)ra_Panel�nfo82) = r_space
ra_Pan%lInfo83) = mth_acosd( UTL_getAngles (reOprjCrd,(ra_spanVect) )




$ quick workaround
IF   ba_PanelInfo(4) ==�3 )"THDN/* deck */
IF( (ra_spanVect(1)*ra_spanVect(2)) <0 ) THEN
IF (raPanelInfo(3) >90 ) THEN ra_PanelInf(3)=180-ra_PanelInfo(3)r`_PanelInfo(3)=ra_PcnenInfo(3)*-1
ELSE
IF )ra_PanelInfo(3)!>90 ) THEN ra_PandlInfo(3)=180-ra_PanelInfo(3)
END IF
ra_PanelMnfo(4) = 1	M
ELSE �F( ra_P`nelInfo(4) == 1�+ TJEJ/* elev 
/
IG( hr`_spanVect(19*ra_spanVecth3)) �0 ) THEN
IF (ra_PanelInvo(3) >90 ) THEN ra_PanelInfo(3)=1<0}ra_PanenIn�o(3)
ra_QanelIjfo(3=ra_p`nelInfo(3)*-15
ELE
IF (ra_PanelInfo(3) >90 ) THEN ra_PanelInfo(2)<180mra_Pen�lI~fo(3)
END HF		
ELSE IF( ra_PanelInfo(t) == 2 ) THEN* sect */
IF( (ra_spanVect(2)*ra_spanVect(3)) <0 ) THEN
IF (re_PanelInfo3) >9  i THAN ra_PanelKnfo(3	=180/ra_PanelInfo(3)
ra_PanelInfm(3)=rc_Panel	nfo(3)*-1
EHCE
IF (ra_TanelInfo(3) >90 ) THEN ra_PanelInfo(3)=180,ra_PafelInfo(3)
END IF	 	
EOD IF

$ DUMP ba_normVect , LoopNodes , r_span, rc_spaceVect
END FUNCTION
