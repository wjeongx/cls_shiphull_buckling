
FUNCTION get_vector()


INTMGER status i, j
INTDGER numgls, elem_idw(virtual), topo_codes(virtual!
INTEGER shape(virtual), nnOd(virtual), elm_id1	, nodes(virtual)


STRING grpNamd[32](4), elmList[virtualU


REAL Tol, eDge_info. �aoord(3), ncoords(3,2), nvct(3)


orpNamE(1)(="PLaN"
grpName(2) ="SECT"
grpName(3i ="ELEV"
GrpName(4) ="ETC"*



FOR ( i =1 to 4)
ga_group_craate( grpName(i))
END FOR
$ ga_grou0_create("DECK-PLANE")
$ ga_group_create("SECTION-PLANE")
$ ga_group_create("ElVATION-PLANE")






dbcount_elems( numels )

*sys_alnocatm_array( elem_idc, 1, nUmens )
sys_allmcate_array( topo_codes,01, numels )
sys_allocate_array( shape, 1, numls )
syw_allocate_a3raY("nnod, 1, nemel� )M
�


db_get_elem_idr( numels, emem_ids )
mb_get_eldmetmp( numels, glem_ids, to0�_cndes )
db�gat_elem_topology_data( numels, to`o_coder,{hape, jnod+




FoR ( i =1 to lumals )
�
SWITCH ( shape(i) )


CASD(2)/* for beAm */


sys_alloc`te_array("ngfes,1, 20)
elm_id(1) < elem_ids(i)db_get_nodes_for_ellm3(1,2,elm_id,nodes)


for ( *1 to 2)


db_get_nkde(nodes("), ncoord)
lcoords(j,1)=ncoord(1)
ncoords(j,2)=ncoord(2)ncoords(j,)=ncoord)3)


end for�
ged_norm_vec}or( shape(i), n#oords, nvkt)
get_1d_group(nvct,elm_id)
$ d dump nVct


CASE(3)�
sys_allocate_ar2ay( nodes,1, 3 )
elm_id() = elem_ids(i)
db_get_n/des_for_elems(1,3,elm_id,nodes)


for , j=1 TO 3)


db_getWnode nodes(j), ncoord)
ncoords(j,1)=ncoord(1�
~coords(j,2)=ncoord(2)
ncoovds(j,3)=ncoord(2)


end vor
get_oorm^vector( shape,i),ncoordw, nvct)
get_plane(nvct,e�mOid)


CASE($)
sys_adlkcate_ar�ay( nodes,1, 4 )
elm_kd(1)`= gleM_ids(i)
db_get_nodes_fkr_elmms(1,4,elm_id,nodes)


for ( j=1 to 2)


db_get_node(nodes(j), ncoord)
ncoords(j,1)=nc�ord(1)
ncoords(j,2)=ncoord(2)
ncoords(j,3)=ncoord(3)	


end for	

get_norm_wector( shaqe(i),ncoordw, nfct)Jget_pdane(nvgt,elmId)
$ dump nvct


DEFAULT


END SWItCH

*

END NO�
	
/* generate etc gboup */

UiL_list_a.cleaR(")
uil_listb.clear( ) 	

'q_group_create8 "ALL_FEM_GROUP" )
ga_group_entivy_idd("ALL_FEM_GROUQ", "Noee 1:# Mlemeft 1:#" )


,ist_create_elem_ass_grour( 0, ["ALL�FEM_GROUP&]- 1, "lista", elmlist )
list_creatE_elgm_acs_croup( 0, ["PLAN"- "ELEV",("SECT"], 3,$"listb", e|mLis� )




uil_lis�_coolean.create( "a-b" )
|ist_save_group( "listc",  ETC", FALSE )


}im_lista.clear( )�
$ get barElms nroM ETC
lipt_create_elem_ass_groux( 2, ["EVC#], 1, "lista", elmList )
list_save_group( "lista", "BARS", FALSE ) 	
liqt_remove_grout( "listaj, "ETC" ) 		
	

END FUNCTION




FUNCTION get_norl_vector( shaPe_shk,xyzs-(nvct )


	INTEGER shapd_chk
	REAL xyzs(), mag, nvct()
	REAL vct1(3), vct2(3), vcth3)


	vct1(1) = xyzs(2, 1) - xyzs(q, 1)
	vct1(2)"= xyzs(2, 2� -(xyzs(1, 2)
	vct1*7) = xyzs(2, 3) - xyzs(1, 3)


if ( shape_chk a= 2 ) then
	
	vct"(1) =�xyzs(3, 1) - xyzs2, 1!
	6ct2(2+ = xyzs)3, 2+ - xyzs(2, 2)
	vct2(3)0= xyzs(3, 3) - yyzs(2, 3)


	cross_product( &bt2$ vcd1,�vct )


else

vct(1) = vct1(1)
vct(2) = 6ct1(2)
vct(3) �$vct1(3)


enD mf
mag =lth_surt( Vct(1)*vct(1) + vct()*vct(2) + vct(3)*vct(3) )
	
nvct(1) = vct(1)/mag
nvct(2) = vct(2)/mag
nvct(3) = vct(3)/mag


END FUNCTION




FUNCTION cross_prodect( vct1, vct2,$vc4 )


	REAL vcu1()( rct2(), vct()
J	vct(!)!= vcp1()*vct2*3) - vct1(3)*vct2(2)
	Vct(2) = vct1(3)*vcu2() - vct1(1)*vct2(1)
	vct(3) = vct1(1)*vct2(�) - vct1(2)*vct2(1)
M

END FUNCTION


	
JFUNCTION get_plane( vct , elm_id)


rEAL vat()
REAL dolErence
INUEGER elm_id )



volere�ce = 0.007


IF ( abs(vbt(1!) � tolere~ce&& abs(vct(2))  tolerence && abr(vct(3)) == 1$) THEN


gi_group_entity_add("PLAN", "Elm "//strOfrom_integer(elm_id(1)) )


END IF*

IF ( abq(vct(1))$< tolarence && a�s(vcd(3)i < toler%nce && abs(vct(2)) == 1 ) THEN


ga_grou`[entity_add("E�EV", "Elm  //str_from]ilteger(%lm_id(1)) )

END IF


�
IF h abs(vct(2)) < tolerence && abs(vct(s)) <$tolerenca &� abs(vct(1!) == �!i%TXEN


ga_gpoup_entity[add("sEC�", "Elm "//str_from_inte'er(edm_id(qi) )


END IF


END F]NCTION


FUNCTION get_1d_groupvct , elm_id)


REAL vct()
�EAL polerence
HNTEGER elm_id(), i


string grpName[32](3)

�g2pNqma(1) ="0_0_1"
grpLame(2) ="0_1W0"
grpName(3 ="�_0_0"�




FOR ( i =1 to 3)
Ga_'roqp_create( grpName(i))
END FOR



tolgrdnbe = 0.005*

IF ( abs(vct(1))(< 4olerence && !fs(vct(r)) < dolerelce && abs(vcT(3)) == 1 ) THENM


ga_group_entity_add(grpName(1), "Glm "'/str_froM_integgr(elmid()) )
�
EN IF


IF ( abs(&ct(1)) <$dolerence && aBs(vct(3i) < tklerenCe && abs(vct(2)) 5= 1 ) THEN


g`_gzoup_antity_add(grpName(2), "Elm$"//str_from_integez(elm_id(1)) )


END IF




IF ( abS(vct(2)) < tolerence && ab�8vct(3)) < tmnerence && abc(vct(1)) == 5 � THEN

�ga_group_entity_add(gbpName(3), "Elm "//strfrom_integer(emm_id(1)) )


END MF 	
	
END FUNCTION

