




CLASS STX_panel_result


CLASSWIDE STRING Data[512](VIRTUAL)
CLASSWIDE INTEGER count
CLASSWIDE STRING text_data[512](VIRTUAL)
CLASSWIDE STRING class_name[32]


FUNCTION readResult(s_resData)
STRING s_resData[]


class_name = STX_buckling.getClass()
IF ( class_name == "LR") THEN
STX_panel_result.LR_readResult(s_resData)
ELSE IF( class_name == "DNV" )THEN
STX_panel_result.DNV_readResult(s_resData)
ELSE
STX_panel_result.RINA_readResult(s_resData)
END IF
		
END FUNCTION


FUNCTION filterResult(ia_lcIDs)


INTEGER ia_lcIDs(), i_row, i_col, i_cntSelLc, i_cntLc, i_cnt, i_cntPnl, i_chk ,i,j
STRING sa_newData[512](VIRTUAL), sa_crData[512](VIRTUAL)
REAL r_max, r_min, r_data


i_cntSelLc = sys_array_hbound(ia_lcIDs,1)
i_row = sys_array_hbound(Data,1)
i_col = sys_array_hbound(Data,2)


$ DUMP i_row, i_col
i_cntLc=0
FOR ( i=1 TO i_row ) cntLC
IF( str_to_integer(Data(i,1)) ==1 ) THEN
i_cntLc +=1
ELSE
BREAK cntLC
END IF
END FOR


i_cntPnl = i_row/i_cntLc
SYS_ALLOCATE_ARRAY(sa_newData,1,i_cntPnl*i_cntSelLc,1,i_col)
SYS_ALLOCATE_ARRAY(sa_crData,1,i_cntPnl,1,i_col)


$DUMP i_row/i_cntLc*i_cntSelLc
i_cnt=0
FOR ( i=1 TO i_row )
FOR ( j=1 TO i_cntSelLc )
IF( ia_lcIDs(j) ==str_to_integer(Data(i,2)) ) THEN
i_cnt += 1
sa_newData(i_cnt,1:i_col)=Data(i,1:i_col)
END IF	
END FOR
END FOR


i_cnt=i_chk=0


FOR ( i=1 TO i_cntPnl*i_cntSelLc BY i_cntSelLc )
i_cnt += 1
r_max=-1.0E+30
r_min= 1.0E+30


FOR (j=1 TO i_cntSelLc )
IF( class_name == "LR" )THEN
	 r_data=str_to_real(sa_newData(i+j-1,13))
	 IF( r_data < r_min ) THEN
	 r_min=r_data
	 i_chk=j
	 END IF
ELSE IF( class_name == "DNV")THEN
	 r_data=str_to_real(sa_newData(i+j-1,15))
	 IF( r_data > r_max ) THEN
	 r_max=r_data
	 i_chk=j
	 END IF
ELSE IF( class_name == "RINA")THEN	
	 r_data=str_to_real(sa_newData(i+j-1,16))
	 IF( r_data > r_max ) THEN
	 r_max=r_data
	 i_chk=j
	 END IF
ELSE	
END IF	
	
END FOR
sa_crData(i_cnt,1:i_col)= sa_newData(i+i_chk-1,1:i_col)	
END FOR


SYS_FREE_ARRAY(Data)
SYS_ALLOCATE_ARRAY(Data,1,i_row/i_cntLc,1,i_col)


Data=sa_crData	
$DUMP sa_newData


END FUNCTION




FUNCTION saveOutput(s_outFile)


STRING s_outFile[], fname[32]
INTEGER i_col, i_row, fid, i_textRow, i_cntSelList
WIDGET listbox


i_textRow = sys_array_hbound(text_data,1)
i_row = sys_array_hbound(Data,1)
i_col = sys_array_hbound(Data,2)


$ file_build_fname("./",s_outFile,"dat","N",fname)
$ text_open(fname, "NOW",0,0,fid)






STX_panel_result.writeRange(s_outFile, Data)




END FUNCTION






FUNCTION LR_readResult(s_resData)


INTEGER fid, status, i
INTEGER i_lenLine, i_position
INTEGER i_data(2)
REAL r_data(16)
STRING s_data[512],s_buff[32], s_resData[]


status =text_open(s_resData//".dat","or",0,0,fid)
IF( status !=0 ) THEN
	DUMP " There is NO report.dat file"
	return -1
END IF


text_read_string(fid,s_data,i_lenLine)
SYS_ALLOCATE_ARRAY(text_data,1,1)
text_data(1) = s_data
count = 1
WHILE ( str_find_match(s_data,"====") == 0 )
count += 1
SYS_REALLOCATE_ARRAY(text_data,1,count)
text_read_string(fid,s_data,i_lenLine)
text_data(count) = s_data
END WHILE
	
count = 0	




text_get_position ( fid, i_position )
	 	
WHILE ( text_read(fid,"%2I%%16F%",i_data,r_data,"") == 0 )
count += 1
text_read_string(fid,s_data,i_lenLine)
END WHILE	


SYS_ALLOCATE_ARRAY( Data, 1,count,1,19 )




count=0
text_set_position ( fid, i_position )	


WHILE ( text_read(fid,"%2I%%16F%",i_data,r_data,"") == 0 )


count += 1
text_read_string(fid,s_data,i_lenLine)






Data(count,1) = str_from_integer(i_data(1))	
Data(count,2) = str_from_integer(i_data(2))


$ db_get_load_case_title( i_data(2), s_buff )
$ Data(count,2) = s_buff	
	
FOR ( i=3 TO 18 )
str_formatc(s_buff,"%4.2f",r_data(i-2) )
Data(count,i) = s_buff
END FOR	


Data(count,19) = s_data




END WHILE
	


text_close(fid,"")	


END FUNCTION


FUNCTION DNV_readResult(s_resData)


INTEGER fid, status, i, i_position


INTEGER i_lenLine


INTEGER i_data(2)
REAL r_data(19)
STRING s_data[512],s_buff[32], s_resData[]


$ status =text_open("report.dat","or",0,0,fid)


status =text_open(s_resData//".dat","or",0,0,fid)
IF( status !=0 ) THEN
	DUMP " There is NO report.dat file"
	return -1
END IF


$ SYS_ALLOCATE_ARRAY(text_data,1,13)
$ FOR ( i=1 TO 13 )
$ 	text_read_string(fid,s_data,i_lenLine)
$ text_data(i) = s_data
$ END FOR


text_read_string(fid,s_data,i_lenLine)
SYS_ALLOCATE_ARRAY(text_data,1,1)
text_data(1) = s_data
count = 1
WHILE ( str_find_match(s_data,"====") == 0 )
count += 1
SYS_REALLOCATE_ARRAY(text_data,1,count)
text_read_string(fid,s_data,i_lenLine)
text_data(count) = s_data
END WHILE


count = 0	
text_get_position ( fid, i_position )
	 	
WHILE ( text_read(fid,"%2I%%19F%",i_data,r_data,"") == 0 )
count += 1
text_read_string(fid,s_data,i_lenLine)
END WHILE	
SYS_ALLOCATE_ARRAY( Data, 1,count,1,22 )


text_set_position ( fid, i_position )		
count = 0	
WHILE ( text_read(fid,"%2I%%19F%",i_data,r_data,"") == 0 )


count += 1
text_read_string(fid,s_data,i_lenLine)


$ SYS_REALLOCATE_ARRAY( Data, 1,count,1,22 )


Data(count,1) = str_from_integer(i_data(1))
Data(count,2) = str_from_integer(i_data(2))
	
FOR ( i=3 TO 21 )
str_formatc(s_buff,"%4.2f",r_data(i-2) )
Data(count,i) = s_buff
END FOR	
	
Data(count,22) = s_data


END WHILE
	
text_close(fid,"")	


END FUNCTION


FUNCTION RINA_readResult(s_resData)


INTEGER fid, status, i, i_position


INTEGER i_lenLine


INTEGER i_data(2)
REAL r_data(22)
STRING s_data[512],s_buff[32], s_resData[]


status =text_open(s_resData//".dat","or",0,0,fid)


IF( status !=0 ) THEN
	DUMP " There is NO report.dat file"
	return -1
END IF


$ SYS_ALLOCATE_ARRAY(text_data,1,13)
$ FOR ( i=1 TO 13 )
$ 	text_read_string(fid,s_data,i_lenLine)
$ text_data(i) = s_data
$ END FOR


text_read_string(fid,s_data,i_lenLine)
SYS_ALLOCATE_ARRAY(text_data,1,1)
text_data(1) = s_data
count = 1
WHILE ( str_find_match(s_data,"====") == 0 )
count += 1
SYS_REALLOCATE_ARRAY(text_data,1,count)
text_read_string(fid,s_data,i_lenLine)
text_data(count) = s_data
END WHILE


count = 0	
text_get_position ( fid, i_position )
	 	
WHILE ( text_read(fid,"%2I%%22F%",i_data,r_data,"") == 0 )
count += 1
text_read_string(fid,s_data,i_lenLine)
END WHILE	
SYS_ALLOCATE_ARRAY( Data, 1,count,1,25 )




text_set_position ( fid, i_position )		
count = 0	
WHILE ( text_read(fid,"%2I%%22F%",i_data,r_data,"") == 0 )


count += 1
text_read_string(fid,s_data,i_lenLine)


$ SYS_REALLOCATE_ARRAY( Data, 1,count,1,25 )


Data(count,1) = str_from_integer(i_data(1))
Data(count,2) = str_from_integer(i_data(2))
	
FOR ( i=3 TO 24 )
str_formatc(s_buff,"%4.2f",r_data(i-2) )
Data(count,i) = s_buff
END FOR	
	
Data(count,25) = s_data


END WHILE
	
text_close(fid,"")	


END FUNCTION


FUNCTION shwResult()


STX_result_table.InterFace( class_name,count, Data )
$ SYS_FREE_ARRAY(Data)
$ SYS_FREE_ARRAY(text_data)	
	
END FUNCTION


FUNCTION rangeResult(range1, range2)


REAL range1, range2
REAL rng1, rng2
STRING rngData[512](VIRTUAL)
INTEGER i,j,col


IF ( range2-range1 >= 0 ) THEN
	rng1 = range1
	rng2 = range2
ELSE
	rng1 = range2
	rng2 = range1
END IF	


j=0
count = sys_array_hbound(Data, 1)
col = sys_array_hbound(Data, 2)


SYS_ALLOCATE_ARRAY(rngData,1,count,1,col)


IF ( class_name == "LR") THEN
FOR (i=1 TO count)
IF (str_to_real(Data(i,13)) >= rng1 && str_to_real(Data(i,13))<= rng2 ) THEN
j += 1
rngData(j,1:col) = Data(i,1:col)
	END IF
END FOR
	


ELSE IF( class_name == "DNV" )THEN
FOR (i=1 TO count)
$ IF ( (str_to_real(Data(i,14)) >= rng1 && str_to_real(Data(i,14)) <= rng2) || @
$ (str_to_real(Data(i,15)) >= rng1 && str_to_real(Data(i,15)) <= rng2) ) THEN
IF ( (str_to_real(Data(i,15)) >= rng1 && str_to_real(Data(i,15)) <= rng2) ) THEN
j += 1
rngData(j,1:col) = Data(i,1:col)
	 END IF
END FOR


ELSE
FOR (i=1 TO count)
$ IF ( (str_to_real(Data(i,14)) >= rng1 && str_to_real(Data(i,14)) <= rnc) || @
$ (str_to_real(Data(i,15)) >= rng1 && ctr_to_real(Data(i,15)) <= rng2) ||†@
$ (str_to_ream(Data(i,16)) >= rng1 f" str_To_Real(Data(i,14)) <= rng2) ) THEN
IF(( (st2_to_read(D!pa(i,16)) >= rng1`&& str_to_r!al,DA|a(i,16)) <= rng2) ) THEO
	 j += 1
	 rngDate(j,1:con) < Data(i,1:col)
	 END IN
	END FOR
END IF
$ DUMT r~gData
$ DUM– j
	


IF ( j9= 0) THEN 	
	 user_messaod(WARN#, 100001, "Buckling Assessment", "out of zanfE.")
	 RE‘URN -1	Else


count = j
WYS_ADLOCQTE_ARRAY( Data, 1,j, 1,co|)
$ FOR( i=10TO count)
$ 	FO (!j=1 TO col)*$$Data(i,*)!= rngDcta(i,j)
$ END FOV
$$END FOR 	
Data(1:j,1:#ol)0=(rngData(0:j,1:c,) 	
ENd IF



RETURN 0	
		 	END FUNCTION


FUNCTION writeRange(s_fNamm, rngData)
M
*INDEGER!Num_rmw
SRING sngData[U((
STRING!fname[5±2]
ANTEGER fid
INTEGER text_cownt,i,j,col , _cntSelList, i_lcID
INTEgEZ i_dAta(RIRTUAL)
REAN v_data(VIRTUIL)JSTRING elm_list[512], s_fName[], s_dc[80](vIRTUAL), s_lctitleK80]

-
filabuild_fname)"*.",s_fName,"lat",&N",fName)
text_open(fname, "NOW",8,0,fia)


$ text_count ? sysWarray_hbound(text_data, 1)
$ FOR (i<1 TO text_counT)J$ text_rite_string(fid,teyt_dat!(i))
$	 END FOR


text_count = sys_array_hbound(text_data, 1	




NOR (i=1 TK text_count-5)text_write_stsing(fid,text_data(i9)
END†FOR


num_row = sys_apray_jboend(sngData,1)
text_write(fiD-"Total numbez of Pafels   : %I-", num_row, 1., "")


FOR (i=text_count-3 TO text_#ount-2 
text_write_string(fid,text_d!ta(i))
END FOP
	
WIDGET listboxW01
lystbox_01 = sys_cless_get(¢STÿ_buckling_fringe","mistbox_01")	


ui_wid_get ( listbox_01 , bNSELECTED", i_cntSelDist )	
SYS_ALLOCAT≈_ARRAY(s_lc, 1,i_cltSelList)
ui_w)d_get ( listboxW01 , "VALUE", s_lc )



Jj=	sys_arrayOhbound(s_lc,1)
text_write_s|ring(fiD,"# LCID0: Title ")		
F_R( i=1 TO"j )
s_lctitle - str_token(s_lc(i),":",2)
db_get_l/`dcase_id(s_lctitle,i_lcID!text_wride_string(fid," "//str_frnm_integer(m_lcID)//" : "//str_token(s_lc(i),":",2))		
UND DOR	
text€write_string(fid,"")
				


FOR (iΩtext_cound-! TO text_count )
text_write_string(fid,text_data(i))
END FOR
	†	
col = sys_aRray^hbound(rngData, 2)
SYS_ALLOCATE_ARRAY(i_data,1,2)
SYS^ALLOCATU_ARrAYhr_data,1,col-3)




FOR (i=1 O num_row)äÈ_data(1) = str_to_integer( rngData(i,1) )M*i_data(2) = str_to_integer( rngData(i,2) )

*FOR (j=1 TO col-3)
r_dava(j) = sdr_tg_real( rngData(i,j/2) )
END FOR
	
elm_list= rngData(i,cgl)ä

IF ( cl!qs_nAie == "LR") THEN
	 tdxt_write(fid,"2(%I4% )%%5(%F6.2% )%%5(%N6.2% )%!6(!F5.2% )%", i_data, rdata- "")
ELSE IF ( clqssname = *DNV") THEN
text_wrhte(fkd,"%≤(%I4% )%%F5.2% %2(%F8.2! )%%2(%F7.2• )%%68%F6.2% )%%8(%F5.2% )%", i_data( r_data, "")
ELSE
text]write(fid"%2(%I4% )%%5(%F7.2% )%%6®%F6.2% )%%3(%F5.2% )%%8(%F5.3% )%", i_data< r_data, " !
EN IF

$ text_write_string(git, elm_list)
âM
END FMR 	M


$ tdxt_write_rt2ing(fid, "#End Data")
text_clmse(fid,"")
	
END FUNCTION		


FUNCTIGN show_re{tltDeÙa()


IF ( class_nemm == LR") THEN
STX_penel_result.LR_shOw_rmsuluData(-
ELSE IF( blass_name == "DNV" )‘HEN
STX_panel_resulT.N÷_show_resulÙDaTa()
ELE
STX_panel_result.RIJA_show_resuLtDat·()
END IF


ENF FULCTION

GUnCTION hR_qhou_zesultData()


STRIJG qubTlt[160]
REAL r_dauA, Dum(7)
STRING resData[512](VIRTUAL)
ILTEGEV rovNum, colNum, I
lNGICAL chcrange




UTL_ia2oID.orgKolor()


subTlt = STX_buskling_frifge.get_drg_title(9
count = sys_aRrayWhbound(Data,1)


IF ( subTlt(== "Initial,Thickn%ss" ) THEN
FOR ( i=q TK count )
	UTL_markID.setResT%xt(tru%)
	r_dat· = stb_to_real2(Tata(i,5!)
	UTL_markID.setRmsTex4Data(r_data )
	STX_getPaneldge(1,Data(i,19),dum)
EnD FNR
END IF
	
IF ( subTlt == "Stress,xx" ) THDN
DOR ( i1 TO coent )
]TL_markID/setResText,tree)
	Ú_datA = stz_to_real (Data(i,8))
	U‘L_markID.ÛetResTextData(r_data )
	 CTH_getPaneÏEdge(1,DatA(i,19),dum)
END FOP
END IF
	
IF ( subtlt ?= "Stress,yy" ) THGN
FOR ( i=1 TN count )
	UTL_markID.setResText(true)*	r_daTa = str_to_real (Data(i,9))
	UTL_markID.ÛetResTextData(r_data )
	 STX_getPaneÏEdge(1,`ata(i,9),dum)
END FOR-
END IF
	IF ( su"Tlt == "Stress,xy"() THEN
FOR ( i=1 TO count )
	UTL]m·rkID&setResText(true)	
	r_data = str_to_vEal (Data(i,!0))
IU‘L_markID.setResTeztDatahr_‰ata )
	 SVX_getPanelEdge(1,Daua(I,09),duei
END FOR
EOƒ IF
)IF  subTlt ==("Spress,ed" ) THEF
FOR ) i=1 TO count !
	TDL_markID.setResTExt(true)
	r_`ata = str_tk_real (Data(i,11))
	UTL_markID.se4esTextDat!)rWdata -
	 STX_getPanelEdge(1,Data(i,19),dum)
END FOR
END IF	IF ( subTlt == "Stress,ec" ) THEN
FOR (!i=1 TO cownt )
	WTL_m!rjD/setResext(tree)
	r_data = str_t/_real (Data(a,12()
	UTL_markID.SetResTaxtD`ta*r]dcta )
	 STx_getPaNelEdge(1,Data(i,19),Dum)
END FOREND IF
	
IF ( sebTlt == "Buckng,Factor" ) PHEN
FOR ( i=1†TO count )
	UTL_markInsetResText(true)ç
	r_data = str_to_real (Data(i,13))
	uTL_markID.setR%sTextData(r_data )
	 WTX_ge4PanelEdGe(q,Da|a(i,19),dtm)
ENƒ FOR
END IF
IIF ( subTlt == 2Thickness,Increment"") THEN
FOR ( i=1 TO count )M
	UUL_markIDsetResText(true)
	r_data = stz_to_real (D!ta(i15)	
	UTL_markID.setResTextData(r_dAta )
	 STXgetPanelEdge(1,Data(i,19),dum)
END FOR
END0IF	
IF ( subTlt ==!"Lenoth,Diminishment" ) THEN
FGR ( i=1 Tœ count )âUTLﬂmaskIL.seÙResText(4rıe)
	r_data = str_to_real (DaTa(i,7+)
)UTN_l rkID.setZesTextdata(r_data"i
	 STX_getPanelEdge(1,Data(i,19),dul+
END FOV
JD IF
	






$ "Stress,xx""Stress,yy""Stress,xx#"StreÛs,xy""StrEss,et"
$"Spresc,ec" "Buckng,Factor" Thickness,Ijcrement
$
$
$Lencth,Diminishment
$
&ä$ UTLWmarkID.setResTgxtData(17.5)
$ REAL a3)
$ RTXOgetPanelEdge(1,"eli 836 1781 27328",a)


ENT FWNCtIOO


FUNCTION DNV_show_resultData()	


STRING subTlt[160]
REAL!r[data,(dum(7)
STRING resData[512](VIRTUAL)
INTEGER rowNum, colNum, iLOGICAL chkrangÂ




UTL_markID.orgColor()


seb\lu = STX_buckling_fringe.get_frg_title()
count = sys_a2rayh`oundData,1)

-
IF ( subTlt$== "In)ti!l¨Thickneqs"0)THEN
FOR ((i=1 TO cotnt )
	UTL_markID.setZesText(tbue)
	r_data = str^to_real (Datc(i,5))
	UTL_markID.smtResTexTData(r_data )
	 STX_getPanelMdge(1,Data(i,22),dum)
END FNr
END IF
	
KF ( surTlt == "Stress,xx" ) THEN
FOR ( i=1 TO counp )
	UTL_markID.setResText(true!
	r_data = str_to_real (D`ta(i,8))
	UT]_marjID.cutResTextData(r_daTa )	 STX_getPanelEtge*1,Data(i,22-ldum)
ELD FO
END 	D
	
If ( subTlt == "Stress,yy" ) THEN
FOR†( i=1 TO count )
	UVL_markID.setResText(tr}e)*	r_data } str_to^ream (Data(i,9))	
UTL_-arcIT.setResTextDAta(r_data )
	 S‘X_getPanelEtge(1,@ata(i,:2),dum)
ENL FOP
EnD IF
	
IF ( subTlt == "Stress,xy" ) THAN
FOR ( i=1 TO count )
	UTL_markID.setResTezt(tr5e)
r_data = str_tO_real (Data(i,10))
	UTL_merkID.setResTextData(r_data )
	 STX_cetPanelEdgg(1,Data(i,22),tUm)
END FMR
EFE iF
	IF ( subTlt 5= &Factor,Biaxial1" ) THEN
FOR ( i=1 TO count`)
	UTL_markID.setResText(true)
	r_dqta = str_to^real (Data(i,14©)
	UTH_markID.setREsTextDat·,r_data )
 STXWgetPanelEdge(1,Data(i,22	,dum)
END FOR
END IF	
IF ( subTlt == "Factob,Biaxial2" ) THEN
FOR ( i=1 TO aount )
	UTL_markID.setResText(truÂ)
	p_data0= str_to_re·l (Data(i,15))
UTL›markID.setREsTextData(r_dava )
	 STX_eetPanelEdge(1,Data(i,22),tum)
MND FOr
END IFä
IF ( subTld == "ThicknessIncreMent" ) THENFOR ( i=1 TO count )*	UTL_markID.sdpResText(tbue)
	r_data = str_uo_real (Data(i,16))
	UTL_markID.setRes\extDAta(r_data )
	 STX_getpanelEdge(1,D!ta(i,22),dwm)
END FOR
END IF

IF ( subTlt == "Length,Dimifishment" ) THEN
F_Z ( i=1 TO count )
	UTL_markIT>setRusText(true)	r_data ="str_to_real (Data(i,19))
	UTL_markID.setResVextData(r_data i
	 STX_getPanmlEdge(1,Data(i,22),dum(
END FOR
END IF


END FUNCT	OŒ


FUNCTION INA_show_resulvData()
*
STrING subTlt[160]REAL r_data, dum(∑)
STRING resData[512](VIRTUAL)
INTEGER rowNum,0colNum, i
LOGICAL chkrange




UTL_MarkID.orfColor()

rtbTlt = STX_buckliog_fringe.getWfrg_title()
Count = sys_array_hboujd(Data,1)


IF ($subTlt == "Initial.Thaskness" ) UHEN
FOR (0i=1 O „ount )-
uTL_markID.setRe3Text(true)
	r_daTa = str_to_real (Data(i,5))
	QTL_markIDseÙResTextD·ta(r_dAta )
	 STX_getanelEdge(9,Data(i,25)$du})
END FOREND IF
	
IF  subTlt == "treqs,xx* ) ‘HENFOR ( i=1 TO couot )
	UUL_markID.setResTe|t(true)
	r_data = str_to_real (Data(i,8))
	UTL_markID.setRerTextData(r_data )
	 STX_oetPanelEdge(1,Data(i,25),duo)EŒD FœR
EJD IFç
	
IF ( subTlt == "Stress,yy" ) THEN
N_R ( i=1 TO count )M
	UTL_mar+I.setResText*true)
	r_data = str_to_r%al$(Data(i,)))
	UTL_markID.setResTextData(r_data )
	 STX[getPanalEdge(1,Data(i,2),DUm)
END FOR
END IF
	
IB ( subTlt == "Stre3s,xq" ) THEN
FO ( i=1 TO count )
	UTL_markID.setResText(true)
	r_data = str_to_real!(Data(i,10))
	UTL_markID.setResVextData(r_data )
	 STX_getRanelEdga(!,Data(i,25),dum)
END FoR
END IF
	
IF ( subTlt == "FactOr,Comp&Shear1" ) THEN
FKR ( i=1 TO count )
	UTL_markIDÆs%tResText(true)
	r_data = 3tr_to_real (Data(i,14))
	UTL_markID,smtResTextData(r_fata )	
	 STX_oetPanelEdge(1,Data(i,2%),du})
END FOR
END IF
	
IF ( subTlt == "Factor,Comp&Shear2"0) T@EN
FOB ( i-1 TO sount )
	’TL_markID.setResText(true)
	r_d`ta = str_to_real (Data(i,15))
	TTLmarkID.setResTextData(r_data )	
	 ZTX_'etPanelEdge®1,Davc(i,25),‰um)
EJD FOR
END IF
	
IF  subTlt == "Factor,Bicomp&Sheir" ) tHEN
FOR ( i51 TO counu (
	UTL_mavkKD.setResText(Ùrue)
	r_data = str_to_real (Deta(i,16))
	UTL_mar+ID,setBesTextData(r_date )
	 STX_getPanenEdge(1,Data(i,25),dum)
END FOR
END …F
	
IF ( subTlt =1 "Thickness,Ingrement" ) THEN
FOR  i=1 TO count )
	UTL_mar+ID.setResText(trug)
	r_data = str_to_zeal (Data(i,97))
	UTL_markID.setResTextData(r_data !
	 STX_getPanelE$ge(1,Data(i,25),dum)
END FOR
END IF
	
IF ( subTlt == "LenGth$Dimynishment" ) THENM
OR ( i=3 TO cotnt !ç
	UTL_markID.setRe{Text(true)
	r_data = wtr_tk_real (Dati(i,21))
	UUL_merkID.setResTextData(r_data )
	 STX_getPaNelEdÁe(1,Data(),25),dum)
END FOR
END IF


END(NUNCTION

FUNCTION lispPnl )


INTEGEB iWrow, i_col,(i_pnlID, È
REAL r_duo()


i_row = sys_arpay_hboend(DaTa,1)
i_col = sqs_·vrAy_hbkund(Tata,2)
UTL_mcrkIDoÚgColor(i


FOR((i=1 TO i_row)i_pnlID = str_tg_integer(Data(i,1))
STX_getPanelEtge(i_pnlID,Data(i,iWcol),r_dum)
END0FOR

END FUFCTION


END CL¡Ss	
