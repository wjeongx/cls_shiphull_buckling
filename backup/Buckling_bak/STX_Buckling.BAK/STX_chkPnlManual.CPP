

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
 *   FORM_X_LOC_OFFSET_CASCADU_t 0 - X ogvset For(c!scade$`osition 4
 *   FORM_X_LOC_OFFSET_CASC@DE_5   - X offset for cAsca$e$po{itiOn 5ç
 *
 *
 :   Form Pla#ement - Y LOcation:
 * ç
`j   FœRM_YﬂLOC       § (       = Y LocatÈon foR form under Main efu
 *
 *   FORM_Y_lOC_HALF_√EN   `    / 1/2 HEight Êorm cenTerad on screen *   DORM_Y_LOC_QTR_CEN         - 1/ Height fmrm celtered on screel
 *  †FMRM_Y_OC_3_8THS_cEN      - ;/8 Hekghu(vorm centered on scr-en
 *`  FOR_Y_LOC_5_8THS_CEN      - 5/8 Hoight form centered Ôn screen 
   FORM_Y_LOC_3_QTRS_KEN    $ - 3/4 HeIght form centered on screen
 * *   FORM_Y_LOC_OFFS«T_CASCEDE_1   -†Y offset for$casgade position 1
 *   FORM_Y_LOC_OFFSET_CAScADE_2   - Y offsÂt for cascate!posivion 6
 :   NORM_Y_LOC_OFFSET_CASCADE_3"  - Y offset For cascade positÈon 3
 *   FOR_Y_LOC_OFFSET_CASCADA_4   - Y offset for casc·de position 4
 *  "FORM_Y_OB_OFFSET_CASCAEE_5   - Y offset for!ciskade position 5
 * 
 *
 *   Fore idthr and H%ights:
 ™ *  "FORM_WMD_SML          "    - Width of a smqll gorm
 *   BORM_WID_SPL        ` (    - Width of ! "specicl" borm (3>u |imes 
 *(                         $ !   a small(form)
!*`  FORM_WID_MED               - Width of a†mediUm f/rm (meliım sixE) 
 *   FORE_WID_L«         !`    - W)dth of†a large form (l·rge size) 
 *0 
 *`  FORM_HGTWTALL  $        0  - Height of a tall for} (Mein Medu 4o 
 *             †       †! `,      botTom od screen) *†  FOBM_HGT_FULL              - Height of a full form (Main Menu to
 *                  `     $  @    top nf Coemane Window)
 "   FORM_»GT_HALF              - Hald of"a ful| form
 *   F_RM_HGTQTR            0  - One Quarter of a full form
 *   FORM_HGT_38TMS            - Three Eighvhc of a ful| form
 *   FORM_HCT^5_8THS  "         - Five AighThq f A ful, form
 *   FORM_HGT_3_QTRS †          - TËree Quarters0of a full form
 *"
 *
 * ` Form Margins:
 *  
 :   FORE_L_MARGIN            0 - insÈ‰E Left Marcin gor widgeds i. formJ *   VORM_R_MARGIN               Inside R)ght Margin for widgetc yn form
 *   FORE_T_MARGIN!             - Insmde Top Margin above first widget
 *   FORMWB_MARGIN         !    -!Inside @ottoM Margin below last widget
 *   FORM_B_LARGI^WNO_BUTTON    - Inside Bottom Margin below"Last gidget
 *       (    "          (        when last gidget is nou a button
 *   
 *†  FoRI_2H_MARGIL         p  0- BoTh horizontam margins
 *   FORM_2W_M¡ROIŒ             - Both vertica| larGins-
 *   FGRM_2V_ARGIN_NO_BUTtON   - Both verticql margmns (wheN last widget
 *            `                   is not"a "utvon)M
 * 
†*
 *  `Form Bordgrs (the #olored areas oqtsidE†thu form):
 *  
 *   FOBM_Lb_RDER       !  0   - Left Bnrdgr of the form 
 *`  FORM_R_BOPDER `            - Right Border of the form
 
  "FORm_T_BMRDER             (-(Top Border of the form (inq|uding the label)
 ™   FORM_B_BORDER             !- BotÙom Bordez on the form
 *   FORM_T_BORDER_NO_LABEL     - Top Border od |hE form wiThout a label
 *   
 *   FOSM_2h]BORDER   †       $ , Roth horizontal aorders
 *"  FORMO2V_BORDE“     0       - Both vertIcal borders (with"label)
 *   VORM_2F_BORDERONO_LABEL  ( - Both ˆert°cal borduÚs (without label)
 *   
 *   FORM_X_ISFRAME "           -†Compensation for X†location of forms
 *  $    (                       †if they are 'usmz placed' rather tHan
 *           0    0               appforms placed 
 *  †FORM_Y_iSFRAME            †- Compensation for Y locqtion
"*   FMRM_y_ISFRAME_NO_LABEL    - Compensation for Y location for forÌs
 *                     †          with no label *.
ç

















-*ä *   ACTION - OBJECT - METHOD MENUS 
 *
 *
 *   Create the Application0Action, Kbject, Method Ìenus and place the
 +   separatgr underneath them.
 *
0"                   !     $     FORM_WID_MED,            °  @
 *      ui_Optionmejw_create( formWid, "callbAcj",  `     "  @
 *   !          0           0 AOM_MENU_X_LOC,    0     0     A
 *   (                        ACTION_MENU_Y_LOB,             @
 *$          $ $    $    0    AOM_MENU_LABEL_LEN,            @
$* †          !    !0         ACTION< DAL[E )
 *   
 *      ui_kpÙioomenuOkreate( form_id, "Call`ack",  !     "  @
 *      "                     AKM_M≈ŒU__LO 0       † "    @
 *                    †       OBJEAT_mENT[YLOC,0   0    h    
 *†                           AOM_MENU_LABELWLEN,            ¿
 *                       $   OBjUCT, NALSE()
 *   
 *      u)_optionmuju_crgate( drm_id, "kalmback",  "       0@
 *     $    !                 AOM_MMN]_X_LOC,                @
 +                "  1        METHND_MENQ_Y_LOC,$            @
 *       "     ("  `          AOM_MENU_LABELOLEN,            @
 *"         (             $   METHG, FALSE )
 *   
 *      ui_separatos_create ( nobl_id, "", 0.0,              @
 *              0      `(     EOM_SEPARATOR_Y_LOC,      †    @
 * $              † "        (FORM_WIE_Sl, DRUE )	
 *   
`* 
 *   AOM Menu Placement:
 *!
 *   AOM_MENU_X_LOK    $  - X Location of"the AOM me.us (margin included)
0*   AOM_MNU_LABEL_LEN   - Label lEngth for AOM oenus (laNguage dependent) 
 ! ACPIONMENU_Y_LOC    - Y LocAtion for the(Action mÂnu (margio insluded)
$*   OBJET_MEN]_Y_LOC    - Y \ocation fos the œbject menu (margin included)
 * 0 METHOD_MENU__LOC    - Y(Location for the Method mgnu (margin included)
 *   AOM_SEPARATOR_Y_LOC  - Y LocAtion for`sdparAtor undeb the AOM mgnus
 *   APP_FOM_FIRST_Y_LOC - Y Location for the birst uI$get in an 
 *(                    "    Axplication form 
 ®/



/*
 *   FRAMEW
 *
 *
 *   Creete a fzame in aN application form.  Assume this is the firstJ * ` widgut in the form and th°t the frame contayns a†|Ëre% lynu lmstbox
 * " with a labÂl and`a dad`box with a label.  Vhul"locate the Q p/Sitik.
 *   for af unframed Databox under the fvame.  Œote thaÙ the frame's label
 *   must be „onsid·red in detebmining the next wadget locidion a3 doec
 *   t(e th)cknesr oF the frame edwes.
 *
 *   Qinke thy3 Ès an applicction form, The!firsp Y locatign is vhe
 
   v!riable ¢app_form_fmrsÙ_y_l/c".
 *
 *    0 y_l/c - APP_FORM_FIRST_Y_LOC
 *
 :      8e·ght = FRAME_T_MARGIN +              `      †  † $ P
 *             ( LBOH_3L_HGTOLAROVE +                        `
 *       `       IOUER_WIDGET_SPACE(+  `                    `@	
 *0    †         DBMX_H«U_LABO÷M +            $     †        @
 *  8            FRAME_B_MARGIN
 *
 *      ui[frame_create ( form_Id, "",   !        `   0      @
 *( †              †      FORMOL_MARGIN,    (                @
 * `                      y_lÔc,         " 0            0   †@
 *             †   $      FRAMEﬂWID[SKNGlE,     !   0      `0@
 "     !  †            0  height, "Larel" )
 *
 *      ui_lhstbo¯_gruite ( frame_)d, "caLlbaak",0           @
 *             (  `         FAME_L_MARGIN.                  @
 *        `  !    $         FRAME_T_MARGIN, $         `      @* *                          LBOX^WID_SINGLE,                 @M
 *  0                   !   3, "Listbox Labelb,  0           @
 *     !             (      seleCtion_type, sortWflag$)	J *
`*      y_frame_loc = FRAME_\_MQRGIN #    !    (  8      (   @
 *    $ 0"      0     LBOX_3L_HGT_LABOVE +                   @
 *    (         (     INTER_WIƒGET_QPACE
 *	 *      ui_dqtabox_create ( frame_id,†"",† † "     !     (   @
 * † †              `       FRAME_L_MARGIN,   †     $  8     @
 *       !    0     0       y_framd_lo#, 0.0,            !  $@
 *                          DBOX_WID_SINGHE,!                @J *                       (  "@atacox Label"( vqlue,          @
 *         !               TRUG, datatype, num_vals )
 *
 +      i_loc = y_loc +        0       "                  "  @
 *         0    FRAME_LABDL_HGT +   "`                    (   
 *   `  !      "lehg`t +`                                    @
 *       !     (FRAME_2EDGE +   (               "    †       @ *   $        ` INTER_WIDGET^SPACEJ *
 :     ui_databox_create ( frale_id, "", $       0          A *        `              !  UNFRAMED_L_MARGIN,"    !         @
 *              $           y_loc$ 0.0,†`  $                 @
 *                       0  DBOX_WID_SINGLE,  †              @
 *            $     †     ! "Second atabox Label&, value,  $@
 *            "            †TRU, daTatype,!num_vals )
 *
 .
 *   BreaÙe two single width fra}es in a medium &kÚm uhat is 
 *   next to a small applic·uion form.  T`ese frames wil| be
 *   at th% 4oq of the form.  Theiv(heighTs are tHe sime as
 *   if the above exampld.* *
 *      ui_forl_cReate( "", NKRM_X_LOC_MED_NX2_SMH,`" 0      @
 *      0          $ ( $ 0  FORM_Y_LOC, "UL",  †             @
 *(                        "FNRM_TID_M≈D,                    @
 *                        ( FOZM_HT_FULL, "Label", "Icon" )
 *   
 +	
 * $    5i_framd_sreate ( form_id- "", †   "                 @
 *         †              FRAMEﬂYWlOC_COL1,               "  @
0*    †    1              FORM_[_MARGIN,            "        @
 "     (       0  `       FRAME_WID_SINGLE,0          ` 0  † @
 *                    "  height, "Legt abel" )
 *
 *      uiﬂframe_kreate ( fopo_id, "",`   `           `      B
 *            `           FRAIE_X_LOC_S_L2, !         0  !   @
 *              !         DORM_Y_MARGiN,         0      †  $ @
 *                        FRAME_WID_SINWLE(0 (    `          @
 *                      †Ëeight( Right Ãabel"&)
 *   
 :
 *   FraÌe!Wi`ths and Heights:ç
0*
 *   FRAME_WIDWQINGL≈    - Width of†` skngle width frame"  
 *   FRAME_WID_SPECIAL`  - Wmdth of a {pdcial width frame  
 *   FRAME_WID_DOTBLE    - Width`of a double width frame  
 *4  FRAME_WID_TRIP\E    - Width of a"triple width Êrame  
 *
 *   NRAME_LABEÃ_HGT     - HeÈfht of the labgl above ` frame
 *   
 *
 *   Frame Margins:
 *
 *   FRAME_LMARG…N     (- …nshde left mArgin gos widoetS in the frame
 *   FRAME_P_MARGIN      - InsidE right margin for widgeds)in the†frameJ +   FRAME_T_MAROIN    " - Inside top(margin abmve first widgmt 
 *   FRAME^B_MARFIL      - …nside bottom Margin celow la3t widget 
 *   
 *   FRAME_2H_ÕARGIN     - Both hori{ontal margins
 * 0 FSAME_2V_MARGIN     - bOtl vertical eczGinw
 *   
 +
 *   Frame Pla„ement:
 +M
 * $ FRAIE_X_LOC_COL1    - X Location for a frame in0column 1
 *                         (samÂ†es 2form_l_}argin")
 * ` FAME_X_LOC_COL2 0  - X Loc`tIon for e fRame yn column 2
 *   FRAmE_X]LOC_COL3    - X LocatiÔn fgr a frame in column"3
 jM
 *
 * 0 Ujfr!mÂd Uidget Placement:
 *
 *   UNFRAMED_L_MARGIN   - Left marwif for an ungramed widged
 *   NFRAMED_R_MAROIN  !-$Right margin!for an unf2amed widGat
0*     0  "`       !      
 *   UNFRAMET_X_LOC_COL1 - X Location of!an unfrcmed widget in so|umn 1
 *   UNFRAMED_X_LOC_COL2 - X`Location of an unfraoed widget in column 2
 *   UNFRAMED_X_LOC_CKL1 - X Lo#ation`of!·n unfrImed widwet in column 3
$*/
	




/*
(*$  SELECT FRAMES
 *
 *J *   reate a selÂct frame in !n ApplicaTion form.! Put two Selecv diteroXes
 *   in tle select fvaoe.  Thel compute the Y location ˆov!ple next widge4.
 * !"Notu the qse of thd suplied Y locations foÚ!4he select da4aboxÂs`as 
 *$ !wel| as the hgigit oF t(e selEct framaÆ
 *
 *      y_loc ="APP_FORM_FIRST_Y_OC
 *
 *  "   ui_{electfrqÌe_create( norm_iD, "cillback",  (       @
 *                             F_RMﬂL_MARGIN,   !         $  @
 *                $         (  y_loc,              "         @
 *                 0   "     $ SFAME_WID_SINELE,  "     (  "@
 
     `                   †   SFRAME_2SDB_IWT_LABGVE,       @
`*      !       0              "select Frame La"el",       ( @
 *    (   (                    recyc|e_flAg 9
$*             $              † !	
 *      ui_smlEctdatabox_crdate ( sel_frame_id- "",       †  @
 *                           (    SFRAME_L_MARGI^, "      `  A
 *                0   ®      0  † STB_X_Y_LOC1, 0.<      `  @
 *                           †   †SDBOX__Id_SINGLE,         @
 *      †     $0        !$   !    "Select Databox`OnÂ",      @
 * 0       `(  0                  Vanue, TRUEl datatype,     @
 *           0"     "      †  (   proEpt )
 *
 *`   0 ui_selecÙdataboh_crea|e (`sel_&rame_id, "",      `   B
 *     0                †  $     †SFZAME_L_IARCIN,           @
 *      $                         SDBOX_Y_LOC2,!p.0,  ,†     @ ™                            $   SDBOX[WID_SINGLE,   !0     @
 *  $ $  !            `          `"Select Databox†One",      @
 *      !                       $ value, PRUE, datat}pE,     @
!
                       0        prompt )
 *
 *      y_loc = y_|nc + SFRAME_LAREL_HGT +               `   B
 *                    ( SFR¡ME_2SDB_HGT_LABœVE +             @
†*       $    !         FRAME_2EDGE†+(                  0   @
 * $                  ® IOTER_WIDGET_SPACE
 *
 *
 *$  Selekt Fraee Widths and He)ghts: *
 *   SFRAME_WID_SKGLE †     ( - Wi4th0of a single widdh$sElect0frame
 *   SFRAME_WIDWSPECIAL        - Width of a special width select frame
 *   SFRAME_WID_DOUBME         - Width of a dou"le width!seleat fsame
 *   SFRAME_WID_TRIPLE"        - Whdth of0a triple gidvh0select fraee
 * *   SFRAME_LABEL_HGT  $   † 0 - Heyght of†the label abore ` smL%ct"fsame
 .
 *   SFRAME_1SDB_HGD_LAOVM    - Height(of a select frale with
 *     ®! `           `          1 seldct d!tabox wit` a labeÏ
 *   WFRAME_2SD_HGP_LABOWE    - Leight of a select frame¢uhth
 *       !       0       "       2 salÂct dat!b/xes vith labels
 * ` SFRAME]3SDB_HGT_LABOVA!   - Height of0a sElect framd with
 *                             ( 3 selgct databoxes with labels
 *`  SFRAME_4SDB_HGT_LABOVE    - Height of a select frame uith
 *                   (   (       4 selUct databoxes$with labens
 *   SFRAEE_5SDB_HGTﬂLABOWE(   - Heyght of a seÏect frqme with
 (!      0 (  0   0        $ `   1 select databoxes with labels
 *
 *   SFRAME_HGT]LABOVE_	NBR   !- Increme.t for making select frames with 
 (        " $    $               more than % selEct datibkxes with!labels
!*
!*   SFZAIE_1SDB_HGTNO_LABOVU - Huiglt of a select frame with
$*        $   (       "      !  †1 select $at`bOx witËout a l!bel
 * ` SFBEME_2SDB_HGT_NO_LABOVE - HÂaght of a seleat frame with
 * (    !                        2 select databoxes githoUt labels
$*   SFRAME_3SDB_HGT_NO_LABOVE - Height of†a selÂct fsama w)vh
 * `$                 $0"       $3 salect dapaboxes uithouÙ labels
 *   SFRAME_4SDB_L«U_NO_NACOVE - Hemght mf a sa|ect frame with
 *           !                   4"seleat dAtaboxes without labels
 *   SFRAME_5SDB_HT^NO_LABOVE - Height of a select frama(with
 *                       "       5 select databoxes without lcbels j
 *  !SFRAME_HGT_NO_LABOVEﬂINCR - Incremeot for making select$frames wi|h 
 *                (              more t(an 5 {elect datAboxes without labels
 .
 *
 *   Select Fr`me Margi~s:
 *
 *   SFRAME_LMARGIN    `      -(Inside left margmn for select databoxEs
 *   SFRAME_R_MARGIN     !     - Ifside right margin for sm,ect datajoxes
 *   SFRAME_T_MAVGIN           - Inside vkp$eaÚgin fr select dataroxes
 *†  SFVAME_B_MAPgIN          (≠ Inside bttoo margmn for0select databoxes
!*!  
(*   SFRAME_2H_MARGI          - Both hrizontah margins
 *   SFRAME_2V_MAR«In          - Both vertical marÁins *
 *
 *   Senect`Frame Placement:
 *
 *  "SFRAME_X_LOC_COL1 !    `  - X Location for a sele„t fr!-eÄin column 1
 *               `              (same `s "form_l^margin")
 +  0SFRAME_ÿ_LOC_COL2  †  "   - X Location for a sele„t &rama in codumn 2
 (   SFRAME_X_LOC_COL3   "     - X Locatiol vor a selgcu fraoe in column 3 */







ç

/*
0*   SC“OLL_FRAMDS
 *
 *
"*   Cre·te a scroll frame kl a!bo2m.
 *
 *
 *  !S„rOll Frame Widths and Heights:
 *
 * ` SGROLL_FRAME_WID_SINGDE   8   - Witth of a single whdth scroll freme   
 *   SCROLL_FRAmE_W…D_SPECMA      - Witvh of A rpe„ial width scroll fraMe  
!*"  SCOLL_FRAME_WID_DUBLE  (    , Widt( of a duble width qcroll frame  
 *   SCROLL_FR¡ME_WID_TRIPLM       - Width of a triple width scroll fraoe  
 *
 *   
 *   SCROLL_BRAMU^WORK_WIDSINGLE  m Working"width oF$q single width
 *    )                  $    (      Scbo,l frame0  
 *   SCROLL_FRAME_WORK_W…D_SPEIAL - Working width of a special width 
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
 *!  tBOX_4_HG\_LABOVA  "   - Height Ôf a 4 line Ù%xtbox wi4h a top ÏabeÏ
 *   TBOX_5L_HGT_LABOVE      - Height o& q 5 lmne textbox with a top label
 "
 *   TBOX_HgT_LABOVE_KNBR   $- Increment for bomputing a textfox height that
 *       (        `   " !      has eoru than 5 lines in it
 * *   TOX_1L_HGT_NO_LABOVe   - HeighT of ` 1 line textbox(with oo labelM
 *   !                        0(lacel is jlank)
 .   TBOX]2L]HGT_NO_DABOvE   m Hdight of i 2 line textbgx with nO label
 *   BOP[3H_HGT_NO_LABOVE   % Heigit of a  line pextbox with0no laBal
 *   TBGX_L_HGT_Nœ_LABOVE   - HaiGht of a 4 line textbox with no label
 * " TBOX_5L_HGT_NO_LABOVE   - HeigHt of a 4 dine textbox with†no label
 *
 * $ TBOX_HGT_ŒO_LABOVE_INCR - Incrmment for computin' a textbox heyght thct
 *    `      (                 `as0oore than 5 lines in ht	`*/




/™ç
 *   TOGGLES
 *
 *
 *   Create a toGgle inside a frame an‰ then co}puUe 4he y location
 * % of the next widget if the fra}e.
 *
 *   $  y_framu_lkc 9 GRAME_T_MARGIn
 +
 *  (   ui_Toggle[cpeate ( frame_ie, "callbAck",    "        @
 *      "                  FRAME_Ã_MARGIN, "         "       @
 *       !        (   0    y_fr!mg_locl!                     @
 *    `                    "Toggle Label" +
 *
 *      yOframe_Loc ? y_frameWloc +                0        !@
 *                  $ TOgGLE]HGT + !             "  "        @
 *     "    $         INT≈R]IDGETWSPACE
 "	
 *
 *   To'gle Height:
 *
 * ` TOGGLA_HGT       - Height of a toggle
 *10 TOGGLEQ_OFFSET  - Y gffset for phÒging a label to the side
 *                      of a toggle
 */



/*
 *$  LANGUAGE
 *
 *`*   Language ˆariables:
 *	
 *   ENGLISH      - "English"
 *   GERMAN     ! - German"
 (  SPANIsH(0$ ( - "Spcnish"
 * ` FRENCH $     - "French"
 *   KANJI      $ - "C!nji#
 *
 *   LANGUAGE $   - Current lancıage (cee above)
 *   HANDEdNDSS   - Determinec whether0for-s appeav on right of left site
 *       (         of qcreen
 */

M


*
 *   SCREEN
 *ç
 *J *   Screen v!riablÂs:
 *
 ™   PIXEL_WHD   - Width of a pixel (in inches)
 *   PIXEL_HGT   -†Heaght of a pixel  in inches(
 *
 *   SCRGEN_WID "-"Width o& logicah screen (in inchus)
 :   SCREEN_HGT  - Hgight of logical$rcrden ®in inches)
 */




/*
 *   BA[IC LAYOUT
 *
 *
 *   Basic layout 6ari`bles:
 *
 *   MAIN_MENU[X_LOC          - Main menu X location
 
   MAI^[MEN]_Y_LOC          - Main menu Y locatioN
 *   œAIN_MENU_WIE            -(Main menu width
 *   MAIN_MENU_HGT   "        - Main menu heiGht
 *   MAIN_MENU__EDE         - Left ed'e of main }enu (inkl border	
 *   MAIN_MENU_r_EDGe  !      - Right edge of m!in menu (incl border)
 *   MAIN_MENU_T_EDGE    ®    - Tkp`edge of main menu (incl border)
 *!  MAIN_MENU_B_EDGE         / Rottom edge of main menu (incl bOrder)
 *  `MAIN_MENU_SWIPCH_Y_LOC   - Switch Y loaataon
 *   MAIN_MUNU_ICON_Y[LOC †   - Icon Y ÏOcation
 *   MAIN_MENU_IC_N_HGT      $- Main Menu Icmo`Height
 *   MAIN_MENU_ICOJ_WID      $- Main MenU Icon!Width
 *   MAIN_OENU_LOGO_ICON_WID  - Iain Menu Logo Ikon Widt(J *   MAIN_MEU_HEARt_HCON_WID - Mayn Menu Hear|beat Agon WÈdth
 *   MAIN_MENU_HEART_ICON_HGT =0Õain Menu Heartbeat I#on Heigh4
 *   MAIN_MENU_MARGIJ (   !0   main`menu$swidch margin"*  `MAHN_MENU_ICON_MARGIN !  - Main }enu mergmn betweÂn icojs
 * 0 MIIN_MENU_HLART_MARGIN   - Main menu margin between last icoN and-
 *    (               `       ! heartbeat icOn
 *  "MAINﬂMELU_HE¡RT_X_LOC (  - Leartbeat!icon X locqtion
 *   MAIN_MENUWHEART_Y_LO√  ! - Heartbea4 icon Y0lOcation
 *
 * " COMMAND_WINDoW_OLOC     - Commane indov P location
 *   COMMANT_WINDOW_Y_L_K     - COmmand window$Y locathnn
 *   KOMMAND_WINDOW_WID  †    - Command Window width
 *   COMMND_WINDO__HGT       - Command window height-
 *   COMMAND_WINDOW_NEM_ROWS( , Number of!jistory"ˆows in the coooand wind/w
 *   AOMMAND_WINDOW_L_EEGM! " - Left edge mf commaNd window (incl border)
!*  !CMMAND_WINTœW_2_EDGE    - ight edge kf cmmman$ window (incl bOrder)
 *   COMHAND_WINDOW_T_EDGE    - Top%edge of comeand wiÓdow (if„l border)
 *   COMMAND_WYND_R_ETGE$$  - Bottom etge of co}mant window (inCl border)
 *
 *   GR¡PHICS_WINDOW_X_LOS   0- Graphics wind/w X locatioj
 *   GRAPHiCS_WHNDOW_Y_LOC$"  % Graphics window Y location
 *   RAPiCS_WINDW_WAD    $ - Graphics window width
 *   GRAPHICS_WINDOW_HGT      - Craphics window height
 * ` GRAPHICR_WINDOW_L_EDGE   - Left edge of graphics Window (inc, border)
†* " GRAPHICQ_WYNDOOR_EDGE   - Right edge of graphics windos (ingl b/rder)
 *  $GRAPHICS_WINEKW_T_E@GE  !- Top edgg of graphigs winfow (incl border)M
 *   GRAPIICS_WINDOW_B_EDGE   - Bottom edge of"graphigs windgw (incl border)
 *
 +   SHOW_SPREADSHEET_NUM_ROWS - Number of rows in the Ûhow sprecdsheet widget
 *
 *   GRAPHICS_WINDOW_WID_QTR  -†Quarter width graphics window
 *   GRAPX	CS_WINDOW_HW‘_QT“!  QUqrter width gRephics windo
 *
 *   GRAPHICS_WINDOW_X_LKC_U - Q’arter sizD grqphics win`ow upper left X loc
 *   GRAPHICS_WINDOW_Y_LOC^Ul -0Auarter(siza graphics gindow qpper left Y lnc
 *   G“APHICS_WINDGW_X_LOCUR , Quarter size!graphic{ window uppdr right X loc
 " ! GREPHICS_INDOW_Y_LOC_UR - Quarter size graphyCs 7indow upper right Y(loc
 *   GRAPHICS_WINDOW_X_LOC_LL - Quarter size graphics window lower ledt X(moc
 *   GRAP@ICS_WINDOwYWLOC_LL - Quarter size gBapjics winhow lowev left Y loc
 *   GRARHICSﬂWINDOW_X]LOC_LR - Quarter`Ûize0grapxics!window low5r right X loc
 *   GRAPHIcS_WINDO◊_LOC_LS - Quarter size graphIcs ˜iNdow lower rigjt Y lcJ * *   GRAPHICS_CEN_X_LOC   $   - Center of grephics area X location
 *   GRAPHIGS_CEN_Y_MOC       - Center of grahKcs area Y locetkon
 *
 *   WINDOW_AEN_X_LOC †       - Kenter of"area beneath main menu X ,ocation
 (   WINDOW_CEN_LOC        "- Center of a~ea beneath mcin men5 Y locataon
 *
`*   MAIN_MENU_SWITCH_CO‹S    - Number"of!columÓÛ for$main menu scitch
 *
 *`  ENABLEGMAIN_MENU_SWITCH  - Hhdden code to enable the main menu swiÙch
 *       †              !       without having to open a database
"*/










/*  OLD APVORMS VARIABLES ***********NEW VARIAFLE NAMES*"***+***********
 */


/*
†*  Application Panels
 */
/*#dgfife†APP_DBOX_WID 1.85*/


/*
 *  S$lection Frame3
 */

/*
 *  DatA BOx
 */	

/*
 * `List Box
 *Ø


/*J *  Object Menu
 */

/* *0 Option Menu
 */



/:
 *  Keyword arei
 *.


Ø*
 *  Fuln Width Frames */
 /*
 *  Switcx FrAmes
 */
ä/* *  Buttons
 */

/*
 *  Full Wkdth 3lidebars
 */






CLASS STP_chkPnlManual

/* lasswide Varyables */M




CLASSWIDE WIDGET form_i`
CLASSWIDE WIdGET selfrm_01, seldbkx_01, button_01, button02
CÃ@SSWIƒE WIDGET buttoÓ_03, sep01, buttmn_04, button_05
ALASSWIDE LMGIC@L l_chkXnl


$ CLASSWIDE INTEGeR list_num, lbc_list_num ,count_delete_lbc
$ CLASSWIDE STRING lo·dcare_title€ vA“TUAL ]( VIRTUAL )
$ CLASSWIDE W…DGET wid_qrray(VIRTAL), wid_array_28VITUAL)
$ CLASSWIƒE STRING lbcseT_title[ VIRTUAL ](!VIRTUAL ) , delete_lbc[ VITUAL ]( VIRTUAL )ç
$ CLASSWIDE VEAÃ max_y_loc , frameOheight

FUNCTMON"init()
REAL yloc_main
$ REAÃ yloc_frame_de|ete=0.
REAM yloc_selfrm_01=0.
l_cjkPnl Ω fAlse

/*
"      * Initia,ize variables M
       */


%
ä
fosm_id=STX_chkPnlMetHod.Wet_form_id()
yloc_main =STX_#hkPnlMethod.get_ylocmain()


selfrm_01=ui[smlactframe_create( @
/*  parent  */formid, @
Ø* callback */™", @
/*     x   `*/uil_fobm_sizeÛ.foro_margan(01 (, @
/*     y    */yloc_main, ¿
/*   widdh  */ıil_form_sizes.selframe_wÈd( 1 ), @
'*  xeight  *o1.0, B
/*   label  */"", @
/*  recyble */FALSE)

yloc_{elfÚm_21 = uil_fOrm_Sizes.selframe_margin( 3 )


seldboz_01=ui_selectdatabox_create( @
o*    parent    */selfrm_01, @/™   callback   */"", @
/*       x      */eil_form_sizes.fori_marginh 1 ), `
/*  0`   y   †  */ylmc_selfrm_01, @
/* label_lengtx "/0.0, @
/*  box_ldng|h  */uil_form_sizes.sdBox[wid( 1 -, @
/*     label    */"Select eleMent", D
/*     value    */&", @
/*  labÂl_abve */TRUE, @
?*   dataType   *?"ELEM2D", @
Ø*    prompt    */(b)

äxloc_senfrm_01 += uil_form_sizes.sdbxﬂhgt( 1`) + @
wil_form_sIzes.spa#mng( 8 )


ui_wid_sut(selfÚm_01,"HEIGHT",ydoc_selfrm_01)

yloc_main {< uil_form_sizeÛ>spacing( 14 9 + @
uil_form_siz$s.spacing80< i + @
ylocselfr-_01


bupton_01=ui_buttoncreate( @
/*   parent  +/fopm_id, @
/*  ccllback */"cb^checi", @
/*     x     "/uil_form_{ize3.buTvon_x_loc1( 2 ), @
/™     y0   2*/yloc_main, @
/*   wi‰th   */uil_form_sizes.button_wmd( ≤ ), @
/*   height  */uil_form_sipes/`uttÔn_hgp® 2 	, @ä/*   la"el $ */"Find Panels,(@/*    TREE $ *-TRUE, @
/* higHlig`t */FALSE)

buttonO02=ui_button_#se`te( @-
/*   par%nt! */form_id, @
/*  CallbacK */"cb^re&resh", `
/*     x   ( */uid_for}_sh~es.button_x_loc1( 3 ), @
/*     }     */y|oc_main, @
/*   width  `*/uiÏ_form_sizes.button_sid, 2 ), D
/(   height  */uil_forM_SizEs.button_Ëgt( 2 ), @
/*   mabel  `*/"Refresh",(@
/*    TRUE   */TRUE- @
/* highlight *.FALSEi


yloc_main += uil_form_sizes.buttn_hg|( 2 ) + H
uil_forM_siZEs.spacing( 8 )


button_03=ui_butvon_cre`te( @
/*  "parent (*?form_id, @/*$ callback */"cb_Tab|e", @
/(     x    0*/uil_foÚm_Ûizes.budton_x_loc1( 1 ), @
/* `   q0    */yloc_main, @
/*   ˇidth   *?uilWform_sizes.`utdon_wid( 1 ), @
/."  heqght  */uih_form[sizes.butto._Hgt( 2 ), @
/*   label$  *'"Show Panah Table", @
/*    TRUE  (*/TRUA, @
/* hÈghlkght *+FALSE©


ylocmain += uil_fOÚm_sizes.buTton_hgth "() + @
uil_bor-_sizes.spacin'( 8†)


se_01=uiﬂSepqrator_create( @
/*   parent  !*/for-_id, @
/*    name"   *'"", @
/*      x    $*/0.0, @
/*  "   y     */yloc_Ìain, @
/*"  lengph   */uil_form_sizes.form_wid( 1 ), @ç
/* hori:gnpal */TPUE)


yloc_mAin +=†5juil_norm_sizes.pixel_sizd("2 ) - @
0.5+uildkrm_sizes.spacing(`8 ) + @
uol_form_sizes.spacing( 8 )


button_15=ui_button_create( @
/*   parent  */form_id, @/*  callcack */"cb_apply", @
/*     x    !*/uil_form_sizEs.`utton_x_loc1(`2 -,  
/*#    y !   */yloc_main((@
.*   width   *+uil_fov}_size3.button_wi$( 2 ), @
/*   leight  */uil_form_si{es.button^hgt( 2 ), @
/*   ,abel  0*/"Appy", @
/*    TRUE   *-TRUE, @
/* highlight */FALSE)




button_04=ui_button_create( @
/* ` parenT  *oform_id, @
/(  callback */"„b}canCel", @'*    "x     */uil_form_sizes.button_x_loc1h 3 ), @
/*"    y     */yl+c_mahn, @
*   width   */uil_form_shzes.button_˜ie( 2 ), @
/*  0heigxt †*'uil_form_sizes.buttoN_hgt( 2 ), @
/.   label   */"Close&, @
/*    TRUE   *ØTR’E, @
/* highlÈght */BALSE)

ç
yloc_maiN k-0uil_form_sizes*button_lgt( 2 i + P
uil^form_sizes.spacing( 8 )
J



END FUNCTIONØ* )nit */

UNCTION display()

/*        *  Displa{ vhe Show optin menu 
¢       */*ä
$ UTL_drawClear()	-
	
ui_wid_set( selfrm_01, "DISPLAYLL", TRUE (
ui_wid_sep`( seld`o¯_01, "DIWPAY", TRUE)
Ui_wid_set ( butÙon_81,"DISPLAY"- TZEE)
ui_wid_Set ( button_02,"DISPL@Y", ‘RUEk
ui_wid^set ( ‚utton_03,"DISRLAY", TBUE)
ui_wid^set ( button_24,#DISPLAY", TRUE)ui_uid_set ( button_05,"DISPLaY",$TRUE)	


ui_wif_set   sep_01,"DKRPLAY, TRUU)
ui_set_focus (seldbox_p1 )
$ delete.refre{h()

END$FUNCTHON/* display */

FUNCTION exit()J

ui_wid_set( selbrm_01,†"DICPLAYALL", FALS`)
u)_˜kd_set ( suldbmx_01, "DISPLAY","FALSE)M
ui_vid_set  (cutton_01,&DHSPLAY", FALSE)
Uy_wid_set ( button_02,"DISPLAY", FALS)
ui_gyd_set ( button_03,"DISXLAY". BALSE)
ui_wid_set ( buttn_04,"LIS@LAY", FASE	
ui_wid]set ( button_05,"DHSPLAŸ", FALSD)


ui_gid_set ( sep]01,"DISPLAY", FALSE)ç


END FUNCTIOŒ/* exit */


FUNCTION cb_check )
/*
 * This Is a ca|lback FOR the button"named button_0!
 *-

STRING s_elmList[256]
STRINg sa_elmList[256](VIRTUAL)
REAL(raPanelInfohIRtUAL)
INTEGER i_cntPÓ,,i,"ia_pllIDs(VIRTUAL)

-}I_wid_g‰t_vstring(seldbnx_01,"value",s_elmÃiqt)


IF( s_elmLirt"== "" ) THEN RETTRN -1
$ UTL_drawClear()
U\_markID.orgColor(i
l_chkPnl = prue


IF( sysWar2ay_nboundhST»ﬂsetPanel.getElemListAll(i) != 0 -THEN

i_cntXnl = sys_arrayﬂicound(STX[setPanel.getElemLIstAll(),5)
SYS_ALL_KATE_ARRAY(sa_elmList,1,i_cntPnl)SYS_ALLOCATE_ARRAY(ra_PanelInfo,±,i_cntPnl3.7)ç


sa_elmList =$STX_setPanel.getEl%miwtAll8)
ra_PanelIndo = STX_setPanel.gedPl~Info()
$ …F( sa_unmList(1) !?("" )0THEN

$ k_c.tPnl = sys_irraq_hbound(sa_elmList,1)	


SYS_R≈ALLOCATE_ARRAY(sa_elmList,1,i_cntPnl+1)
SQQ_ALLOKATE[ARBAY(iaOpnÏIDs$1,i_cntnl+1)
SS_REALLOCATE_ARRAY(ra_PanelInfo,1,i_cntPnl+1,1,6)


sa_elmLkst(i_cntPnlk1! = s_elmi{t
	
FOV( i=±(TO i_cntPnl+1 )
ia_pnlIDs(i) = i	
EJD FORç


$ STX_setPangl.setNuwVal(sa_elmLiqt,ra_anelInfo)
+


ELSE
i_cntPnl"= 0
SYS_ALLNCATE_ARRAY(Úa_PaoelInfO,1$1,,∑)	 	
SYS_CL\OCATE_ARRAY(ra_enmList,1,1)	 	
sa_elmList(1) = s_elmLIst

END IF 	


STX_ge|Panel≈dge(i_cntPnl+± ,s_ell\ist, ra_PaoelInf(i_cntPjl+1,1:7)i	


dump sa_eliLIst. r`_PenelInfo


CTX_setPaNel.setNeWVal(sa_elmList,ra_PanelYnfo-


END FUNCTION/* cb_chack 
+

FUNCTIMN"cb_refresh()
UTL_drawCÏear(;ädisplay_cleanup()
STX_setPanml.vreeMeÌ()	
END FQNCTION/* cb_refrash */


FENCTION cb_Tabme()
/* * This is a cal,back NOR the futton named buvton_03
 */
STRING s_eLmList[256], sa_elmList[256](VIRTUAD)*REAL ra_Panel…nvo(VITUAL)
INTEGER i_cntPnl,y, ia_pnlIDs(ViRTUAL)

-
$ uiwid_get_vstring(seldbkx_01<"value",elmLiqt)
$ UDL_drawClear()
$ UTL_markID.orgColor*)
$ STX_getPane|EdgE(1,ulmhist¨ra_Panelnfo(1,1:7))
$ ia_pnlIDs(1) =1
$ {a_eliNist(1)!=elmList
ç


	
ui_wid◊get_vstring(seldbox_01l"valuE",s_elmList©
IF( s_elmList == "" ) THEN RETURN -1
ä
IF80sysOarray_nbound(STX_setPanel.getElemListAll()) ±= 0 )TBMN


i_cntPol = sYs_aprqy_hboqnd(STX_setPanel.getElemListAlL(),1)
SYS_ALLOCAU≈_ARRAQ(sa_el}List,1,i_cntPnl)çSYS_ELLOCATE_ARR¡Y(ra_PanelInfo,q,i_cntPnl,1,7	
SYS_ALLOCAT≈_ARRII(ia_q~l]Ds,1,i_cntPn,)
J
sa_elmLisp = STX_satPanel.getElemListAll()
ra^PanelInfo = stX_cÂtPanel.gatPlnInfo()




FOR( i=1 TO i_cntPnl&)
ia_pnlIDs(È) - i
END FOR

ELRU
RETURN -1 	
END …F 		
	
STX_Check[pcnel®ia_rnlIDs. sa_elmLyrt,"ra_PajelInfo)

-

UTL_markI.{etElmID ia_polIDQ(1))


STX_panel_inputreadInpet*)
STX_panel_input.rhwIlput()
	
END0FUNCTION/" cb]^able */




FU^CTION cb]apply()


ReAl ra_PanumInfo(V	RTUAL)
SVRING sa_elmLi{t[256](VARUAL!
INTEGER ia_pnlIDr(iPTUAL),i_cntPnl, i


IF( l_c(kPnl == true -THEN
UTL_markIF.oRglor()
h^cntPjl = sys_qrray_hbound(sTX_se4Panel.getUlemListAll(),1)
IF ( I_cntPnl == 0 i0THEN RETURJ 0	
J
SYC_ALLOCQTE_ARRAY(0sa_elmList,1 ,i_cntPnl)
S[Q_ALOCATD~ARRAY( ha[pnÏIEs ,1 ,i_cntPnl)
SYC_QLLOAATU_ARRIY( ra_PanelInfo,1,i_cnÙPnl, 1,7)
	

	FOR( )=1 TO i_cntPnl )
ia_pnlITS(i) = i
sa_elmLirt(i) = STX_sepPaned.getMlemList(i)
ND FOR	


ra_PcnelInFo =`STX_setPanel.7eTPlnIofo(9
STX_check_panel(ia_pnlIDs, si_elmDist, zaOPanmlInfg)
UTL_m!rkID.setElmID(ia_pNlHD3(0))


l_chkPnl = false
STX_check_panel(ia_pnlIDs, se_elmList, ra_PanelInfo)$ UTL_mark	D.setElmID(ma_pnlIDs(1))	
$ STX_panel_input.readIfput(	
$ STX_pandl_input.ShwKnpu¥()
ELSE
write("=== Please check panels at first ===")


END IF



END FUNCTION	




FUNCTION cb_cancel()
/*
 * ThIs is a callback FOR the butdon named ruvton_04
 */

ui_&orm_hide("STX_chkPnlMethgd")
J
EnD FUNCT	OF/* gb_Cancel */



	
	




END CLASS/* de|ete */J