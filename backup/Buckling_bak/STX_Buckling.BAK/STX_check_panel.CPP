
FUNCTION STX_check_panel(ia_pnlIDs,sa_elmList,ra_PanelInfo)


INTEGER ia_pnlIDs()
STRING sa_elmList[4096]()
REAL ra_PanelInfo()


STRING lclist[32](VIRTUAL)
INTEGER numlclist
REAL usr_inform(virtual)
	
numlclist = STX_loadcase.getSelectedlcNum()	
sys_allocate_array ( lclist ,1 , numlclist)
lclist = STX_loadcase.getSelectedlcList()	




IF ( STX_buckling.getClass() == "LR") THEN
sys_allocate_array(usr_inform,1,5)
usr_inform(1:5) = STX_input_param.getUsrInfo() 	
STX_make_panel_inform.lloyd_main(lclist, ia_pnlIDs, sa_elmList, ra_PanelInfo, usr_inform)	
ELSE IF ( STX_buckling.getClass() == "DNV" ) THEN
sys_allocate_array(usr_inform,1,11)
usr_inform(1:11) = STX_DNVinp_param.getUsrInfo()
STX_make_panel_inform.dnv_main(lclist, ia_pnlIDs, sa_elmList, ra_PanelInfo, usr_inform)
ELSE
sys_allocate_array(usr_inform,1,7)
usr_inform(1:7) = STX_RINA_inputParam.getUsrInfo()
STX_make_panel_inform.rina_main(lclist, ia_pnlIDs, sa_elmList, ra_PanelInfo, usr_inform)
END IF






END FUNCTION