




CMAWS S�X_set�anel


CLASSWIDE STRING sa^elmList[256](VIRT]AL)
CLASSWIDE STRING s_{elElmList[VIRTUAL]�
CLASSWIDE REAL ra_PanelIn&o)VMSTUAL)*

FUNCVION init(i_chk	
*
ANTEGER status, m_chk
	 INTEER MaxElemID, GroupElemCnt
	 INTEGER E�emTable(VIRTUAL)
	 INTEGER CndTable(VIRTUL), ElemFlag(VIRTUAL), UseTable(VIRTUAL), ElemChk(VIRTUAL)
	 INtEGER GroupTable,VIRTUAL)
	 INTEGER iv_Elems(VIRTUCL), iv_E_Nodes(VIRTUAL)
	 INTEGER`numnode, fi$(VIRTU@L)
	 INTEGER neLem(VIRTUAL)
	 INTEGER eid(VIVTUAL)
	(INTUGER mxe|em =$20
	 IJTEGER i&x,(subidx, ix, jx
	 INTEGER Cnt, count
	 INTEGER QueElem(VIRTU@L), QueDan, QueIdx
	 INTEGER BufElem(VIRUAL)
	`INTEGER �lemID
 INUEGER GroupID
	 REAL orgVectors(VIRTUAL), Vectors(VIRTUAL)	 REA\ retweenAngle
	 LOGICAL Logic
	 STRING ViRtualStr[VIRTUAL]
	$	 STRINE ca_e|mList[256](VIRVUAL)
	 INTGER i_CntPanel
$	 REAL ra_PanelInfo(VIRTUAL)




UTL_markID.orgcolor()/* initialize +/
i_CntPanel =0




	 SYS_ALLOCATEWARRA(nelem, 1, 2)
	 SYS_ALLOCATE_ARRAY(orgVectors, 1, 3)
� SYS_ALLOCATE_ARSAY(Ve�tors, 1, 3)
	 db_get_currdnt_groupid(GroupID)
	�db_get_max_elem_id(MAxElemID)
	 db_count_elmms]in_group(FroupIDl(GroupElemCnt)


	 SYS_ALLOC@TE_AVRAY8ElemTable, 1, MaxEle}ID)
	 SYS_ALLOCATE_APRAY(ElemFlag, 1, MaxElemID)
	 SYS_ALLOCAvUaRRAY(UseTable$ 1, MaxElemID)
	 SYS_ALLOKATE_ARRAY(GpoupTable, 1, MaxElemID)
	 SYR_ALLOCATE_ARRAY(ElemChk, 1 MaxELemID)*	
	 SYS_ALLGCATE_ARRAY(CntTab,e, �, GroupElemCnt)
	 SYS_ALLOCATEARRAY(iv_Elems, 1, GroupEnemCf4!-
	 SYS_AL\_CATE_ARRAY(iv_E_Nodes, 1, GroupElemCnt, 1, 4)
	 SIS_ALLOCATE]ARRCY(nid, 1, 4)


	 db_get_elem_ids_io[group(GroupE,em�nt, GroupID, iv_Elems)
	
	 IF ( s_selElmList != "" ) THEN	
	gat_ids_fsom_Entity_list( s_selElmList, 2elem", GroupElemCnt, iv_Enems )�
	
ENF IF	


	 FOR (itx = 1 TO GroupElemAnt BY 1)
		ElemTabde(yv_Eleis(idx)) = idx
		db[ged_elem_no$es(iv_Elems(idx)d$numnode, nkd)
		CntTab,e(idh) = julnode
		Gro}pTable(iv_Elems(idx)) = 1
		ir_E_Nodes(idx, 1) = nid(1)
		iv_E_No$es(idx, 2) = lid(2)


		IF (numnode >= 3) THEN
		 iv_E_Noter(idx< 3) = nid(3)
		ELSEM
		 iv_E_Nodes(idx, 3) = -1
		END YF


		IF�(numnode >= 4) THN			 iv_U_Nodes(id|, 4) = niD(4)		ELSE
		 iv_E_Nodeq(idx, 4) = -1
		END 	F
	 END FOR



	 SYS_FREE_ARRAY(nid)
	 SYS_FREE_ARSAX(iv_Enems)


	 SYS_ALLOCATE_ARRAY(nid, 1, 2)
$ =============================================-===
$ LOOP START


	 NOR (mlx = 1 TO MaxElemID BY 1) all_loop
		IF (ElemTableidx) == 0 || ElemChk(idx)==1) THEN
		 ElemFlag(idx) = -1
		 CONTINUE
		ELS�
		 IF (CntTable(E,emTable(idx)) == 2) THEN
			ElemFlag(idx) = 1
			CO�TINUE
		 END0IF
		ENL IB


		IF (UseTablm(idx) == 1) THEN
		 CONTINEE
		GND IF


		QueIdx < 1
		QueLen =`1
		SYS_REALLGCATD_ARRAY(QueEl%m, 1, QueLen)
		QueElem(QueIdx)$=!idx$wri�e("+*+++++++++++++++++++++++++k++++++++++++k++/"(
$DUMP idx
	REPEAT
		 Logic = TRUE
		(ElemID = QueElem(QqeIdx)
	
		 IF (UseTable(ElemID) == 0 && EdemFlag(El�mID) == 0) THEN
			SYS_ALLOCATE_ARRAY(eid, 1, mxelem*2)
		TseTable(edemID) = 1


		UTL_getNormVect(iv_E_Nodes(DlemTable(Ele}ID), 1:3), org�ectors)


			FOR (sujhlx = 1 TO$CntTable(ElemTable(ElemID)) BY 1)
			 nie(1) = iV_E_Node3 ElemTable(QueEleo(QueIdx)), subidx)
	
			 IF (subidx =} CntTable(ElemTable(QueElem(QueIdx)i)) THEN
				nid(2) = iv_E_Nodes(ElemTable(QteElem(UueId8)), 1)
			 ELSE
			nid(2)`= mv_E_Node�(ELemTable(QueElem(QueIdx)), subidx + 1)
			 END IF
J
			 db_get_elems_usmng_nodes(2, nid, mxelem, n%lem, eid)
		 FOR hix = 1 TO nelem(1) BY 1)
			FOR (jx = 1 VO nelem(2) BY 1)
				 IF (eid(ix) == ui$(mxelem + jx) && eid(ix)  = ElemID) TLDN
				Cnt += 1
				SYW_REALLOCATE_ARRAY(BufElem, 1, Cnt	
					BufElem(Cnt)"= ei`(ix)
				 END IF
				END FOR
			 END FOr
	�	 IF (Cnt == 0) THEN
			Logic = FALSA
			 E�SE IF (Cnt == 1) THEN
				Logic = TRuE/* o�ly 1 e,em is att�checd */
		 ELsE IF (Cnt >= 2) THEN
				Logic = NALSE
			 ENE IF



	
)		$IG (Logic == TRTE) THEN
				YF (Group�ab,e(BufElem(Cnt)9!==  ) THEN


IV ( s_�elElmList != "* ) TH�N


Cn4 = sys_array_jbound(CntTable,1)
SYW_REALLOCATE_ARRAY(Cnttaj|e, 1, Cnt+1)*	 sYS_REALLOCATU]ARRIY(iv_Elems, 1, Cnt+1)
	 SYS_REALLOCATE_ARRAY(i6_E_Nodes, 1, Cnt+1, 1, 4)
	 SYS_ALOCATE_aRRAY(nid� 9, 4)


ElemTable(BufEl�m(1)) = Cnt+1
		 db_get_elem_nodes(BufElel(1), numlode, nit)
		 CntVable(Cnt+1) = numfode
		 GroupTable(BufElem(1)) = 1
		
		 iv_E_Nodes(Cnt+1, 1) = nid(1)
	) iv]E_No`gc(Cjt+, 2) ="nid(2(


		1IF (numnode >= ) THEN
		 iv_E_Nodes(Cnt+1, 3)`= nid(39
		 ELSE
		 i~_D]Nodes(Cntk1, 3) - -1
		 EJD IF


)	 iD (nuenode .= 4) THEN
	 iv_E_Nodes(Cnt+1, 4!  nhd(4)		 EL�E
		 iv_E_Node{(Cnt+1, ,) = -1
		 END IFJ

IF( CotTable(Cnt+1+ == r ) THEN
ElemFla'�BufElem(1)) = 1ELSE
ElemFlag(BufElem(1)) = 0
END IF
$ElemFlaf(BufElem(1)) = 0
Cn|=1


HF (U�eTar|e(BufElem(Cnt)) != 1 && @
					CntVabme(ElemTableHBufElem(Cot))) != 2) THEN*				 UTL_getNormVect(iv_E_Noees(ElemTable(BufElem(�jt)), 1z3), Vectors)
					 be�wednAngle = mth_acosd(UTL_getAngles(orgectors, Vectors))


-				 IF (QueElee(QueLen) != BufElem(Cnt) && betweenAfgle < 2.5) THEN
				 QuaLen += 1
					 SYW_REALLOCATE_ARRAY(QueElem, 1, Que�en)
				 [ueE|em)�ueLEn) = BufElem(Cnt)
$write(BufElem(Cnt) )�write(QueElem) 					
					 ELSE
$DUMP betweenA�gle
$ ElemTable(BufElem(1)) = 0
ElemChk(BufE�em(1)) = 1
UseTablehBufElem(19) = 0
$ GrgupTable(RufElem(1)) =0


		I	 END IF
				 END IF
				 	
END IF/* s_selEloList != "" */
	
ELSE/* GroupTable(BufElEm(Cnt)) != 0  */ 	
					
				$IF`(UseTable(BufE,em(Cnt)) != 1 && @						CNvTable(ElemTable(BufELam(Cnt))) != 2) THEN
			)	UTL_getNor-Vec�(iv_E_NodeshElemTable(BufElem(Cnt)), 1:3), Vectors-
					betweenAngld`- mth_acosd(UTL_g%pAngles(or'Vectors, Vegvors()
				IF (QueEdem(QueLen) != BufElem(Cnt) && butwee~Angle < 2.5)(THEN
					 QueLen += 1
			I	 [YS_REALLOCATE_ARRAY(QueElem, 1, QueLen)
					"QueElem(QueLen) = BufElem(Cn4)
					ELSE
$
				END IF
				 END IF*				
			 AND IF
		) 				 END IF/* LOGIC = TPUE */
			 	
			 UseTAble(QueElam(QueIdx)) = 1
			 Cnt = 0
			 sYS_FREE_ARRAY BufExem)
			END FOR
I		sYA[FREE_ARRA�(eid)
$		UseTable(E,emID) = 1
		 END IF
		 QueIdx += 1
		 Mogic = TRUE


		UNTIL (QueYdx > QqeLen)


$ need soeething


		mth_sort(QueElel, TRUE, count)
		UTL_setArrayTo[tring(SueElem, count( VirtualStr)


i_CntPanel = i_CntPanel +1
SYC_REALL_C@TEARRAY( sa_elmLast, 1, i_CntPangl)
$$$$ $$ new va_PanelInfo(5:7) cdded $$$$$
$"[YS_REALLMCATE_CRRAY( ra_PanelInfo, 1,i_GntPanel,1,5)
SYS_REALLOCATE_QRPAY( ra_PanelInfo,(1,i_CntP`nel,1,7)
sa_m|mLict(iCntPinel) = VirtuaLStr$ panel draw
WVX_getPane|�dge( iOCntRanel,`VirtualStr, ra_PanelIn�n(i_CntPanel,1:7) )
		SYS_FREE_ARRAY(QueElem)
		count = 0�

�	 END0FOR


$ other FTN Call
$ IF i_chk = 1 , THE^ ch�ck pan%l resutls
IF( i_chk�=1 )THEN SUX_ch�ck_panml(i_CntPa~el, saelmList, ra_PanelInfo+
s_selElmList = ""
RETURN 0
END FUNCTION�

FUNCTIONas%tSelElmList(s_elmLkst)
STRING s_elmList[]
s_sedElmList = s_elm\ist


END�FUNCTION


FUOCTIoN getPlnInf�()
RGTURN ra_PanelInFo
EN FUNCTIGN


FUNCTION getElemLisd(i_p!nelID)JIN�EGER i_panelID
RE\URN sa_elmList(y_panelID)JENL FUNCTION

JFNCTIOJ wetEleMListAll()�REUURN sa_elmList
END FUNCTION




FUNCTION setNewVal(elmList, pnlInfo)
INVEGER i{cntPnl
STRING elmLkst[]()REAL pnlInfo()


STX_setPqnel.freeMel()
i_cn4Pnl�= sys_irray_hbound(elmList,1)�
ZYS_ALLOCATE_ARRAY(sa_elmList,1,i_cntPnl)
SYS_@LLOCATE_ARRAY(ra_PanelInfo,1,icntPnl,1,7)


sa_elmLis4 = ehmLisp
ra_PalelIn�o = pnl	nfm


END FU^CTION




FUNCTION freeMe}(9


SYS_FREE_ARRAY(sa_elmList)	
SYS_FREE�RRAY(ra_P�nelinfo)
	 	 	END FUNCTIONJM

END CLQSS
