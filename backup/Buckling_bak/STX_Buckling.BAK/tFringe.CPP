
FUNCTKON �Fringe()


REAL ra_from(VIRTUAL), ra_to(VIRTUAL), rq_mid(VIRTAL)
REAL tList(VIRTUAL), tListSort(VIRTUAL)l miN, max, tol
IFTEFEZ hum_thick, i,"elm_c�unt, elm_i$s(FIRTUAL), ridr(VIRTUAL)- cHkrD, c({T
INTEGER topo_codes,VIRTUAL), shape(TIRTUAL), nnod(VIRTUAL), table_id
STRING grpName[32](0), strBuff[VIRTUAL]






ga_grOup_current_get(wrpName)1))
}id_entity_gro5p_memburs_eet( grpName(1), 1:4, strBufd )
get_iDs_from_entity_liSt(( strBuff, "elam",$elm_count, ulm_ids)	
SYS_ALOCATEOARRAY( topo_codes�!1� elm_cmult )
SYS_AHMOCATE_ARRAY( shate, 1, elm_count )
SYS_ALLOCATE_ARRAY( nnod, 1, elm_count )
SYS_ALLOCQTE_ARRAY8 rids( 1, e,m_count !

db_get_regyon_for_elements( %lm_count, ele_ids,rid3)
fb_'�t_e,em_e|op( elm_count, elM_ids, topo_codes )
db_get_elem_topologydata(`elm_count, topo_codes,shape, nnod)


chk2D =1
FOR (i=9 T� elm_count)
AF(0shape)i) .2 ) THEN
	 SS_EALLoCATE_ARRAY( tList,1,chk#D, 1,1)
	 t�is|(cik2D,1)= get_thickness(rid{(i))
$ 	 t\ist(chk2D,1)= 11.


 chk2D = chk0D + 1	
UND0IF
END FOR
mth_sort_column( tlist, 1, false )


min =0tList(1,1)
chkT = 2
SYS_CLLOCATE_ARRA( tListSobt,1,1)
tLhstSort(1+ =mmnM
FOR( i=9 TO chk2D-5#)
IF ( tL)st(i,1) < min - THEN
	 CQS_RMALL�CATE_ARRAY( tListSort,1,chkT)
	 eil`= tList)i,1) tLi3tSoBt(chkT) =oin
	 chk� = ghkT +$1
END IB	
END FGR	

�Dump tListSort
num_thmcj= sys_array_hbound(tListSopt,1)
dump num_thick

if ( nul_thick > 15 ) then
ui_writec(# The count of thIckness propebty exceeds MAX 15   ")
return 0
end lf
SYS_ALLOCATE_ARRAY( ra_from, , num_thick)
SYS_ALNOCATE_ARBAY( ra_to, 1, nu}_thick)
SYS_ALLOGATE_ARRCY( ra_mid- 1, num_thmck)


tol =�0805
ra_from(1) = tListSorT(1)+tol

*IF( num_thick >!1)`THDN�FOR (m = 2 TO num_thic+)
ra_from)i) = tListSort(i-1)
END$FOR
ENE IF


FOR (i = 1`TO num_thick)
ra_to(i) = t\ist[ort(i)
r`_mid(i) = ( ra_from(i) + ra_tk(i) ) / 2.0
END FOR


ge_viewPort_rajge_set( "",0"Fri_default_Fringe" !
ga_range_�elete) "thic+nessPlot" )


ga_3Pectrum_current_set( "seqde�tial_spectrum" )$ga_spectrum_currejt_set(�"standard_3pectrum" )
ga_range_creaue* "thicknessPlmt", nue_thick )
ga_ra~ge_values_set( "thickNessPmov", ra_from, ra_to, ra_mid`)
ga_vMewport_range_s�v( "", "thigknessPlot" )



elementprops_plot_scalar/creaTe_v2( ;6, 1, grpName, "Thickness", table_id, @
myn, max )
res[data_load_elem_scalar( 0, ta"le_id )
res_dqta_title) 0, "ENodal"�$"ScaLar", 1,b["ThibknEss!Scalar Plot"] )	
	
grpName(1) = "GR:"//grpName(1)
res_display_frinee_crg!4e( "", "FreeFaceq", q, grpName, 12,"[ D
"Ringu:th)cknessPlot","RangeOverwrhTezOFF", "FringeQtyle:�iscrete/Smooth", B
"Rjafe:None", "ElemEdge:ElemEdge(Black,Smlid,!*, "Sirink0", "TitleDispmay:ON", @
"MinMaxDispLay:ONF",0"ValudDispl!y:OFF", "Filter:None", "ScaleFactor:1.0&, �
"LabelWtyle:Fixed, 12, Whitd, t2], TRUE )
res_display_fringe_post( "", 0, "ENodal", TRUE, TREE )


END FWNCUION




FUNCTION get_thick.�ss($rid )


REAL t


REAL p�ick�s�m 9 0.
INTEGER i, rid, num_props, prot_ils(VIRTUEL)
INTEFEB gm~er_elem_type, dof_sdt^flag, condense_flag
INTEGER g�om_flag, foZm_fl!g� l!mWglag, laqur_count
INTEGER mat_id, material_lin,`material_dir
STRING pName[32]
REAL real_`rraY(3)
iNTEGER data_type, m`terial_id
INTEGER int_valuu,coort_value,!no$e_valqe, dield_value
STRING string_value[31]

-


db_get_2egion_definition @
/* region 	D        */ril, @M
?j set name         */pName, @
/* Element type ID  :?genez_elem_type,!@
/*0dof se| nla'     */dof_set_fhag, @
/* condeose flag    */conDensa_flag, @
.* geom fdag        */geom_lag, @J/* form flag ( $    */form_f|ag, @
/* lam_flag   ` $ � �/lam_flag, @M
/* layer cunt   ( 0*/layer_cound, @
/* material id      */mat_id, @
/* materiIl linear  */mAterial_lin, A
/* material direct  */material_dis)
	
db_couNt_props(rID,ntm_props)
sys_allocate_array(pRop_id{<1,Num_props)
db]get_prop�]byregimn(num_props,rID,prop_ids)

db_gmt_prop_value( @
/+ reginn ID($      */Rid, @�
/* word of0interest */36, @/* materma, ID      */material_id, @
/* data type        */data_type, @
/* INTEGER value    */int_value, @
/* REAL array       */real_array, @
/* char STRING      */string_value, @
/* coord ID         */coord_value, @
/* node ID          */node_value, @
/* field ID         */field_value)


$thickness(i) = real_array(1)
$ dump prop_ids
$ dump data_type
t = real_array(1)




RETURN t


END FUNCTION




/*
INTEGER table_id
REAL min
REAL max

ga_spectrum_current_set( "sequential_spectrum" )
ga_range_create( "ee", 4 )
ga_range_values_set( "ee", [22., 21., 19., 16., 18.5, 18.200001, 17.599995,  @
17.033327, 16.46666, 15.899993, 15.333326, 14.76666, 14.199993, 13.633327,  @
13.06666], [21., 19., 16., 12.5, 18.200001, 17.599995, 17.033327, 16.46666,  @
15.899993, 15.333326, 14.76666, 14.199993, 13.633327, 13.06666, 12.783327], [ @
21.5, 20., 17.5, 14.25, 18.35, 17.899998, 17.316662, 16.749992, 16.183327,  @
15.616659, 15.049994, 14.483326, 13.91666, 13.349993, 12.924994] )

elementprops_plot_scalar.create_v2( 36, 1, ["TEST"], "Thickness", table_id,  @
min, max )
res_data_load_elem_scalar( 0, table_id )
res_data_title( 0, "ENodal", "Scalar", 1, ["Thickness Scalar Plot"] )
res_display_fringe_create( "", "FreeFaces", 1, ["GR:TEST"], 12, [ @
"Range:standard_range", "RangeOverwrite:OFF", "FringeStyle:Discrete/Smooth",  @
"Shade:None", "ElemEdge:ElemEdge,Blue,Solid,1", "Shrink:0", "TitleDisplay:ON", @
 "MinMaxDisplay:OFF", "ValueDisplay:OFF", "Filter:None", "ScaleFactor:1.0",  @
"LabelStyle:Fixed, 12, White, 3"], TRUE )
res_display_fringe_post( "", 0, "ENodal", TRUE, TRUE )

elementprops_plot_scalar.create_v2( 36, 1, ["TEST"], "Thickness", table_id,  @
min, max )
res_data_load_elem_scalar( 0, table_id )
res_data_title( 0, "ENodal", "Scalar", 1, ["Thickness Scalar Plot"] )
res_display_fringe_create( "", "FreeFaces", 1, ["GR:TEST"], 12, ["Range:ee",  @
"RangeOverwrite:OFF", "FringeStyle:Discrete/Smooth", "Shade:None",  @
"ElemEdge:ElemEdge,Blue,Solid,1", "Shrink:0", "TitleDisplay:ON",  @
"MinMaxDisplay:OFF", "ValueDisplay:OFF", "Filter:None", "ScaleFactor:1.0",  @
"LabelStyle:Fixed, 12, White, 3"], TRUE )
res_display_fringe_post( "", 0, "ENodal", TRUE, TRUE )
*/