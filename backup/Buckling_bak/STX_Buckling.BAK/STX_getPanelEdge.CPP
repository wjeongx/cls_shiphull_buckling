
/*******************************************************************************
 *
 *   FUNCTION STX_getPanelEdge( )
 *
 *   Purpose :
 *             TO get INTEGER array FreeEdgeLoop and
 *             CALL "STX_chkPnlShape" FTN
 *               w/t  INTEGER array FreeEdgeLoop()
 *   Input   :
 *             STRING  array    elmList[]()
 *
 *   Output  :
 *             REAL array   ra_PanelInfo()
 *                           ra_PanelInfo(1): span  -a
 *                           ra_PanelInfo(2): space -b
 *                           ra_PanelInfo(3): angle
 *                           ra_PanelInfo(4): projected Coordinate (1 or 2)
 *
 *   Side Effects :
 *        <none>
 *******************************************************************************/

FUNCTION STX_getPanelEdge( i_CntPanel, elmList, ra_PanelInfo )


$#include "dbtypes.h"
$#include "lpkeywords.p"
$#include "lpenums.i"
$#include "msg_fem.i"




INTEGER i_CntPanel
STRING elmList[]
REAL ra_PanelInfo()


INTEGER status
INTEGER num_elems,free_edges,i, k
INTEGER el_ids(VIRTUAL),shape(VIRTUAL)
INTEGER el_nodes(VIRTUAL),edge_el_ids(VIRTUAL),dummy(VIRTUAL)
INTEGER el_con(VIRTUAL),edge_ids(VIRTUAL)


INTEGER FreeEdgeTable(VIRTUAL), NodeIDs(VIRTUAL), CntNode
INTEGER FreeEdgeLoop(VIRTUAL), chkEndNode, startNode, CntLoop
STRING NodeList[VIRTUAL]




num_elems = 0


get_ids_from_entity_list ( elmList, "elem", num_elems, el_ids)


MTH_SORT(el_ids,TRUE,num_elems)


status = SYS_ALLOCATE_ARRAY(shape,1,num_elems)
IF (status != 0) THEN RETURN status
status = SYS_ALLOCATE_ARRAY(el_nodes,1,num_elems)
IF (status != 0) THEN RETURN status
status = SYS_ALLOCATE_ARRAY(edge_el_ids,1,num_elems*4)
IF (status != 0) THEN RETURN status
status = SYS_ALLOCATE_ARRAY(edge_ids,1,num_elems*4)
IF (status != 0) THEN RETURN status
status = SYS_ALLOCATE_ARRAY(dummy,1,4)
IF (status != 0) THEN RETURN status
status = SYS_ALLOCATE_ARRAY(el_con,1,num_elems,1,4)
IF (status != 0) THEN RETURN status


db_get_nodes_for_elems(num_elems,4,el_ids,el_con)
db_get_elem_shape_for_id(num_elems,el_ids,shape)


FOR (i = 1 TO num_elems)
db_get_elem_nodes(el_ids(i),el_nodes(i),dummy)
END FOR

/*
   * get all free edges FOR requested elements
   */




status = fem_u_get_free_edges(el_ids,4,4,@
4, num_elems,el_con,shape,el_nodes,@
edge_el_ids,edge_ids,free_edges)
IF (status != 0) THEN RETURN status
IF (free_edges == 0) THEN RETURN 0


$ ####################################################################


SYS_REALLOCATE_ARRAY(FreeEdgeTable,1,free_edges,1,5)
SYS_REALLOCATE_ARRAY(FreeEdgeLoop,1,free_edges+1)


FOR( i= 1 TO free_edges )


list_get_node_ass_el_edge ("elem "//str_from_integer(edge_el_ids(i))//".1."@
//str_from_integer(edge_ids(i))@
, NodeList)
get_ids_from_entity_list ( NodeList, "node", CntNode, NodeIDs)


FreeEdgeTable(i,1) = edge_el_ids(i)
FreeEdgeTable(i,2) = edge_ids(i)
FreeEdgeTable(i,3) = NodeIDs(1)
FreeEdgeTable(i,4) = NodeIDs(2)
FreeEdgeTable(i,5) = 0/* flag */


END FOR


FreeEdgeLoop(1) = FreeEdgeTable(1,3)
FreeEdgeLoop(2) = FreeEdgeTable(1,4)
FreeEdgeTable(1,5) =1
startNode= chkEndNode = FreeEdgeLoop(2)
CntLoop =2


$ WHILE ( CntLoop <= free_edges )/* this is dagerous code */


FOR ( k=1 TO free_edges-1 )
FOR( i=1 TO free_edges )
IF ( (FreeEdgeTable(i,3) == chkEndNode)&& @
(FreeEdgeTable(i,5)==0) ) THEN
CntLoop = CntLoop+1
FreeEdgeTable(i,5)=1
FreeEdgeLoop(CntLoop) = FreeEdgeTable(i,4)
chkEndNode = FreeEdgeLoop(CntLoop)
ELSE IF((FreeEdgeTable(i,4) == chkEndNode)&& @
(FreeEdgeTable(i,5)==0) ) THEN
CntLoop = CntLoop+1
FreeEdgeTable(i,5)=1
FreeEdgeLoop(CntLoop) = FreeEdgeTable(i,3)
chkEndNode = FreeEdgeLoop(CntLoop)
END IF 	
END FOR
END FOR


IF ( CntLoop <= free_edges ) THEN
	ui_write("Panel "//str_from_integer(i_CntPanel)//" has HOLEs @ "//elmList)
	gm_hilight_string(elmList,4)
	RETURN 0	 	
END IF	


$ END WHILE




$ DUMP 	FreeEdgeLoop, FreeEdgeTable, CntLoop
$ DUMP "#### EDGE CHECK ####"


STX_chkPnlShape(i_CntPanel,elmList, FreeEdgeLoop, 11.5, ra_PanelInfo)




RETURN 0


END FUNCTION
