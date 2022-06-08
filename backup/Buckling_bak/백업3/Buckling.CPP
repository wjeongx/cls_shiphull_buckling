

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
 *   FORM_X_LOC_OFFSET_CASCADE_4   - X offset for cascade position 4
 *   FORM_X_LOC_OFFSET_CASCADE_5   - X offset for cascade position 5
 *
 *
 *   Form Placement - Y Location:
 * 
 *   FORM_Y_LOC                 - Y Location for form under Main Menu
 *
 *   FORM_Y_LOC_HALF_CEN        - 1/2 Height form centered on screen
 *   FORM_Y_LOC_QTR_CEN         - 1/4 Height form centered on screen
 *   FORM_Y_LOC_3_8THS_CEN      - 3/8 Height form centered on screen
 *   FORM_Y_LOC_5_8THS_CEN      - 5/8 Height form centered on screen
 *   FORM_Y_LOC_3_QTRS_CEN      - 3/4 Height form centered on screen
 *
 *   FORM_Y_LOC_OFFSET_CASCADE_1   - Y offset for cascade position 1
 *   FORM_Y_LOC_OFFSET_CASCADE_2   - Y offset for cascade position 2
 *   FORM_Y_LOC_OFFSET_CASCADE_3   - Y offset for cascade position 3
 *   FORM_Y_LOC_OFFSET_CASCADE_4   - Y offset for cascade position 4
 *   FORM_Y_LOC_OFFSET_CASCADE_5   - Y offset for cascade position 5
 * 
 *
 *   Form Widths and Heights:
 *
 *   FORM_WID_SML               - Width of a small form
 *   FORM_WID_SPL               - Width of a "special" form (1.5 times 
 *                                a small form)
 *   FORM_WID_MED               - Width of a medium form (medium size) 
 *   FORM_WID_LRG               - Width of a large form (large size) 
 *  
 *   FORM_HGT_TALL              - Height of a tall form (Main Menu to 
 *                                bottom of screen)
 *   FORM_HGT_FULL              - Height of a full form (Main Menu to
 *                                top of Command Window)
 *   FORM_HGT_HALF              - Half of a full form
 *   FORM_HGT_QTR               - One Quarter of a full form
 *   FORM_HGT_3_8THS            - Three Eighths of a full form
 *   FORM_HGT_5_8THS            - Five Eighths of a full form
 *   FORM_HGT_3_QTRS            - Three Quarters of a full form
 * 
 *
 *   Form Margins:
 *  
 *   FORM_L_MARGIN              - Inside Left Margin for widgets in form
 *   FORM_R_MARGIN              - Inside Right Margin for widgets in form
 *   FORM_T_MARGIN              - Inside Top Margin above first widget
 *   FORM_B_MARGIN              - Inside Bottom Margin below last widget
 *   FORM_B_MARGIN_NO_BUTTON    - Inside Bottom Margin below last widget
 *                                when last widget is not a button
 *   
 *   FORM_2H_MARGIN             - Both horizontal margins
 *   FORM_2V_MARGIN             - Both vertical margins
 *   FORM_2V_MARGIN_NO_BUTTON   - Both vertical margins (when last widget
 *                                is not a button)
 * 
 *
 *   Form Borders (the colored areas outside the form):
 *  
 *   FORM_L_BORDER              - Left Border of the form 
 *   FORM_R_BORDER              - Right Border of the form
 *   FORM_T_BORDER              - Top Border of the form (including the label)
 *   FORM_B_BORDER              - Bottom Border of the form
 *   FORM_T_BORDER_NO_LABEL     - Top Border of the form without a label
 *   
 *   FORM_2H_BORDER             - Both horizontal borders
 *   FORM_2V_BORDER             - Both vertical borders (with label)
 *   FORM_2V_BORDER_NO_LABEL    - Both vertical borders (without label)
 *   
 *   FORM_X_ISFRAME             - Compensation for X location of forms
 *                                if they are 'user placed' rather than
 *                                appforms placed 
 *   FORM_Y_ISFRAME             - Compensation for Y location
 *   FORM_Y_ISFRAME_NO_LABEL    - Compensation for Y location for forms
 *                                with no label
 */


















/*
 *   ACTION - OBJECT - METHOD MENUS 
 *
 *
 *   Create the Application Action, Object, Method menus and place the
 *   separator underneath them.
 *
 *                               FORM_WID_MED,               @
 *      ui_optionmenu_create( form_id, "callback",           @
 *                            AOM_MENU_X_LOC,                @
 *                            ACTION_MENU_Y_LOC,             @
 *                            AOM_MENU_LABEL_LEN,            @
 *                            ACTION, FALSE )
 *   
 *      ui_optionmenu_create( form_id, "callback",           @
 *                            AOM_MENU_X_LOC,                @
 *                            OBJECT_MENU_Y_LOC,             @
 *                            AOM_MENU_LABEL_LEN,            @
 *                            OBJECT, FALSE )
 *   
 *      ui_optionmenu_create( form_id, "callback",           @
 *                            AOM_MENU_X_LOC,                @
 *                            METHOD_MENU_Y_LOC,             @
 *                            AOM_MENU_LABEL_LEN,            @
 *                            METHOD, FALSE )
 *   
 *      ui_separator_create ( form_id, "", 0.0,              @
 *                            AOM_SEPARATOR_Y_LOC,           @
 *                            FORM_WID_SML, TRUE )
 *   
 * 
 *   AOM Menu Placement:
 * 
 *   AOM_MENU_X_LOC       - X Location of the AOM menus (margin included)
 *   AOM_MENU_LABEL_LEN   - Label length for AOM menus (language dependent)
 *   ACTION_MENU_Y_LOC    - Y Location for the Action menu (margin included)
 *   OBJECT_MENU_Y_LOC    - Y Location for the Object menu (margin included)
 *   METHOD_MENU_Y_LOC    - Y Location for the Method menu (margin included)
 *   AOM_SEPARATOR_Y_LOC  - Y Location for separator under the AOM menus
 *   APP_FORM_FIRST_Y_LOC - Y Location for the first widget in an 
 *                          application form 
 */



/*
 *   FRAMES
 *
 *
 *   Create a frame in an application form.  Assume this is the first
 *   widget in the form and that the frame contains a three line listbox
 *   with a label and a databox with a label.  Then locate the Y position
 *   for an unframed databox under the frame.  Note that the frame's label
 *   must be considered in determining the next widget location as does
 *   the thickness of the frame edges.
 *
 *   Since this is an application form, the first Y location is the
 *   variable "app_form_first_y_loc".
 *
 *      y_loc = APP_FORM_FIRST_Y_LOC
 *
 *      height = FRAME_T_MARGIN +                            @
 *               LBOX_3L_HGT_LABOVE +                        @
 *               INTER_WIDGET_SPACE +                        @
 *               DBOX_HGT_LABOVE +                           @
 *               FRAME_B_MARGIN
 *
 *      ui_frame_create ( form_id, "",                       @
 *                        FORM_L_MARGIN,                     @
 *                        y_loc,                             @
 *                        FRAME_WID_SINGLE,                  @
 *                        height, "Label" )
 *
 *      ui_listbox_create ( frame_id, "callback",            @
 *                          FRAME_L_MARGIN,                  @
 *                          FRAME_T_MARGIN,                  @
 *                          LBOX_WID_SINGLE,                 @
 *                          3, "Listbox Label",              @
 *                          selection_type, sort_flag )
 *
 *      y_frame_loc = FRAME_T_MARGIN +                       @
 *                    LBOX_3L_HGT_LABOVE +                   @
 *                    INTER_WIDGET_SPACE
 *
 *      ui_databox_create ( frame_id, "",                    @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc, 0.0,                @
 *                          DBOX_WID_SINGLE,                 @
 *                          "Databox Label", value,          @
 *                          TRUE, datatype, num_vals )
 *
 *      y_loc = y_loc +                                      @
 *              FRAME_LABEL_HGT +                            @
 *              height +                                     @
 *              FRAME_2EDGE +                                @
 *              INTER_WIDGET_SPACE
 *
 *      ui_databox_create ( frame_id, "",                    @
 *                          UNFRAMED_L_MARGIN,               @
 *                          y_loc, 0.0,      $    †         `  *   †              †       DBœX_WID_SILGLE,                 @ä *                          "Second D·tabox Label¢, vanue,"  @
 *   0           `   †  "   tRUE, datadqpe, num_vals )
 *
 *
 +   Create ugo sinole widtË framer in a -ddium"forM that"is 
 *   next to a rm·ll application fkrm.  These fsames will be
 *   at tle top!Of the form.  Thekr heigËds aRe the same a{
 *   in txe above example. *
("(†    um[form_create( "", FORM_X_LOC_MED_NX2_SMN,          @
 *            !          "  FORM_Y_LOC, "UL",              " @
 *                   †      FORM_WKD_MED<             $$     @
 
    (  ! $     `          FORM_H«P_FULL, "Label", 2Icon" ) *(  
 *
 *†     ua_brame_creaTe ( formﬂid, "",† "    !       "     †$¿
$
  "$        0  ! "$00   FRAME_XLOC_CKL!,           ! (    @
 *              †         FOSM_YMARGIN,    "              ( @* *         0  0    `      FRCME_WID_SINGLE,    0†   `   $  ` `* *  $                     height, "Left Mabel" )
 *
 *      uÈ_brime_create ( Êorm_id, "",      †           !    @
 *  (! `        p     †!  FRALE_P_LOC_KOL2.  $               @
"*         0    $         FœRM_Y_MARG[N,     "              `@
       "   !   a$       !FRAME_VIDSINELE,  `     !         @
 *           †,   (      0he{g`tm "Riohd Habed" ©J *   
 j
 *   Frame Widths aÓd Heights:
 *
 *   FRAe_VID_SINGLE    - Width of A single wi`th frame   
 *   FRAME_WHD_SPECIEL   m Widt` o& a≤spd„ial width frame  
 *  †FRAME_WID_DOUJLE0$ 0- Wkd4h of a"uoublm width`fÚamg  
 *   FRAMD_WID_TIPLE    -0Wadth Gf q triplg$width frame  
 *
 *   FRAMD_LABEL_HGT     % Height of the label ibove a fzame
0*  "ä *
 (   FRame Margins:
 *
 *  FRAME_L_MARGIN (    - INSide left margin nor vidgÂts in the frame
 * ∞ ∆RAMD_R_MQRFiN      - Insibe riÁht margin for widgets in the Frame
$j  (FRAMEﬂT_LAV«IN  "   - insiDe†top mirgkn abOve@first whdget 
 *  $FRAME_B]MARGIJ   0  - Inside bwtnm marwin below last wÈdget`
 *   
 *   FRAME_2H^MARFIN     - Both hori˛ontal oargins
 *   FVAM≈_2F_MCR«IN  0  - Both ver|icc, mar'aos
 *0   *
 *   Frame Placement:
 *
 *   FRAME_X_LOC_COL1    - X LocAtion for a frame in coluon 1
 *             †       ` $0(samu as "form_,_margin&	
 j   FRIMEX_LO_AOL2    - X LocAtion f/r†q frame in†column 2
 *   FRAME_X_MCOCL3   †- X Location for A frame in columÏ 3
 *`**0*   Unframud Uidget PlacemenT:
 *
 *   UNFRAMED_L_MARGIN   - Lm&t margin0fnr an unframed widget
 * ††ENFRAMED_R[IARGIN0  - Right!margin(for An }nfbamed gidget
 *  (   `        †        
"*   UNFRAMED_X_LOC_COL1 - X†LocatioN of ao u.FraMed wifget in col5mn 1
 "   UnFRA]ED_X_LC_GOL6 - X LocaÙion!of ·n unframed 7id'et in column 2
 *   ’NFRAMED_X_LOC_COÃ3 - T Location of an u|framed wkdget Ën „olumn 3
 *?
å



ç


/*-
 .   SELECT FRAMESJ *
 (
0* 0 Create a select frame in an atplicatioÓ f/rm.  Put two Ûelect tataboxe3
 * † in the sElecp frame. (Then$compqtg tha2Y locction gor°the Ógxt"wIdgeÙ.
 *   ^Ote the use of txe supplied Y`,ocations for the$smlect databoxes as 
 *   welL as the height of th% select framu.
 ™
 *      y_mc = APP_FORM_FIRST_YLOC *
 *      ui_selectframg_create( fovm_id, "camlback",          @
†*  $    (    ‡          ")    FORM_L_ARGIN(           0    @
 *             ††  0        (  y_loc,  !   $   $  (    !     D
 * †         $                 SFRAM≈_WID_SINGLE,  $       @ @
 *             †               SFRAMM_2SDB_HGT_LABKVE,       @
0*0               †  0         "Select Frame Label",         @
 *   0               !       †becyslm_flag 	
 *       (       0    `   †  †! $ +      ui_selectd·tabox_create ( sel_frame_id. "", d        @ *          "   !       †!        SFRAME_L_MARG	N,0          @
0*         †    "                 SDBOX_YﬂÃOC1, 0
0,   !0    @
†™     0  "            ! h$  (!!  ”DBOP_iD_SINGLE,  4 $     @
 *             `   " †† !("       #Sahuct Data‚ox ne",     †@ *                 "         "    value, TRUE, tatat}pe, †  #@
 *   `   " †             $       `qroMpT )
 *
 *   !  ui_selectdqpqbox^sreate ( sel_Êrame_id, "",      `   @
 *       (    `  † 0              SFRAME_L_MARGIN,  "        @
 j                            $( 0SDBOX_Y_LOC2, 0.0,    "    Z
 *      † †       0"     d        SDBOX_WID_”INGLE,          @
0*           $          0 $       "Selekt Davibox One,     †@	
 *$                     `         value$ TRUE, datytype, $   @
 *     "  0                    `  rrompt )
 *
 * !    x_loc`=`y_loc +0SFRIMEﬂL√BGL_HGT +                   A
`´         ` (          SFrA]E_2RƒB_HG\_LABGVE1+          `  @ * †    0  0  (†    0 ! SFBALE_3EDGE"+          a$!`         P
 *0   #              "  INTERWIDGET_SPACE
 *ä (
 "$  Select Frame Widths and HeigHts:
 *
 *   SFBAÕEWIT_SINGLEp   (    - Width of°a$singlÂ width sele„t frime
 *   SFRAME_WID_S–ECIAL $(     - Width oÊ a special widuh seheCt frameMä * `†SFRAME_WID_DoUB\E 4       - Width of a douBle0width seLect frame
 +   [FRAME_SID_TRIPLE      2† -†WhdtH of ``tripld wifuh†select frame
 *
 :   SFRAMU_LABEL_HGT          - Hgifht of the la‚e(0above a salect frame
 *
 * 0!SRAMG_1sDB_H«T_LABOVE `0(- Height f a Select frame with
 *         8      $     †        1 seleat detabox wivh aLebeL
 * 0 WFRAME_2SDB_HGTLAJOVE!   - Hgight of a selea¸ drame withä *                   $        0  2 seluq4 `atabo8es 7ith ,abels *   SRAMD_3SDb_HGT_LABOVD †  - Height of a relect frame"sith *   `     0             "      (3 select†databo|es with l`bels
 *!  SfRAME_4SDB_HGT_Le OVE    - HDight of a seleCd fvame wmth
 *           "  (        †      &6 select databoxÂs with dabelsç
 * † SFRAME^5SD∆_HGT_LABO^E "† - Height of a sELect fr!ma!with *   (   †   0    !  †          05 selecu dctaboxes with†labeds
 "
 *$  SFRAMM_HGTﬂLABOvE_INCR  † - Increment for making 3elecÙ!frames with 
(*    &     `         $    $  0  iord"than 5 se,ect0databoxes wath labelsM
`™
 *   SFRAEE_1SDB_G‘_NO_LAROVE - Hgight o& a select$frame with* *         $                `    1†senect dalabox ˜ithnut a label
 *   CFrAME_2SDB_HGT_NO_NBOVA - @eight of · selest fvAmE with
 *         `          !     (!  02(selegt,dqt·joxEs 7athout mafels *   ”FRAME_3WDBˇHGT_NO_LABœVE - Hdight of a semect frame with
 *  0                  0  0   `  3 select`databoXes withmet la`els
 ™   SFRAME_5SDB_HGT_NO_LABO÷E - HEig`t f a†Úelect frame with
 *(   $ "    " ¢0        !      `4 select databoxes withgut l`belq
 *   S∆RAME_5SDB_HGWLO_NABOVE(-"Height of a selgct"frame ˜ith
!*      `        !               50selact0databoxes without labels
 *
 +   SFRAMEWHT[FOLABOVE_INCR - Inkrement dos mAking selecı Êrames wyth(
 *      `  " " `                 mÔrm tha~ 5 select databoxew without labels
 *
 *
 *   Se|est FÚama Mabg)ns:
 * *   SFRAMG_L_mARGIN    † `    - Insi`m left maRgij for sele{t detabo|es
 *!  S∆RAM≈_R_ÕARGIN           - Ancide right margin for 3elect d`tabox%s
 *!  SFRAME_T~MARGIN †     !   - Inside tmp margyn dor select(datibÔ|esä *   SFRAMA_B_MIRCI           / Inside 2odtom MarCin fos select databoxes
 *! !
 * 0 SRAME_ I_]ARGIN      0$  - Coth horizontal mav7in3J + " SFRAME_2V_MARGI          - Both vevticam margins
 *
"*
 *   Select Nraee Placement:
†*
 *   SFRAMU_X_HOC_C_L1    0  ` - X Loc`dion for!a select frame m~ coluln 1
 *                           (  (same as "form_L_margan")
 "   SFRAME^X_DO_COL20`  !    - X Locction for a relect frame in column 2
 *0  SFRAME_X_NOC_SOL3  ` †  " -°X Locati/n for8a selEct0Êrame in Coluen 3
 *Ø




*



/*
 *0  S”RODL_FR¡MES
 *
 * *   Creatu a scroll framE i~ a fore.
 *
 *ä * ! Scroll Frime Widths and Heights:-
 *
 *   SCRLL_F“AME_WID_SINFLE  "    - Width of · sinule"wodtj scroll frame   
 *   SCROLL_FRA-E_WIƒ_SPEBIAL      - W`dth o& a special witt) scrOlh Óramd  ä *   CCROLL_VRAEM_◊ID_DOU@LE   $   - W)dth ob ` doubld†widvh scrOld frme  ≠
 *   SCRœLL_FRAME_WID_TRIPLE  `    - Width of a0tripÃe width scroll fraMd  
 *
 
(  
 *   SCRODFRAME_WORK_WID_SAGLE  -!Working width og a single`wid4h
(*                     8         `  "scpoll frame   
 *   SCROLL_FRAME_WORK_WID_SPEGMAL - gnrcing Oidt,†on ! special widtx 
 * $          0     $  ( ` `(   $  † wcroll frame    !*   SCRMLL_FRAME_WORK_WID_FOUBLE "- Vorcing(widvh f a doırle width 
 *  " †    $0"             !         ssroll framu"  
 .   ”CROLÃ_FRAME[WORK_WIƒTRIPLE  - Workingwkdth of a Tripde widph* *  !     b         "           0   sbrmll!frÂme   
 *
 *$  SCROLL_FRAM%_D@OX_WID_SINGLe `- )dph of"a silgne width scroml†framg   
 * 0                           0     datab/x/
 *"  SROlL_FRAME_DBOX_WI‘_SPEKIAL - Wadth of a speciel wÈ$4h 3Croll frame  ç
†*(            !`  $  $              dqtabox
`*"  S√ROFL_NVAMG_DBOX_WID_DOUBLE  -†Wi$th of ! dotb|e ˇiduh†scpoll frqme  
 *    !!       ∞  "    $   $       ! datafox
 ™  $WBOLL_FRAME_DBOX_WID_‘RIRLE  - Width of0a tr…pne width scroll frcme  
`*   `                 !    0     (  databox * 
   S√ROLL_FRAMQ_LARELﬂ»GT    ``  - Height of the lab%l above a
 *         !  Ä        `           ! scrgll frame   
 *
!*   ”CROLL_FRAME_1DBOX]HGD       $- Scroll fbamÂ hemght ˜ith 1 databox
 *   SCROLL_FRAMM_2DBOX_GT        -0Scrnll brqme jeigËt with 2 databoxes
 *† "SCROLL_FRAOE3DBOX_HGD     "  , Scroll frame hdight*with$s datAboxesM
 *   SCROLL_FRQIE_4DBO\^HGT        / Scroll frame huight@with t datacoxes
 ´ † SCROLL_GVAME_5DBOz_HT $Ä   ($- Scrol, f2ama height witx µ da|aboxes
 *
 *   SCROLL_FrAME_LBOX_HGT_INKR  " - Scsoll frame height increment
 *J :   SCROLL_FRAIE_1DBOX_W_RK_HOT   - Scroll vrame vOrk$huight for 1 databmx
 *   SCrGLL_FRAME_2DBOXOWORK_HGD   - Scroll`frame0work heÈglt fob  databoxes
 *   SCPOLL_FRAMEﬂ3DBOX_WORK_HGT  ®( Scroll(frame unrk height foz 3 eatabgxes
 *   SARLL_FRAME_4DBOX_WORK_HG‘4  - Scroll frame sork x%aght for 4 `atabkxes* *   SCROLL_FRAM_5DBOX_WORK_HGT   - ”crolL fraMe worz HehÁht foR 5 databoxes
 * 
 *   SCROLL_BRAEE_LBOX_«ORKGHGT_INCB - Scrkll d2imm workinÁ Ëe)ghv increment
 *`r  "SCRœLL_DP@ME_SLIDER_WID       - WidÙh of0the sLider on vhe raght 
 *$  $   $               "  †   0   `of e scroll$framE    *   SCROLL_FRAME_SDI‘ER_HGT"      - aig t of \he slides au the bmtt/i 
 *    ®†"0              $           $/f a scrnll fraMe   
 *!  
 *   ÊÚame Eqrgins:
 *
 *   SCROLL_FRME_L_MARGIŒ    0    -$HnÛidd left margin for widgeds in * *   †  !(   `       "   † †         a scroÏl fraie *!  SCROLL_FSAME_R_MARGIﬁ%    (   - Inside right =argin for widwets in 
!*   "                !        "     a #czoll frame
 *0` SCROÃL_FRAME_T_MARGIN         - Insite tÔp Ì`sgi."qbove gipst wid'et M
 *  !SCRMML_FRAME_BOMARGIN        "- Ifside bottol }argin beLow |Ast gidgeu`
 *`  
 *   SCROLL_FRCME_"H[MARGIN  "     - both horkzmntal margin{`*   SCOLL_FRAME_2VﬂMAVGIN †      - Both vertican margi.s	
 */








J


ä/*
 *   BUTTOJS *
 

 :   Aseate two"buttons"i~ a smill fosm. $Uhe`button on the left is aM
 *   default jutton.  Usd "h`lf" aizÂ bttto.s.-
 *
 *      ui_bgtto._creite ( fore_it, "caLlbacc",              @
 *  `      †         !     BUTON_HaLF_X_LMA08    "          @ (  0                      y_loc    !     "        ††  † a  @
 *                !        BUTtœN_WID_HALF,     `†0          @ä *!         (!             0.0,0¢Le&d Rutton", ` †           B
 +      %              "   \RUE, TrUE 	  *
 *      yloc = y_|oa + BUTPON_Ÿ_OFFSET
 

 *     "ui_bu4ton_create ( forl_id, "ca,dback",      † $  !  @
 *  ( (     ($     `"      BUTTON_HALFﬂX_LOC2,$         †    @
 *( $      !   0        0  y_loc,    `    0    !             @
 *  †  `"0              `  BUTVON_WID_HALFl            †  $  @
$*    !     †     !( 0     0.0, "Rmght @uttmn",   `(  †   "  @$*   #!         "     ¢    TRUEl BALSE$) 
 *
 * `  " }_Ïoc = y_loc + BUTTON_Y_OFfSET +               "    @
 *     †  !  $   `      äUDTONOHGT +      `              †`  @ç
 + ! ` ` †          †   INTER_WIeGET_SPCSE
 *
†*
 *   BUtton Widths `nd"Heigits
 *
 *   BUtTON_WID_F’ÃL       0    0  ≠ Widuh of a wkle button on Ò sma|l dNrm *   BUDTON]WID_HALF  (     "!     - width(of e m‰dium button!on!a smaml form
 *0  BUTDON_WID_THIRD  "  -$    )  -†Wkdth of a small budtn on a sl!ln &orm
 *
!*   ¬UTTON_WAD_FULL^NT            - ◊idth kf ` non]trougjgd wmde but4on`on
 * §      `0    (  $`   ° ` $   `  0 a siall(form
0*   B’T‘ON_WID_HALF]NT  ` " ( (   - Width ob a non_troughed!-Âdium juttÔn onJ "     `   $                    0    a qmall(form
"*   BUTTON_WID[THIRD_NV    ` $    - Width od a nonﬂtrotghed smahl button!on
 *   1          (                    a smcll f/vm
 *
 *   B—TTONﬂXGT                    , Button Height	
 . 0 BUTTN_DEfAE\î_HFT        (   - Default button xgiÁht (inclu`es top and
 /    !             ` (    `    !    rottom borders)
(* `†BUTTON_HGQ_NT           `!    - Bet4o.0height gf nonWtRnuoed bUtton
 * *   BUTTON_DEFAU\T_BORDDR_WIE(    - Defaılt buvton0‚order vadth
 ™   BQTtœN_DEFAULT_BORDER_HGT (   - Default0buvÙgn borler$hdight
 *
 *
 *   ButtÔl Locavion Offset3:$*
0*   BUTTON_…N_FRAME_Y_MFFSeT      - ÿ offse4!for plaaing buttons inside
 *        !a                         frames$using the°\ Positi/ns$defined
 *       "        (                  below
 *
 *† "BUTTNL_1XTRA_WID     $      ! / X width Êor oje trough f/r user placemoÏd
 *   `  ! `  !$       † `            of trnughed buttons.
 * ,0bUTTON_2XtRA_WID  "           $X width `Ôz tso TroUghc for user pl`gement
 *          $               "†  †(   of trouohed buutons.
 *
 *   BUTTOŒ_Y_OFFSET       †       -†y offset f/r placi~g a non-hkghlighped 
 ( !"         0         0 !  00  (   button nexv |o(a hiehmighted "utton *   BUTTON?Y_OFNSET_NT  "         - Y offset for plAcing a noÓ=highlighted" ™     $!    †      $`               bıdt/n next Tk a highlkghted b}tton
 *
 * `$BUTTOJ]LCBEL_Y_OFFSET     (   -(Y of&cet bor plqcing a labe, qo the righ|
 *†            $   0          `      kf a button
 *   BUTTON[EEFAUMT_\ABEL_Y_OFFWE - Y ovn3et For"0l·cino a label to thm right )ä *  0                 `  0        `  oN a devAult button
 **  BUTTON_LBE_Y_OFFSGT_NT  !   - Ÿ offsed for pdacing a Label to th% Ri'ht
 * $    !                  †      °†"of a nko_tzoughed bettoo
 *
 ** j   Fut|on X Positiols:ç
 *
 *   BUTTON^FULL_X_LOB1            - Wide button on thg left
 *  †BUTTON_HALF_X_LOC1      0`(   - Oedium rutto~ on(the lefu *   CUTWONHALF_X_LC2          ! - MediuÌ but|on o~ the riglt
 *   BUTTON_VbIRD_X_OC1           - manl buttoo ol the levt
 :  !BUTTON_THiRD_X_LOC2          - Small(buttoÔ "entEred
$*   DUTtON_T»IRD_X_OC3          $, SmAll button on the rieht
0*
†* `!B]TTON_FULLOX_LOC1_COL2       - Gite0buttoo on the lefÙ$of columl(2
 *   FTTTON_HALF]X_LOC1_COÃ2       - Mddium but|on on the lEft ~f cÔlu-n 2	
 *   BUTTN_HALF_X_LOC2_COL≤ "     - Ietium button on |He right of cmlumn 2
 *   @UTTON_TXIRD_XLOc1SOL2    $ -†Cmqll rutton mn the left of column 2
 *   BWTTON^T@…RD_X_L_C2_COL2  `!  - Small buttmn sentmred ob column 6
"*!  BUTTOF_THIRD_X_LOC≥_COH2      - Smalm button on0the right ov cOlumn 2
(*
 * $ BUTTONﬂFULL_X_LOC±_CML3  "    - ide rwtton on the left of column 3
 *   @QTTON_HALF_XﬂLKC1_COL≥       - Medhum `uttœn on`thg leFt$of column 3
 *   BUTPNN_HAlFOX]LOC2ﬂCOL3    †  - Med)um button†on txe right(of"column`sMJ 
   BuTON_THIRD_X_LOc1COL3      - ”lall†button on tHe left of0column 3M
 *  $F]TTON_THIRLOX_LNC2^CO\3      - Smadl b}ptOo centered of cklumn 3
 *  $BUTTGN_THIRDWX_LOC3_COL3%  !  - Smald button on |he right of colwmn 3
 *
 *   BUTTON_FUlL__LOC1_[PL`       - Wide button centere` /n a Secial formç
!*  "BUTTON_HALF_X_LOC1_SL       "- MÂdiui buttgn on$the left of a special form
 *   BTTDOF_HALV_X_LO2[S–L      ! - Me`i5m button ol tËe righd of a speci·l form
!™(( BUTTON_tHIRD_X_LOCq[Q–L`     a- Small cutvon on t`e lmft of a special form
 *   BETTON_THIR@]P_lOC2_SPL   †   - Smill button celteRed of a special &orm
0+   BUTTON_TJIZDX_DMK3_SPL       - Sma,- button on`thddright on a(cpecia| Form
 *
 *(  BUTTON_FULD_X_LOC_CEJ  0      -$Cgntared Wide buttoJ on a small fozi
`*$ B’VTOJ_HALF_X_LOC_CEN      "  - Cwntere‰ mEdium butdon on a small fori
"*   UTTON_THIPD_X_LOC_BEN "      m CeNtered smal,0bµtTon on a small form
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
 *      ui_databox_create ( frame_id, ""-         !   0      @
 *                          FRAME_LOMARGIN,  0               @
 *   "                      y_frame_loc, 0.0,   †(       !   D
 *     `   !      !         DBOX_WID_SINGLE,0              ! @
 (         !                "Databox Ãabel", value,          @
 *                          TRUE, datatype, num_wals )
 *
 *    $ y_nr`me[loc  y_frame_loc +  !$,         0            
 *                    DBOX_HGT_LABOVE +               `      @
 *     (         `0   INUER_WIDGET_STACU
 *                      
 *
 *   Create a framed databo|`widh a label to the side.  Use thd 
 *`  default label mength for a$single column databox and colpute
 *   txe dat·box width.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *  !   wid = DBOX_WID_SINGLE -       "        †        "    @
 *            DBOX_LABEL_LEN_SKNCLE
 *   
 *   
 *      ui_databox_create ( fr·me_id, "",                    @
 *     !   0              $ FRAME_L_MARGIN,        0         @
 *                    $     y_frame_loc,                `    @
 *      0   `               DBOX_LABEL_LEN_SINGHE,   ††      @ : `                !      "wid,                 `           @
 *                          "Databox Lajel", value,          @
 *                !         FALSE, datavQpe, num_vals )
 *
 *
 *   Datacox Width and Height:
 *
 *   DBOX_WIT_SINGLE0       - Width of a single width databox   
 *   DBOX_WID_SPECIAL  !   0- Width of a special wadth dauabox   M
 *   DBOX_WID_DOUBLU        - Widuh of!a double width d!tabgx 0 
 *(  DBOXﬂWID_TRIPLE    `   - Width of a triple width databox ` ç
 *
 ™   DBOX_HG[LABOVE        % Heigh4 of a!databox with a label on the top *           0            "$  (even if the label is`blank)
 *   DBOX_HGT_N_L¡BOE     / Height oF a databox with a Label to the side
 

`*   DBOX_LABEL_LEN_SINGlD  - Default labml`l·nGth for a single width databox
 (                            (use‰ whel "labE,_above" ys false)
 +   DBOX_LABEL_LEO_SPECIAL - Default label leNgth fov a special width databox
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
 *   To determine the height for a${ix li~e listbox, add the variable
 *   LBOX_HGT_LABMVE_INCR to LBOX_5L_HGT_LABOVE.
 *
 *
 *   Listbox Width and Height: *
 *   LJOX_WID_SILGLE         - Width of"a single wid|h listbop   
 *"  LBOX_WID_SPECIAL $      - WidTh of q$special width listbox(  
 * " LJOX_WID_DOUBME         - Width of a double width lis|box   
 *   MBOX_WID_TRIPLE        (- Width of a"triple widtl listbox    *
 *   LBœX_9L_HGT_DABOVE      - Height of a 1 line listbox†with ` top labgh
 *   LBOX_2L_HGT_LABOVE      -$Hdight of a : line listbox with a top label
 *(  LBOX_3L_HGT_LABOVE      - Height of a 3 lin% lhstbox with a top label
 .   LBOX_4L_HGT[LABOVE      - Height of a 4 line listbmx with a top label
 *  $LB_X_5L_HGT_LABOVE      - Height of a 5 line listbox with a top label
 *   LBOX_8L_HGT_LCBOVE      - Height`of a(8 liÓe listbox with a Ùop lqbel
 *
 *   LBOX_HGT_LABOVE_INCR    - Increment for computing0a listbox height that *                       0     has more"|han"5 lines in it
 * *   LBOX_1L_HGT_NO_\ABOVE   - Height on a 9 line listbox with no label *(                    0       (label is blank)
 *   DBOX_2L_HGT_NO_L@BOVM   - Height of a  line listbox witx no label
 *   LBOX_3L_HGT_JO_LABOVE   - Height of a 3 line listbox with no label
 *(  LBOX_4L_HGT_NO_LABOWE   - Height of a 4 li~e listbox wiuh no label
 *   LBﬂÿ_5_HGT_^O_LABOVE   - Height of a 5 line lisTbox with no darel
 *   LBOX_8L_HGT_NO_LABOVE   - Height of a 8 line li{tbox"with no label
 *
!*   LBOW»GT_NO_LABOVE_INCR - IncrEmen4 fr computilg a listbgx hmieht that
 *              "              hhs more than 5 lines iN it
 *
 *   LBOXOSELBTNS_HGT. LBOX_SELBTNS_WID - HeIght and combined width of
 *                `             `         (Un)Sedect All cuttons
 */




/*
 *   OPTIOn MENUS
 *
 *
 *   Create an option menu with a label to uhe sile.  Then set the 
 *   Y location for the next widget.  Assume this is an unframed widget.
 *
 *      y_loc = APP_FORM_FIRST_Y_LOCJ *   
 *      ui_optionmenu_crgate( form_id, "callback",           @
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
 *   Create a fra}e`0select databoX with a labml above the seÏect datqboX.
 .   Tlef comput` the y locction for The next sidget.
 * *      y_sframe_loc = SFRAMD_T_MAPGIN
 ™
 .      ui_selektdatabox_create ( sel_frame_ad, "",          @
 *     !      "                   SFRAM_L_MARGIŒ,           @
 *                          !     y_sframe_loc, 0.0,         @
$*             &                  SDBOX_WID_SINGLE,          ¿
 *           0      "!    !   "   "Selecu Databox Labal",    @
 * (                          0   value, TRUE, datatype,     @
0*    0    "                      prompt )M
 *
 *      y_sframe_loc = y_sframeﬂloc +                       `@
 *    0        "       SDBOX_HGT_LABO^E +                    @
 *       0             INTER_WIDGET_SPAGE
 *                      
 *
 *   Create a framed$selecu databox with a label to the side.  Use the 
 *   default label lenfth"for a single coluln select databox and cÔmpute
 *   the seluct tatabox width.
 *
 *   †  y_sframe_doc ? SFRAME_T_M¡RGIN
 *
 *      wid = SDBOX_WID_SINGLE -                             ¿
 *            SDJOX_LABEL_LAN_SYNGLE
 *  `
 *   
 * †    ui_selectdatcbox[create ( sel_frame_id, "",   †(     @
 *           (          $         SFRAME_L_MARGIL,           @ *$                              $y_sframe_loc,             $@ *                                SDBOX_LABEL_LEN_SINGLE,(   B *          $             `    0  id,                    0  @
 *      `      (         `        "Selecu Databoz Labglb,    @
 *                                value, FANSE, datavype,    @
 *                   (            prompt )
$*
 *      y_sframe_loc = y_sframe_doc +                        @ä *                  0  SDBO_HGT_NO_LABOVE +        !        @
 *  †                " INTER_WIDGET_”PACE
 *
 *
 *   selecu Databox Width and Hdight:
 *
 *   SDBOX_WID_SINELE       - Width of a Ûingle widt` select databox   
 *   SDBOH_WID_sPECIAL      - WidTh of a special width select databox   
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
 *                            (select databox has a labe| above)
 *	
 *   SDBOX_Y_LABOVE_INCR`   - Ingrement for crÂating the Y location†foR than
 *`                   "  (    th!n % select databoxes with"labels†in q select
 *                 0          frame
 *
 *   SDBOX_Y_LOC1_NO_LABOVe -`Y location of select datarÔx 1 in a sElÂctframe
†*                   "        (Select databox does not have a larel above(
 +   SDCOX_Y_LOC2_NO_LABOVE - Y location of select databox 2 in a selectframe
 *               p            (select databox does not hare a label above)
 *  (SDBOXMY_LOC3_NO_LABOVE - Y location of select databox 3 in a selEctframe
 *                      "     (sedect databox does not have a label above)
 
†† SDBOX_Y_LOC4_NO_LABOVE - Y l/cation of selecd databox 4 in a seLectfvam%
 ¢                            (select databox"doew not have a label above)
 *   QDBOX_Y_LOC5_NO_LABOVE - Y loc`tiÔn of selecp databox 5 i~ a selectframe
 *                        (   (select databo8 does nou have a label above)ç
 *
 *   SDBOX]Y_NK_LABOVE_INCR - Increment for creating the Y location for than
 *                            than 5 select d`taboxes without(lafElw in a
 *          "   °             select frame
 *
 *   SDBOX_LABEL_LENSINGLE - Defaulp la`gl length for a sÈngle width selec|
 *   0  !               ($    databox (uqed when "mabel_!bove" is falsE)
 *   SDBOXWLABEL_LEN_S@ECIAH- Default label length for a secial width select
 j        ` !        "d       databox
 *   QDCOX_LCBEL_LEN_DOUBLU - Default laBal lEngth dor a double width select
 *               "            databox
 *   SDBOX]LABEL_LEN_TRIPLE -$Denault label length for a triple width select 
 *       !              $    (dat·‚ox
 *
 +   sDBOX_LABeL_X_OFFSET " - REMOVED
 * @ SDBOY_LBEL_Y_OFFSE   - Y offset for placinw a label to the righv
 *†                $          nf a select Databox with "labelaBove"!false.
 */





*

/*
 *   SLIDEBARS
 *
 *
 *   Create a sli$ebar knside a frame and then compute th% y location
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
 *   TBOX_4L_HGT_LABOVE      - Height of a 4 line textbox with a top label
 *   TBOX_5L_HGT_LABOVE      - Height of a 5 line textbox with a top label
 *
 *   TBOX_HGT_LABOVE_INCR    - Increment for computing a textbox height that
 *                             has more than 5 lines in it
 *
 *   TBOX_1L_HGT_NO_LABOVE   - Height of a 1 line textbox with no label
 *                             (label is blank)
 *   TBOX_2L_HGT_NO_LABOVE   - Height of a 2 line textbox with no label
 *   TBOX_3L_HGT_NO_LABOVE   - Height of a 3 line textbox with no label
 *   TBOX_4L_HGT_NO_LABOVE   - Height of a 4 line textbox with no label
 *   TBOX_5L_HGT_NO_LABOVE   - Height of a 5 line textbox with no label
 *
 *   TBOX_HGT_NO_LABOVE_INCR - Increment for computing a textbox height that
 *                             has more than 5 lines in it
 */





/*
 *   TOGGLES
 *
 *
 *   Create a toggle inside a frame and then compute the y location
 *   of the next widget in the frame.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_toggle_create ( frame_id, "callback",             @
 *                         FRAME_L_MARGIN,                   @
 *                         y_frame_loc,                      @
 *                         "Toggle Label" )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    TOGGLE_HGT +                           @
 *                    INTER_WIDGET_SPACE
 *
 *
 *   Toggle Height:
 *
 *   TOGGLE_HGT       - Height of a toggle
 *   TOGGLE_Y_OFFSET  - Y offset for placing a label to the side
 *                      of a toggle
 */



/*
 *   LANGUAGE
 *
 *
 *   Language variables:
 *
 *   ENGLISH      - "English"
 *   GERMAN       - "German"
 *   SPANISH      - "Spanish"
 *   FRENCH       - "French"
 *   KANJI        - "Kanji"
 *
 *   LANGUAGE     - Current language (see above)
 *   HANDEDNESS   - Determines whether forms appear on right of left side
 *                  of screen
 */




/*
 *   SCREEN
 *
 *
 *   Screen variables:
 *
 *   PIXEL_WID   - Width of a pixel (in inches)
 *   PIXEL_HGT   - Height of a pixel (in inches)
 *
 *   SCREEN_WID  - Width of logical screen (in inches)
 *   SCREEN_HGT  - Height of logical screen (in inches)
 */




/*
 *   BASIC LAYOUT
 *
 *
 *   Basic layout variables:
 *
 *   MAIN_MENU_X_LOC          - Main menu X location
 *   MAIN_MENU_Y_LOC          - Main menu Y location
 *   MAIN_MENU_WID            - Main menu width
 *   MAIN_MENU_HGT            - Main menu height
 *   MAIN_MENU_L_EDGE         - Left edge of main menu (incl border)
 *   MAIN_MENU_R_EDGE         - Right edge of main menu (incl border)
 *   MAIN_MENU_T_EDGE         - Top edge of main menu (incl border)
 *   MAIN_MENU_B_EDGE         - Bottom edge of main menu (incl border)
 *   MAIN_MENU_SWITCH_Y_LOC   - Switch Y location
 *   MAIN_MENU_ICON_Y_LOC     - Icon Y location
 *   MAIN_MENU_ICON_HGT       - Main Menu Icon Height
 *   MAIN_MENU_ICON_WID       - Main Menu Icon Width
 *   MAIN_MENU_LOGO_ICON_WID  - Main Menu Logo Icon Width
 *   MAIN_MENU_HEART_ICON_WID - Main Menu Heartbeat Icon Width
 *   MAIN_MENU_HEART_ICON_HGT - Main Menu Heartbeat Icon Height
 *   MAIN_MENU_MARGIN         - Main menu switch margin
 *   MAIN_MENU_ICON_MARGIN    - Main menu margin between icons
 *   MAIN_MENU_HEART_MARGIN   - Main menu margin between last icon and
 *                              heartbeat icon
 *   MAIN_MENU_HEART_X_LOC    - Heartbeat icon X location
 *   MAIN_MENU_HEART_Y_LOC    - Heartbeat icon Y location
 *
 *   COMMAND_WINDOW_X_LOC     - Command window X location
 *   COMMAND_WINDOW_Y_LOC     - Command window Y location
 *   COMMAND_WINDOW_WID       - Command window width
 *   COMMAND_WINDOW_HGT       - Command window height
 *   COMMAND_WINDOW_NUM_ROWS  - Number of history rows in the command window
 *   COMMAND_WINDOW_L_EDGE    - Left edge of command window (incl border)
 *   COMMAND_WINDOW_R_EDGE    - Right edge of command window (incl border)
 *   COMMAND_WINDOW_T_EDGE    - Top edge of command window (incl border)
 *   COMMAND_WINDOW_B_EDGE    - Bottom edge of command window (incl border)
 *
 *   GRAPHICS_WINDOW_X_LOC    - Graphics window X location
 *   GRAPHICS_WINDOW_Y_LOC    - Graphics window Y location
 *   GRAPHICS_WINDOW_WID      - Graphics window width
 *   GRAPHICS_WINDOW_HGT      - Graphics window height
 *   GRAPHICS_WINDOW_L_EDGE   - Left edge of graphics window (incl border)
 *   GRAPHICS_WINDOW_R_EDGE   - Right edge of graphics window (incl border)
 *   GRAPHICS_WINDOW_T_EDGE   - Top edge of graphics window (incl border)
 *   GRAPHICS_WINDOW_B_EDGE   - Bottom edge of graphics window (incl border)
 *
 *   SHOW_SPREADSHEET_NUM_ROWS - Number of rows in the show spreadsheet widget
 *
 *   GRAPHICS_WINDOW_WID_QTR  - Quarter width graphics window
 *   GRAPHICS_WINDOW_HGT_QTR  - Quarter width graphics window
 *
 *   GRAPHICS_WINDOW_X_LOC_UL - Quarter size graphics window upper left X loc
 *   GRAPHICS_WINDOW_Y_LOC_UL - Quarter size graphics window upper left Y loc
 *   GRAPHICS_WINDOW_X_LOC_UR - Quarter size graphics window upper right X loc
 *   GRAPHICS_WINDOW_Y_LOC_UR - Quarter size graphics window upper right Y loc
 *   GRAPHICS_WINDOW_X_LOC_LL - Quarter size graphics window lower left X loc
 *   GRAPHICS_WINDOW_Y_LOC_LL - Quarter size graphics window lower left Y loc
 *   GRAPHICS_WINDOW_X_LOC_LR - Quarter size graphics window lower right X loc
 *   GRAPHICS_WINDOW_Y_LOC_LR - Quarter size graphics window lower right Y loc
 *
 *   GRAPHICS_CEN_X_LOC       - Center of graphics area X location
 *   GRAPHICS_CEN_Y_LOC       - Center of graphics area Y location
 *
 *   WINDOW_CEN_X_LOC         - Center of area beneath main menu X location
 *   WINDOW_CEN_Y_LOC         - Center of area beneath main menu Y location
 *
 *   MAIN_MENU_SWITCH_COLS    - Number of columns for main menu switch
 *
 *   ENABLE_MAIN_MENU_SWITCH  - Hidden code to enable the main menu switch
 *                              without having to open a database
 */











/*  OLD APPFORMS VARIABLES ***********NEW VARIABLE NAMES*****************
 */


/*
 *  Application Panels
 */
/*#define APP_DBOX_WID 1.85*/


/*
 *  Selection Frames
 */

/*
 *  Data Box
 */

/*
 *  List Box
 */


/*
 *  Object Menu
 */

/*
 *  Option Menu
 */



/*
 *  Keyword area
 */


/*
 *  Full Width Frames
 */

/*
 *  Switch Frames
 */

/*
 *  Buttons
 */

/*
 *  Full Width slidebars
 */





/* $Header: /banff/vbs/Dev.X700/cCase/d1/src_1/./lp/include/RCS/lpenums.p,v 1.1 91/05/21 15:58:43 deiner Exp $ */
/* Evaluation methods for LpEval */

/* SublistType filters for LpSublistType */




/* note:
 * if the mask order is disturbed, the customer
 *  must recompile any custom pcl to plb.
 *  conclusion: add new mask bits to the end.
 * these constants are used by fortran and
 *  may only be expressed as decimal numbers.
 */




/* Attribute names for LpSublistAttributeGet */

/* Data formats for LpCOERCE */

/* FORTRAN interface help */



$ Start


CLASS Buckling
classwide widget form_id, opt_rules, opt_object, opt_method, lstbox_result_cases, btn_option, @
sel_frame_elem, sel_box_elem, frame_select


classwide widget rules_item(1), object_item(4), method_item(4)


classwide integer elem_count, elem_ids(VIRTUAL), e_count, e_ids(VIRTUAL), e_loc
classwide real stress(VIRTUAL)
classwide real sum_area, area(VIRTUAL)
classwide real min, max




$ Start
	FUNCTION init()
	real yloc_main, yloc_frame


		yloc_main = 0.0


		form_id=ui_form_create("form",@
									/* x location */ uil_form_sizes.form_x_loc( 1 ) , @
									/* y location */ uil_form_sizes.form_y_loc( 1 ),"ul", @
									/* width      */ uil_form_sizes.form_wid( 1 ), @
									/* height     */ uil_form_sizes.form_hgt( 1 ), @
									/* label      */ "Buckling","")


		opt_rules=ui_optionmenu_create(/* parent       */ form_id, @
										/* callback     */ "Action_cb", @
										/* x         )  */ uil_Form_SizeÒsom^mgne 1†), @
				I				/* y          ` *o wil_formZsizes,aoo_menu( 3 )- @J						H			/* mabel nenfth */ 4il_formOsizus.a/m_me.u( ≤ +, @*								/* habal    "  $*/ "RulgÛ :" @
			â					/(     `  †     "o faLse)

			ruLes_item(1! = ui_ite}_create(opt_rules,"ABS,"ABS",trwe+
		
		opt_objecÙ=uiﬂgp4ionme,u_create)fn2mOid,"2,@
											uil_foÚm_sizes.aom_menu( 1 ), @
											u)l_form_sizes.aom_menu( 4 )$ @
I))							uy,_form_sizes.aÔm_men}( 2 9, @
													"Object:", @
													 NALSE)ä

				object_itum(1)9ui_Èuem#reate(opt_objact,*UNSTIFDENED"$"Un{tiffned Panel",f LSE)


		opt_m%thod - ui_optionmenu]creat%(form_id,"",		E								 uih_forms){eq.aom_menu($q ),		@J	â						 uil_formﬂsi˙es.aom_menu(05 ),			@
â							 uil_form_si{es.ao}_menu( 2 ),	 
						)	 "MgtHod:",			@
									 f`lse)


				"mEthod_item(1) < ui_itui_create,opt_methmd,&CUR_VOEW", "Current View#, true)
				 methD_item(2) = u)_iuem_create)ott_method,"CUR^GPOUP", "Current Group", true)â	
			 mgtHÔd_atem(3) = ui_ytem_crmate(opt_m%thod¨"SEL_LEM#, "Select Ele-eot",0true)
I)	I MeÙhod_item(4) ?†ui_itm}_create(o0t_method,"CEN_PANEL", !SelÂct Panel", true)


	â˘loc_m·in += ıil_form_sizes.aom_melu( 5 )`+ uil_form_shzes.optionment_data8 3 ) + uil_fwrm_sizes.sPacing( 8 )


		ui_sep`ratkr_crEate®/* atrent  */ forl_id,  		â		/* cillback */ "6,@
)						Ø* x      † J/ 0, @
						/# y       !*/ ylÔc_ma)n, @
					)	/* widtx  ( *Ø uil_form_sizus.fnrm_wil( 1 )> @
										trua)


	yloc_main += 5il_&orm_sÈzes.spacing( 8 )
M
		real frame_widuh
		
				frame_width = }inform_smzes.f2ame_mcrgÈn( 1†) + uml_for}WÛizew.selframe_wid( 1 ) +!uil_fovm_sizgs.frame_marghnj 2 )
				
			ymoc_fr·me Ω 0.0
I		)	
		)frame_select =`uiframEWcreate(formWit,"", @
			â						 uil_Form_sizes.frame_marg)n( 5 ), @
									 yhoc_}ain,†@
									 fra}ewid|h. @
									(0.0, @
										 "Seleat Elemantb)
							)
				ylmc_frame += uiL_fnrm_3izes.fÚamu_margin® 3 9
		)
		Isel_brame_elem$Ω ui_selectfrale_bzeate( frame_semect, "", @
)Å										 uil_form_sizes.selvzaMe]margij( 5(), @-
											(yloc_frale, @
										 uYl_form_sizes*wel&rame_wid* 5 ), @ç
											ã ui,_form_sizer.sElbpcma_Hgt( 9, 2 ), @
												 "Iuvo Exgcute*, D
										 false)
				
			ylocframe += uml_flrm_syzes.s0acing( < )
				
				sel_box_elam = ui_select‰aıaboX_creite(sal_framg_edem,"2,`@
					)						 uil_FO2Os)Zes.selfraÌe_mar'in( 1 ),  
									 uil_fo‚m_sizas,selfraee_mavgin( 3 ), @									)	 ∞, @
												 uil_fo"m_cizes.sdbox_wid,  )$ @
								I "",@
										 2",false, A*											 "elem2d", "" )


				Yloc_gvame += uil_form_sizes.selframeﬁ`gt( 1, 2 ) + 5il_form_si{es.sxacinG( 8 )*2
				
			uk_buttoN_creat-(brame_sedect, @
		)				"CheckPanel_c"", @
	)					 uil_fovm_{ize”.buttkn_xloc1( 2 ), @
								 xlocNfbime,a`
)						 uil_form_sÌzes.button\wid( 2"-, @								 uil]nopm_sizes.buddon_het(   ) @
								$"CHeck Panel","@
							 true,badsÂ)-

				ui_button_c2ea|e(frame_smlÂbt,"Clear_c`", @
							)			$uil_form_sires.button_xﬂloc1( 3 ! @
									 y|oc_frame,(@
					)				 uil_fÔrm_sizes.but|on^wid) 2 )l @*											`uil_form_sizes*button_hgp( 2(), @
			)					 "Clear", @M
											 true,false)
				YÏgc_frame += uil_form_si˙er."utton_hgt( 2 ) + uÈl_fopm^sizes.speqi.gx 8 )
		I
				ui_wid_set(f2amerelect,`#HEIGHT", yloc_frame)
	)Iç
I		real drime_heighÙ
				
			ui_wid_get)frame_sel%ct, "HEIGHT", vrame_he)ghd!
				
				ylocMAil += FraMa_heiÁht + uilWnorm_ci˙es.spacmfg( 8 )
		
		ui_seqerato2cveatÂ(/* patr%nt  */0form_Ad, @
						/* callr`ck */(""$@						/* x    0   */ 0, @
							/" y        *o y|oa_main, @
					I	/* width$   j/ uil_forM_sizes.Form_id((1 ), @
I										p2ue)

	yloc_mamn +Ω uil_fÔÚm_sizus.spabing( 8 )
			lstbox_result_casdr = ui_listfh_create(fÔrm[id,""¨ B
									 uinOform_sizds.brame_masoin( 1 ), @									 yloc_maij, @
									 uil_fozI_sizas.lboxOwad(01"),@
								 8, `
						I "Result CasÂs", @
	â						 extefd", @	
									$drqe)

	äI	yloc_main += uil_form_sizeR.lboh_hgt( 6, 1 )!+ uh,_g/rmO{izer.{pacing( 8 )	


		ui_button_create(fœsm_id,"aprny_cb", @
								 til_gorm_Sizes.¬uttonx_loC1( 2$)(  		I		I	I	 y|o√_maij( @
								 umlformWsizes.button_wid( 0 ), @
				II			 uilﬂfkrm_sizgs.buttOnhgt( 2 ). @
				â		†"Apply", @
		)						†true,false)
-

		ui_button_creqtÂ(fozm_id,"3ancelcb", @
		I						 uil_form_wi~es.buttonx_loc1(!3 ), @
						 }lÔc[mAin,†@
				)				 uil_fgrm_3izes.buttOn_wid( * 9, @
									 Uinform_sijes.butdOn_hgt( 2 ), @
		â					"&CanceL"< P
							 true,false)
		
		ç
		J

	EnD FUNCTION
	$ AjD


	$ StaRt 	FUJKDI_N displayh)


		ui_f2o_display("BucKling")
		udf_l/adWre3ult_sases(lstboz_result_casÂw)
		
	END FUNCTION
	$ End/

	$ StarT
	FUOCTION cancel_cc()


	 ui_fobm_hida(*buckninw")


END FUNCTION	$†EnD


	/* =====-=====<============?-======<===========?====9
		apply b}tton callback	  =============Ω=}===================}=====<======?=== */
	FUNCTION ChmckQanel_cf()
	
)	ui_exac_funathn("chkPnlMmti-d", displiY"9
	I	END FUNCTION
	
	$ S|art
IFUNCTION apply_cb())
	integer suatu{
	s|ring select[orÙion[15]
	stzin' s_GlemListZvirtual]
	stbk~g wroup_namu[63]
	in|eger group_)d, n}m_elems, ia_elemid(virtual	
	inveger`i_c/unt, idx, p·fe|_ids(virvu·l)
	strinc qa_ElEmList[4096](virtual)
	reaL rh_PanelHnÊo(virtual		
		qi_wid_ggt(opt_method$ "valUe",$select_option)
I	
		switch (selecÙ_option)ä			casu("CUR_VKEW")
		…
			case("CUV_GRNUP")+
		
				`b_get_current_gvoup_id(grÔup_ht!J			)db]#oUnt_elems_yÓOgroup ( gÚoup_id, j}m_elums )
				syS_allocateWarray(i·_e|e}_id, ±, num]elÂms)
				db_get_glem_ids_in_group ( ntm_elems groupWid, ii_dhem_id )
				1rpiNt_ar2ay_t_vstringH"Elemlnt¢, num_mlems, ia_Âlum_jfl s_ElemList(
			
			ccse("SELOGLEM");
				uh_gid_g‰t_vstring(sgl_box_elem, "value",$s_ELemList+J			
		cAse<"AEL_PAJEL");		ui_wxt_ge|_vstring(sel_box[ele-, "value", q_EleÌLÈst)
				$ buckling.get_Panel_stress()
		enl switch
		ä		setPanel.gÂtPa.el(-1¨ s_EnfmList, i_co}nÙ¨ anel_idsl sa_AlemList, ra_Pin%lInfo!ç*		
		for(iex=1 to i_count)ç
			dump rA_PanelInfohidx,:7)		end vOrâ	
	integer ncases
		
		wi_wid_get(lstbox_rdcult_cass, "NSEECTED"¨ ncases)				string zcDIqt[63U(wirÙual)
		qys_allocate_array(rcList. 1, nca3≈s)
		
		ui_widget(lstbox_result_cases, "^ALUI", rcLiÛ49
â	
		string load_case[63](virtual©
		
		sis_·llocate_array(lgedﬂcase- 1, ~caqes)
		ä)for(Ëex=1 to ncases(
		load[#ase(ihx) = str^uokaN(rcLiSt idx)$ 2.+, 1(		end0for

ç
		Bwcklinf.gut_panenrtress2($loqd_c·seL panel_ids, sa_ElemHist,dra_penelInfo)
â			J/* ra_PanelInfo(1): sp·n  -a
h!       * raanelInno(2): qpace -b
        †* RaWPane,In&o(3©: angle
      0  * r`_QanelI~fo(0): pvojecÙed Coovti.ate (1!or 2i	 * ra_Panelindo(7:7) CoordioaÙe of T`nel CenteÚ( 	
	"*/

			
		$ rEal usr_)nform(°1)
	
		$ make_p·nel_infosm.ruckling_inptt( ,oad_Case,"panul^ids, saﬂElemList,†ra_PalelInf, usr[inborm )
		
)dfor(idx=1 to ncases	
		$	dump rcLis4(ilx)
		$end for		
END BUNCDIOO
	$ End
	
	$ QtarT
	FUNCTION ÛhcPqnEl[cb()
		
	END FUNCTIOL
I$ MND
	
	$ Rtart
	NUnCTIOF Clear_cb()
		UTL_dvawClear()
		2ep`i.t_graphics()	ED FUN√TIOŒ
	$ End
	
VUNCTION get_panel_stress2* lo·dﬂcpse, pnl_mds,(elkOlmsv$ pnl_inForÌ)
strmng loaD_case[]()
ynpeez pnÏ_ids()S‹RIFG ulmlist[]()
Úeal00nl_inform®)$0REAL ucr_inform()ç


inteGer pnl[count
Èntegdr loadcasecount
integer projecte$_cid_dirinteger ,oadc`se_ids(VIRUUCL)*real thickness, anglebeal tnl_rtresq(VIRTUAL)*WTRING$fnamÂ[1024]
integer fid
integer inteeer_dAta(2)
Úeal reaÏ_dava(9!
integer i$ j
real WIGMA_J

pnlﬂcount = sysWirray_hgound( pnl_ids, 1 )

*ho·dcase_cmunt = sys_erray_hbouNd(loqd_c!se, 1)
sys_ad,ocate_array( loadcase_ids, 1, loadcasecount )
ç

FOR ( i=1!TO doadcase_count+
db_gat_load_c!Ûe_id(l/ad_gAse(i)l*loa$case_ids(I))
END OR

-
filu_bumld_Ffame(3'/*,2input","dat"<"N",fjaÌe)
text_opeo(f|ama, "OOW",0,0$fid)


$ text_wÚitE_string(nid,"#UseR Tata"//" :,DNv$ "//Sys_date()/+", "./syS_time())
§ texp_write(fid$"Yiend strenfÙh        `      %F", 0 =rr_ilform(1), "")
$ text_write(fid,Modulus of elasticity       : %F%", 0å0usr_infnbm(2), ""!$ teht_write(fi‰,"Pl·te0bouneary staffening   : %F%", 0< usr_inform(3), "")
$ texuWwrite(fad,"Cut(out %dge stifgening  0  : •F%", 0. UÛr_infore(4+, "")
$ text_write(fid,"Eta0sig}a       (   †      : %F%"< 0, usr_)nfo2m(5), "#)
& t%xt_w2ite(fydå"Et· tsu  *                  : %F%", 8,0usr_inform(2), "")M
$ text_writefid,"Gta xy                    ! > %F%", 0, usv_infrm(7),`")
$ Texu_writd($id,"Plate piÚt of doubÌa fottom : %B%", 0, usr_inform(8), "")
$ text_wsite(fid,"AlhÎwa‚le elastic bucklInc  :!-F%", 0, usv_ynform(9), ""!
$ text_write(fid,"CoRrosiOn maÚgmn            : !F%",!0, usr_inform(±4), "")
$ text?write(fid, Safety factor TO be  "   0  + %F%",  , usr_indopm(11)< "")


$ text^write_stzing)fid,"")
$ textﬂwrite^strk|f(fid,bßPanel Datab)
$ teht_writu(fie<"Totcl nuobeÚ n& Pinels   : %K%", xnl^coult, 1., ¢")
$ text_write(Fit,"ToÙal number of selected Load cases    $	%",`loadca{e_„ount, ±., "")
$ tex4Owrite_string(fhd,"")
$!pext_write_Ûtring(fkd" PID LCID     l        s  !     t    `   a        b    `  SIGMA ax 0    SIGMA ay        TAU  †      SIGMA H")
d 4ext_7rite_strang®fid,==== ==== ====9=Ø= ==5===== ==Ω==== =Ω====== =?====== ====9?======? =5======}=== ===?======== ==Ω====9====*)


%xtrastStrers/doit(loa$caseids, uni_lis4, elemOcount, Âmem_mds, stress!


FOR , i}1 TO qnl_count )
M
uiwri4ec( "Panel √heckkng Status`: %d/%d",i,pnl_coujt)


get_idq_fromentity[list( %,m_list(i!, "GLEMUNT", e_count, e_ids!)


BucklingÆgmt_pnl_area()
)
M
B5kkling.geT_thccknas3( thickness )


FOR ( j=1 TO oadcare_count )ç
Juckling.get_pnl_stress( j, pNlstrers )
	
àengle < pfl_informy,3)J

IF ( anfle > 0. ) THENBuccling.stresc_transform( pll_stressÏ"angle 9EFD IF
M

Bu„kling.consader_coMpressioj( pnl_strÂss 9


$ kalcu,atkmo Hulh ßird%r stress
$ SAGMA_H!= STX_h}llWgirder_stÚess.e·in(pnlWinformh, 5:7)+
-

  write input $ata TO file
integmr€data(1) = pÊl_iDs)È)
integer_data(2) = loalca3e_ids(j9
*
peal_data(q) = xnl_infoRm(),19
real_data)2)"= pnl_invorm(i,)
reaÏ_data(3)`= thicknessreal_daTa(4! = ∞.
beal_datÒ() = 0.M
real_data(6) =dpNl_strEss()
reAl_daTa(7) = pn|_stsess(2)
rgal]d·ta(8) = pNl_stress s)
real]data(9) =†sIGMQWH


textwrite(fif,"%2(%I4% )%%5(%C8.3% )%e4(!E13.7% )%", integer_data,(peal_data, "&)äddxt_wriTeOstbin'fid, elm_list(i))


s;s]free_arbay(0nl_stress)


END FOR


e_„muot = 0
sys_free_·rray8e_ids9


END FOR
J
text_vriteWÛtring(fid, "#End Data")
te8tW‚|oÛm(fid,""©

RE‘URN 0≠

-
END FUNCTION

*FUNAPHON0consides_c-prussaon( pnl_st2dss )
real pnÏ_stress()
integer h


FOR ( i=1 TO02 )

ç
if ( qÓl_stzmsw(i9 > 0 ) THENç
pnl_s|resS(i) = 4.
Âlse
pnm_stress(i) = m4h_abs( qNl_stresb)i) )
end if
-
eND FOR


RETURN$0


END FUNCTION


FUNCPION get_tnl_stres{, dc_Èdx, pjl_s<ress )


)ntecer lc_idx*real pnl_strÂss()
IFTUGER iJreal sum_str%ss_xx, sum_strEss_˘Y( sum_svresq_xy


SYS_ALLOCATE_aRR¡Y( pnl_stress¨ 1, 3 )


swm_stress_xx = 0
sum_stress_9x = 0.
sum_st2ess_xy†= 0&-


FOR ( i0 TO e^count i
e_loc = mth_array_searah( elem_i$s,$e_i‰s(i), FALSA!)
sum_stress_xx += ˚tress lc_idx, 3*e_loc$2)*area(i)
sum_stressyy(+= spres3(lc_idxl 3*e_loc-1+™area(i)
sum_qtress_xy += st2eqs lC_idx, 2*uGlog )*area(i)
END FOR


tÓl_stress(1) = sum_STbecsGxx/rum_!rea
pnl_stress(2) = sum_Strew3_Yy/{um_area
pnl_stress(3) = s5m_stress_xy/sum_`p‰a


RETURN 0
END UNCTION


F]NCTI_n get_pnl_abEa()
IN‘EGER$i


SYR_ALÃNCCTE_ARRAY(arÂa, 1l e_„munt)
sumare· = 0.	


FOR (0i=1 TO e_„ou~t0)
get_ele-ent]area( e_ids(i), arei(i	 )
sÂm_·vea +} area(i)
UN`FOR
ä
RETURN 0
END FUNCTION




FUNCTION qtrdss^4ran≥form( pnl_strews,!cngle +
real pnm_streSs)
real anole
rEal xx, yy, xy
*
xx =$pnl_stz·sq(1) * (mth_Îosd(anglm))**2Æ + pnl_stresq(2) * (mth_sind(qngle≠)**2. + A2*pnl_stressh3)*mth^sind(angle	jeth_cosd(inglu)
ä
yy = pnl_stresS(0	 * (}th_sind(a.ghe)-"*2& + 0nl_strecs(2) * (mth_cosd(angle))*™2. - @
2*pnl_stres{(s)*mth_Ûind(angle)*mth_cosd)Angle)


xy = -1.*pNl_stress 1) * mÙh_kosd(anglm)*ethWsind(angle) + pnl^rtress(2)*ith_cosd(angle)*mth_cind(ancle! + @äpnlstresÛ(3) * ( (o4h_cosd(angle+9**2* % (mThqind(angle))**2. )


pnl^stress(1) = xx
xnlWstress(r) = yy
pnl_strEss(3) / xy


RATURN 0


MND FUNCTIONç

FUœCTiON get_pnl_arÂa()
INTEGER i


SYS_ALLoCAUE_ARRAY(area,$1, e_count)
{ue_area = ∞.

FO“ ( i=1 TO e]count )àfmt_element_area( e_ids(i),"arda(iâ !
suÈ_a“ea += area(a)
DND FOR*

RETURJ 0äWND FUNCTION

UNCTYON wet_thyckness( t )-

real t


REAL thibk[sum - 0.MINTEGER i, rids(VIRTUAL)
INTEER gdnezelem_type, dof_ret_flag, condense_Flag
INTEGER oeom_flag, dorm_flqg( lcMOflag, layeb_count
INTMGER maı_`d, material_lif,†material_dir
SVRING pNime[32]EAl Real_array(3)-
INTeGER data_tyte( material_id
INTEGER int_value,coOrd_value, node]valıa, fiÂld_valwe
spring strine_value_21U*

$ S]S_A\LœCATE_APRAY( thickn%ss,(1, elem_couNt )
SYS_ALLOCAUEﬂARRAX( ridw, 1, e_count i
ç

dbget_region_for_ulements ( u_count, e_ids,rids!

FOR ( i 5 1 TO eﬂcoqnt )


db_get_vegi/n_definkÙion( @
/* region ID$  "    */sids i), @
/* set name     †  $*/pName, @-
/* elemeNt$typa D 0*/emner^glem_type, @
/*°tof seP flsg   0 */eonO3et_flag, @
/* condense flag    */cond%nse_flag, @
Ø* gmom0glag  "8    */geom_flag, @
/* form flag  `   (0(/form_blag, A
* lam_fdag         */lam_flag, @*-. layer count      */layer_count, @/* matepiam id      */mat_iD,0@
/* m`t%rial ,ineav  */matEr)al_lin @
/* matephal $izect !*/material_dir-


dr_ge|_prop_rclue( @
/™ zeoion0ID        */rids(y),  
/( word of inTEÚest */36¨ @
/* yatesial!ID0     */material_id, @
/* data ty`e  !     */dcta_type, @
/* INTEG≈R value `  "'int_value,0@
+( REAL0arra{       */suad_array, P
/"0char ST“INg     (*/stringvalue,Ä@/* cooRd ID   (     */coobd_value, @
.* no$e ID``        */Óode_value$ HM
'j field ID     "   
/fiald_Vqlugç


$thiccn%ss(y-$= real_aÚra˘(1©M
phÈck_sum!)7 real_array,1)*area(i)

eND F_R
*t = t`i#k^sum / sum[area

SYS_FrDE_ARRAY( rmds )

RETURN 0*ä
END FUNCTION


ENƒ ClASS
$†End


FUNCDION"get[triangde_area( f0,"n1,†n2, azea )


READ n0(),!n1(), n28i
RE¡L ArEa


REA\ a,`,c,sJ

a = mth_qqrt( ( n0(1) - n1(1) )((2.0+ ( n0(2)2= n1(2) 9.*. + ( n0(3) - n1(3)`)**2. )
b = mth_sqrt( ( n1(1) - n2(1) !**2. + ( n1(3! - n2(2) )*j0.!+ ( n1(3) - l0(3© )**2. )
£ = eth_sqrt( (%n2(0) - n0(! )**2.0+(( n≤)2) - n0(2) )**2. + ( n2(2) - ~0(3) )**2. )
s = (a++c)/2.

area = mtË_ssrt( s*(s-a)* s-b)*(s-c) 	M

RETURN 0


END FUNCTKON



FUNCKœN get_element_a2ea( eid,"area )
INTE«ER eid, numnode-
REAL†ar%a


INDEWER nid(Ù)
BEIL Æ1(3), n: 3), o3(3), n4(3!, apea1,$area2
ç

$SYS_REALLOCATU_ASRAY( nid, 1, numnode )db_'et_elem_fodes(!e)d, numnmde, nid )

*SWICH ( nımlode )
CASE ( 3 )
db_gev_lode(nid(1), n1)Jdbget_nodu(nid(2), n2)
eb_gaT_nobe*nid(3), n3)
gÂt_triangle_are·( n1, n:, n3, ·re` )
SASE ( 4 )
db^geT_nod%(oid(1),n1)db_get_fode(nid(2), n2i
‰"_get_nodeNid(3), n3)
db_get_node(nid ), n4)get_trianglw_area( n1, n2,$n3, area1 )
g't_triangle_arÂq( Ó3, n4, n1, area2 )
area`= area1 + area2
≈ND0SGITCH


$ SYS[FRED_ARRAY(oid	


RETQRN 0
*äEND"FUNCTIOŒ