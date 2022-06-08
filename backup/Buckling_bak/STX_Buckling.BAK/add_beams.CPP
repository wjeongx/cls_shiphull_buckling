





function add_beams()


integer chk, num_posted_group, elm_count, elm_ids(virtual), i, j, k
integer topo_codes(virtual), shape(virtual), nnod(virtual)
integer nodes(virtual), elm_id(1), chkNodes(2)
integer beamCount, beamIDs(virtual), chkBeam(2)
logical lgcBuff
string grpName[31](virtual), viewport_name[31]
string strBuff[virtual], beamList[virtual]


ga_viewport_current_get( viewport_name )
ga_viewport_ngroups_get( viewport_name, num_posted_group )	


SYS_ALLOCATE_ARRAY( grpName,1,num_posted_group)


ga_viewport_groups_get( viewport_name, grpName )
	
for ( i=1 to num_posted_group )
uil_entity_group_members_get( grpName(i), 124, strBuff )
get_ids_from_entity_list ( strBuff, "elem", elm_count, elm_ids)


sys_allocate_array( topo_codes, 1, elm_count )
sys_allocate_array( shape, 1, elm_count )
sys_allocate_array( nnod, 1, elm_count )


db_get_elem_etop( elm_count, elm_ids, topo_codes )
db_get_elem_topology_data( elm_count, topo_codes,shape, nnod)


FOR ( j =1 to elm_count )


if ( shape(j)== 4 ) then
sys_allocate_array( nodes,1, 4 )
elm_id(1) = elm_ids(j)
db_get_nodes_for_elems(1,4,elm_id,nodes)
strBuff = "Node "//str_from_integer(nodes(1))//" "@
//str_from_integer(nodes(2))//" "@
//str_from_integer(nodes(3))//" "@
//str_from_integer(nodes(4))
uil_list_a.clear( )
list_create_elem_ass_node( 2, strBuff, "lista", beamList )
get_ids_from_entity_list ( beamList, "elem", beamCount, beamIDs )


FOR( k=1 to beamCount )
elm_id(1) = beamIDs(k)
db_get_nodes_for_elems(1,2,elm_id,chkNodes)
chkBeam(1)=mth_array_search(nodes,chkNodes(1),lgcBuff)
chkBeam(2)=mth_array_search(nodes,chkNodes(2),lgcBuff)
if ( chkBeam(1)!=0 && chkBeam(2)!=0 ) then
ga_group_entity_add( grpName(i), "Elm "//str_from_integer(beamIDs(k)) )
end if
END FOR
		


end if	


END FOR 	






end for
	


$list_create_elem_ass_node( 2,"", "lista", strBuff )


end function