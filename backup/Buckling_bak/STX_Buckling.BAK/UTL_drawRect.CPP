
/*
  panel_line      segID : 1
  panelID_text    segUD : 2
  thickness_text  segID : 3
  plus_marker      segID : 4
  square_marker   segID : 5
 
*/


FUNCTION UTL_drawRect(ra_corner, i_CntPanel )


REAL ra_corner(), ra_center(3)
INTEGER i_segmentID, i, i_CntPanel, i_markID(4),i_markerID
LOGICAL l_chkID
STRING s_buff[32]
l_chkID = UTL_markID.getLineSeg()
IF( l_chkID == false ) THEN


gm_segment_create( i_segmentID )
UTL_markID.setSegID(i_segmentID)	
FOR ( i=1 to 4 )
gm_segment_create( i_segmentID )
END FOR 	
UTL_markID.setLineSeg(true)


END IF 	


i_segmentID = UTL_markID.getSegID()
i_markID = UTL_markID.getMarkID()
IF( i_markID(3) == 7 ) THEN
i_markerID = i_segmentID+4
ELSE
i_markerID = i_segmentID+1
END IF 		


FOR ( i=1 TO 3 )
gm_draw_line( i_segmentID, i_markID(1), ra_corner(i,1:3), ra_corner(i+1,1:3) )
END FOR
gm_draw_line( i_segmentID, i_markID(1), ra_corner(4,1:3), ra_corner(1,1:3) )


FOR( i= 1 TO 3 )
ra_center(i) = (ra_corner(1,i) + ra_corner(2,i) +ra_corner(3,i)+ra_corner(4,i))/4
END FOR


gm_draw_marker ( i_markerID, i_markID(2), ra_center, i_markID(3), i_markID(4))


IF ( UTL_markID.getResText() == false ) THEN
gm_draw_text ( i_segmentID+2, i_markID(1), ra_center, str_from_integer(i_CntPanel) )
ELSE
str_formatc(s_buff,"%4.2f",UTL_markID.getResTextData())
gm_draw_text ( i_segmentID+2, 7, ra_center, s_buff )	
UTL_markID.setResText(false)


END IF 	


gm_segment_flush()	


END FUNCTION


FUNCTION UTL_clearMark()
integer i_initSegID, i, i_Chk
i_initSegID = UTL_markID.getInitSegID()+5 	
gm_segment_create( i_chk )
FOR ( i=i_initSegID to i_chk)
gm_segment_delete(i)
END FOR
	


END FUNCTION






FUNCTION UTL_drawClear()
INTEGER i, i_chk


UTL_markID.setLineSeg(false)
i_chk = UTL_markID.getSegID()+3
$ gm_segment_create( i_chk )


FOR( i=1 TO i_chk )
gm_segment_delete(i)
END FOR
gm_segment_flush()	
		
END FUNCTION
	