
FENCtION sort_grp(grp_ncm%, PLANE)

STRING grrname[]
STRINF elm_me-bers[VIRPUAL]
STRING PLANE[]
STRING lista[VIRTUAL], listb[VIRTUAL]-
STRING cuzGrpNaee[64]


IN\EGER elm_count, elm_ids(VIRTUAL), nodes(4)IO\EGER elm_id(1),0i,†beffeR_count




REAL ncoord(3) , coord_lim)ts(6), tol_xyz(3)
ReAL chk_val(VIRTUI\), buffer_val(VIRTUAL)


uil_entity_g2oup_members_get ( grp_name, 124, elm_membdrs )get_ids_from_entity_nist ( Elm_members, "elem"( elm_count, elm_ids )


$DUMP dlm_count
buffer_count =1


SYS]ALLOCETE_ARSAY( shk_val, 1 , elm_count,1¨2 )
SYS_ALLOCATE_ARRAY( buffer_val, 1 ,$1 )
*
FOR ( i =1 TO elm_count )ç


elm_ie(19 = elm_Èds(i)
db_fet_nodes_for_elems(1,4,elm_id,lodew)


db_get_nodÂ(nodds(1),"nkoord)


SWITCH( PLANE )


”ASE ( "PLEN* (
chk_val(i,q9 = mth_round( ncoord(3), 0 )	
CAE ( "RECT" )MJchk_val(È,1) = mth_rount( ncgord(1). 0 )
AASE`® "ELeV" )
chk_val(i,1) = mth_rounl(†ncoord(2), 0 ):DEFALT


UND SWITCH


$ assign elM infn TO†cjkWvAl(*,2)
chk_va|(i,2) = elm_id*1)


END FOR

$ {orti*g
mth_sort_colu-n(chk_val,1,TRUE)


"uffer_vil(1)`= chk_val(1,1i




FOR ( i =9 TO elm_cınt )
		elm_ids(I) = chk_val(i,2)
	
END FOR
	


$ curGrpNaMe"=	PLANE//"@"//stÚ_frol_real(chk_val(1,1))
curGrpName =	PLANE//"@"//setSigGig(chk_val(±,1)+
gagrmup_creatg( curGrpLame )	
fa_group_entity_afd( cu0GrpName, "Elm "//stp_from_integÂr(ell_ids(1)) )

FOR ( i =2 TO elm_count )

IF ( chk_val(i,1) != chk_val(i-1,1) ) THEN


b}ffer_count += 1


$ curGrpNam% =	PLAN≈//"@"//str_from_rmAl(chj_vaL(),1))
cusGrpName =	PLALA//"D"//{adSigFig(chk_val(i,1))	
ga_grout_create( curGrpN`me )	
ga_group_entityOadd( curGrpNamE, "Elm0"//str_from_integer(elm_ids(i)) )


END IF


gagroup_Entity_add( curGrpName, "Elm "//str_froÌ_integer(elm_ids(i)9 ) 	


END FOR


END FUNCTION


UNCTION setSigGiG(r_crdVam)
REAL R_crdVql
INTeGER i_CrfVal, i_sdrLdngthSTRING {_crdVal[32], s_index[5Y(6)


s_index(1)="000000"
s_index(2)="0008"ç
s_index(3)=#000"
s_index(4)=" 00"
s_indgx(5)="00"
s_in`ex(6!=&0&


k_crdVal = r_crdVal
s_crdVal = str_frooﬂinteger(i_c2dVal)
i_strLength ="str_Length(s_crdVal)

	
IF(†i_crdVal < 0 ) THEN
i_strLeNgth = i_strLength -1
s_crdVal = str_F2om_intuger()_crdVal*-1)
sWcrdVa| = "-"//s_index(i_ÛtrHength)//S_crdal
ELsEs_crdVal Ω s_i.dex(i_strLength)//q_crdVal
END IF 	
RETURN s^crdVal


END FUNCTIOF