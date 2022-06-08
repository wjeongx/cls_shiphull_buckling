

/*
 *  Fundamental values
 */

/*
 *  Pixels
 */

/*
 *  Forms
 */

/*
 *  Buttons
 */
/*
 * #define BUTTON_HGT		0
 */


/*
 *  Separator
 */

/*
 *  Slidebar
 */

/*
 *  Option Menu
 */

/*
 *  List Box
 */

/*
 *  Frame
 */

/*
 *  Toggle
 */
/*
 * #define TOGGLE_HGT    	0.20 
 */

/*
 *  Miscellaneous
 */





/*
 *   SPACING
 *
 *
 *   Spacing should be done relative to the active font height in system.
 *   A "single_space" is simply one font height.  The "inter_widget_space"
 *   should be used as the spacing between widgets in a frame.  It is
 *   three quarters of a font height.
 *
 *
 *   Spacing variables:
 * 
 *   INTER_WIDGET_SPACE        - 3/4 of a font height
 *   INTER_GROUP_SPACE         - Twice the size of a "inter_widget_space"
 *
 *   SINGLE_SPACE              - A font height in inches
 *   QTR_SPACE                 - 1/4 of a font height
 *   HALF_SPACE                - 1/2 of a font height
 *   THREE_QTR_SPACE           - 3/4 of a font height
 *   ONE_AND_HALF_SPACE        - 1.5 times a font height
 *   DOUBLE_SPACE              - 2.0 times a font height
 *
 *   FONT_HGT                  - Font height in inches
 *   TEXT_FONT_HGT             - Text font height in inches
 *   SS_FONT_HGT               - Spreadsheet font height in inches
 *
 *   LINE_THICKNESS            - Thickness of a separator
 *   FRAME_1EDGE               - Thickness of a frame edge
 *   FRAME_2EDGE               - Thickness of both frame edges
 *   SFRAME_1EDGE              - Thickness of a select frame edge
 *   SFRAME_2EDGE              - Thickness of both select frame edges
 *   SCROLL_FRAME_1EDGE        - Thickness of a scroll frame edge
 *   SCROLL_FRAME_2EDGE        - Thickness of both scroll frame edges
 *   SPREADSHEET_1EDGE         - Thickness of a spreadsheet edge
 *   SPREADSHEET_2EDGE         - Thickness of both spreadsheet edges
 *   HIGHLITE_1EDGE            - Thickness of a highlight border around widgets
 *   HIGHLITE_2EDGE            - Thickness of both highlight borders
 *
 *   ICON_HGT                  - Height of an icon
 *
 *   LOGO_ICON_WID             - Width of a logo icon
 *   LOGO_ICON_HGT             - Height of a logo icon
 *
 *   BUTTON_ICON_1EDGE         - Thickness of a button icon border  
 *   BUTTON_ICON_2EDGE         - Thickness of a both button icon borders
 *   LABEL_ICON_1EDGE          - Thickness of a label icon border 
 *   LABEL_ICON_2EDGE          - Thickness of a both label icon borders 
 *   ITEM_ICON_1EDGE           - Thickness of a item icon border 
 *   ITEM_ICON_2EDGE           - Thickness of a both item icon borders
 *   TOGGLE_ICON_1EDGE         - Thickness of a toggle icon border 
 *   TOGGLE_ICON_2EDGE         - Thickness of a both toggle icon borders
 *
 *   COLOR_MENU_WID             - Width of a color menu
 *   COLOR_MENU_HGT             - Height of a color menu
 *   COLOR_MENU_LABEL_Y_OFFSET  - Y offset for centering a label next to
 *                               a color menu
 *   COLOR_MENU_TOGGLE_Y_OFFSET - Y offset for centering a toggle next to
 *                               a color menu
 *
 *   COLOR_BOX_WID             - Width of a color box
 *   COLOR_BOX_HGT             - Height of a color box
 *   COLOR_BOX_LABEL_Y_OFFSET  - Y offset for centering a label next to
 *                               a color box
 *   COLOR_BOX_TOGGLE_Y_OFFSET - Y offset for centering a toggle next to
 *                               a color box
 *   COLOR_BAR_WID             - Width of a color bar
 *
 *   INCREMENTAL_ICON_WID      - Width of an incremental button icon
 *   INCREMENTAL_ICON_HGT      - Height of an incremental button icon 
 *
 */







/*
 * colorbox is obsolete
 */


/*
 *   FORMS 
 *
 *
 *   Create an application form.  Note that all forms should use the "UL"
 *   screen position, since the values returned by these variables are 
 *   based on that assumption.
 *
 *      ui_form_create( "", FORM_X_LOC,                      @
 *                          FORM_Y_LOC, "UL",                @
 *                          FORM_WID_SML,                    @
 *                          FORM_HGT_TALL, "Label", "Icon" )
 *   
 *   
 *   Create a medium width form next to an application form, and don't
 *   cover the command window.  Use the "Full" height form.
 *   
 *      ui_form_create( "", FORM_X_LOC_MED_NX2_SML,          @
 *                          FORM_Y_LOC, "UL",                @
 *                          FORM_WID_MED,                    @
 *                          FORM_HGT_FULL, "Label", "Icon" )
 *   
 *   
 *   Create a centered, half height, medium width modal form.
 *   
 *      ui_modalform_create( "", FORM_X_LOC_MED_CEN,         @
 *                               FORM_Y_LOC_HALF_CEN, "UL",  @
 *                               FORM_WID_MED,               @
 *                               FORM_HGT_HALF, "Label" )
 *    
 *   
 *   Form Placement - X Location:
 * 
 *   FORM_X_LOC                 - Normal form X location 
 * 
 *   FORM_X_LOC_SML             - Normal form X location (same as FORM_X_LOC)
 *   FORM_X_LOC_SPL             - Special form X location (width is 1.5
 *                                times a normal or small form)
 *   FORM_X_LOC_MED             - Medium form (medium width) X location 
 *   FORM_X_LOC_LRG             - Large form (large width) X location
 * 
 *   FORM_X_LOC_SML_NX2_SML     - Small form next to a small form
 *   FORM_X_LOC_SPL_NX2_SML     - Special form next to a small form
 *   FORM_X_LOC_MED_NX2_SML     - Medium form next to a small form
 *   FORM_X_LOC_LRG_NX2_SML     - Large form next to a small form
 * 
 *   FORM_X_LOC_SML_NX2_SPL     - Small form next to a special form
 *   FORM_X_LOC_SPL_NX2_SPL     - Special form next to a special form
 *   FORM_X_LOC_MED_NX2_SPL     - Medium form next to a special form
 *   FORM_X_LOC_LRG_NX2_SPL     - Large form next to a special form
 * 
 *   FORM_X_LOC_SML_NX2_MED     - Small form next to a medium form
 *   FORM_X_LOC_SPL_NX2_MED     - Special form next to a medium form
 *   FORM_X_LOC_MED_NX2_MED     - Medium form next to a medium form
 *   FORM_X_LOC_LRG_NX2_MED     - Large form next to a medium form
 * 
 *   FORM_X_LOC_SML_NX2_LRG     - Small form next to a large from
 *   FORM_X_LOC_SPL_NX2_LRG     - Special form next to a large form
 *   FORM_X_LOC_MED_NX2_LRG     - Medium form next to a large form
 *   FORM_X_LOC_LRG_NX2_LRG     - Large form next to a large form
 * 
 *   FORM_X_LOC_2ND_SML_NX2_SML - Small form next to a small form which is 
 *                                next to a small form
 *   FORM_X_LOC_2ND_SPL_NX2_SPL - Special form next to a special form
 *                                which is next to a special form
 *
 *   FORM_X_LOC_SML_NX2_SPL_NX2_SML - Small form next to a special form
 *                                    which is next to a small form
 * 
 *   FORM_X_LOC_SPL_NX2_SPL_NX2_SML - Special form next to a special form
 *                                    which is next to a small form
 * 
 *   FORM_X_LOC_SML_CEN         - Small form centered on screen 
 *   FORM_X_LOC_SPL_CEN         - Special form centered on screen 
 *   FORM_X_LOC_MED_CEN         - Medium form centered on screen 
 *   FORM_X_LOC_LRG_CEN         - Large form centered on screen 
 * 
 *   FORM_X_LOC_SML_CEN_AB_COM  - Small form centered above the command 
 *                                window
 *   FORM_X_LOC_SPL_CEN_AB_COM  - Special form centered above the command 
 *                                window
 *   FORM_X_LOC_MED_CEN_AB_COM  - Medium form centered above the command 
 *                                window
 *   FORM_X_LOC_LRG_CEN_AB_COM  - Large form centered above the command 
 *                                window
 * 
 *   FORM_X_LOC_OFFSET_CASCADE_1   - X offset for cascade position 1
 *   FORM_X_LOC_OFFSET_CASCADE_2   - X offset for cascade position 2
 *   FORM_X_LOC_OFFSET_CASCADE_3   - X offset for cascade position 3
 *   FORM_X_LOC_OFFSET_CASCEDE_4   - X Offset for cawcad% positimn 4
 *  "FORM_Z_LO_OFFSET_AASCADE_5   - X ofbset for cascade positioo = *
 

 * !`FoRm Placement % Ÿ Lgcation;
$*  *   FOPM_Y_LOC            0   0- Y Location for form under MaÈn Mmnuä!j *   FORM_Y_DOC_HALF_CE        - 1/:`Height form centered on!scrÂen
 *  0FœRM^Y_LOC_QPR_CEN     `   - 1/4 Height forE kaNtered oÔ screefN * 0 FORM_Y_LOC_3_8THS_CEF      - 3/8!HÂight form kent%bed /n scrgen
a*   FOrM[Y_LOC_5_8THS_CEO !    = 5/8 H%ight form centered on scrEen
 (   ¬ORm_YOC_3_QTRS_CEN      - 3/4 Heiwht form centered on {creqn. .
!*  (FORM_YﬂLOC_G∆FST_CASCADE_1    Y offset for bascadÂ posi4ion 1
 *   FORM_Y›LOC_OFFSET_CAS√QDE]0(    off{et vmr(caccede(position 2
 *   FOR]_Y_MOC_OFFSET_CASCIDE_3   - Q offsut vor ciscade position 3
 *   FO“M_y_LMC^OGFSEP_CASCADE_4   - Y offset for cascade position 4 *   FZM_Y_LOC_OFGRET_CQSCADE_%   - Y Ôffset fos c·ssade positin 5
 * 
$+ *   Gorm Widths and Hei7htw;
 *J *   FORm_WID_ML               - Width of a small for}
 *   FORÕ_WID_SPL      $        - Width of a "specicl" form (1.5 times -
 *!   (                    †$  ∞  !0small bOrm©
 :†  FORM^WID_I≈D     `         -0Width oF q medium gorm (medium size) 
 *   FORM_WID_LRG           (    Width of a large fmrm0(large size) 
 j  
 *   DORM_IGT_TALL (            - Height /f a tall$form((Eain Menu t/ 
 *    †              `         †  bottom0of screen)
 *   FORM_hGT_FLL     $        - Height of a full form (Miin Oenu to
0*   "†     !  (              "   top(of Command WiNdmw(
 *   FœRM_HGT_H@LF †      †`    - Half Of a full borm
 *   FORO_HGT_QTR               - One Quartmr of a full fgrm * $°FORM_HETW3_8\HS       `    - Three Eighths$of a nu,l form *   FORE_HGTW5_8THS  (      Ä  - Five EighthÛ of a fulÏ form
 *  †FORE_	GT_3_QDRS       0 †( - ThrÂe Quarters of a gull form
 * 
 *
 *   FOrm MacginS:
 j  ä j  `FORM_L_MARGIN          §   - ….shde LeFt Margin for wmdgets in Form
 *   FORM_R_MARGIN              - @nside Right Margin for widgets`in form
 *   fORM_T_MAVGIN      "4      - InsId% T/p ]argin!cbove first widg%t
 *   FORM_B]MARGIN        (  "  -"In{ide Boutom Iargi."buÏow last widgmtç
 *   FORM_B_MARG	N_NO_BQTTON    ≠ InSade BottoÌ MArgin below last widgep
 :      †    † "            "     when last wydget is not a but4on
 *   
 *†  FORM_2H_MARGIN             - Both hobizontah margils
 * 0 FOBM_2V_MARGIN       †     - Both ˆertical marÁins
 *   FORM_2V_MARGIN_NO_BUTTON   - Coth vertical margins (when last widget
 *       0          0$   "     !$ is Not$a buttmn)
 *"
(.
 * † Form`Borders (txe colore%(iRÂas outside thg goro):
 "  
 *! †FOZM_D_BORDER     †        - Lefd BordÂr of the form 
 *   FORM_R^BMRDDR              - Righ| Border of the form
 *   FORM_T_BœrDER `            - Tgp Border of uhe foRm!(including th% habml)
 *   B_RL_B_BORDMR      $       - BOttom!Bnrder of thg†fobm
 *   FORM_T_BORDER_NO_DAbEL    †- Top BÔrder of the form without a!lab%mJ *  `
    FOPM_2H^BORDER        "    - Both horiZontal boreers
 *   FORm_2V_BORDER !           - Bouh veptical ‡ordezs (wivh label)
 *`  NORM_2V_BORDER_N_LABEL   °m Both vertiCal bordÂps (without$labe,)
`* 1 
 *  `∆KRM_X_ISFRAME         `   -†Ckmpensatiof for`X loCation of†forms
 *                `   0 †        `in0they are 'user pLacedg vaThe2 than
 *`      $0    †   !              ippfOrms `haced 
 
   FORM_Y_I^FR@ME"†   0       - Compdnsction for Y$location
 *   FNRM_Y_ISFAMENO_LABEL  ` - Compensation for Y lOca4ion fop fopms
 J      †                   `†    with no label
 */





	









*/+
 *   ATiON ) OBJECT , MGTHOD MENUS`ä *
 *
 *   Create0the Application Actio.,`Object,0Method mefus aÆd pdace the
 *   sepazaTgr undeÚneath thdm.
 *
 *      `     $$    0           0FRM_◊IDMED,`              B
†* !    ui_op4ionmanu_creaue( f/rm_hd,""callback",    `      @ 
        ! ` "               AOM_MeFU_X_LGC(           "   0P
 *   $     0    (   "  0   `  ACTION_ME^U_I_LoC, `        $  @ç
 j             $       0     (AM_MENU_LABEL[LEN,  0 !       @ç
 *     ` "  $"             $  ACTION, FALSE )
 *  !* *    ! ui_optionm%lu_creAte( formOkd, "callback"<           @
 `®(     †   †    †  0   `   AOM_]ENU_X_LO√,          !  †  @
†* (  "             † 0 (   ( OBJEAT_MENE_Y_OG,             @
 :   †                    †   ANM_M«N’_ABEL_LEN,   `   "  ` @ç
 *  00     !                  ObJECT$ FALSE )
 *   
 *     0uiWoptionmenu_breate( norm_id, "callback",0          @
 *!  (      (          "      AOm_MEFU_X_LOC,"               @
 *                     !      METHOD_MEŒ_Y_HKC$             @ *!           `      †     †  AOM_ME^U_LCBML_LEN,       `   †@
 *            †   $   0  `    METHOD< FALSA )
 *   
 j      ti_separator_crea\e ( foRm_id, "", 0.0,         `    @ä!*           (     "  †       AOM_SEPARATnR_Y_LO,   2       @
 *    ( ` `                   fORM_◊ID_SML, TRUE (
 *   
 . 
 *   AKM Oenu PlEcÂoent:
 . 
 *   AOM_MENU_P_LOS       ) X Lo#ation of uhe"AOM menus (margin included)p*   AOM_MENU_LABEL_LEN   - Label ,ength for AOM m%nus (language dependeÓt+
 *   ACVION_MENU_Y_LOC    - Y Location0fOr the Ak4ioo mgne (margin Èncluded)
 *   OBJECT]MENU_Y_LOC`   -`Y0LocatioN†for the Objecp ednu†(margin included)
 *`  METHOD_LENU_Y_LOK0   - Y Location bor thÂ Mephod mgnu (margiÓ incl}ded)
 (   AOM_SEPARATOR_Y_LOC  - Y Location for sepqrit+r unddr the AOM menus
 *   APP_FORM_FIRST_Y_LOC - Y LÔcapion gor Ùhm first widget hn An 
 *             $ (          aqplication form 
 *+-



/*
 *   FRAIES
 *
 *ç *   Create a Êrame io an applicatioÓ form. 0Assume phis ks"tËe first
 (   widget in`the fobm and that the frama contains !$t`ree$dine lys4box
 *   wmth a label and a D·pabox with a labed. `Then loCate the P position
 *   for an unfrqmed†dqtabox undE2 thm framd.  NotÂ thet the f{ame's |abel* :  `muqt ba considered in"determining the!next widget0location as doas
 *   the thickneSs of the frqme†edges.
 *
 *  0Since this$is a~ atpLication forl, the first X hocat…on`is"the
 *   vasiable "atp_form_first_y_loc".
0*-J *      y_moc†= APP_FORM_FIRSTy[LOC
 *
 * 0    height = FRAMM_T_L@RGAN +     $                    ` @
 *       "       LBOX_3L_hGT_LABOVE +                  ( †   @ *          0    HNER_WIDGET_WRACE + †   "      ` (      0  @
 *      †     $  DBOP_HGP_LABOVE +$           (       †  0   @
 *               FRAOE_B_MARGiN
 *
 *   " !ui_frame_create 8 Form_id "",    0`         0   †   @J$*         `  (         0 FORK_L_MIZGIN,     !!             @"*                   !  ` y_(gc,             †(              @
 *   !              $     FRAME_WID_SINGLE,  $               @
 *              &   "  !  height,  Label" )
†*
 *      ui_listbox_craate(( frameid, "call‚ack",       †    @
 *            !     0  d    FRA]E\ﬂMARGIN,  !  !!  `        @ *              †      *    fRaMa_‘_MARGIN,                  @
 *                   "      LBOXﬂWID_SKNCLE,         `  (    @
 j  †  $  †  †      0       3, "istbox Label".   (          @
 *             "            salection_type, sort_flag )
`*
 :      x_frame_Ïoc = FRAME_T_MARgIN +     0         $       @
 *"     0   0         LBOX_3L_HGT^LABOVD + †       `†   "    @
 *        0         † INTGRWIDGET_SPACE
 j *      ui_databmx_create (fzam5_id¨ "",       "         †  @
`*                   $     !∆RAME_L_MARGIN,$ 0       0      †@
 *        !    !      †  `  y_nrame_<oB, 0>0,      †   `      
 * !      "                 DBOX_WID_SINGLE,         "       @
 *                  $       "Databoz"Lab·l", vadue$          @
 *        0 †(       `      TPUE, datatype, Óum_vals )
 *
(*   $  y_los = y_loc +            "      0                ( @
 :        `!    FRAME_LAbDÃ_HGT +                         `  @
 *            ! height + ` †    !`         "0          0     @
 *            0 VrAME_rEDGE +                         $    ! @
 *   `    &     INTER_◊IDGET^SPIcE
 *
 *!     ti_latabmx_create ( gpame_id, "&,    "            "  @M
 *  0         "             LFRAMED_L_MARGIN               @
 * `(   † "               ( i_Loc, 0.4,`    !   `@          `¿
 *       "             † 0  DBOX_WIDWSINGLA,  "        0     @
 *       †   ( (            'Second Databnx L·bed", v!lue,0† @
 *   0   " †               0TRUE, dataty0e, num_vaÏs )
 

 ** *   Create two sinGle width frames Èn e me‰ium"foRm that is 
 *†  next to a`smell application fobm.  Thewe2frames will be *  (at the top od uhe form.` TËeir heights are the$same as
 
  `kn the ¡bve exampla.
 *ä * `    ui_form_creApe( *",$FORM_XﬂMOC_MEDONP2_SML,     "    H
 *   "    0               † VORM_Y_HOC, "UL"$ 0 †    $  0   0@
 * 4     †!  †!             FOSM_WID_MED,      !†            @
 *                 (    "   FORL_HGT_FULL, "Libem", "Icoo" ) *   ä *
 *      ıi_fÚame_creade ( forl_id, "",  (                    @
 *       $        †  $    FRAME_X_NoC_COL1,        $   0 †  @
 *          0   !†  0  ( (FORM_Y_MARgKN,                     @
 :           †            FRAME_wi_SINGLE,                  P
 *    !           $   ` $ Ëeight, "Left Label  )
 *
 *      uk_frame_cree4d (*form_id,"b",         $  0          @
 *     1      0  "   "    FRA\U_X_LOC_COL",  " 0   "         @
 * `                      FORM_Y_MARGIN,                     @
 *0 !  "(               0 RAMD_W…F_SINGLE,                  @
 *       $                heighu, "Rkght†LaBel" )
 *   
 *
 * †"Frame Widths end Leights:	
 *
 *   FRAMU_WID_QINGLE   0- Width of a singlg width frame   
 *   FRAME_WiDﬂP≈C…AL   - Width†of a spechal width frame  
 *   FR¡ME_WI_DOUBLE    - Wi`th of a do5ble width frame  
 * † FBAMEWID^TRIPLE    ) Wcdtl!f a Tripla 7idth framu  
 *
0*   FRAME_LABEL_HGT     - Height of the label abve a fr`me
(*   
 *
 *   Fram% Mqrgins:
 *
 *   FRQA_L_MARGIN      - Hnside l%ft margin fop`w)dgets in the frame
 *   FRAME_“_MARGI     -!Inwide riwht margin for wideets mn the Êrame
 *   FRAM≈WT_MIRGIN      - Inside0top margik above firqt widget 
$* " FRAMEﬂB^MARGIN $    - Inscde bottOm margmn bulog last wy$get 
 *   
 *   FRAME_2H_MARGIN     - Both`horIzontad(marghns *   DRAME_2V_ARGIN  " †≠ Both vertiaal margÈns
 *   
0*
 *   Frame Placementz
 *
 *   FRAME_XﬂLOS_COL1    - X LocaÙ)oo(for a frame in column 1
`*`                        (same as "foro_l_mar'Èo")
 *  `FRAME_X_LOC_cOL2    - X Locadion for a frame Èn colum. 2 *   FZAME_X_LOC_COLs    - X0LOcation fob a &rame in`column3
!*
 *
 *   UNfrAled Widfet Placemejt:M
 *
 
   QNFRA…EDOL_ÕARGHN  - LaÊp mergin for aÓ unframed i`get
`*   UNFrAMED_r^MARGIN   - Right margin for an*unframed vidget
 *      (    0            
 +   UNFRAMED]X^LO√_COL1 - X Location of an ulfzamed$widget ij0colUmn 1
 *   UNFRAMEE_X_LOC_COL2 - X Location of an unframed widgEt iÓ column 2
 * ` UNFR¡MED_X_LOC[COL3 -(X LmgaÙiOn /f an unfvamed widget In clumn 3
 */	
ç



(
/+
 *  !SELECT FRAMES
 

 *-
 *   Cvdate a selecv!frame in an application†form  Put two select databoxes
 *  (io the select frame.  Then compute†tËe  location fop thea.ext widget.
 *   Not% the use of0thg$~up0Lied Y locations for the$seÏect databoxes ar 
 *   well cs phe height of the se|ect frame.* *
 *  $   y_loc = AP]FORMYFiRKT]Y_LOC
 * "    2$ui_selectframe_create( for-_id, "callback",  `¢ $    @
 n 0  0 0                      ∆M“M_L_M¡RGIN,   ( †          @
!*  $                  $  ( (  ywloc,          !  †      0 † @
 ∫     (        "        b     SFRAME_WID_SINGLE,    h   (   @
 *  (               †         SFRAçE]2SDB_JGT_LABOVE, `     @
 *           †      †          "SElect Frame Lqbel",         @
 *$              $             recycle_blag )* *     $"    !                 ` 
 *      ui_selectdataboxﬂbreate 8 sel_frame_id< "",         (@
 *    $ "     †                   SFRAME_L_EARGI^,     0     @
 *`           † (†           "    SD@OX_Y_LNC1, 0.0,       † @
 * (    †         $  !           (SDBOX_WID_SINGLE,     d    @
 *      "    `    !               "Ce|ect Databox"OnÂ",      @
`*     $        "            `    value, TRUE, data|YpE,     B
 *!0   $ `        !        !      prompt )
 * *      ui_selecudataBox_create ( sdl_frameOmf, "",      $   @  (                 0         "    SFRAME_L_MARGIN,$0     "  †@
 *           † (              $   SDBœX_y_LKC6, 0.0,    (     (:`0  0      `   0   "     !     (SDBOX_WID_QINGLE,0         @
 :              †      †(`   `$   "Select Davibo¯ OnÂ",      `M
 *            0   $ †      †      value, TSUU, datatype, (  d@
 *             (                ! prompt$)
 *
 *  $ ( 9_Lo„ = y_loc * SFRAMe_LABEL_HGT + $                 @
 *      "            ` $SFREME_0SDB^HGTﬂLABOVE +            0@
 *                     †FRAME_2EDGE +                `   (  @
 *   "            (     INTER_W…DET_SPACE
!*
!*
 *   Sdlect$Frame Widths ·n` HeÈ'hts: *
 *  !SFRAME_ID_SINGLE  !      - WkDth og a!single vidth sDlE‚t frame
 *   SFRAME_WID_[PECIAL $      - Width of a special w)dth selegt frame
 *† 0SFRAME_WID_DOUB\ !      `- Wi&th of(a double w)dth seleat frame
 *   SFRA]EﬂWID_TRIPLE         - Width obd% triple 7idth selecp`frime
 *
 
   SFRAMELABEL_XAU       `  - ieicht`of the la"el above i sele„t frama
"* *  (SFRAME1SDB_HGD_LBOVE    - Heaght`of a$Ûeluct frame 7ÈthM
 *  $     "`       $     !†   " 01 s%|ect dqtabox with a label
 *   QFRCME_2SDB_HGT_LABVE    - height of ` select bram‰ with
 *"   `    0                 0   2 select databxe3 vith labels
 +  `”FRAME^3SDB_HGT_LABOVE    - Hekghp of A celect fraoe with
 *    † "           0!           3 s%lect detaboxes with ÓabÂls j   SFRAME_4SDB_»GT_LABOV    - Height of a select fra}e sith
 *                       `       4 sglecu daTafohe{ With labels
 *   SFRAÕE_5SDB^HGT_LABOVE    - Heig(t of a select frame with
 *!`             "  0    $   `   5 select dat·boxes with labmls
 *
0* 0 SFRAME_HGT_LABOVE_INCR    % I.cremelt for makijw selec|†frames with 
 *     †      $        `    0    more phan 5 cele„t databoxeS ˜ith labels
 *
 *   SFRAME]1SDB_HGTNO_LABOVE - Height of a selact frcme with
 *   0   †            $          q select0databoy Without a labe,
 *   SFRAME_2SDBWHGT_No[LAbOVU - HeIght`of a!seldct frame sith-
 *       !            †          2 sglect dapabgxds witlout ,abel{
 *   SFRAME_3CDB_HGTﬂNO_ÃABOVE -`Hgight of a!relect frame with
 *   )    "            "$      † 3 sehect datcbgxÂs without labels
 *   SBRAÕE_4SDB_HGT_NO_LABOVE - Heighu ov a se,mct fraMe with
 *  †                    †$4     4 sel-ct ectaboxes0witkout$labels
$*$0`SFRAME_5SDBOHGT_NO_HAROVE - HeIght of a selÂc4(frame sit®
 *         00                    5 selecd databoXes!vi|hout labe,s
 *
`*   SFREME_LGT_
O_LABVE_INCR -(Increment for making select frames with  *0         †"                   more than 5 select$databoxes`without labels
 *
 *
 *   seleC~ Fbame Margins: *- *   SFRAIE_L_MARGIN   0      !- In3ide left eaÚ'in fop select databoxe3
 *   CFRAM_2_MARgIN  °     $  -`InsiDe riGht mArgkn for select databoxes
 *   SFRAME_T_MARGIN           - Inside top marcin fov select `atabkxes
 *   CFRAOE_B_MARIN       "0  - Inside bottom mavgin for select ditaboxes
 *   
 *   SFRAME_2H^MARGIN          - Both horizondal margins
 *   SFRAEG_≤V_MARGIN †"       - both fertacal margin{
 *
 *
 *   Selec4 Fr`me PlacÂient: *
"*   SFRAME_X_LOC_COL1         -$ÿ Location for a {el%ct†frame in column 1	
 *  †             (             (same as "form_l_margin")
 *   SFRME_X_L[C_CON2         - X Location for a selecu†frema in cmluln$"	
 *   SFRAMEOX_OC_CON3    0    - X Locatmol for a sedect fra}e in coluÔn 3
$*/

ä
	


-


/*
 *   SCROLL_FRAMES
 *
 *
 *   Cseate c scrolÏ!frame in a fosm.
 *
 *
 *  !Scroll Nrame Widths ane maghts:
 *
 *  !SCROLM_FRAME_WIF_SINGL≈  `# ! - Sidth of a single widtË†ssRoll frame  !-J *   S√ROLL_FAME_U…D_SPECIAL `"   - Width0Ôf c"special widph scro|l fpame  
 *   SCROLL_FRAMUWWID_DOUBLE   †0  - Width of a dotrle widÙ( scroll grame  
 * $ SCROLL_FRAMEWUID[TRIPLE     ! % Width of a trip,e width scrolh Frame  
 *
$* ( 
 *   SCPOLL_FRAME_WORK_WID]SI^GLe  - Wgrkijg!sidtH of a qinÁle wiDth
 *           "                       scroll frame($ ç
 *   SCBOLL_FRQME_WORK_WID_SPMCIEL -aWorking width of a special width 
 *                                   scroll frame   
 *   SCROLL_FRAME_WORK_WID_DOUBLE  - Working width of a double width 
 *                                   scroll frame   
 *   SCROLL_FRAME_WORK_WID_TRIPLE  - Working width of a triple width
 *                                   scroll frame   
 *
 *   SCROLL_FRAME_DBOX_WID_SINGLE  - Width of a single width scroll frame   
 *                                   databox
 *   SCROLL_FRAME_DBOX_WID_SPECIAL - Width of a special width scroll frame  
 *                                   databox
 *   SCROLL_FRAME_DBOX_WID_DOUBLE  - Width of a double width scroll frame  
 *                                   databox
 *   SCROLL_FRAME_DBOX_WID_TRIPLE  - Width of a triple width scroll frame  
 *                                   databox
 *
 *   SCROLL_FRAME_LABEL_HGT        - Height of the label above a
 *                                   scroll frame   
 *
 *   SCROLL_FRAME_1DBOX_HGT        - Scroll frame height with 1 databox
 *   SCROLL_FRAME_2DBOX_HGT        - Scroll frame height with 2 databoxes
 *   SCROLL_FRAME_3DBOX_HGT        - Scroll frame height with 3 databoxes
 *   SCROLL_FRAME_4DBOX_HGT        - Scroll frame height with 4 databoxes
 *   SCROLL_FRAME_5DBOX_HGT        - Scroll frame height with 5 databoxes
 *
 *   SCROLL_FRAME_DBOX_HGT_INCR    - Scroll frame height increment
 *
 *   SCROLL_FRAME_1DBOX_WORK_HGT   - Scroll frame work height for 1 databox
 *   SCROLL_FRAME_2DBOX_WORK_HGT   - Scroll frame work height for 2 databoxes
 *   SCROLL_FRAME_3DBOX_WORK_HGT   - Scroll frame work height for 3 databoxes
 *   SCROLL_FRAME_4DBOX_WORK_HGT   - Scroll frame work height for 4 databoxes
 *   SCROLL_FRAME_5DBOX_WORK_HGT   - Scroll frame work height for 5 databoxes
 * 
 *   SCROLL_FRAME_DBOX_WORK_HGT_INCR - Scroll frame working height increment
 *
 *   SCROLL_FRAME_SLIDER_WID       - Width of the slider on the right 
 *                                   of a scroll frame   
 *   SCROLL_FRAME_SLIDER_HGT       - Height of the slider at the bottom 
 *                                   of a scroll frame   
 *   
 *   Frame Margins:
 *
 *   SCROLL_FRAME_L_MARGIN         - Inside left margin for widgets in 
 *                                   a scroll frame
 *   SCROLL_FRAME_R_MARGIN         - Inside right margin for widgets in 
 *                                   a scroll frame
 *   SCROLL_FRAME_T_MARGIN         - Inside top margin above first widget 
 *   SCROLL_FRAME_B_MARGIN         - Inside bottom margin below last widget 
 *   
 *   SCROLL_FRAME_2H_MARGIN        - Both horizontal margins
 *   SCROLL_FRAME_2V_MARGIN        - Both vertical margins
 */













/*
 *   BUTTONS
 *
 *
 *   Create two buttons in a small form.  The button on the left is a
 *   default button.  Use "half" size buttons.
 *
 *      ui_button_create ( form_id, "callback",              @
 *                         BUTTON_HALF_X_LOC1,               @
 *                         y_loc,                            @
 *                         BUTTON_WID_HALF,                  @
 *                         0.0, "Left Button",               @
 *                         TRUE, TRUE ) 
 *
 *      y_loc = y_loc + BUTTON_Y_OFFSET
 *
 *      ui_button_create ( form_id, "callback",              @
 *                         BUTTON_HALF_X_LOC2,               @
 *                         y_loc,                            @
 *                         BUTTON_WID_HALF,                  @
 *                         0.0, "Right Button",              @
 *                         TRUE, FALSE ) 
 *
 *      y_loc = y_loc + BUTTON_Y_OFFSET +                    @
 *                      BUTTON_HGT +                         @
 *                      INTER_WIDGET_SPACE
 *
 *
 *   Button Widths and Heights:
 *
 *   BUTTON_WID_FULL               - Width of a wide button on a small form
 *   BUTTON_WID_HALF               - Width of a medium button on a small form
 *   BUTTON_WID_THIRD              - Width of a small button on a small form
 *
 *   BUTTON_WID_FULL_NT            - Width of a non_troughed wide button on
 *                                   a small form
 *   BUTTON_WID_HALF_NT            - Width of a non_troughed medium button on
 *                                   a small form
 *   BUTTON_WID_THIRD_NT           - Width of a non_troughed small button on
 *                                   a small form
 *
 *   BUTTON_HGT                    - Button height
 *   BUTTON_DEFAULT_HGT            - Default button height (includes top and
 *                                   bottom borders)
 *   BUTTON_HGT_NT                 - Button height of non_troughed button
 *
 *   BUTTON_DEFAULT_BORDER_WID     - Default button border width
 *   BUTTON_DEFAULT_BORDER_HGT     - Default button border height
 *
 *
 *   Button Location Offsets:
 *
 *   BUTTON_IN_FRAME_X_OFFSET      - X offset for placing buttons inside
 *                                   frames using the X Positions defined
 *                                   below
 *
 *   BUTTON_1XTRA_WID              - X width for one trough for user placement
 *                                   of troughed buttons.
 *   BUTTON_2XTRA_WID              - X width for two troughs for user placement
 *                                   of troughed buttons.
 *
 *   BUTTON_Y_OFFSET               - Y offset for placing a non-highlighted 
 *                                   button next to a highlighted button
 *   BUTTON_Y_OFFSET_NT            - Y offset for placing a non-highlighted 
 *                                   button next to a highlighted button
 *
 *   BUTTON_LABEL_Y_OFFSET         - Y offset for placing a label to the right
 *                                   of a button
 *   BUTTON_DEFAULT_LABEL_Y_OFFSET - Y offset for placing a label to the right 
 *                                   of a default button
 *   BUTTON_LABEL_Y_OFFSET_NT      - Y offset for placing a label to the right
 *                                   of a non_troughed button
 *
 *
 *   Button X Positions:
 *
 *   BUTTON_FULL_X_LOC1            - Wide button on the left
 *   BUTTON_HALF_X_LOC1            - Medium button on the left
 *   BUTTON_HALF_X_LOC2            - Medium button on the right
 *   BUTTON_THIRD_X_LOC1           - Small button on the left
 *   BUTTON_THIRD_X_LOC2           - Small button centered
 *   BUTTON_THIRD_X_LOC3           - Small button on the right
 *
 *   BUTTON_FULL_X_LOC1_COL2       - Wide button on the left of column 2
 *   BUTTON_HALF_X_LOC1_COL2       - Medium button on the left of column 2
 *   BUTTON_HALF_X_LOC2_COL2       - Medium button on the right of column 2
 *   BUTTON_THIRD_X_LOC1_COL2      - Small button on the left of column 2
 *   BUTTON_THIRD_X_LOC2_COL2      - Small button centered of column 2
 *   BUTTON_THIRD_X_LOC3_COL2      - Small button on the right of column 2
 *
 *   BUTTON_FULL_X_LOC1_COL3       - Wide button on the left of column 3
 *   BUTTON_HALF_X_LOC1_COL3       - Medium button on the left of column 3
 *   BUTTON_HALF_X_LOC2_COL3       - Medium button on the right of column 3
 *   BUTTON_THIRD_X_LOC1_COL3      - Small button on the left of column 3
 *   BUTTON_THIRD_X_LOC2_COL3      - Small button centered of column 3
 *   BUTTON_THIRD_X_LOC3_COL3      - Small button on the right of column 3
 *
 *   BUTTON_FULL_X_LOC1_SPL        - Wide button centered on a special form
 *   BUTTON_HALF_X_LOC1_SPL        - Medium button on the left of a special form
 *   BUTTON_HALF_X_LOC2_SPL        - Medium button on the right of a special form
 *   BUTTON_THIRD_X_LOC1_SPL       - Small button on the left of a special form
 *   BUTTON_THIRD_X_LOC2_SPL       - Small button centered of a special form
 *   BUTTON_THIRD_X_LOC3_SPL       - Small button on the right of a special form
 *
 *   BUTTON_FULL_X_LOC_CEN         - Centered wide button on a small form
 *   BUTTON_HALF_X_LOC_CEN         - Centered medium button on a small form
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button on a small form
 *
 *   BUTTON_FULL_X_LOC_CEN_MED     - Centered wide button on a medium form 
 *   BUTTON_HALF_X_LOC_CEN_MED     - Centered medium button on a medium form 
 *   BUTTON_THIRD_X_LOC_CEN_MED    - Centered small button on a medium form 
 *
 *   BUTTON_FULL_X_LOC_CEN_LRG     - Centered wide button on a large form 
 *   BUTTON_HALF_X_LOC_CEN_LRG     - Centered medium button on a large form 
 *   BUTTON_THIRD_X_LOC_CEN_LRG    - Centered small button on a large form 
 *
 *   BUTTON_FULL_X_LOC_CEN_SPL     - Centered wide button on a special form 
 *   BUTTON_HALF_X_LOC_CEN_SPL     - Centered medium button on a special form 
 *   BUTTON_THIRD_X_LOC_CEN_SPL    - Centered small button on a special form 
 */





















/*
 *   DATABOXES
 *
 *
 *   Create a framed databox with a label above the databox.  Then
 *   compute the Y location for the next widget inside the frame.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_databox_create ( frame_id, "",                    @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc, 0.0,                @
 *                          DBOX_WID_SINGLE,                 @
 *                          "Databox Label", value,          @
 *                          TRUE, datatype, num_vals )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    DBOX_HGT_LABOVE +                      @
 *                    INTER_WIDGET_SPACE
 *                      
 *
 *   Create a framed databox with a label to the side.  Use the 
 *   default label length for a single column databox and compute
 *   the databox width.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      wid = DBOX_WID_SINGLE -                              @
 *            DBOX_LABEL_LEN_SINGLE
 *   
 *   
 *      ui_databox_create ( frame_id, "",                    @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc,                     @
 *                          DBOX_LABEL_LEN_SINGLE,           @
 *                          wid,                             @
 *                          "Databox Label", value,          @
 *                          FALSE, datatype, num_vals )
 *
 *
 *   Databox Width and Height:
 *
 *   DBOX_WID_SINGLE        - Width of a single width databox   
 *   DBOX_WID_SPECIAL       - Width of a special width databox   
 *   DBOX_WID_DOUBLE        - Width of a double width databox   
 *   DBOX_WID_TRIPLE        - Width of a triple width databox   
 *
 *   DBOX_HGT_LABOVE        - Height of a databox with a label on the top
 *                            (even if the label is blank)
 *   DBOX_HGT_NO_LABOVE     - Height of a databox with a label to the side
 *
 *   DBOX_LABEL_LEN_SINGLE  - Default label length for a single width databox
 *                            (used when "label_above" is false)
 *   DBOX_LABEL_LEN_SPECIAL - Default label length for a special width databox
 *   DBOX_LABEL_LEN_DOUBLE  - Default label length for a double width databox
 *   DBOX_LABEL_LEN_TRIPLE  - Default label length for a triple width databox
 *
 *   DBOX_LABEL_X_OFFSET    - REMOVED
 *   DBOX_LABEL_Y_OFFSET    - Y offset for placing a label to the right of
 *                            a databox with "labelabove" false.
 */






/*
 *   FILES
 *
 *
 *   Create a form centered under the main menu that has a file
 *   widget inside the a frame.  The file widget is placed at
 *   ( 0.0, 0.0 ) inside the frame (a top margin is not needed).
 *   The height of the file widget includes a bottom margin
 *   and therefore can be used as the height of the frame that
 *   contains the file widget.  The file widget has 5 lines in 
 *   the list boxes.
 *
 *      form_hgt = FILE_5L_HGT + FORM_2V_MARGIN + FRAME_2EDGE
 *      x_loc = WINDOW_CEN_X_LOC - 0.5 * ( wid + FORM_2H_BORDER )
 *      y_loc = WINDOW_CEN_Y_LOC - 0.5 * ( form_hgt + FORM_2V_BORDER )
 *
 *      form_id = ui_form_create( "", x_loc, y_loc, "UL",    @
 *                                wid, form_hgt,             @
 *                                "Form Label", "" )
 *
 *      frame_id = ui_frame_create( form_id, "",             @
 *                                  FORM_L_MARGIN,           @
 *                                  FORM_T_MARGIN,           @
 *                                  FRAME_WID_SPECIAL,       @
 *                                  FILE_5L_HGT, "" )
 *
 *      file_id = ui_file_create( frame_id, "",              @
 *                                0.0, 0.0,                  @
 *                                FILE_WID_SPECIAL, 5,       @
 *                                "Filter Label",            @
 *                                "Filter Mask",             @
 *                                "Files Label",             @
 *                                "Directory Label",         @
 *                                "Files Label",             @
 *                                "Selection Label",         @
 *                                "Default Selection",       @
 *                                "Left Button Label",       @
 *                                "Right Button Label" )
 *
 *
 *   File Width:
 *
 *   FILE_WID_SINGLE     - Width of a single width file widget
 *   FILE_WID_SPECIAL    - Width of a special width file widget
 *   FILE_WID_DOUBLE     - Width of a double width file widget
 *   FILE_WID_TRIPLE     - Width of a triple width file widget
 *
 *   File Height:
 *
 *   FILE_1L_HGT         - Height of a 1 line file widget
 *   FILE_2L_HGT         - Height of a 2 line file widget
 *   FILE_3L_HGT         - Height of a 3 line file widget
 *   FILE_4L_HGT         - Height of a 4 line file widget
 *   FILE_5L_HGT         - Height of a 5 line file widget
 *   FILE_6L_HGT         - Height of a 6 line file widget
 *   FILE_7L_HGT         - Height of a 7 line file widget
 *   FILE_8L_HGT         - Height of a 8 line file widget
 *   FILE_9L_HGT         - Height of a 9 line file widget
 *   FILE_HGT_INCR       - Increment for making bigger file widgets
 */




/*
 *   LABELS and INFO INDENTS
 *
 *
 *   Create a label inside a frame and then compute the y location
 *   of the next widget inside the frame.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_label_create ( frame_id, "",                      @
 *                        FRAME_L_MARGIN,                    @
 *                        y_frame_loc,                       @
 *                        "A Label" )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    LABEL_HGT +                            @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   Label Height:
 *
 *   LABEL_HGT        - Height of a label
 *   LABEL_Y_OFFSET   - Y offset of label
 *   LABEL_HGT_TIGHT  - Height of a label when showing multiple
 *                      labels
 *
 *   INFO_INDENT      - X location of information label
 *   INFO_INDENT_COL1 - X location of information label in column 1
 *   INFO_INDENT_COL2 - X location of information label in column 2
 *   INFO_INDENT_COL3 - X location of information label in column 3
 */




/*
 *   LISTBOXES
 *
 *
 *   Create a framed three line listbox with a label above the listbox.  Note
 *   that the widths and heights include the vertical and horizontal sliders.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_listbox_create ( frame_id, "callback",            @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc,                     @
 *                          LBOX_WID_SINGLE,                 @
 *                          3, "Listbox Label",              @
 *                          selection_type, sort_flag )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    LBOX_3L_HGT_LABOVE +                   @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   To determine the height for a six line listbox, add the variable
 *   LBOX_HGT_LABOVE_INCR to LBOX_5L_HGT_LABOVE.
 *
 *
 *   Listbox Width and Height:
 *
 *   LBOX_WID_SINGLE         - Width of a single width listbox   
 *   LBOX_WID_SPECIAL        - Width of a special width listbox   
 *   LBOX_WID_DOUBLE         - Width of a double width listbox   
 *   LBOX_WID_TRIPLE         - Width of a triple width listbox   
 *
 *   LBOX_1L_HGT_LABOVE      - Height of a 1 line listbox with a top label
 *   LBOX_2L_HGT_LABOVE      - Height of a 2 line listbox with a top label
 *   LBOX_3L_HGT_LABOVE      - Height of a 3 line listbox with a top label
 *   LBOX_4L_HGT_LABOVE      - Height of a 4 line listbox with a top label
 *   LBOX_5L_HGT_LABOVE      - Height of a 5 line listbox with a top label
 *   LBOX_8L_HGT_LABOVE      - Height of a 8 line listbox with a top label
 *
 *   LBOX_HGT_LABOVE_INCR    - Increment for computing a listbox height that
 *                             has more than 5 lines in it
 *
 *   LBOX_1L_HGT_NO_LABOVE   - Height of a 1 line listbox with no label
 *                             (label is blank)
 *   LBOX_2L_HGT_NO_LABOVE   - Height of a 2 line listbox with no label
 *   LBOX_3L_HGT_NO_LABOVE   - Height of a 3 line listbox with no label
 *   LBOX_4L_HGT_NO_LABOVE   - Height of a 4 line listbox with no label
 *   LBOX_5L_HGT_NO_LABOVE   - Height of a 5 line listbox with no label
 *   LBOX_8L_HGT_NO_LABOVE   - Height of a 8 line listbox with no label
 *
 *   LBOX_HGT_NO_LABOVE_INCR - Increment for computing a listbox height that
 *                             has more than 5 lines in it
 *
 *   LBOX_SELBTNS_HGT, LBOX_SELBTNS_WID - Height and combined width of
 *                                        (Un)Select All buttons
 */





/*
 *   OPTION MENUS
 *
 *
 *   Create an option menu with a label to the side.  Then set the 
 *   Y location for the next widget.  Assume this is an unframed widget.
 *
 *      y_loc = APP_FORM_FIRST_Y_LOC
 *   
 *      ui_optionmenu_create( form_id, "callback",           @
 *                            UNFRAMED_L_MARGIN,             @
 *                            y_loc,                         @
 *                            OPT_MENU_LABEL_LEN,            @
 *                            "Label", FALSE )
 *   
 *      y_loc = y_loc + OPT_MENU_HGT_NO_LABOVE +             @
 *                      INTER_WIDGET_SPACE
 *   
 *
 *   Option menu Placement:
 *
 *   OPT_MENU_LABEL_LEN          - Default label length for an option menu
 *                                 with a label to the side
 *
 *   OPT_MENU_HGT_LABOVE         - Height of an option menu with a label
 *                                 on the top
 *   OPT_MENU_HGT_NO_LABOVE      - Height of an option menu with a label
 *                                 on the side
 *
 *   OPT_MENU_Y_OFFSET           - Y offset for placing a label to the
 *                                 right of a select databox with 
 *                                 "labelabove" false
 */





/*
 *   SELECT DATABOXES
 *
 *
 *   Create a framed select databox with a label above the select databox.
 *   Then compute the Y location for the next widget.
 *
 *      y_sframe_loc = SFRAME_T_MARGIN
 *
 *      ui_selectdatabox_create ( sel_frame_id, "",          @
 *                                SFRAME_L_MARGIN,           @
 *                                y_sframe_loc, 0.0,         @
 *                                SDBOX_WID_SINGLE,          @
 *                                "Select Databox Label",    @
 *                                value, TRUE, datatype,     @
 *                                prompt )
 *
 *      y_sframe_loc = y_sframe_loc +                        @
 *                     SDBOX_HGT_LABOVE +                    @
 *                     INTER_WIDGET_SPACE
 *                      
 *
 *   Create a framed select databox with a label to the side.  Use the 
 *   default label length for a single column select databox and compute
 *   the select databox width.
 *
 *      y_sframe_loc = SFRAME_T_MARGIN
 *
 *      wid = SDBOX_WID_SINGLE -                             @
 *            SDBOX_LABEL_LEN_SINGLE
 *   
 *   
 *      ui_selectdatabox_create ( sel_frame_id, "",          @
 *                                SFRAME_L_MARGIN,           @
 *                                y_sframe_loc,              @
 *                                SDBOX_LABEL_LEN_SINGLE,    @
 *                                wid,                       @
 *                                "Select Databox Label",    @
 *                                value, FALSE, datatype,    @
 *                                prompt )
 *
 *      y_sframe_loc = y_sframe_loc +                        @
 *                     SDBOX_HGT_NO_LABOVE +                 @
 *                     INTER_WIDGET_SPACE
 *
 *
 *   Select Databox Width and Height:
 *
 *   SDBOX_WID_SINGLE       - Width of a single width select databox   
 *   SDBOX_WID_SPECIAL      - Width of a special width select databox   
 *   SDBOX_WID_DOUBLE       - Width of a double width select databox   
 *   SDBOX_WID_TRIPLE       - Width of a triple width select databox   
 *
 *   SDBOX_HGT_LABOVE       - Height of a select databox with a top label
 *   SDBOX_HGT_NO_LABOVE    - Height of a select databox with a side label
 *
 *   SDBOX_Y_LOC1_LABOVE    - Y location of select databox 1 in a selectframe
 *                            (select databox has a label above)
 *   SDBOX_Y_LOC2_LABOVE    - Y location of select databox 2 in a selectframe
 *                            (select databox has a label above)
 *   SDBOX_Y_LOC3_LABOVE    - Y location of select databox 3 in a selectframe
 *                            (select databox has a label above)
 *   SDBOX_Y_LOC4_LABOVE    - Y location of select databox 4 in a selectframe
 *                            (select databox has a label above)
 *   SDBOX_Y_LOC5_LABOVE    - Y location of select databox 5 in a selectframe
 *                            (select databox has a label above)
 *
 *   SDBOX_Y_LABOVE_INCR    - Increment for creating the Y location for than
 *                            than 5 select databoxes with labels in a select
 *                            frame
 *
 *   SDBOX_Y_LOC1_NO_LABOVE - Y location of select databox 1 in a selectframe
 *                            (select databox does not have a label above)
 *   SDBOX_Y_LOC2_NO_LABOVE - Y location of select databox 2 in a selectframe
 *                            (select databox does not have a label above)
 *   SDBOX_Y_LOC3_NO_LABOVE - Y location of select databox 3 in a selectframe
 *                            (select databox does not have a label above)
 *   SDBOX_Y_LOC4_NO_LABOVE - Y location of select databox 4 in a selectframe
 *                            (select databox does not have a label above)
 *   SDBOX_Y_LOC5_NO_LABOVE - Y location of select databox 5 in a selectframe
 *                            (select databox does not have a label above)
 *
 *   SDBOX_Y_NO_LABOVE_INCR - Increment for creating the Y location for than
 *                            than 5 select databoxes without labels in a
 *                            select frame
 *
 *   SDBOX_LABEL_LEN_SINGLE - Default label length for a single width select
 *                            databox (used when "label_above" is false)
 *   SDBOX_LABEL_LEN_SPECIAL- Default label length for a special width select
 *                            databox
 *   SDBOX_LABEL_LEN_DOUBLE - Default label length for a double width select
 *                            databox
 *   SDBOX_LABEL_LEN_TRIPLE - Default label length for a triple width select 
 *                            databox
 *
 *   SDBOX_LABEL_X_OFFSET   - REMOVED
 *   SDBOX_LABEL_Y_OFFSET   - Y offset for placing a label to the right
 *                            of a select databox with "labelabove" false.
 */








/*
 *   SLIDEBARS
 *
 *
 *   Create a slidebar inside a frame and then compute the y location
 *   of the next widget inside the frame.  The slidebar has a label
 *   as well as min/max labels above the displayed values.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_slidebar_create ( frame_id, "callback",           @
 *                           FRAME_L_MARGIN,                 @
 *                           y_frame_loc,                    @
 *                           SLIDER_WID_SINGLE,              @
 *                           "Slidebar Label", value,        @
 *                           num_digits, TRUE, "Min", "Max", @
 *                           TRUE, 0, 10 )                   @
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    SLIDER_HGT_COMPLETE +                  @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   Sliderbar Width and Height:
 *
 *   SLIDER_WID_SINGLE           - Width of a single width slidebar
 *   SLIDER_WID_SPECIAL          - Width of a special width slidebar
 *   SLIDER_WID_DOUBLE           - Width of a double width slidebar
 *   SLIDER_WID_TRIPLE           - Width of a triple width slidebar
 *
 *   SLIDER_HGT_COMPLETE         - Height of slidebar with min/max labels,
 *                                 the values shown and a label below the 
 *                                 slidebar
 *   SLIDER_HGT_MINMAX           - Height of slidebar with min/max labels only
 *   SLIDER_HGT_VALUES           - Height of slidebar with values only
 *   SLIDER_HGT_LABEL            - Height of slidebar with label only (values 
 *                                 not shown and no min/max labels)
 *   SLIDER_HGT_MINMAX_VALUES    - Height of slidebar with min/max labels and
 *                                 values shown (no label)
 *   SLIDER_HGT_MINMAX_LABEL     - Height of slidebar with min/max labels and
 *                                 a label below slidebar (values not shown)
 *   SLIDER_HGT_VALUES_LABEL     - Height of slidebar with values shown and
 *                                 a label below the slidebar (no min/max 
 *                                 labels)
 *   SLIDER_HGT_BAR_ONLY         - Height of just the slidebar
 *
 *   SLIDER_LABEL_Y_LOC_MM_VAL   - Location of label to side of slidebar when
 *                                 the slidebar has both min/max labels and
 *                                 values
 *   SLIDER_LABEL_Y_LOC_MINMAX   - Location of label to side of slidebar when
 *                                 the slidebar has only min/max labels
 *   SLIDER_LABEL_Y_LOC_VALUES   - Location of label to side of slidebar when
 *                                 the slidebar has only values 
 *   SLIDER_LABEL_Y_LOC_BAR_ONLY - Location of label to side of slidebar when
 *                                 the slidebar has neither min/max labels
 *                                 nor values
 */





/*
 *   SPREADSHEETS
 *
 *
 *   Create a spreadsheet in a form. 
 *
 *
 *   Spreadsheet Widths and Heights:
 *
 *   SPREADSHEET_WID_SINGLE    - Width of a single width select frame
 *   SPREADSHEET_WID_SPECIAL   - Width of a special width select frame
 *   SPREADSHEET_WID_DOUBLE    - Width of a double width select frame
 *   SPREADSHEET_WID_TRIPLE    - Width of a triple width select frame
 *
 *   SPREADSHEET_LABEL_HGT     - Height of the spreadsheet label (to be
 *                               subtracted from the following heights
 *                               in the case that a label is NOT used)
 *
 *   SPREADSHEET_HGT_2D_1ROW   - Height of a 2D spreadsheet with 1 row
 *   SPREADSHEET_HGT_2D_2ROW   - Height of a 2D spreadsheet with 2 rows
 *   SPREADSHEET_HGT_2D_3ROW   - Height of a 2D spreadsheet with 3 rows
 *   SPREADSHEET_HGT_2D_4ROW   - Height of a 2D spreadsheet with 4 rows
 *   SPREADSHEET_HGT_2D_5ROW   - Height of a 2D spreadsheet with 5 rows
 *   SPREADSHEET_HGT_2D_6ROW   - Height of a 2D spreadsheet with 6 rows
 *   SPREADSHEET_HGT_2D_7ROW   - Height of a 2D spreadsheet with 7 rows
 *   SPREADSHEET_HGT_2D_8ROW   - Height of a 2D spreadsheet with 8 rows
 *   SPREADSHEET_HGT_2D_9ROW   - Height of a 2D spreadsheet with 9 rows
 *   SPREADSHEET_HGT_2D_10ROW  - Height of a 2D spreadsheet with 10 rows
 *   SPREADSHEET_HGT_2D_INCR   - Height increment for 2D spreadsheet
 *
 *   SPREADSHEET_HGT_3D_1ROW   - Height of a 3D spreadsheet with 1 row
 *   SPREADSHEET_HGT_3D_2ROW   - Height of a 3D spreadsheet with 2 rows
 *   SPREADSHEET_HGT_3D_3ROW   - Height of a 3D spreadsheet with 3 rows
 *   SPREADSHEET_HGT_3D_4ROW   - Height of a 3D spreadsheet with 4 rows
 *   SPREADSHEET_HGT_3D_5ROW   - Height of a 3D spreadsheet with 5 rows
 *   SPREADSHEET_HGT_3D_6ROW   - Height of a 3D spreadsheet with 6 rows
 *   SPREADSHEET_HGT_3D_7ROW   - Height of a 3D spreadsheet with 7 rows
 *   SPREADSHEET_HGT_3D_8ROW   - Height of a 3D spreadsheet with 8 rows
 *   SPREADSHEET_HGT_3D_9ROW   - Height of a 3D spreadsheet with 9 rows
 *   SPREADSHEET_HGT_3D_10ROW  - Height of a 3D spreadsheet with 10 rows
 *   SPREADSHEET_HGT_3D_INCR   - Height increment for 3D spreadsheet
 */






/*
 *   SWITCHES
 *
 *
 *   Create a framed two row switch with a label.  Note that the
 *   number of rows is a function of the "num_cols" variable and the
 *   number of items created for the switch.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_switch_create( frame_id, "callback",              @
 *                        FRAME_L_MARGIN,                    @
 *                        y_frame_loc,                       @
 *                        num_cols, "Switch Label",          @
 *                        alwaysone_flag )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    SWITCH_2R_HGT_LABEL +                  @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   Switch Height:
 *
 *
 *   SWITCH_1R_HGT_LABEL      - Height of a 1 row switch with a label
 *   SWITCH_2R_HGT_LABEL      - Height of a 2 row switch with a label
 *   SWITCH_3R_HGT_LABEL      - Height of a 3 row switch with a label
 *   SWITCH_4R_HGT_LABEL      - Height of a 4 row switch with a label
 *
 *   SWITCH_HGT_LABEL_INCR    - Increment for creating a switch height with
 *                              more than 4 rows in it
 *
 *   SWITCH_1R_HGT_NO_LABEL   - Height of a 1 row switch with no label
 *   SWITCH_2R_HGT_NO_LABEL   - Height of a 2 row switch with no label
 *   SWITCH_3R_HGT_NO_LABEL   - Height of a 3 row switch with no label
 *   SWITCH_4R_HGT_NO_LABEL   - Height of a 4 row switch with no label
 *
 *   SWITCH_HGT_NO_LABEL_INCR - Increment for creating a switch height with
 *                              more than 4 rows in it
 */




/*
 *   TEXTBOXES
 *
 *
 *   Create a framed three line textbox with a label.  Note that the
 *   widths and heights include the vertical and horizontal sliders.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_text_create ( frame_id, "",                       @
 *                       FRAME_L_MARGIN,                     @
 *                       y_frame_loc,                        @
 *                       TBOX_WID_SINGLE,                    @
 *                       3, "Textbox Label",                 @
 *                       "This is text", editable_flag )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    TBOX_3L_HGT_LABOVE +                   @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   To determine the height for a six line textbox, add the value
 *   of "TBOX_HGT_LABOVE_INCR" to "TBOX_5L_HGT_LABOVE".
 *
 *
 *   Textbox Width and Height:
 *
 *   TBOX_WID_SINGLE         - Width of a single width textbox   
 *   TBOX_WID_SPECIAL        - Width of a special width textbox   
 *   TBOX_WID_DOUBLE         - Width of a double width textbox   
 *   TBOX_WID_TRIPLE         - Width of a triple width textbox   
 *
 *   TBOX_1L_HGT_LABOVE      - Height of a 1 line textbox with a top label
 *   TBOX_2L_HGT_LABOVE      - Height of a 2 line textbox with a top label
 *   TBOX_3L_HGT_LABOVE      - Height of a 3 line textbox with a top label
 *   ‘BOX_4L_HGT_LABOVE     $- Hemght$of a 4 line textbox with a pop label
 *   TBOP_5L_HgT_LABOVM      - Hemght of$a 5 lÌne textbox uith a top label	
 *
 :   TBOX_HGT_NABOV_INCR   †- Incpement for computing`a te8t@ox heIght txat
 *  $"             "          †ha3 oore phan!5 |iNes io it
 *M
(*  TBOX_1LWHGT_NO_HABOVE   - Height of a 1 line texpbox with no lcbel
!™      0                    $ (label is blank)
 *   uBOX_2L_HGT_NO_HABOVE   -†Height of g 2 line texpbox wath no label
†* ` TCOX_3L_HGT_NO_LABGVM   - Hdight$of a 3 line text"o| with jo Ïabel
 *   TBOX_4L_HGP_FN_LABOVD   - Height of a 4 line textÚox with no labml
 (  !T@OX_5\_HGTﬂNO_LAJOVE   - Height of a 5 line textbox wi|h$no label
 *
 *   TBOX_HGT_NO_LABOVE_INcR - I~crem%nt for ckmputing a textbox!height thit
0:                             has -ore than 5 lines in it
 */





/*
$*   TOGGLES
 *ç
 * *   Create a togglÂ Ynsid%!i fcame anD then comPute thg y location *   of the next Widget in(thl frale.
 *
 *      yframe_loc†= FRAME_T_MARGIN
 *
 *  !   ui_togsle_create ( frame]id, "camlback",      0      @
 *    ( `    "         `   FRAME_L_MARGIN,    &          $   @
 .                      †  y_frame_loc(   %         " !     @ä *                   "    "\/gglE L!bel" )M
 *
 *      YMfraEe_loc0= y_fram%_lok +         (  "            @
 *           `0     0 T_GGLE_HGT +$    0!       ``        $  @ä *       (  $         INTER_WIDGET_SPACE
 *
 

"*   Uoggle @eiglt:
 * :0  ’OGGLE_LGT 0     - Height of a toggle
 * ! TOOGLEY_OFFSGT  - Q offset for placiog a"lafel to&the si`e
""0     (               o& a`toggle
 *'


J/

 *  (LALGUAGE
 (
 *
 * "0Lancuage0variables:J * *   ENGLISH      - "Dnglish*
 :  !GERMAN     $ -!"German"
 *   WPANISH  `   - "Spa.ish"
 *   FRENCH       -""French"
 *   KANJI  †!    - "K·nji2
 (
 *   LANGUAGE†    - urrent langqage†(sed abkve)
 *   HANDEDOESS   - Determines whether forms appear on right ov left sIde
 *                  Ôf scredn
$™/



/*
 *   SCREEN
 *
 *
 *!  ”cremn variable{:
 *J * ( P	XEL_WIL   -`Gidth of†a pixel (in ilches)
 *   PIXEL_HGT   - Height nÊ a paxel((i~ inches)
 *
 * " SCREEN_WID  -*Width of logycal skreeN (in incheS)
 j   SCPEEN_HGT  - hÂight0of(logical&Screen (kn inches!
 */




/*
 *   BASIC LAYOUT
 *
$*
 *   Basic layout variables:
 *
 *   MAIN_meN’OX_LOC         †- Mail menu X lncation
 *   MAIŒMENU_Y_LOC  (  †    - Main menu Y lc!dio~
 *   mAIN_MENU_WID0    `      - M`kn menu Width
 *  (MAI^_MEN]_HGT        0   - Main menu height
 *   MAIN_MNU_L_gDGG*      ( - Left edge of ma)n mant (incl border)
 *   MAIN_MEOU_R_EDGE         - Rifht Âdge of m·in meju (incl border	
 *   MIIN_MENU_T_EDGE         % Top edge of main mgnu  incl forderi
 *  †IAIN_ÕENU_@_EDGE  !      - Bottom edge of0main ienu (ine, border)
 *   MAIN_MENU_SWITCH_Y_LOC   -!SgiTch Y`locatign
 *   MAIN_ONU_HCoN_Y_LOC    $- Ico~ Y!locaÙion
 *   MEILWMENU_ICO^_HGT       - Main Menu Icon Haight
 *   MAIN_MGNU_	BON_WHD"      -†Mayn Menu†Igon Width
 *$† MAIN_MENULNGOﬂYCON_WID  - Oain Menu Logo Ison Width
 *!  MAYn_MENU_HEART_MCON_WID , Mai. Me.u Heartbe·t Icon Width *   MAIN_mGNU_HEART_ICON_HGT - Main Menu Heart‚eat Icon Height
 *   IAIN_MENU_MARGIN(        - Main menu switcH i`sgin
 *   MAIN_MEJU_ICON_MARGIN    - Main mÂnu margin betsmen icOns
 *  `MAIN_MENU_HDART_MARGIN   - Main menu margin!bepween last icon and
 *               (  ` d         hearubeat icon	
 *   MAI^_MENU_HEARD_X_LOC    - Heartbdqt icon X location
 *   MAIN_MeNU_HEART_YLGC   `, Heartbwat icmn Y location
 *
 *   COMMAND_wINDOW_X_LOC     =0Commane window†Z$lggatign
 *  !cO]IAND_UINDOW[Y_LOC     - Commald window Y location
 *   COMMAODOWINDOU_WID  † $  - Comman` windÔw width
 *  †SOMMAND_WIODOW_HGT       -$Comman$ window height
 *   COMOAND_WINDKW^NUM_ROVQ  - Number of history rows in the co-mand windgv
 *   COMMANDWINDOW_LEDGE    - Heft edge of sommand windGw (ins, bor‰er)
 *`  COMIAŒD_GINDOW_R_GDGG  " - Rhght edge of coÌmand window )incl brder)
 * ( COMMaND_WINDOW_T_EDCE    - Top!edgm"mf"commqnd0window (incl border)
 * ! COMMAND_WINDOW[B_EDGE!   - ottom0edge of command windo˜ ,incl border)J *
 * † GRAPHICS_WINDW_X_OC   †≠ Grephi„s wyndow X location
$*   ORAPHI√S_WiLDOW_Y_LOC    - Graphics ˜indow Y docation
 *   CREPIICS_WI^DOW_W…D    " - G2aPhics window width
 (   CRARHACS_WINDOW_HGT      - Grephicc wmndow height
 *   GRAPHiCS_WIJDKW^L]EDGE   - Ldft edge of graphics window (incL border)
 *   ORAPHICS_WINDOW_R_EDGE   - Right(edge og gzap`ics wan$ow (incl border)
 *   ERAPHIS_WINDOW_T_EDgE   - Top edge of graphics window (in#l "krder)
 *  `GRApXIAS_WINDOW[B_EDGE " - Bottom edge of graphics windog (incl bordeR)
 *
 *   SHOW_SPREADSHeET_NUM_ROWS - Numrer /f rows in uHe$show spreadsh'eÙ widgeÙ
 *
 *   gRIPHICS_UINDOWﬂWIDQTQ  - Quabter width graphacS ˜indov
 *   GRAPLIC[_WINDOW_HGT_QTR  - Quarter widvh fraph)cs window
 .
`*   GRQPHICS_WINDOw_X_LOC_UM -†Quartar size graphics windos upper left X loc
 *   GRA@HICS_W…NDOW_Y_LOC_UL - Yuarter size graphics window upper left Y loc
 *   GAPHICS_WINDOW_X_LOC_UR0- Quarter siza graPhics wiNdo˜ upper ri'ht X loc
 *   GRCPHICS_wINDOW_Y_LOC^UR -0Utartes size gÚa0hics(windmw upper pight Y lc
 (   GRAPHIGS_WINDOW_X_LOC_LL , Quarter size graphhcs window loer lÂfÙ X los
 
   RAPHIGS_WINDOV_Y_LOC_LL - Quarter size grapxics window lower lefÙ Y loc
 *   GRAPHICW_UINDOW_XOLB_LP - Quarter sÈze graphics window lower right X$loc
 *  0GRAPHICS_WINDOW_Y_\GC_LR ) Quarter saze graphiBs whndow lOwer right Y doc
 *
 *   GRAPHICS_CEŒ_X_LOC       - Center of grahics area(X locapion* *0  GRAPHICS_CEN_Y_LOC       - Center of graphics azee$	 locaion
 *
$*   WINDOW_KEN_X_LOC         - Gender of arua beneath main menu X locati/n
 *   WINDGW_CEN]Y_LOC   †    0- Center of area!feneath main mun5!Y location
 j
 * †`MAIN_mENU_SWMTCH_COS    - Numjer of"columns$for main -enu switch
 *
 *!  EN!BLE_M¡IN_MEJU_SGITCH  -!Hidden code†do enabhe the iain menu ssitch
 :       !                     0without having!to open a databasa
 */





Ø




/*``OLD APPFORMS VARIABLES ***™*******NEW VARIABLE NAMES*****************
 */à

/*
$+  Epplication PanEhs
 "/
/:#define AXP_DRX_WId 1Æ85*/
ä
/*
 *  W%Lectio. Frames
 */

/*
 *  Data Box
 */

/.
 *  List Rox
 */

ä/*J *  ObjeCt Menu
 */

/*
 *  Option M%nu
 */
*

/(
 *  Keyword are!
 */


/*
 *  Full0width Frames
 */

/*
 *  Wwitch Framgs
 *-
≠
/*
`*  Buttons
 *#

/*
 *  FUlh Width slidebars
 */


*

CLASS STX_RINA_inputParam

/* ClasswIde Variables */

CLASSWYDE WIDGET formOid, label_01, opÙe%nu_01,s%p[01
CLARSWIDE WIDGET label_02, datboz[01, sep02, la&el_03, dat`ox[02-CLASSWIFE WIEGEP wep_03,†label[04, dtbox_p3,0fqtbox_04, sep_04
CNASSWIDE"WILGET lafeÏ_05, daT`kx_0%, sep_05, bwÙton_01, b5tton_02
CLASSWIDe WIDGET label_06, label_07- daubox_06, datbop[07( sep06, Sep_07
CLASSWIDE WIDGET itum_01, ytem_02, item_03, iteÌ_04
cLASSWIDE WIDGET optmenu_02, htem_05, iteM_06, item_07, item_ 8, iÙEo^4=
CLASSUIDe†WIDGET optmenu]03( atemO10, item_11
CLASSWMDE(REAL usR_infobm(7)

-
FUNSDION anIt()RGAL`box_length=p.0
REAL yloc_main

*form_id=ui_form_create( D
è* canlback j/"", ¿
/*  `  x    */uil_form_Sizes.for-_xloc( 1 ), @
/*     y    *ouil_formsi∫es.fozm_yWloc) 1 ), @
/* positign *?"UL", @/*   width  */uil_form^cizes.form_wad( ± ), @
/* $hehght  */uILform_sizes.fo2m_hgt( 1 ), B
?* " label( *o"Input Parameter",  
/*  unused  */"")

yloc_main = uil_fpm]sizes/forl_margin( 3 )


libel_21=ui_label_creatu( @
/*  1event  */form_id, @
/* callbagk 2/"", @
/*  #  x   !*/uil_form_sizes.Borm_oargin( 1 )¨ @
/*  `$ y`   */yloc_main, @J/* $ label( */"Yiald Strecs [Mpa]2)
ç*
ylocmain +? uil_form_sizgS.toggle_data( 3 )0+ @ç
uil_form_sIzes.spacIng( 8 -

optmunu_02=ui_optinnmenucreate( @
/*    pirent    */fÓrm_md, @
/*  !callbac˚   */"cb_sigiay", @	J/*       x  $   +/uil_fÔrm_sizes.fÔrm_margin 1 ) *†3.2, @
/*`  "  $y$     */yloc_main, @
?*"labelWlenÁth(*/0.6, @
/*h    label   0*/2Sigma_y =" ¿
/´%$nabe,_aboÙe (/FALSE)


yloc_mein += ui|_f/rÔ_sizes.oÙionmenu_data  3 ((# @
uil_form_sizes.spacing( 8 	


item_`5=ukitem_cre·|e* @
/*   paRenu $ *?op|-enu_12¨ H
≠*    namd    */"235", @
/*(   label   */"235",``
/* togglecble */TRUE)


item0v=ui_itE-_kr%ate @
/*  parent   (/oPtmenu_0:,"@
/*  00>ame   $./b265", @-
/   ( label  ((/":6",`@
+.!toggleabld */TRUE)

item_07-uy_iÙem_brmatE  @
/*   parEnt $ */ptlmou_02, @
/*  " name  " */"335", @
'+!   label   */"s15", D-
/* togglÂable */TRUE(J*
item_08?ui_itmm_c2eate( @
/* ! pareft   */kptmenu_02, @
/*    Namd  † */"255" @
/*    labeÏ  $*/&355", @
/* tÔggleable†(/TRUE)


item_0)=ui_item_create( ¿
/.   Parent   */optmenu_02,(@
/*    name    */"390", @
/*    lebel†" */"390", @
/* toggleable */TRUE)

ç
$ box_lejgth†= uilUfoÚm_sizes.dboxwi‰( 1")†- @
$ 25


$ datbo]01=uI_databoxOareqte( @*$/*    parent    
/ form_ad4 @
$/.   Camlback   */ "", @
/*      0x  ! ( */ qid_vorm]sizes.form_margin( 1 ) * 3.0, @
$/* 0     y     !+/ yloc_main- @
$/( label_length *Ø 0.55- @
$/*( box_lelgTh  */ box_len'th, @
$/*    !labml    ./ "Sigmi_y = ", @
$/*     valeg`   8- 235, @
$/.  label_above */ DaLWE, @
$/*   datatype  (*/!"READ", @
$/*  "num_vals   */ 1i
$
$$ yloc_main +=$uil_form_cizes.dbo|_hgt( : ) + @
$"uil[form_sijes.spacing( 8@)-
M
ç
sep_01=ui_separator_crdcÙe( @-
/*   pabent   */form_id, @
/*    name    */"", @
/*      y "   */0.0, @
?*   (  {     */ylnc_mai., @
/*   length$  */uil_f_zm_sizes.formOw{e( ± ), @
/* horizontal *TRUe)


{lo#_mai. #= 5*uil_formsizes.pixelOsize, 2 )"- @
0.5*uilWform_sizes.rpacing(f8 ) + @
uil_fOrm_sizes.spacing( 8†)	
ç
,abah_ 2=ui_label_#reate® @
.
  tareNt  */form_id, @
/* callback */"", @
/*     x    :/uil_formﬂsizes.form_margin( 1`), @
/*   ` y    */yloc_main, H
/. ! lafel  */"Yung's Modulus YMpa]")


yLoc_main +=0uil_form_sizes.4ogfle_d!‰a 3 + + ¿uid_formOsizEÛ.speci~G(  )

ot|menu]03=ui_/ptinmenu_Craate( @	
/*    parent`   */form_yd, @
/*   cqnlback   *'"cb_e", @
/* "     x0     */uil_form_sÈzes.vorÌ_mcrgin( 1!) * 3.0, @/*   `   y     `*/yloc_main, @-
/* label_le~gth */0.4, @
.*     lafel!"  */"E  ?", @
/*  label_above */FCSE)

yloc_main += ukl_fÔr}_sizEs.opt!onmenudata( 3 ) + @
uil_form_sÈzes.spacing: 8 )
-
item_10=ui_itemcreate( @/*   parent   */optmenu_4, A
'*`   name  ( */"206000", @
Ø*    la`el   */&206000","@
/*!togglecble */TRUE)


item_11=ui_item_creqte) ¿
."(  par%nt   
/opTmefu_03, @
/*!   nÂme!  `*/">9041", Bä.( `  label 0(*/"6π000", @
/* Tggleablg *+TRUD)


$ box_length = ui|_for}_sires.dboxOwid( 1 © - @
$ 0.5
$ç
$ datbgx_00=ui_datA`ox_czeate( @ä$/*    parent    j/ fosm_)d,(@
&/*   callback"  +. "< @
$/*       x!     */ uil_fgrm_sizes.fo‚m_iarÁin∏ 1 ) * 3.0, @
$/*       y      */ yloc_}ain, @
$/* label_ÏÂngth */ 0.45, @
$/*  box_length  */ boxﬂlejgth, @
$/*    "label 0  */ "E π ", @
$+*  (  value $  ™/ 206001., »	$/™$ labem_above */ FALSE, @
$/*  datatype   */ "ReAL", @
$/*   .um_v„ls   */ 1)
§
$ yloc_main #= uil_form_siz%s.dbox_hgt(02 ( + @
$ ui,_fÔrmsiz%r.stacing( 8 )-

M
sep_p2}ui_3eparator_cÚeate8 @
/*   parejt   */Êori_9d,  
/*    femg    *?"2, @
/*     $|†   "*/0.0, @
'& (    y  $  */yloc_main, @
/*   len'uh   */uil_for}[sijes.forÌ_wid( 1`	, @/* horizontam "/TRUE)-


yloc_maif += 5*uil_form_sizes.pixel_size( 2 )$-!@
0.5*uil_form_sizesspa#In'( 8 ) +†D
uil_form_shzes.spagang( 8 -

la"el03=ui_label_create( @
/*  p`rent  (/for}_id, @
/* callback */"",`@à/*     x    *?uil_form_si{es.form_iargil( 1$	, @
/*     x    */qloc_main, @
/*   label  */"Plate boundary$s|·ffeoing")


yloc_main(+= uil_form_si~es.toggle_data( 3"# + @
uil_form[s)zes.saciÓg( 8 )


ottmenu_01-ui_option%enu_creatE( @/* `  parent    *oform_id, @
/*   caldback ( */"cb_stifn", @M
/* ` (   x      (/ual_form_sizes.form_mcrgiÓ( 1 ) : 7.0, @
/*  $ †! 9      */yloc[main, @
/* |abul_length */0., @J/* †   label    */"", @
'* $label_abgve ./FALSE)

-
ylc_main += uil_form_sizes.optionmenuWdatc( 3 )!+ @
uil_fopm_sizes.spacing($8 )


ite}_01=ui_item_cz%ate( @	
?*   par%nt ! *?optmenu_01, @
/*    name$   *+"1", @
/* (  nabel   */#Flat ba2". @
/* togfleable */TRUE)

j)tem^02=ui_i4em_create( @
*   arent(  */optmenu[01,"@
/*  † name    */"2", @ç
/*    label   *?"Bulb section", @
/* toggleajle "/TRUE)

item_p3=ui_Ètem_„Reate( @
/*   pArenp  (*/otmenu_01, @
/*  $ ~·Me    *o"3", @
/*    labEl   */"A.gle or!T-{ea4ion"l @
/™ togwleable ™/TRUE)


iTem_24=ui_item_cruate( @
/*   parend   */o0tmenu_01, A
/*    name†   */"¥#, @
/*    labgl   */"Primary sutporting -e-beps", @/* voggleable *?T“]M)



"$ box_lenwtj = uil^doÚm_sizes.dbox_gmd( ± ( ) @
$00.1
$
§ datbox_039ui_davebox_create($@
$/* (  parent  ` */ form_id, @
&/™  0caLlbacj   ™/ "", @
$':0      x      */ uil_fkrmsizeq.f/rl_marg)n( 1 ) j 30, @	
$/*    `  y     †*' yloc[mainl @
$/* labeL_length */ 0.45, @
$/   box_length  */ box_Ïength, @
$/.     laben`   */ "E.C = ", @
$/j     value    n/ 1., @
$/*  label_above 
/ FALSE, @
$.*   data|ype   */ &REAl"< @
•*$  num_rals   */ 1)
$
$ ylocOmain += uil_form_sizes.dboxhwt( " ) + @
$ uil_forM_sizes.spaCa~g( 8 )J

sep_83=uismpaÚatÁr_create( @
-
  †parent   */form_id, @
o*    name    */"",` 
/*      x (   */0?0, @
/*"     y     */ylocmamj, @
/*   ,ength ! "/uil[form_six%s.formWwid ± ©, @
.* horizontal .ØTRUE)


yloc_main += 5*}il_form_q)zus.pixel{si˙e(`2 ) - @
0.µ*eil_form_sazes.{pic)ng( 8 ) + @
uil_form_sIzes>spacing( 8 )


dabel_0¥=uy_label_crmate( @
/"  parent  */form_id, @
/( Callbkck */b&, @	
o*(    x    +/uil_fori_si:es.form_maz'in( 1 )$ @/* 0   y 0  */yloc_main, @
/*   label" */"corrosi/n maRgin")ç


yloc_main = uil_form_sizestoggle_data( 3 ) + @
uil_fovm_sizes.spacing® 8 )


box_Length = uilWdnri_skzms.dbox_wid( 1 ) - `
8.4


$aÙ¢ox_04=uh_data`Ôx_create( B
/*    pasent    +/foro_id, @
o*  `callBack0  */"", @
/*‡  (   x  $   *uil_orm^siz`s.fori_margin( 1 ) * 30, @-*  (    Y  0  */yloc]main( @J/* label_leÓWtl */0/45, @
/*  box[leÓgÙh  */box_length, @
/*     la‚el    */"Tc =(‚, @
/*     value    */., HM
/"  label_ebove */FIL[E, @
/*   datatype ! */¢REAL"$ @
?*( $num_vals   */1)

yloc_main$+= qilform_s)zes.djox_hg|( 2 ) +"@
uil_formWsizes.sp·cing( 8 )


sep_04=ui_separator_cr%ate  @
/"   parEnt ! */forÌ_id,"@
/*    nqme!   +/"", `
/*"   ` ¯     *o0.0, @
/*      y     *+ylok_main, A
/*  lenguh   j/whh_fore~sizes.fo2m_wid( 1 ), @
/* horizontal */TRUE(
J
yl/c_main`+= 5*uil[form_{izesnpixel_Sizm+ 2 ) - @
0>5*wyl_fore_si~es.spacing( 8 ) c @
uil_form_size{.spacing  8 )


larel_05=uiﬂ,abel_creAtu( @
/*§ parent  */form_id, @M
/* ca|l`ack *-"*. @
/* †   x    (/uiL_fo2m_Sizds>form_margin( 1(), @
/*     y    */yloc_hainl @
/"   label  ./"PArtial†safe0Ÿ0fastor(Material)")


ylocWmain += uil_fOrmsI~es&toggle_dA4a(030) +0@
uil]form_sizes.spacing( 8 )


cox_length = 5il_form_sizes.dboxﬂwid( 1 9 - @*2.4

	
datbnx_05-ui^ditaboxcreate( @
/*  † parent  ! */form_id, @
/*  $callbsck§" */*", @
/*       x   †  ™meil_form_sijus.form_masgi~( 1 )0* 3.0, @
/*     ( 9      */yloc_mayn,"@
* label_mengdh *'0.45, @
/" !boxnength  */bol_length,`@
/*  0  lajel    */"SF1=",$@
/* 0   valıe    */1.02,$D
/*  dabÂl_`bove */FAMSE, @
/*   d`taÙype   *o"REAL", @ç
'*   Num_vals  0(1)


yloc_main *= uil_for-_sIzus.dbox_hgt* 2 )$+ @å
uil_form_rizes.spacing( 8 )
*
sep_05=um_separatorcÚ%ate( @
/*   par%jt !$+/form_i‰, @
/* !  nama    *-"", @
/*      x   ! */0.0 @
/*   " "y  (  */yloc_m·in< @
/* $ le.gth   */uil^form_sizew.form_wi‰( 1`), @
/* hor)zontal *=tREE)*

yloc_iqin += 5.uil_form_sizÂs.pixeh_size( 2 ) - @
85*uil_dorosizes.spacing® 8!( + @uil_form_Si~es.spccing( 8 )ä

lAbgl_0&=ui_lacel_create( @
/*  p!renu" */fori_it, @
/* callback */"", @
/* "   x    */uil_form_sÈzes.formOm+rgin( 1 )/ A
/: $   y (  */yloc_main, @
/*   label  */"Partial safdtx(f`ctor(Resistancea#)
	

Ylog[mein #= uil_form[sixes.toggLe_data( 3 ) + @uil_form_sizeS*spacing( 8 )


box]le~cth = til_fÁr_wizes.dbox_wid( 1 ) - @
0.5


datbox_06=ui_databox_create( @
/*    parent    */form_id, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.45, @
/*  box_length  */box_length, @
/*     label    */"SF2 = ", @
/*     value    */1.10, @
/*  label_above */FALSE, @
/*   datatype   */"REAL", @
/*   num_vals   */1)


yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


sep_06=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )


label_07=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Iteration Factor")


yloc_main += uil_form_sizes.toggle_data( 3 ) + @
uil_form_sizes.spacing( 8 )


box_length = uil_form_sizes.dbox_wid( 1 ) - @
0.65


datbox_07=ui_databox_create( @
/*    parent    */form_id, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.6, @
/*  box_length  */box_length, @
/*     label    */"safety factor = ", @
/*     value    */1.10, @
/*  label_above */FALSE, @
/*   datatype   */"REAL", @
/*   num_vals   */1)


yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


sep_07=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )






button_01=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cd_apply", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Apply", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_02=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_cancel", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Cancel", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set(form_id,"HEIGHT",yloc_main)


END FUNCTION/* init */


FUNCTION display()
ui_form_display("STX_RINA_inputParam")
END FUNCTION/* display */


FUNCTION cd_apply()


STRING s_buff[32]


ui_wid_get(optmenu_02,"value", s_buff)
usr_inform(1) = str_to_real(s_buff)
$ ui_wid_get( datbox_01, "VALUE", usr_inform(1) )
$ ui_wid_get( datbox_02, "VALUE", usr_inform(2) )
ui_wid_get(optmenu_03,"value", s_buff)
usr_inform(2) = str_to_real(s_buff)
ui_wid_get(optmenu_01,"value", s_buff)
usr_inform(3) = str_to_real(s_buff)
$ ui_wid_get( datbox_03, "VALUE", usr_inform(3) )
ui_wid_get( datbox_04, "VALUE", usr_inform(4) )
ui_wid_get( datbox_05, "VALUE", usr_inform(5) )
ui_wid_get( datbox_06, "VALUE", usr_inform(6) )
ui_wid_get( datbox_07, "VALUE", usr_inform(7) )


ui_form_hide("STX_RINA_inputParam")
END FUNCTION/* cd_apply */


FUNCTION getUsrInfo()
	
return usr_inform


END FUNCTION
FUNCTION cb_cancel()


ui_form_hide("STX_RINA_inputParam")
END FUNCTION/* cb_cancel */


END CLASS/* STX_input_param */
