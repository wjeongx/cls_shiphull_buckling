




CLASS UTL_markID


CLASSWIDE INTEGER markIDs(7)
CLASSWIDE LOGICAL chkLineSeg, chkText1Seg, chkText2Seg, chkPMarkSeg
CLASSWIDE LOGICAL chkSMarkSeg, chkResText
CLASSWIDE REAL r_resText


FUNCTION setColor()
	markIDs(1)= 6/* color */
$ 	markIDs(2)= 6/* color */
$ 	markIDs(3)= 7/* type */
$ 	markIDs(4)= 10/* size */
	markIDs(2)= 3/* color */
	markIDs(3)= 4/* type */
	markIDs(4)= 5/* size */
END FUNCTION


FUNCTION orgColor()
markIDs(1)= 1
	markIDs(2)= 3
	markIDs(3)= 4
	markIDs(4)= 5/* size */
	markIDs(5)= 1/* selectd_panelID */
END FUNCTION


FUNCTION setElmID(i_elmID)
INTEGER i_elmID
markIDs(5) = i_elmID
END FUNCTION


FUNCTION setSegID(segID)
INTEGER segID
markIDs(6) = segID 	
END FUNCTION


FUNCTION setInitSegID(segID)
INTEGER segID
markIDs(7) = segID 	
END FUNCTION




FUNCTION setLineSeg(chkLine)
LOGICAL chkLine
chkLineSeg = chkLine
END FUNCTION


FUNCTION setResText(chk)
LOGICAL chk
chkResText = chk
END FUNCTION


FUNCTION setResTextData(r_data)
REAL r_data
r_resText = r_data
END FUNCTION


$ ################################################


FUNCTION getSegID()
RETURN markIDs(6)
END FUNCTION


FUNCTION getInitSegID()
RETURN markIDs(7)
END FUNCTION


FUNCTION getLineSeg()
RETURN chkLineSeg
END FUNCTION


FUNCTION getMarkID()
RETURN markIDs(1:4)
END FUNCTION


FUNCTION getElemID()
RETURN markIDs(5)
END FUNCTION


FUNCTION getResText()
RETURN chkResText
END FUNCTION


FUNCTION getResTextData()
RETURN r_resText
END FUNCTION


END CLASS
