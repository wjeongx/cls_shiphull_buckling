

FUNCTION STX_hltPanel(i_CntPanel, i_chk )


INTEGER i_CntPanel , i_chk, i_segmentID
STRING elmList[1024]


REAL ra_PanelInfo(7)


IF( i_chk ==1 ) THEN
UTL_markID.setColor()/* initialize */
i_segmentID = UTL_markID.getSegID()
gm_segment_delete(i_segmentID+4)
gm_segment_flush()	
UTL_markID.setLineSeg(false)
ELSE
UTL_markID.orgColor()/* initialize */
END IF


elmList= STX_setPanel.getElemList(i_CntPanel)


STX_getPanelEdge( i_CntPanel,elmList , ra_PanelInfo )


END FUNCTION