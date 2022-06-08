

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
 *        `                   ACTIOJ, FALSE )
 ª   
 *!  `  ui_optionmanu_creqte( fovm_id, "callback",(  0  (!   @
 *                    `       AOM_MENU_X_HOC, $              @
 "                            KÂJECT_ÍENU_Y_LOC,          0  @
 *                            AOM_LDFU]LIBEL_LEn,            @
 *    $ `     0$              OBJECT, FALSA i
`*   
$*      ui_optionmenu_creata( form_id, "callbacc",           @
 *  $"01                      QOE_MENU_P_LoK,                @
"*                            METHOD_MENU_Y_LOC,             @
`*      0  "       ""     `   AOO_MEMU_LABEL_LEN,            A
 *         "       $ (0       METHOD, FALSE )
 *   
 *      ui_separator_create ( form_id, "", 0.0,  0           @
 *      $$         0   `      AOM_SEPARATOR_Y_lOC,           @J .  !                         FORM_WID_SML, TRUE!)
$*   
 * Š *   AOM Menu Placement: * 
 *   AOM_MENU_X_LOC       - X DocAtion of the AOM menuó$(margin included)
 *   AOMMENU_LABEL_LEN   - Label leneth fob AOM menuq (laneuage dependent)
 *   ACTION_MEOU__LOC    - Y Location for the Action menu (margif included)
 *   OBJECT_MENU_Y_LOC  " - Y Locction for the Objecp -enu (margin included)
 *   METHOD_MENU_Y_LOC    - Y Locatikn fïr the Method menu (margin inclu`ed)
 *   AOM_REPARATOV_Y_LOC $- Y Locatiol foR seqcrator under tha AOM menus
 *   APP_FOVM_FIRST__LOC - Ù Locatson for the first widget in an 
 *  $        0   !          applacat)on form 
 *¯



/*
 *   FRAMESM
 *
 *
 * ! Create a frame in"an application`form.  Assume thiw`is the firsdM
 (   widget in the form and thav the frame0contains a three line listbox
 *   sith a label$and a0databox wéth a(hqbel.  Then locate the Y position
 *0  for!an unframed databox unler the fraie.  Note that(the frame's labelE
 *   must fe considered in deteRmining the next$widget locaôion as d/es
 *   the thi#kness mf the frame ddges.
 *
 *   Óince this is an0ipplication form, the fmrst Y loãation i3 the
 *   variable "aðp_form_first_y_loc".J *M
 *  `   y_loc = APQ_FORM_FIRST_Y_LOA
 *
`*   ,  height - FRAME_T_MARCIN +                   $        @
 *       `       LBOX_3L[HGT_LABOVE + $"                 `   P
 *              `INTER_WIdGET_SPACE +       0                @
 *               DBOX_HGÔ_HABOVE +       0            $      @
 *               FRAME_B_MARGIN
 :
 *      ui_frame_create ( form_id, "",            "     0 0  @
 *(    (            0    "FORM_Ì_MARGIL,                     @
 *                     `  y_loc, !              (          `!@
 *              00        FRAME_WID_SINGLE, (   0      ( "`  @ *  0      (         !    heigh|, "Label" (
 *
 *     0ui_listbox_create (`fra}e_id, "calnback", !          @
 *  !                       FRAME_L_MARGKN,                h @ *  $      $             (` FRÁME_T_MARGIN,             ! $  @
 *   0    ¤                 LBOX_×ID_SI^GLE,                 @
 *           (       `      ;, "Lic4box La`el",             `B
"*             0   ! "      seleation_type, sort_flag )
€*
 :      y_frame_loC = FRSME_T_MARGIN k(     `                @
 +   "       `        LBNX_#L_HG_LABOVE +               `   @
 *        !     "     INTER_WIDGET_SPACE
 *
 *      ui_databox_create ( framm_id, ""¬                  ! @ *               (          FRAE_L_MARGY,  !          `  $ @
 *              $           y_fraoe_loc< 0.0,!               @
 *                          DBOX_WI_SINGLE,(                @
 *       $            0     "Databox Label", value(          @
 *                     "    TUE, datatype, num_vals )
 *
 * $    y_loc = y_hc +                         `            @
 *           !  FRAMM_LABEL_HGt!*                            @
 *        "     height +   `          `         0            @
 *              FRAME_2EDGE *  (     0  !                    @
 *              ÉNER_WÉDGET_SPACE
 (
 *      ui_databox_create ( frame_id, "",    0             ! @
 * $               "      ( NFRAOED_L_MARGIN,               P
 *             `     "0     y_loc, 0.0,        $             H
 *` 0                    ` "DBOX_W	D_SINGLM, (                
 *         0                "Second Dadaboø Label", vanug,  "@
 * "                     ¨ (TRUE, da4atype, num_váns )-
 *
 *
 *   CreAte two single width fRames in a!medium fori that is 
 (   next to a small applicaôion &orm.  These fsamas0will b%
 *   at the top of the(fozm.  Their heightó are the same$as
 * "$in dhe above example.
 *
 * 0    ui_form_create(!"", FOPM_X_LOC_MEDWNX2_SML,(         @
 *                          FORM_Y_LMC, "UL",                @
 * "  0                     FORM[WID_MED,    (          0    @
 *                          F_RM]HGT_FULL, "Lebel"¬ "Ico~" )
 (   
 *
 *      ui]fra-e_crgata ( &orm_id< 2",        (              @
 ª `          $           FRAME_X_LÏC_COL1,    !      !      @
 *   (                    FKRM_Y_MARGIN,   )    $            @
 *`                   !  (FRAMe_WID_SINLE,                  @
 *!  (        0      "   0height, "Ìeft Label" )
 *MJ *      ui_fr!ma_create (!forM_)d, "b,                       @	
 * (                      FRAME_XLOC_COL2. !    $     `     @
 *             0     !    FORM_Y_MARGIN,                   ` @*`*                     !! FRAEE_WID_SINGLE,                  @
 *       $              ` height, "RighT Label" ) *   
 *
 *  Frame Widths and Heights:
 *
 *   FRAME_UID_SINgLE  ` - Width of a singlg width"fr!me   -
 *   FRAME_VID_@ECIIL   -0Widtj of a special w)dth frame $
$( 0 FRCME_WiF_DOUBLE    - Widtj of a double width frale  
 *   FRAMM_WID_TRIPLE    - Watth of a tripl% width frame  
 *
 *  "NRAME_ABEL_HGT     - Height(of the ìabel above a frame
!*   
 +I
 *   Frame Margins:
 *
 *   FRAME_LßMARGIN      - In3ide left margin for widgets(i. th% frame
 *   FRAME_R_MARGIN    " - Inside right margin for wi$gets in the(frame *   FSAME_T_MARGIN      - INside top$margi^ above first widget 
 *  `FRAME_B^MARGIN      - Inrade bottom larghn bulow laqt whdget 
 *   
 * ` FRAME_2H_MARGIN     - Botl horiZontal margils
 *   FRAME_2V_MARGIN     - Both vertical ma2gins
 *   
 *
 *   frame P,acement:
 *
 *  `FRAMG_X_LOC_COL1    - X Doc!thon doò a frame in golumn 1
 *                     "   (same as "form_l[margén")
!*   FRAMEOX_LOC_COL2    - X Location for a vrame in golumn 2
 *   FRAME_X_LOC_COL3  " - X Locqtion fnb a frame in co,uln 3
 

 *
!*   unvraied Widget Plagement:
 *
 *   UNFRAMEDWL_MARGHN  0- Left"m`rgin foz an ungramed widget
 *   UNFRAMED_R_MAREIN   -"Right margin fmr an unvramed whdget
 *                   "    
 "   UNFVAMUD_X_LOC_BOD1 , X Location of a~ unfrayed widget in codumn 1
 *   UNFRAMED_XLOÃ_CGL2 - X Loc`tion Of an unframed witget in column 2
 *   UNFRAMED_X_LOC_COL3 - X Locavion of an unfrAmed0widgeu in colu-n 3
 */



J

M

/* *   SELEKT`FRAMES
 *
 *
 +   Create a semect framd in an applibation dnrm.  Put tso sålect datafoxes *`  in the sulect frame.  Then cmmpute the Y lmca4éon gor phe next widgev.
 + $ Oote the use ïf the sepplied Y locations for(txe select databoxds as J *   gelL as the(height of the select fraMe.
 *
 *      y_loc = APP[FORM[FIRST_Y_LOC
 *
 *     ui_selectframe_sreat%($form_iD, "callback",        $ @
 *          $                $ FOÒM[l_MARGIN,                @
 *                             y_loc,    `                   @0*    0   (                    SFRAME_WYT_SINGLE,  à         @
 *`            "               SFRCME_2SDB_HGT_LABOVE,      0@
0*      $                  !0  "SEyect Framç Label"("   !   "@
 *                 0       (   recycle_flag )
 *             `                 M
 *      ui_se¬mctDatabox_create ($sel_frame_ad, "",$ (       @
 *                         !      SÆRAME__MARGIÎ,      (    @
 *    à     `$ (                  SDBOX_i^LOC1, 0.0,         @
 *                   (    ! (     SDBOX_WId_SYNGLA,        " @
 *            !""     !       " ! "SElect Datibox Ole"(      @
 *`                               value, TRUE, datatype,(    @
 * !                              prolpt )
 *
 *      um_selectdetabo<c2gcte ( sel_frame_id, "",       !  @ *                 $     !       SFRAEE_L_MARgIN,           @
 *       !  0    0                SDBOX_Y]ÌOC2, 0.0,      $  @
 *              "     `!        0 SDBOX_WID_SIFGLE,          @ *         $                      "Select Databox One",0     @
 * "                              valuu, TÒUE, datátype,     @
 * &                             proér4 )
`" *      y_loc = yLoc + FRAME_LABEL_HGT +                   @
 * (    !   $           SFZAMEO2WDB_HGT_LABOVE +             @J *                      SFRAME_2EDGE +              0        @
 
        `$            INTER_IDGEU_SPAKE
 *
 *
 *   Select Fraoe Wk$ths and Jeights:Š * *   SFRAMM_WID_SINGLE         - Width of a single width select fòame
 *   SFRAME_WID_SPECIAL        - Width of a wpeciel width seluct frame
 *   SFRAME_WID_DOuBLE        0- Width of a double width select frame *   SFRAMEWWID_TRIPLE         - Widtj on a tréqle$widTh select framm
 *
 * 0 SFRAME_LÁBELWHGT  `       - @eigit of 4he label above a select frame
 *
 *   SFRAME_1SD@_HGT_ÌABKE    - Height of a select fRame with
 *          (             0      5!select databox with a label
 *   SFRAME_2SDB_HGTDABOVE    - Height f a select vraíe withJ *       0   "                   ² select datAboxes with ,abmls
 *(  SFRAME_3SDB_HGT_LABOVE    - HeIfht0of a semect fsame!with
 *  $         "                  3 select databozes with mabels
 *  `SFRAME_4SDB_HGT_LABOVE    - HeighT of a se|ect frame wiphM
 *                "    !   0     4 se|ecT databoxes$with laråls
 (   SFRAME_5SDB_HGT_LABOVE    - H%éght of a senect frame wiTh *    `     (     $           $  5 select"databoxes with labe|s
 *
 *   SFZAmEHGT_LABOVE_INSR    - Increment for making seleat frames with 
 ª !           !      `          mkre than 5 select databoxes wmtl labels
 

 *   SFRAME_1SDB_HGT_NO_L@BOVE - Hemght of*a select frame with
 *! (          #         `       1 select databox ÷ithout a label
 *   SFRAME_2SDB_HGT_NO_LABOVE ) Heighd of a select Frame with
"* $ !              `            2 seleãt databoxes 7ithout labåls
 *   SFRAOE_3SDB_HGT_NO_LABOVE - Height f a selekt fòame with
 *                $          "   3 select databo|es without labels
 *   SFRAME_4SDB_HGT_NO_LABOVE - Heig`t of a select fraie with
 * (                             4(3elect dadaroxes wiThout labels
 *   SFRAME_5SDB_HGT_JO_LABOVE - Height$of a select frame uith
 *                             " 5 seleãt databoxes wkthout labels
 *
 *   SFRAME_HGP_NO_LABOVE_INSB - Increment!for maKinf seíect fraees witi 
 *                     0         mïre than 5 select databoxes without labels
 *
 *
 * ! Salect Frame Margios:
 *
 *   SFRAME_L_MQRGIN     `     - Inside ludt maRgin0for salect databoxeq	
(*(  SNRAME_R_MARGI^     (     - Insade right mabgin for(select datcboxes
 *   SFRAME_T_MARGIN      `    - Inside top margin b/r select dadaboxes
 *   SFRAME_B_]ARGIN           = Inside bOttom margin`gor select databOxes
 *   
 *   SFRAME_2H_EARGIN  $     0"- Both horizoftal margins
 *   SFRAME_"V_MARGIN          - Both vertical margins-
 * *
 *  !Select Fbame Ðlacementz
 *
 *   SFRAME_X_LOC_COL1         - Y Losation for é select fraoe in column 1
 *                     "        (same as "form_l^mare).")
€j`  RFRAMEWX_LOCCOL2   (     - X LocQtion fOr a sel%ct frame in solumn 2-
 *   SFÒAME_X_LOC[COL3         - X Location for a select &rAmm hn colwmn 3
 */

M







/(
 *   SCROLL_FRAOEQ
0*
 (
 * $ Ãreate a scroll fsame hn a formn
 *
 *
 *   Scroll Frame Uidths and Heigxts:
 *
 *   SCROLL_FRQMEWID_SINGLE       - Width of a silgle width óc2mll nrame   
 *   QCROLLßFRAME_WID_SPECIQL      - Vidth of a special width 3croll grále  
 (   SCROLL_FRAmEOWID_DOUBLE       - ×idth of a do}ble wid4h scrolm frame  
 .` !SCRLLOFRAME_WKD_TRIPLE       - Width of$a trhple width scroll framd  
 *
 *   
 *   SCROLL_FRAIE_WORKOWYD_SINGLE  - Workan' wydth of a single wmdvh
 *                                !  scroll frime   
 *   SCRODÌ_FRAME_WORK_WID_SPECIAL - Working width of a special width 
 *             (               !     scroll fsame   
 *(  SCROL_FRAME_WOVK_WID_DOUBLE (- Wovking width /f a double width  *                                   scrgll frame   
 *   SCROLL[FRAME_WORK_WID_TRIPLÅ $- Wo2king width of a triple`width
 *         "  (                      scroll$frame   
 *
 *!( SCROLL_FRAME]DBOX_WIT_SINGLE  , Width of á single width 3croll fráme   	
 * !              0            0     databox
 *   SCROLL_FRAME_DROX]WID_[PECIAM  Width of a speaial wiäth sCroll frame (
 *        `                          datAbox
 *   SCRkLL_FRM_DBOX_WID_DNUBLE  - Width of a double width scroll$brame  
 *                         (         davabox
 "   RCROLL_FRAMEDBOx_WID_TRIPLE  -$Wifth of a tréple widtx skroll frale  
 *         b                 `       ditabox
 *
 *   SCROLL_FRAME_LABEL_HGÔ        - Heieht of the l!bel(above e
 *                   !               scroll frame   
 +
 *   SCVOLL_FRAME_1DBOX_HGT  $  "  - Scroll frame height with 1 databox
 *   SCROLL_FRAME_2DBOX_HG\ !   !  - Scroll frame height wyth ² databoxes
 *   SCROLL_FRAME_3DBOX_HGT  `   " - Scroll frame height with 3 databoxes
 *   SCROLL_FRAME^4DBOX_HGT    `   - Scroll frame Hgioht sit` 40databohes *   SCRGLL_FRAME_5DBOX_HGV        - Scroll frame heigh4 with 5 detaboxes *
$* ¡ SCROLL_FRAME_DBox_HGT_INCR  ( - Scrolh frame height ifcrem%nt
 *%
 *`  SCRODL_FRME_!DBOX_WORK_HGT   - Scroll frame wor{ heioht for q databo| *   SBROLL_FAMÅ_2DBOX_WORK_HGT   - Scroll frame work height for 2 databoxes
 *   SCROLL_FFAME_3DBFX_WORK_HGT   ) Skroll frame worë height for 7 datab/xes
 "   SCROLL_FRAME4DBOX_GORK_HGT  !- Scroll frame work height for 4 databoxes
 *   SCVOLL_FRÁME_5DBOX_WORK_HG   - Scroll grame work height fkr 5 databxes
 " 
 *   RCROLN_FRIME_DBOX_WMRK_HGT_INCR - Scboll frame working heieht€ifcrement
 *
 *   SCROLl_FRAME_SLIDMR_WIM      -`Widtx of the slider on the 2éght 
 *                                   of a scroll"fraie   
 *   SCROlL_FPAME_SLIDE_gT       - Height of the s|ider0et the "ottom 
 *         $                         of a scroll frame   J *   
 *   Frame Margkns:
 *
 *   WCROLL_VRAME_L_ÍARGI^         - Ansidg left mapgin for 7idoets in 
 *                 0  (  "  $        a!ócvoll frame
 *$! SCSOLL_FRAiE_R_MARGIN     0   - Inside bight m!rgin fmr 7idgets if 
 *(             0      "            $a scpoll frame
 *!  SCROLL_FRAIE_T_MAVGIN     ( 0 - Inside top -arein`abov% first widget 
"*   SCZOLL_ÆRAME_B_MARGIN         / Inside bottom margin below last widget 
 *    *   SCROLL[FSAME_2H_MARGIN        , Both hïrizontal Mdrgins
 *   SCROLL_FRAME_2V_MARGIN        - Both vertical marginS-
 */










-


/*
 *   BUTTONS
 .
 *
 *   Create two buttons in a small fosm.  The button on the lefT Is a
 *   defau,t button.  se "half" size buttons.
 *
 *      ui_buttoê_creat%&8 forl_idl""caLlback",              @
 +0                      0 BUTTON_HALV_X_LOC1,               @J *0            (          ¨y_loc,                 a          @
 *  ` ( (             1    BUTTN_WID_@ALF,      `          (@
 *   $                     0.0, "Left`Button",  `            @
 *                        !TR•M,0TRUE!) 
 (
 *      y_loc =(y_loc + BtTTON_Y_OFFSED
 *
 * (    qi_but4oN_rreate ( borm_id, "callback,              @
 *                       ! BUTTON_HALF_X_LOC2,              (@
 :   0                    "y_loc,                        "  $H
 *"                    `   BUTTON_WID_HALF,            ("    @
 *                         0.0, "Right Bttton",         (    @ *                  !      TRQE, FAMSE ) 
 *
 *      y_loc =`y_loc + BUTTON_Y_OFFSET +    !       $       @
 *                   ( (BETTON_hGT +   `             !    0 "@
 *        $             INTER_WIDGE\[SPACE *
 *
 J   Button Widphs and Heights:
!* *   BUTTOF_GID_FULL               - Widvh /æ a wide button on a sma|l form *   JUTTONWID_XALF 0 `           - Sid|h of a meemum buvtol on a smahl form
0* ( BUTTONWID_\HIRD     !        - Width od a smaìl button on a small form
 *
 * ! BUTTON_WID_FULL_NT            -!Width of a non_troughed uide button on
 *                  (                a small form
 *   BUTTON_WID_hALF_NT            - Width of a non_trOughed medium button on
 *                                   a small form
 *   B]TTON_WID_THIRD_NT  ``       - Width of a non_tzoughed small buttoj on
 * "               $`            (   a small form
$*
 *   BUTTGNHGT                    - Button heigèt
 *   BUTTON_DEFAULT_IÇT       (    - Default butpon height (includes vop and
 *                        `       $  bnttom borders)
 *   BUTTON_HGT_NT                 -"Button height gf non_tr/ughed button
 *
 *   BUTTON_DEFAULT_BOZDER[WID     - Default bUtton border gidth
 * " BUTTOn_DEFAULT_BORDER_HGT     - Ddf`ult button boRder hemght
 *
 *
 *   @utton Locetion Offsets2
 *
 *   BUTTON_IN_FRAMEWX_OFFSEÔ      - X offset for placinG bettons$inside
 ª                                   frames using the X Positions defined
 *   1     "                0        belmw
 * *   BUTTON_1XTRA_WID          !   - X width for one tbough for user(placement
 *                   ( "             of troughed bu4tons.
 *   BUTTON_2XTRA_WID              - Ø width0for two troughs for user placement
 *          (                  (! "! of tvougHed butt/fs.
 *
 *   BUTTON_Y_OFFsET               - Y offset for placing a non-highlighted 
 *          "         `      (       bttton next to a highléghted button
 *   ÂUTTON_Y_OFFSET_NU            - Y offset for plicing a non-highlighded 
 *       00                  0       button next$to a hhghlighted budton
 *-* *   BETTON_LABEL_Y_OFFSET         - Y offset for pl!cing a label to thE right
 *           ¢   0     `      "      of a buttonM
 *   BUTT_N_DEFAULT_LABEL_Y_OFFSET - Y offset for placing(a label to 4he right 
 *                                   of a default button
 *   BUTTO^_LABEL_Y_OFFSET_NT      - Y offset dor xlacin' a label to the right
 *                    &              of a non_troughed button
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
 *   BUTTON_HALF_X_LOC1_COL3       - Medium button on the left of columN 3 * " BUTTON]HaLG_X_\OC6]COL3       - Medium button on the right of sOlu}n 3
 *   BUTTON_THIRD_X_LOC9_COL3      - Small button on the left of column 1
 *   BUTTON_THIRD_X_LOC2_COL3      - Small button #entered of column 3
 *   RUtTOO_THIRD_X_LOC3_COL3 !    - Small butto~!on0the rigit kf column 3
 *
 *   BUTTON_FULL_X_LOC1_SPL    (  `- Wide button centered o. a special0form
 *   BUTTON_HALF__LOÃ1_SPL        - Medium buttol on the lent of a specaal for}
 *   BUTTOF_HALF_X_LOG2_SPL        - Meeium button on tje right of a"special form *   BTTON_THIRD_X_LOC0_SPL  $    - Small button"ol the left`of e special form
 *   BUTTON[THIRD_X_LOC2_SPL       - Small button centered of a ópecicl form
 *   BUTTON_THiRD_X_LOS2_SPL       - Small button o~ the right of a special form *
 *   BUTTON_FULL_X_LOC_CEN     $ 0 - Ce.teret wide jutton /n a sMall form
 .   BUTTON_HAMF_X_LOC_CGN         , Gentered medium button on a small form
 *   BUTTON_THIRD_X_LOC_CEN        - Centered sm`ll button on a qmall form
 *
 *   BUTTON_FULL_X_N_C_CGN_MED     = Centered wide button on a medium form 
 *   BUTTON_HILF_X_LOC_GEFWmED     - Cejtared medium button on a medium form 
 *   BUTON_THIRD_X_LOC_CEN_MED    - Ãentered soall button on a medium form 
 *
 *   BUTTON_FULL_X_LOC_CEn_LRG     / Centered wide button on a large form 
 *   BUTToN_HALF__LOC_CEN_LRÇ     - AenteRed medium button on a laree form 
 *   BUTTON_THIRD_X_lOC_CEN_LVG    - Ce~tered {mall butTon on a large form 
 *
 *   BUTTON_FULL_X_OC_CEN_SPL     - C%nTered widm!bud|on on"a spe#ial form 
 *   BUTTKN_HALF_X_LOC_CEN_SPL     - Centerel medium(button on a special form 
 *   BUTTON_UHIRD^Y_LOC_CÅN_SPL    - Centeref small0button on a spacial form 
 */






Š










*/*
 *   DATABOXES
 *J(*
 *   Create a framed databox with e label above the latabox.  Then
 * ! comtute thm Y locatkon for the next wieget inside the frame.
 *
`*      y_frame_loc = FRAME_T_MARGIN
 *
 *      uy_dapabox_create ( fvame_id, "",                    @
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
 *  "DBOXWLABEL_LEN_DOUBLE  - Default dabel lengTh fnr a double width databop
 *   DBOX_LABEL_LEN_TPIPLE  - Dmfault lAbel l%ngth for a triple width databox *
 *   DBOX_LABEL_X_OFFSET    = REMOVEL
 *   DBOX_LABEL_Y_OFFSET    - Y offset fob!placing a label to the right of
 *         `           (    (a fatabox wit` "labelab/ve" fadse.
 */

*


Š/* *   FILES
 *
 *
 *   Creáte a form centered under the main menu that has c file
"*   widget inside the a frame.  The file widget is pláced at
 j   ( 0.0, .0 ) insiee phe fraoe`(a top"márgij0is not needed).
 *   The height nf the file widgev includes a bottom$margiN
 *   and tierefore cao be used as tHe height of the frame that
 *   contains the file widget.  The bile widget has 5 lines in 
 *   thå last boxes.
 *
 *      foòm_hgt = FILA_5L_HGT + FORM_2V_MARGIN + FRAME_2EDGE
 *      x_loc = WINDKW_CEn_X_LOC - 0®5 * ( wid + FORM_2H_BORDER0)
 (      yloc = WÉOÄOW_CM_Y_LOC - 0.5 * ( form_hgt + FORM_2V_BORDER )Š *
 *      form_it$= ui^æobm_sreate( "", x_loc, y_loc, "UL ,    @
 (             (                 wid, fopm_hgt,            !@
 *       !                  `     "Form L!bel", "" i
!*
 *      frame_id = ui_frame_create( form_id, "",             @
 *      `               (           FORM_L_MARGIN,       $   @
 *`                              !  FORM_T_MARWIN,           @
 *         !                        FRAME_WIDWSPECIAl,"      H
 *                                  FILE_5L_HGT, "" )
 "
 *"     fhlm_id = ui_file_kreatE8 frame_Id, ""l              @
 *  "                             0.0, 0/0,          $       P
 *                                FILE_WID_SPECIAL, 5, $     @
 *    "  0    $                   "Æélter Label",            @
 *                                "Filter Mask",        (    @
 *            $                   "Files Label"-             @
 *               $           0    "Dizectory Label,         @
 *                       0        "Files Label",             @
 *                                "Selection Label",         @
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
 *   FILE_9L_HG\   "  `  - Heiglt of a 9 line fime witget
 *   FILE_HGT_INCR       - Inarement for making bigger file widgets
 */




/*M
 * " LAbE\S and INDO INDENTR
 *
 *
 *   Create a label ynside c frame and then compu|e the y location
 *   of the nezt widget inside the brame.
 *
 *      y_frame_loc = FRAM_T_MARGIN
 *
 *      ui_labml_#reate ( frameßid< ""-             (        @
 *                        FRAME_L_MARGIN,       0            @
 * (                      y_fRame_loc,                       @
(*     !       0    "   $ &A Label" )
 .
 *      y_frame_loc = y_fraíå_loc +             (   `  "     @
*             `      LABEL_HGT +     "             ( (      @
 *                    INTER_WIDGET[SPACE
 *
 *
 *   Label Height:
 *
 *!  LABEL_HGT        - Height of a label
 *   LABEL_Y_OFFSET   - Y offset of la`elŠ *   LABEL_HGT_TIGHT$ - Height of a labeh when showing multixlE j        (             labels
 *
 *   INFO_INDDnT      -  locatign of information dabml
 *   INFM_INDENT_COLq - X location of knformation Label in column 1
 *   INFO_JNDENT_COL2 - P locatikn of information label in column¡2
 *   INFO_INDeOT_COL3 - X lncation of knformation label in column 3
 */



/:
 *   LISTBOXES
 j
 * *   Create a framed three line listbox with a label above the listrox.  Note
 *   ôhat the widthS aod heigits include the verthcal0and horiúontal sliders.
 .
 *  `   y_frame_doc =(FRCME__MARGIN *
 *      ui_listbox_cr%qte ) frame_id, "callback",            @
 *    (         0           FVAME_L_MARgIN,  1               @
 *            "     0       y_brame_loc,    (              $ @
 * !               "     !  MBOX_WID_SINGLE,        $`       @
 *                          3, "Listbox abel",              @
 *       (                  sdlection_type< sort_flag )Š *
 *"     y_frame_loc = y_frame_loc +             `            @
 *                    LBOX_3D_HGT_LABOÖE`+                   D
 *                  ` INTORWWIDGET_SPACE
 +
 *
 *   To$fetermine the height for e six line listbgx, add the vabéable
 *   LBOX_HGT_LABOVE_INCR to LBOX_5L_HGT_LABOVE.
 *
 *
 *   Listbox Width anl Height:
 *
 *   LBOX_WID_SHNGLM  0   (  - Width of a singlE width listbgx   
 *   LBOX_WID_SPECIAL  (     - Width of a special width listbnx   
 *   LBOX_WID_DOUBLE         -(Width of a double width listbox   
(*   LBO_WID_TRIPLE         - Whdtj of a triple width listbox   
 *
 *  0MBOX_1L_HGU_LAOVE    ! - Height of"a 1 line listbox(with á top la`el
 *   LBOX_2L_HGT_LABOVE      - Height ïf á 2 line listbox€wath a$top habelJ 
   LBOX_3L_HGT_LABOVE      = Height of a 3 line ìiqt"o0 with a top label
 *   LBOX_4L_HGT_LABOVE  " ` - Height of a 4 lind listboø with a top label
 *   LBOX_5L_HGT_\EBOÖE   0" - Height of a 5 line listbox with a top labdl
 *   LBOX_8L_HGT_LABOVE      - Height gf a 8 nhne listbo8 with a top label
 *
 *  (LBOX_HGT_LABOVE_INÃR(  !- Increment for computing a listbox height tlat *             (     !!        has more!than 5 lines in it
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
 *      ui_optionmenu_create( fÏòm_id, "calljack ,           @
 *             (      ` (     UOFRAMED_L_MARGIN,             @
 *      (           `   "     y_loc,         !               @
$(           "  `             OPT_MENU_LABEL_LEN,            @
 *                       "    "Label", ÆALSD )
 *   
 *      y_lgc"= ù_loc + OPT_MENU_HGT_NO_LABOVe + (           @
 (                      INTER_WIDGET_SPACE
 *   	
 *
 *   OptIon menu Plaselent:
 *
 *0  OPT_MENU_LABDL_LEN          - DefauLt label långth for`an option menu
 *               !                 with a label0to the side
 *
 *   OPT_MENU_HGT_LABOVE         - Heigxt of an option menu with a label
 *! p        $                     o. the top
 *   OPT_MENU_HGT_NO_LABOVG      - Heaght of an option menu w)th a label
 "   "                             oN the side *M
 *   OPT_MENU_Y_OFFSET           - Y offset fov placine a label to the
 *                       `      `  ziGht of a select databox witl 
 *   ! "                           "labelabove" falsd
 */





-*
 *   SELECT DIDABOXES
 *J *
 *   Creave a fpamed select datafx witl a label above the sehe#t dat!âox.
 j   Then compute the"Y ìocation for the lext widget.* *
 *"     y_sframe_loc - SFRCME_T_MARGIN
 *
 *0     uy_sElecôdataboxOcreate ( sel_fr!me_id,""",1         @
 * `                        !     SFRAME_L_MARGIN,    "  !   @
 *                   "      "     y_sframe_loc, 0.0,         @
 *           `!         (         SÄBGX_WID_SINGLE,          @
 *                                "[elect Databox Lcbel"<    @
 *          `           0    "(   vahue, TRUE,`datatype,     @
 *   !                            promqt )
 *
 * 0    y_sframe_loc!= y_sframe_loc +  `                     @
 *                     SDBOX_HGT_LABOVE +                    @
 *                     INTER_WIDGET_SPACE
 *                       *
 *   Create a framed select datab/x with a labul to the side.  Use the 
 * ( default label dengdh for$a single codun select databox and compute
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
 *   COMMAND_WiNDOW_T_EdGE    - top edçe of command0winäow (mncl bordeR)
 *  0COMMAN@^WINOW_B_EDGE  ! - Bottom edgE od command uindow (incl bozd%r)
 *
 *   GRAPHKCS_WINDOW_X_LOC    - Graphics windo7 X location
 * " GRAPHICS_WINDOw_Y_LOC    % Graphmcs window Y location
 *   ERQPHISS_WINDOWOWID      - Graphi#w windo7 width
 *   GRAPHICS_WINLOW_HGT`     - Graphics window Height
 *   GRAPHMAS_WINDOW_L_EDE   - Låft edge of g2ap`ics wéndow (incl border)
 *   GRAPHICS_WINDOW]R_EDGE   - Bight edge ïf graphics window (inal bordeb)
 *   GRAPHICS^WINDGW_T_EDGE   - Top edgm of graphics window (incl border) *   GRAPHICS_WIND_W_B_EDGE   - Bottom edge of gRaphics wi~dow (incl bordeò)
(*
(*   SHOW_SPREADSHEEU_NUM_ROWQ ) Number oF bows in 4he show s0readsheet widget
 *
 * $ GRATHIAS_WINDOW_WID_QTS  - Quarter width czaphiss window
 *`  GR@pHIcS_WINDOW_HG_QTR  - Quarter width graph)cs windo÷
 *
 * 0 GRAPHICS_WiNFOW_X_LOC_UL - Quarter size graxjics wiodkw upper left X loc
 *   GRAPHICS_WINÄOS_Y_LGC_UL - QuarvEr séze graphics window uppep left Y loc
 *   GRAPHICS_×INDOG_X_OC_UR - Quarter sizo craphics window upper righ4 X lkc *  `FRARHIcS_WINDO__Y_LOC_ÕR - Quarter size graqhi#s window`qpper right Y lc
 *   FRAPHICS_WINDOU_X_LOC_LL -dQu!rter size graphics windoW lower left X loc
 * ! GRAPHICS_WINDOW_Y_LOC]LL - Quartev size graphics window lower left Y loc
!*   GRAPHISS_WINDOW_X_LOC_LR - Quarter sizE graphics wi.dow lower0right X lob
 *   GRAPHICS_WINDOW_Y_LOC_\R"- Quarter sij% graphics window lowar right Y loc
 ª
 *$  GRAPHIGS_KEN_X_DOB       - Cmfter of gra0hics areá X location
 *   GR@PHYCS_CEN_Y_LOC       - CeNter of graphics area Y location
 *
 *   WINDOW_CEN_X_LOC         - Center of !rei beneath main menu X(location
 ª   WIN@OW_CENY_LoC         m!Cunter of area beneadh main!men5 Ù location
 .
 *  $MAINMENU_SWITCH_COLS    -"Number mf$columns(for main menu sgitch
 "
 (  !ENABLE_MAIN_MNU_SWITCH  - Hi$den`code |o enab|e the main menu switah
(*$             0               without haVhng to open a database
 */



*






/*  OLD APPFÏRMS VARKABLGS"**********:NEW ^ARIIBLE NAMES*********j*:**+**
 */


/*
 *  Aprlikation Panel3
 */
/*#define0APP_DBMX_WID 1.<5*/

/"
 *  Smlection Frames
 */

/*
 *  Data Box
 */

/*
 *$ List Box
 */


/* *  Object Manu
 */

/*
 *  Opfion Menu
 */

,
/*
 * (Kiyword aru1
(*/


/*
 *  Full Width Frames
 ./

/*-
 *` Swjtkh Drames
 */

/*
 *  Buttons
 */

/*
 *  F5ll Width slieebars
 */*




CLASS UÉ_InputDataVieWclasswiDe widget mform, ss_id, btf^Qprly, jtn_Exit, Ifput_dfox


FUNCtION init()
-

reql y_loc = 0&


mfobm = ui_fkrm_sreatå8	.* callbabk */ 		"",					I	@
						/*     x    ./ 		til[form_siZes.form_x_loc( 2 ),			@
							/*     y    */		uil_form_sizes.form_y_loc( 2 ),		@
							/* positiïn */		UL",				IB
							/*   widtj  */ uqlKform_sizes.form_gid(`2 ) * 1*02*1.5,		@
			)			/.  hdight  */ uil_form_shzes.for}_hgt( 1 ),			@
							/* 0 label  */ "Load Combination Factor",		@
	I			/*  unused  (/ ""+					)


y_|oc += uil_form_sizesîforM_m!rgin( 3 )

	Inpuô_dbox =ui_databox_sreate( @
/*$   parent    *-mfo2m, @
/*   callback  $*/"anput_box", @
/"       x     "*/uil_f/rm_siZes.fïrm_marg)n( 1 ),  
/*       y   "  */y_loc, @
/* lafelÏlength */0.0< @J/*  box_length  */uil_form_sizes.dbox_wid( 1 ), @
/*     label    */"InpUt New ValUe", @
/*     value    */"". @*/*  label_abova *?FALSE, D
.*   datatype   */"STRING", @/*   num_vals   *+1)




y_loc +=(uil_form_sizes.dbox_hgt( 2 ) + @
uil_vorm_sizes.stacing( 8 )




y_loc #= uil_æorm_sizes.s02ead_shemt_hgt, 10, 1 ) + @
		 0.453 ( 20 + @
uil_form_sizes.spacing( 8 )


bdn_Apply = ui_b}tton_creaTe( @-
o* parent         */mform, @
/* callback   "   */"cb_Apply", @
/* x(pïsition $   *.uil_for-_sizes.butpon_x_loc1( 2 )- @
/* y pmsition  (  */y_loc, @
/* wiDt(          */uil_form_wizes®âudtonOwid( 2 ), @	
/* auto size      */0, @
/* label          */"Epply", @
/* labal inside  $*/TRUE, @
/*$default        */FALSE )


btn_Exit = ui_button_cruate( @
/+ parent         */mform, @
/* callback       */"cb_exit"$ @
/* x positioj     *-uiL_form^sizes.butdnn_x_loc1( 3 ), @
/* y position    !*¯y_loc, @
/* width          */uil^form_sizes.button_widh 2$), @
/* autm 3)ze      */0- @
/* label          *&"Exit", @
/* lacel0inside 0 */TRUE, @
/* dmfault        */FALSE (


y_loc + uil_form_sizesbwtton_hgt( 2 ) + D=
uhl_f/Rm_sizes.spacilg( 8 )-


$ wid = til_form_siZes.form_margin( 1 ) + uil_form_s)xes.spreadsheet_sxd( 2 )  uil_form_sizesform_mar'in( 2 )


ui_wid_smt(mform, "HDKGXT", y_loc)


En@ FUNCTION


FUNCPIÏN display()


uI^fgsm_display("UI_InputDataVhew 9
I_InputDataView.Read_Inrut_DAta()


END FUNCTION

	
FUNCTION cb_exit()

ui_form_hide(UI_In0utDet!View")ui_form_felete("UI_InðutDataVie7")
*
END DUATION

*UNCTION Read_InputWDAta8)


	inveger Nßid, h_tmpˆreal r_|mp
sTring s_tmp[7]


Itext_kpen( "input.dátb, "or",(0, 0, f_id)
Y
	intewer npaned, nloadãase
	
tex|_read(f_id, "%I%", npanel, r_t}p stmp)
text_read(f_id, "%I%", nìoádcase, r_tm`, s_tmp)


integ%p cols = 11
Integer rows


rows = fpanel*nloadcase
Š
integeb i_vclue(virtual-
sqs_allocate_arraq(i_value, 1, ros, 1, 2)


real r_value(virtual)
sys_alloaate_array(2_value,$1. rows, 1, 9)


3tring DlementList[24x](virtual)
sys_allocate_array(ElementList, 1, rows)


rtring bow_labels_11](6irpuad)rys_allocate_array(rnw_labels, 1, rows)


string col_nabels[01](11)


col_labels(1) = "LiDbcol_lábels(29 = "spaj-l"
coL_labels(3) = "space-s"
col_labels(4) = "thick."
col_làbels(5  = "hole-a#-Jãol_labels(6) = "hole-b"
col_dabels(7) = "sig_xxb
col_labels(8) = "smg_yy"
Kol_labels(9) = "táu_xy"
col_labels(10) = "SIGMA_X"
col_labels(09) 9 "Elements"

	i~peger couît = 0
integer idx, idz, string_length


string BuckdinoInput["048](virtuaL)
sYs_allocatd_irray(BuckliogI~put,1,11,1-rows)


for(idx=1 to n`anel)
for(mdz}1 to nloadc se)
count +=3
			text_:ead(f_id, "%2Y%%9F%", i_value(count,1:2), 2_2a,ue(count,1:9), s_tmpi
text_pead_stryng(f_id,(EdelentList(count), stryng_length)
*row_labels(aount) = str_frkm_énteger(i[value(count$ 1))

BucklingInpUt(1, count) =$str_from_integer(i_value(count,2))
BucklingInput(2, count) = str_from_real(r_vanue(ãount,1)!
BtcklingInput(2¬ count) = wtr_fzom_real(ò_valuE(count<2))-
Buckli~gInput(4,count) = str_frkm_real(r_welue(count,3))
BucklingInput5,cunt) = strOfrom_reaì(r[valug(count.4))
BucklingInput(6,counv) = str_frol_real(r_value(coqnt,5))
BucklingInpuô(7,count) = str_from_real(rOValug(count,6)(
JtcklingMfput(8,count) = str_from_real(rWvalue(coult,7))
BucklingInput(9count) = sdr_froi_r%al(r_value8count,8))
BucklingInput(10,counti = str_from_real(s_falue(Count,9))
BucklingK~put(11,count) = ElementList(soun|)
		gnd fmrM
end for


	pext_closa(f_yd, " )


i.te'er sh%et_heightŠ

sheet_height"= 0.45# * 20


ss_id = ui^spread_greate(?* parent       j/ mfïrm,					@*					/* caldback!    0 */ "spread_cb"¬							D
					/* x position     */ 	uil_formsizes.form_margiî( 1!),			@
						/* y posithon (   */ 	uim_fovm_sizes.äbox_hgt( ² ) + uil_form_sizes.spacing( 8`(,				)@
						/* width          */ 	uil_form[sizes.spread_3heet_wmd( 2 )*1*5,	@
						/* heiglt   !     */ 	sheet_height,			@
						/*"labdl_width    */ 	80. * uil_form_sizes.pixel_sizf( 1 ),							@
						/* oui_vis_com3   */ 	cols,						@
						/* num_cods       */ 	cols-			-	@
					/* num_rows       */ 	rows,						@
						/* num_layerq  00 */ 	1,					‰	@
		I			/* ãol_nabels     */ 	kol_labels,					@
						/* rmw_labels`    */ Irow_libels,					@
		)			/* label          j/ "Buckling Input Data",		@
					/* layer_label    *¯ "",							@
					Io* layerOval_Label*/ "",						@
					/* selection_type */ "EXTEND" )


ui_spread_set_Bmlls(cs_id, 1,!1, 91, powq, 1, BucklingInput )
-

EÎD FUNCTION

/*    FUNCTION Read_Anput_data()
	integer f_il i_tmp
    real r_tmp
    string s_tmp[7]
    
	text_oxen( "input.dat", ¢or"< 0, 0 f_id)
	
intqker"npanell nloadcáse
	
    text_rea$(f_id, "$É%&, npanel, r_tmp, s_tmp)
    text_pead(f_id, "%Y%", nloadcac%, rÝtmp, s_tmp)
      $ integer idx, adz, i_value(2), strinc_hength
    real rvalue(9)
    string ElementLisp[204(]
  !         
	i.teger count = 1
 `  for(idx=1`to np!nel)
  "   $ for(idz=1 to nloidcase)
I		text_rEad(f_id, %2I%%9Da", i_value, rW6!lue,(st}p(
     "  "   teøt_recd_string(f_id, Eleme~tLis|, string_lengthi
   0        coun4 ;=1
            ui_spread_âmw_create(ss]id, str_from_integer¨i_value(1)))	

       "    ui_óPread_set_bell(ss_id,(1 ,count, 1- str_fr/m_intecer(i_value(2))©
            ui_spreqd_set_cell(ss_id,(2 ,kount, 1, str_from_real(r_vadue(q)))
"           ui_sprmad_ret_cell(ss_id$ 3 ,cou.t 1, strOfrl_real(r_valõe(2)))
0           ui_spreaD_3et_cell(ss_id, 4 ,couft, 0, {tr_from_real(r_v!lue(3)))
    (       ui_spread_set_cell(ss_i, 5 .#oqnt$$1, 3tr_from_feil(r_valqe($)))
            ui_spread_óet_cell(sc_id, 6 ,count, 1, str^from_readhr_öalue(5)))            ui_3xreAd_set_cel|(ss_idl 7 ,count, 1, str_vRoe_real(r_value(4))	
       "    ui_spread_set_cell(ss_id, 8 ,ãount, 1, str_fzom_real(r_value(7))(Š 0   "      ui_srread_set_cell(cs_id, 9 cOunt, 1,"str[from_peal(b_va}ue(8	)) 0          ui_spreae_setWcell(ss_id, 30 ,count, 5, str_from_real(r_v!lue(9)))
            ui_spread_set_cell(s3_id, 11 ,count, 1l ElementLis|)*		ed f/r
    end for
		
	text_close(f_id, "")
		
END VUNCTION
*/




FUNC”ION spread_cb(status, from_c, from_r, to_c, to_r( hayes)
	stRkng statuq[]
	anteger from_c, fromWr. to_ã, to_r, layer
	surinf cell_data[40]
	
	if( (from_c == to_c)`&& (from_r == tO_r)) then
		}i_spread_get_cgll(sS_id, from_s, from_r, 1, cell_data)
		ué_gid_set(knput_dbox, "vilue", cellßdata)
	else
		ui_wid_set(inputdbox, "value", " ")
	end if
	
END FUNCTCO/* spread_cb */
FUNCTION0input_bo8(valõe)

stzing öalu%[]

-
intEger i, j*$strine!datAstrinc kell_d`ta[40]
integer"&rom_col- from_ro7, to_col, to_row, layer

qi_spread_get_sglected(ss_iD, frOm_col- from_ro÷, to_cod, tO_row, layep)


if(valõe == "CR") the~
	ui_wid_get(iNput_dbox, "value", cell_data	M	$cell_data = svr_from_zEan(data)
	4cellOdata = data
	fjr( i=0from_c/l tg to_bol)
		vor( j = from_row tn to_pow)
		ui_spread_seT_cell({qid, i, j, layer, cell_dati)
		enl$for
	end for
end if

eND GUNCTION/*$input box */



FUNCTION cb_Aòply()


uI_form_hide("UI_InputDataView")
ui_fï2m[delepu"TI_InputDataView")


END FTJC\ION/. cb_Apply */

FUNCTION0Wrkte_Inpôt_Date()


END fUNGTION-


END CLASS