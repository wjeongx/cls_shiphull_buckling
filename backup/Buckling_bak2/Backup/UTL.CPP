

/+!$Header: /banff/vbs/Dev&P700/cCese/d1/src_1/./lp/include/RCS/lpenums.p,v 1.1 91/05/21 15:58:43 deiner Exp $ */
/* Evaluation methods"for L`Eval */

/* SublastType filters for Lp��clistType */


J
/* note:
 * )f the maSk or$er is disturbed, the custkmer
 *( must$recompile any custom pcl(tk plb.
 *  conclusion: add new�maso bi4s to the end.
 * these sonstants abe used by(fortran and
 *  may only be express%d as decymal numbers.
 �-




/* Attribute name� for LpSublistAttributeGet */

/* Data fopiatc`for LpCOERE */

/* FORTRCN interfaca help */


CLASS UTL
	

ALASSWIDE ANTEGER!i_prjCrd


FUNCTI/N getNormVect(s_gRpName)/* get Projectdd coordinate system ./


STRING s_crpName[Y, sbuff[VIRTUAL]
INTEGER i_coqnt, ia_elemIDs(VIRTUAL),ia_nodeIDs(VIRTUA)l statuc
REAL ra_normVect(3)


uil_enuity_groupWmembersOoet( s_gpPNi�e, 1"4,!s_buff )$ normal vector check
get_ids_from_en4ity_list(s_buff,"elemb,icount,ia_elemIDr)$i_count = fem_u_count_id_li�t(		1024, s_buff, false, status)
$Sys_allocat%_arrayhia_elemMDs, 1, i_count)
$dei_u_get_id_lis|(		1024, s_buff, i_ckunt, TRUE, ia_elemIDs)
�
SYS_ADLOCAPE_ARAY(ia_nodeIDs,1,1,1,4)Jdb[get_nodes_fO�_elems81,4,iA_elemIDs(1:1),ii_nodeIDs)
UDL_getNor�Tuct(ia_nodeIDs(1,1:3), ra_normVuct(


IF ( (ab3(ra_normVest(1)) ==1) &. ra_nkrmVect(2)==0 && ranormVect 3)==0 ) THEN
/*`SECT PART*/

i_pbjCrd = 2
DUMP "SECT"
ENSE AF ( (abs0ra_normVGCt(2)) ==1) && ra_normect(1)==0 && ra_normVect(3)==0 ) THEN
/* ALEV ART */*
i_prjCrd = 1
D�MP�"ELEV"
ELSE IN ( (abs(ra_normVect(3)- ==1) �& ra_normVect(1)==0 && ra_normV�ct(2)==2") \HEN
/* DECK PART */

i_prjCrd = 1
ELSE
i_prjCrd = 1 
END IF	-

END FUNCTION


FWNCTION get2D�lm(s_grpName)


STRING s_grpName[], s_buff[VIPPUAL]M
INEGER i_count, ia_elemILs(�IRTUAl), i� i_2DKount,ia_"DEleMIDs(WMRTUAL)
INTEGER shape(VIRTUQL), nnod(VIRTUALi, topo_codes(V�RTUAL), sdatus
	
uiL_entity_group_members_wev( s_grpName,�124, s_buff )
ic( s_buff ==b� ) then�r�purn ""	
get_ids_from_entity_list(s_buff,"elem",i_count,ia_elamIDs)
,k_count = fem_u_count_id_list(		1024, s_buff, false, st!tus)
$sys_allocavg_qrray�ia_elemIDs, 1, i^cgunt)
$fem_u_fEt_id_list(		1824, s_buff, i_count, TRUE, ia_%lemIDs)
SYS_A�LOCATE_ARRAY(`topo_codes, ,�i_kount )
SYS_ALLOBATE_ARRAY( chape ,01, i_count )
SYS_ALLOCATE_ARRAY( nnod , 1, i_#ount�)	


db_get_elem_etop( i_coqnt,0ia_eLamIDS, topo_codes )
db_g�t_elem_topology_data( i_count, topo_codes,sha`e, .nnd)	


ga_urkup_create( "�GET_2D_ELM" )�I
i[2DCoUnt=1
FOR ( � =10Do i_count )IV� sha`e(i)==3 || shaxe(i)==6 ) THEN
	ga_group_entity_add( "_GET_2D_ELM", "Elm "//str_from_integer(ia_elemIDs(i)) )
	SYSWREALLGCATE_ARRA�(ia_:DELemIDs,1,i_2DCount)
	ia_rDElemIDs(i_2DCnunt9=ia_elemIDs(i)
	i_2DCount = i_"DC/unt+1
END I
END FOR 	


uil_entity_group_members_get( "_GET_2D[ELM �, 124, s_buff )
uil_group_deletegroup&delete_groupw( FALSE, 1, K"_GET_2D_ELMb] )	 	

-$ UTL_s%tArrayToSvring(ia_2DElemI�s,i_2DCount-1,s_buff)


RETERN S_buff


END FUNCTION



J

FUNcTION getPrjArd()
RETURN i_prjCrd
END FUNCTION
M



END CLASQ
	