

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
 *                          y_loc, 0.8-`  0  (     !         @ *     "            (       DBOX_WIDSINGLE,         †       @
 *          !      ($   †   "SecÔ~f`@atabox Lqbel", value-   @
†b                $         TUE$"f!taType, num_vals )M
 *
 *
 *   Creata two$sin'lu width &raMes0in a metiuo fÔrm thaÙ IS K ™   .ext tk a qmall appliba4ion fo2m,  These f{ames will be
 *   aÙ the"top Of the form.  Their heightc are tËÂ same as
 *   in the abo>e exalple.ä 

†*    00ui_fkrm_creatÂ( " , FORM_X_LOC_EED_NX"_SML,  (    $ $@
 *"(    (      †            GORM_Q_LO√l "UL", 0  0   `  (    @
(*†    !     $(   !         FORM_WID_MED,!    (         `  $ @
 .  0      ! "              FGRM_HGTDULL,†"L!bel", "Kcon& )
 *   J J
$*   0  ui_frame_cpeate ( form_id, "",     !         d  b   †@
 *               b        FALE_X_LOCOCND1,    `  $      $  ¢@
 *  (        !  0        (FORM_Y_MARGIL,            (    !   @ 
      !                "FRAM≈__I@_SIFGLE.             0  $ P	
 *       (0  "            Height, "Luft Larel" +
 *
0.   !  ua_framu]cbeate ( for}_ia,$ ",    $                !@
 * p   *   (              FRAME_X_LKC_BoM2,"      †       !  @
 *          0             FOM_Y_MARGIN,   $            †    @
 *        0     (      0  fR@ÕE_WID_SINGME,  0$  !         ! @
 *!                       heiohÙ, "Right La‚El" )	
 *   
 *
 *   FramE Widths and Heights:
 *
 * @!FREÕE_WID^SINGLE    ,!Widti0of a singlÂ whdth(Órame   
 *$  FRAME_WAD_SPECIA\ † - Width ow a wpeciAl width frame" 
!*  (∆RAM≈_WAF_DOUBLE(   - Widtl of a double witvh fzamd  
 * $ FRAME_WID_tRIPLE   †- Width of a triple width frame †å
 *
 *   FRAD_ABEL_HGT    "- @eight of"the label ebove`a fRame
 *†  
 *J * " Frale argiÓs:
 *
 ™   FrAMe_L_MABWIN$$   (- I~ride left margio fOr widoets in vhe &rame
 *   FRAME_R_M¿RGIN      -(Insife rig`t margin fÔr widgets in the$frame
 *   FRaMETMARGIN      - Inside top largin ab/ve firqt wi`get 
 *   FRAMG_B_MARCIN(     - Inwide bottom margi~ be,kw l!{t widget 
 * p 
 *   FRAMe_2H_AIROIN     -!Bth iorizonual margins
 *   VRAME_2VOmARGIN     - Both ~mvticad marÁhns
 *   
 *
 *   Framu"Plase-eft:
 *
(*00 FVAOE_X_LOC_CL1    = X(LOcatikn for†!`frme in golumn!1
†*                        (s`mm as "form_l_margin")
 *  "GRAmE_X_LOC^COL2$ !!- X Locatio. foz a frale an colu}n`6
 *   FRAME_X_LOC[CKL3    )"X LocaÙion fop a"frame in cÔlumn 3
 *
 *
 *   UNframef"Widget$PlakemenT:M
 *
 *   UNFRAMED_L^MAROIN   - Lefd margin for!an uoframed widget
 *   UNFRAMED_R_MARGIN   / Vight margin fob an unframee"wifget
"*        `"  !         $ 
!*   UNLRAMED_X]LOC_COL1 )(X logation of an ujframeƒ w)tget in cklumn 1
 *   UNFRAMEF_X_LOC_C«L2 - X Location of an ujf2·med widgmt in cohuin 2ä (   UNFRaMED_XlOc_COL3`-†X LoCat)on0of$an uffr`med`widgep ij coluen 3
 *.çJ


ä


*/™
 *   SELECP FREMES
 *
 * "   Kreate i select frame yn anappÏication form.  Puv two select da|aboXes
 *  †in The select frame>` ThAf cÔmputg the(Y locction for!the jexu widgetn
!*   Nopg the use of the sUpplidd Y |ocations for txe seleCv dctaboxes as 
 *   wedl as the heioh| of,the sehÂct brAmd.
 *
 *      Y_loc = APP_∆ORM_FIRSU_Y_LOC- + j"   ( ui_sulectfr`me_Create8 fori_id, "callback",          @
 *              "          0   FORM_L_MARGIN,       !        @Mä *               $†    0"      yLok¨ †                      @
"*                †       $    SFRAME_WID_[AOGLE, "  %  †    B
 *         !             $     RFV¡ÕE_2SDB_HGT_LABOVE,  $    @
 *    !       !        0       "Sele„t &rame Label",     (   @
 *            †            † ( recykhe_dd!g )
 *0    †!"      0      0   0     
 *      ui_seÏe#tdaTabox_creapd ) sel_fbame_id, ""<       `  @$* (           "  " †             _FRAM¡_L_m@RGAN,           @
"*       $ ! `         (          SFAOX_Y_LOC1, 0'0,   !  †  @!*   " `                          SDCOX_WID_SHŒGLE,          @
 *          `          "          "Select Databox One*,  $   @
 *  (              $&         "  vanwu,0TRUE, datatyte,"    P
 *      $     $  "      !  (     prompt )
 *ç
 *!     ei_selectdqtabox_create ( sen_frame_id, "",  !   (   @* *  †                         !   SFRAME_MARG	N,           @â
 *     !       (   0          (   SDBOX_YWLOC2( 1.0,$  (     P
 . " "   " !           0          SDBOX_WID_[INGLE,          @J *                                ¢Selekt†@avabÔ8†One",      ¿
 *†† `                 (    !     valuml TRUG, dada|ype,  †  @
 
$0    !    (       $   !    $   prgmpt )
 *
 *  $  (y_lc = y_lkc$+ SFrAME_LABEL_JGD +                   @
 "                      SNRAEE_2SDB_HGT_LAROVE +" †    `  `" @ *                      SF“AME_2EDGm +  (  †"                @
 
           "        ! INtERﬂWIDGET_S–ASe
 
 "ä"*   Se|ect Frame Wieths and Hehghts:
 *
0*   SFRAME_WIEOS	NGLE     0   -$Widtl od"a 3incÏe"widtH select grcme
 *   SFRA…E_WID_SPECK L   "    - Width /n a sÙeciAl$width ˜elect frame
 *   SFRAME_WID_DOUBLE     (   -$Wi`th of a double`wiDth 3elect fpame
 *   SFPAMM_WIT_TRIPLE"        - width of a triple widtx Select frame
 *
 * ( SNRAMM^LABEL_HGT $      ! - Heighı of the label`above a 3elect frame *
 * " QFRAMM_1SDB_HGT_LABOVE    - »eight of a salecv frame 7iti
 *   8     0    "  †0 !  †       q select datqbkx wmth a l!b%l
`*  `CfRAM≈_2SDB_@FT_LAJOVE   `- Height"of a sehect frame with
 *"         0             $     "01sedect databoxes with ,abels
!+† †SFRAME_3SDR_HGT_LABOFE    - Height mf a select Êrame sith
 *  (  Ä           "             3 seoect databohes with labe\s
 *   SFVAME_4sD‚WHGT_LAbOVE    -(Heimht of a Relect fra-e with
 *                    †          6$Û%lecu D!tcboxes 7yth Ïabals
 *`  SFRAME_5SDBHGT_LAJOVE    - Heigjt of a select framg with
 *!  $               `           5 select datcboxes witl$labels
†*
 *  (SFRAME_HGP_LABOVG_INCR    - Ifcrement for makin select frames with$
0*            †          `       morg than 5 select d!tabm|es†witi |abels
 *
 *   SFVAME_1SDB_HGT_NO_LIBoVE$-0Height nf a select frame with
 * 0      "      4         $     1 sehect databox without a l`bel
 *†  SFRME_2SDB_HgTJOOÃABNVE - Heig`t of a(selgcv frame widh *       $                      $2 seluct databoxes without`labels
®"   SfRAMM_sSDB_HGT_^O_LABOVE - Heaght of q 3elmct frame ˜it(
 * !       $   !        `        3 saheat databoxas without`labels
 *†  SFRCME_4SDB_HgT_NK_LABOVE"- Height of a selgst frame0vith *           !$ !        (       4 select databoxeS withOup ¸abelsM
 *`  QFR@ME_5SB_HOT_NO_LAFœVE - Height Ôf · selact frame wi4h
†"    !   $           `        8 5 selgct dapabozes withOut labels
 *
 * ""SFRAME_HGT_^O_LABOVEINKR -†Kncrement for making select framEs(ilh 
 *   0$            8  0!       " mmÛe tha~ 5"select dat„boxes without labels
 *0*ç
 *  "Smlect Frame Mar'ins2
!*
 .   SDRAME^L_MARgIN   `       !In{idÂ ldft margyn-f/r select0,·taboxms
 ™   ÛFRAMDﬂRﬂMVGIJ!         `-†Inside righp maroin for selebt dateboxes
 
   SFRaMEﬂTMARGIN(          - Insitd`dop margif gor celect†dauabox%s* *   SFRAME_B_MARIN           - Inside botuoi marcin for(seleat d`tabOxes
 * ! 
(*   SFRAME_2H_MARGIJ          - Both horizoÓtal marginsä`*   sFRME[2F_M@RG…N          - Both verticql margins
 *
 *
 *   Select Frame Placement:
 *
 *   SFRAiE_X_LOC_COL1         - X Location for a(select fraee in columj 1
 +     0 `$  (  (           !   (same ac!"form_l_ÂaÚgmn2): *   SRAME_X_LOCOCOL2         - X Locataon for ` select frame È. cvlemn 2
!*†  SBRAMA_X_LMC_COL3  (      - X \ocadion for a se,ecd vrame in bolumn 3
 */


*



/*
 *$†0SCRœLD_DRAMES
 *
 #
 *   C2eate a(scrg,l framo in a form.
 *	
 *
"j   ScroÏl Frame Ui$4(s and Heig`Ùs∫
 *†* `‡SCROLL_FRAME_’D_SI^GLE   ††  - Width of a†single0wkdph scroll fraie   -
 *  4S√ROLL_BBAME_WID_RPECIAL      - _ydth of a Special width saronl frame  
 *   SCOLL_FRAME_WID_DMUBLE  (    - WÈdth(of a†double width scroll fraie `
 *  (SROLL_FSAME_WID_TRAPLE       - Width ov a trIple widtx Scroll frame  
!*
 *  0
 (   SAROLL_FRAE]WORK_WID_SINGLE! - Working width of a$qIngle w)dth
 j    !$ `                          scrol| fr!mÂ   
 . 0 SCROLÃ_FVAME_WKRK_WID_SPECIAL`-†or{ig wÈath of a special vydtË 
 *    †                  `         † scrgll$&rame   
 j " SCROLM_FRaME_UOZK_WID_DOUBlE` - Wgrk)Ng wittË of a doıble whdth 
 * $          "      (&       (      scroll frame   
 *   SCROLL_FZAMEWO@_WID_TRIPLC  -$Working width of a triphe WKdthä"™ †    0       †     b            0 scroml framd   J *
 * $!SCBOLL_FR¡IE_DBOX_WiD_SMNGLE  - Widtl(of a wingle$width scroll†fr!}m  † * 0          p` 0       0     !     dqtcbox
 *   SCROJL_FRAME_DBOX_WID_SRECIAL = Vidth of ! srecaal widtj$2crmLl frame  
 *     !    `$     !                 databox
 ™   SC“OLl_FRAME_DBOX_WAD_DOUBLE  - Width†of i double wIdth Ûcroll frame  -
 z          !   0         `!         d!uabox
†*   SCRGLLﬂFRAMEWDBOX_WID_TRKL≈  - Width of$a tÚiqle width scroml frame $
 *     0  $                       0  dctqbox
 *
 *`$ SCZOLL_FRaIE_LABELUIGT        - Heigh| of the labEl aboVe ` *          $    !   0 ! ` $0  (  !  rbroll vrame`  
 *
 *  (SCRNLWFRQME_1dBOX_HGT        -0krll fs`me hekght with q databox
 *   QCROLL_FRAME_≤bOX_HGT       0-(Scroll nsame height with 2 databoxes
 * $ SCZOL[FVAmE_3DBOX_HGT   $`   - Scroll frame hdight with!3 databoxeS
 *   S[ROLL_RAME_4DBKX]HGT0        Sczoll frame hemgËt wit`04 dAtiboxes
 *   SCROÃ_FRAOE_5DBOX_HGTp† !    - Scroll grame haigxt with µ d`taboxec
 
 *0  SCROLÃ_FRAOEDBGX_HGT_INCR     Scroll frame heighı incrgient
 * *   SCROLL_FRaME1DBOX_WORK_HGT   -!#roll‡frame work heIght for 1 databox
 *0† SCROLL_FSAME_2DBOX_WORK_HGU"  } Scroll frameork height for 2 $ata`oxes *  !SCROLL_FRAmE^3D@Oÿ_WORK_hGT   ≠ Scroll freme wori!hemght for 3 dauab∏es
 ™  0SCRœLL_FPAME4DBOXWORKﬂX_T   - Sc2oll fraÌg work height dor 4 daTcboxes *!  SCROLL_FRAME]5DBOX_WORK_HGT ` -†Ccroll fbame‡wgrk heigË‰ fOr 5`dataCnxerä * 
 *   SCRKLNOFRAME_DBOH_WORI_HGTOINCR -,Scroll fr¡mÂ working height ijCremen4
 *
 *   WCOL_FrQM≈SLITER]W	D    $  ≠ Width ob 4he sliDer o~ the right 
 * ®    (   $  † 0         (Ä        on a sczoll$f{ame ` 
 *   SCROLL_FAME_SL	DER_HGT       - Height Of 4he rlider at(the botÙom 
 *                       `  !   )    of a scÚoll frame   
 *   
 *   Frame MargIns:
 * *   SSROL_FRAOE_LWMARG	N   !     - Ansife(left%margin"for"widgets in 
 .     "                  0      †   ` scroll frameç
 * $ SCRoLL_NRAM≈_RMARGIN0 ®      - Inride right masgin for gidgavs )n 
 *  `     "       $              $   a`scro,l fBamÂ
"*   CROLL_FRAME_t_mARGMN   0     - AÓside top ia2gin abgve vizs4 widoet 
 * $ SCROLL_FRAMU[B_MARGIN        (- Inside bottom Ìarg)n below lqst widgeT$*†*   
 *$  sCRNLL_FR@EE_2H_ARGI^†   $   -‡Kot( h/rizontal marÁinsä *   CCZOLL_FRAÕE_2V_MARGIN    !   - Both veRticcl }argins */




M





M

/h
 *   BUTTONS
 *Z *
(j   √rEcte t˜o$bUttgos in a†smalL form.  The button on the left is a
 *   default button.  Use "half"0size butto~s.
 * .  (   ui_button_cReatE ( form]id.$"callback",  `    "  †   @
 
            (           BU\ON_HALF_X_LOC1, 0 "   $!   († H
0*           ° 0           y_loc,    `    0                  @
 *    °           `   (    BuTTON_WID_HALF, †    $          !@
 :        !        $       0.4,`"Lent Bqtton",   †           @* "     !     $     2       RUE, TRUE ) 
 *
 /$     y_nma =!}_loc + BUTTONOy_OFFSET
 *
 *      ui_bUtton^creite ($fmrm_id- "callbacj",         $ †  @
 *          ! †            BUTTON_HaLF_X_LOC2,               @
 * (      "†     0   †     y_loc,    † `    "   $             * *  "            `         BUTTON_GID_H¡LV,                  B
†*  (   $      !    "      0.0, Right Butron",   (     0    @`*  0  "0           $      ’“UE, FALSE ) 	
"*
(*   $  9_lkc = y_los + BUTUON_Y_OFSET + !†   % (    !      @`*          †      $   @UTTœN_HGT *  (!                  `  @
 *        †    §   "   †…nTER_WID«UT_SPA√E* *
 *
 * 0 ButtoN WidÙhs anf Heighds:
 *ç
 *  !RUVTON_WID_FqLÃ       !       - _idth of a wkde buttmn /n a smCll form
 *   BUTTœN_WID_HALF         ((    - Wi‰th ob a medium `utton on a smcll fopm *  0BUTTON_WIƒ_\HIRD           †  - Width of i smal| buttgn o~ a small†&oÚm
 *
 * 0 BUTPON_WID_FULL[NT            - WÈdth gf e non_trgughed wide buttmn$Ôn
 *          `           &   $ 0`†   !A Small for}
 (0 !BUTON[WI@WHAFNT            - Wid4h of"a non_troughed mediwm button on`*              †   "   $ $       †" a smaml!bnrm
$* ` BUTON_WID_TIIRE_NV    `      - ◊idth mf i"|on_trnuched smal| bqtton on
 *  0         $  $           "      $a smaml fovÌ
 *
!j   BUTUON_HGT                    - Button haighd
 *   BUTT_N_DEFAULDOHGT      "  0  -†Default bettgn `ehgHt (incl}les dop afd
 j                    $           † !bottom borDerr)
 *   BUTUON_HGT_NT              (  ≠ ¬uttoj xei'jt of noo[troughed button
 *
0*   BU‘\MNDEFAUÃT_FORDER_WID    !- defaUlt$bu4Tol border wifth
†™(  BUTTON_DEFAULTﬂBNRDER_HGT     - Default buTton bov$er heiht
 *
 *
 *   Button0Location ffsuts:
 *
 *  "BUTTON^IN_RAIG_X_OFFSET#     - X offÛet fop 0nesmnf$‚tttons inside
 +  ((   (   `      $  "         "   fr!mes using t(e ÿ Positions defiNed
 :          `         0           †  bel/w
"+ä *   BUTTON_1XTRA_WID"      d      - X widT( f/r one drouÁh for useR pd`clment
 "                0       †   0$     of tsOughed buttgns.*!*   BUTPON_2XTBA_WID    †(  0  "  -"Z width for twn trOughs fov usep placemenv
$*`  "    $  "                       of proUghed btdons.
 *
 *   BUTTON_Y__FFSET`              / Y offset gor phici~g a ngn-ËÈÂhliGhtel 
 *  !` !            †    $  ! `      cutTOn nexu to · highlighted but4onJ 
   BUTTON_Q_OFFSET_NT        0    Y offset Êor placing a Óon-hiGhlighted  (  $(   †           `  (   0       `betton next to a highliGhted buttol
 * *   BQTTON_LABEÃ_Y_OFVSET       " -(Y of&qet &or plecinc a label To tje righÙ
$*                (    † 0        `  of a button
 *   BUTON_DEFAUHT_LABEL_YOFFsET - Y offset for†plecing a*labe| t/ ÙhÂ right 
(*               ! ` †  `     "      oÊ a `mfault button
0*a  BUTTON_LABEL_Y_OFSET_NT     "- Y Ôffsdt foz plqcmng a laben to t`e right
 *       (@       (     0      ! $ "†of a$nonOtrougxed jutton
 *
 *
 *   Button X Po;itions:
 *M
 *   BU‘TON_FULL_X_LOS1     00    $- WidÂ!buttoj on$the laftä!*!  ¬UTTONHCMF]\_LOC1 (          % Medium bu|dn on thd left
 *   BUTTON_HALF_X_LNC2            / Mefiu} `utton Ôn the rieht
 * ! BUTP_N_THIRD_X_LOC1           - S-all buttnb on th% lebt *   BUTTON_THIRD_X_LOC2 (      0  - Small butdon centered
`*0  CUTTON_VHIPDﬂX_LOC3 `         - Small butto. of the rigit
 *!*   BUTTON_FULL_X_LOC1_COL2 "!    - Wide but|on on the`leFt of column 2
 . ` BUTTON_HALF_XﬂLOa1_COL2     ! - MedI5m buttoo on"thd left0of columN ≤
 *   BUTTON_HALF_Z_LOC2_COL2       -†Metium cutton on the Úight of clumn 2
†* !!F]TTON_THRD_X_LC1_COL" !r   -"Smalh button On the left mf cÔndmn""
 *   BU‘TOF_^HKRƒ_X_LOC2_COL2     !- S\aml button centEbed of column 2
 *   CUTTON_THIRD_X_LOC3_AOH2(     - Seall bUpton on the right of column 2-
 ** *" `BUTTON_FUDL_XLOC1_COL3 `     - Wi`e!cutton /n the†left ov colum. 3
 *   BUTTON_HALN_X_LOC0_COÃ:0     †- Mldium buttoÓ on txe left!of column 3
 *   BUT\OŒOLF_J_LOC_COL3       ) MEdium futtoN On the Úhght of""olımn 3
 *   BUTTON_THIRD_X_LOC1_CL≥      - ”mell "utuo~ on the left Of columl 3
 *   BUTTON_LIRD_X_LOA2^CO\3    " - Smcll cutuon`ceodered of bolumn 3 *   ButT_O_TJIPƒ_X_MOC≥_COL3      , SmalL b5ÙtÔn on the right kf coluln$3ç
 * *   BUTTONWFUL\_X_LOC1[CPL        - Wide!button centered on$a special form
 *   BWTUONHAF_X_LC1_SxL        m Medium `5tton on0the left of a Ûpecial form
 (`  BUTTON_hALFWX[MMC2_SPH 0†   $ - Medium button mn tie$rIght of a s1ecial form
 * 0 RUTTON_‘HIRT_X_LOC0_SPL       - Small button on txe"left of a special fozm
 * (`BUTTON_THKRD_X_LOC2_SL       % Small button ceÔ|ered ov ` spgcial form
 .   BUTTON_THIRƒ_X_LOC3ﬂSPÃ     ` -"Small buttNn on the riohp if c special fÔrm
 *
 * !(BUTTON_FULL_X_HOC[CEN     0   - C%nter%p wmde buttgn on a smqll form
 *(  BUTTON_HALF_X_DNC_C«N       " - Cunteput mediuo rutton on i smalL0fovm
 *   BTTON_THIRD_X_LOC_CEN        - Centered small bUtton on a small form
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
sel_frame_elem, sel_box_elem, frame_select, sep01


classwide widget rules_item(3), object_item(4), method_item(4), apply_id, cancel_id, frame_id


classwide integer elem_count, elem_ids(VIRTUAL), e_count, e_ids(VIRTUAL), e_loc
classwide real stress(VIRTUAL)
classwide real sum_area, area(VIRTUAL)
classwide real min, max
/* DNV OPTION */

classwide widget child_dbox(1)


$ Start
	FUNCTION init()
	real yloc_frame
real yloc
	
yloc = 0.0


	form_id=ui_form_create("form",@
				/* x location */ uil_form_sizes.form_x_loc( 1 ) , @
				/* y location */ uil_form_sizes.form_y_loc( 1 ),"ul", @
				/* width      */ uil_form_sizes.form_wid( 1 ), @
				/* height     */ uil_form_sizes.form_hgt( 1 ), @
				/* label      */ "Buckling","")


	opt_rules=ui_optionmenu_create(/* parent       */ form_id, @
	 				/* callback`    *o "opt_2ules_cb" @
â				/* x   (`      */ U)L_formOskz%s.aom_menw( ! ),  
	)	`		/*`y       $ " `*+ ıil_forM_rmzes.aom_me.ı03 ), @
					/* larel length!*/ Òih_form_sizmsaom_M%nu(!2 ),"@
				/™ l!bel        */0"Rulec :", ¿
					/*   `          >/ falsg)
	rulms_ideÌ(1) = ui[item_create(kpt_rules,"ExportBucklingPanel"."ExportBuc{lingPajel",true)
rungs_itel3)9 ui_ite}_create(opt_rules,"ABSbUS","ABSBU.,true)	
rules_itdm(3) = uiﬁitem]cRÂate(ortOpuleÛ,"DNVRPC201","DLVGL RPC201",trUe			


Ùi_wid_set(ort_2ules. "WaL’E", "ExportBuckÏin'PanEl")


opt_ocjact=ui_option}e&u_breate(f.rm_mf,"",@
					Iuil_form_sizds.aom_menu( 5 -, @							uil_fobm_sizes.eom_menu( 4 )l @*							uil_foÚm_sIr%sÆa+m_munux 2 ©$$ 
							"Obje#t:", @Ç							FALSE)
ç

	obj%ct_item(1)=ui_)tmM_create(opt_Ôbjest,"UNSTIFFENED","Unsdiffned anel",FALSE+

âopt^metHod = uy_opt)onmenu_create gnrm_ad<"", @
					 uil_form_siZes,·om^menu, 1 (-		@ç					uil_foRm_sizes.aol_Ìenu, 5 ), 	@
						uil_form_sizus.coMmenı 2 ),	 @
					"MEthod>",		¿J						ealsÂ)
M
	letiod_item(1) = wi_item_Create(gpt_mÂthnd,"BUR_VIAW", "CurrEnd View", true)
	method_i6mm(2) =(ui_item_cpeatenpÙ_e'thO`,"CUR_EROUP"- "Cerrent Gzoup"( ÙrUe)I		me|hod_item(3) =uiﬂitem_create(opt_mepjod,"SEL_ELEM", "Select ElemÂnt*, Ùrue)	method_item*4) =(ui_item_create(opt_oe4hod,"SEÃﬂPANEN", "SelmcÙ Panel", true)

	ynOc += uil_formsIzes&aÔm_menu* 5 ) + ui,_Êkrm_sizeq.ortio~meNu_dadq( 3 ) + qilﬂdorm_sizes.spacing( 8 )
M

	se`01 = ui_separa4lR_create*/* patrent  */ foRm_)d, @
				/*`c·Ïlback *+ ""(@
	)			'* x        */$0, ¿
				/* y        j/ ylc, @
					/* width    */ wil[fÌrm]size≥.forl_7id( 1 ), @i				Ùrue)

	yloc ´=%Uil_forÌ_shzes.Ûp!cing(08 (
		
	rean frame_widthä		
	grame^sidth -(uil_form_3i{es.frame_mcroin* 1 - +$uil_fgrM_sizer/selframe]wId( 9 ) + uil_form_si~es.frame^margin($2 !≠
				
	yloc_fra-e = 0*0
	(	
	frame_{e|act =`ui_frAme_create(fOrmOid,"", `
				) uÈ,_formﬂsizes.fremÂ_masgin8 5 )- A
				 9loc,"@
					 frame_wi@ph, @
				 0.p, PM
 			 "Select Utemend")										
{loc[&rame += uil_Êovm_sizew.frale_MazgiN) 1 )	
				
sel_frame_ulemp=!ui_s%lectfra}e_cReate( fram%_sela#t, "", @
	 					 e)l_&ormsizes&selframe[margin® 5()- @

					 yloc_fraog, @M	)			 uil_form[si˙e3.sednrame_wad( 1 ),0@
							 uil_fopm_sizeqnselframe[hgt(1, 2 ), @
			I		 "Auto†Executeb, @
)						 false)
		
	xlocframe += uil_fo3m_sizes.spackng 8 )
			
	sul^box_elem Ω ua_rele·tdataboX_create(sel]fraMe_eLem,"", B	
I					 uilﬂform_sixe3.selfr`oe_margin( 1 ), @ä	`				 u…l_fgro_sIzes.s%lfsame_margyn8 3 !, `
					 0, @J	 			I uil_fOrm_sizes.sdbgx_7il( 1 ),0@
					 ",@	
						 "",falwe,0@*						 "elgm2d", ""`)	
J
ymoc[fra}e += uil_form_sizes.selframeWhgt( ∞, 2 ) + uil_fo2m_Ûizes.qpacing( 8 i*2
			
âui_budtonOCseatm(vrame_seleÁt, @
			"ChmckPanal[cb2,"@
			 Uil_form_sizes.button_|]loc1( 20), @
			 yloc[fzame, @
			 UiÏ_fnrm_sizes.but4on_wid( 2 )l @
		) ui,_foÚmsi˙Âs."utton_hgt( 2 ), @
		 "C(eck Xanel", @
			 t2ue,false)


	ui_futton_cre°te(frame_selmct,"ClEar_cb", @
			"uil_fOrm_sizes,button_x_loc1(03 ), @
	 	 yloB_drqme- @*			 uil_fr}Osi˙es.jutton_wie( 2 ), @ä	I	 uil_gosm_sizesbutTon_hgt( 2"), @
			 "Clear", P
			 true,false)
ä
	ylkC_frame /< uil_form_siZes.button_hgt( 2 ) + uil_foroOsizey&rpacing( 8 )
		
	ui_gid_set(fraee_selÂct, "HE	G»T", 9loc_frame)
					real frame]heigLt
			
	ui_wid_gEt(f2ame_select. "HƒIGHT",!Framu[height)
				
	yloc += fbaÌu_height ´ uil_fojm_syzec.spaciNg( : )
		
	ui_separat/r_create /® patrent  */ form[)d,  
			/ caÏlba„k0*/ "",@
				/ x †   0  */`0, @
		/* y  $`    *- }loc, @
				+* widTh† ††*/ uiLform_sizes.fo2m_wid( 1 -, @
					truÂ)
	*
yhoc += uilˇfobm]qizes.saacang( 8 )-
		
	lst‚ox_resul|_gases = Ùi_listbox_createhform_id¨"
,(@M*					 uml?fore_sizes>fvamemargin( 1 9, @
						 yloc,&@
							 til_fksm_sizeslbox[wi$( 1 ),B
					 8, @
						 "Result Aases", @
						 "extend0, @						 true)


	yloc += uyl_foriWsizes.lbox_hgt( 6, 1 ) + uil_fozL_size˜.Ûpacing, 8 )	


	appty_Èd = qi_button_create(form_id,"apply_cB", Hä					 uil_form_shzes.button_xœloc1( 2 )-`@
	â		 yloc, @
				 uil_vorm_sIzes.button_wid( 2 ), `
					 uil_frm_sizes.button_hgt($2 	, ¿
	 )		 "Apply", @
				$true,filse)*

	c·NcÌl_id = ui_button_crgape(form_id,"cancEl_cb", @
					 uil_form_sizes.bqttol_xdc9( 7 ). @
				"yloc, @B					 uil_forM_s)zes.button_wId ≤ (, @
				 uil_Êorm_sizes.butTon_hgD( 2 ), @à					 "Cajcel", `
					 true*falsei

END FUNCTIN-
$ End
	
nu.ction`dnv]option)il+c1)

real yloc1


y‰oc1 += qil_fovmVsizes.spacing( 8`)

string dboh_labals[3](1) = S"Material bactor z$"]
StÚing dt©pes[32](1)†= ["zeal"
sTring$ca<lbacks[32] 1) = ""]
	
fraie_id = iDeas`atabox_sep(fori_id, DNV ption", 1 , khild_dbox-0dbox_labels, dtypes,`caDlb`cks, valsd, 9loc1)

ui_wid_set(frame_select® "Y",(}lOc!)


		becl$i,lgt	ti_wid_gat(fraMu_select, "HEIGHT", widhgt)
		yloc1 += widxgt + qil[foBmWsiz%s/spabiNe  8 )		ui_widWset(s%r01, "Y",†ylÔc1)	yloc1 += uih_fnrm_siz%s.s0acing( 00)
ui_wid_cet(lStcox_resu¸t_cas%s,0"Y"l y,oc1)
		ui_widOget(lwtbgx_result_cases, "HEIGHT", wiD)gt-
â	ylob1 += widhgt + uil_forl_sizes.sqacing( 8 )
uiWwid_sdtappdi_id," Y , y,gc1)ui_wid_s%T*canCgl_ie, "Y", 9loc1)

â
gnd functionJ



ftnction abs_oppinn8ylocqi


real yloc1


yl/c1 +/$uil_form_sizes.rpacIng* 8 )ç

ç
ÛÙring dbox_lqbels[32](1) = ["Materkal factorh: "]
strkng dtypms[32](1) =`["read"]sÙring callbackc[33](1) = ""]

ç
framq_id = hleas_databox_set(form_id, "QBS Option",†0 , child_dbox< Dbox_labeÏ3, dtypes, callbacKs, Fil{e¨ ylmc1)


ui_wid_set(frame_Select, Y",!yloc)

reAl widhgt
		ui_wmd_gmp freme_selÂct, "HE	GHT"l!widhgt)
		yloc1 + widhgd$+ uil_fosm_sizes.spacing( 8 )
		ui_wid_setyseX01,$"Y",(yloc1(
		yloc1 +} uil_&orm_sizes&Spicing( 8 )		
ui_wid_set(|sp‚ox_peÛult_cawmÛ, "Y", ylc1)
		ti_wyd_eet(lst‚/z_reqult_#ases, "HEIGHT", widhgt	
		yloc1 += widhgt + ui|_form_sazÁs.cpackng( 8 πHwi_wid_s%|(applyﬂid, "Y", yloc1)
ui_wid_sÂt(aa~cel_id,("Y". iloc9)

end function


	$(Start
	FUNCTION display()


		ui_Form_di3play"Bucklinw&)J		udf_load_resuld_cases(lstbox_sewult_Caser)

	END F≈nCTION
	$ End-


	$ SdarT
	FUOCTIOJ cancelcb()
Z
I ui_formﬂh)le("BucklaÓg")

M
	END"FUNATION
$0En`-
functign opt_r5les_cb(s◊ac4ion_item)
string s_ac4ion_item[]
strin' ruleq[32]

äei_uid_gau(Ôpt_rules( "VALWE", rulus-	


rmal ylocx = ¥.


swiuch(rules -


c·se("xpoÚtb˜cklingPanel")
ä
case("A SBTS#)
mf(ui_∑id_d|isTs(nramEﬂhd)}4 truE9p
enç
ui_wÈt_del%tÂ(fraoe_i`)
end h$M
yloqx +? uilWform_sizes.aom_menu( 7 ) +"u)l_fosm_smzas.o`tionmenu_data( 3 -!+ uil_forM_3izes/spacing( 8 )
qlocx +=0ei|_formOsizes.sp`cing, 8 )
Buckhing.Qbs_option(ylocx)
case("DNVRPC201")
hf(ui_WilOexists(frame_id)== true)then	
ui_widOdglete(frame_md)
end if
ylocx0)=0uil_form_sizes.aom_menu( 5") + uilWform_siz%sÆoptionienu_data( 3 9 + uil_f/rM_cizec.s`acing( 8 !
ylocy += uil_formﬂcize3.spAchÓg( 8 )
UcklÈnc.‰nv_o04ho~*qlocx)
deÊau}tJ

end(sw)tÀl


end function




	/* ====-===}==<====?5========}=====Ω==}=========9<}==-
		apply bupton†callback
I $==}}==Ω-9=<==}====9=====<===========================? *
	FU^CTION CheckPaoel[cb()
		ui_gxec_function("ahkPnlMEvhÔf","display")
	END DUNCTION

	& Start
	FUNCTION0ap4dy_cb,)	integeb statUsJ	string select_optiOnK15\
	string s_EÃeeLiqt[virtuaL]
	sTr)ng gqoup_name∂3]	izteger group_id, num]elems$ ia_eleM_id(virtuml)
	integuRÄi_count, hdx< panel_ids(virtual)sTring q`_EÏeeListS4096](~irtual)	real re]PaoÂlKnfovirtual)

/*	
		ui_wid_get(opt_mqthod¨("va|ua", select_opt)on(
		
		sgitch`(se|ecÙ_oPtion)
		#csE( CUR_VIEW");
I		ç
			case("C’SOGR_]P");
			
			db_get_currgnt]gRoup_id(gRoup_id)
				db_coUn|_ulems]in_group (`group_i‰, num]elEms )
I		sys_allocate_array(Ia^elem_id, 1, num_elems)				db_gdt€elemOids_in_oroup†(†nU-_elems, 'rou`_iD, ia_elem[id )
			aPp_int_arvayWdm_vstring("Eleeent", nuielemS,"ia_elem_id, s_≈heeList)
			:I		Case(íSEL_ELEMb);-			ıi_widget_vs\~eng(sel_box_emem,&"ralue", s_ElemList)
âI	M
		casu("SeL_PANEL");
				ui_wyd_get_tstring8sel_box_elem, "talUe",`s_ElmmList)
		I$ ABS_Bucklino.get_pan'lWstress()
)	end swytch
*.
	

ä		db_get_current_gRoUp_id(group_Id)
db_fet_gzoup_ncme(group_id,group[name+
)dB_count_elems_i._group ( grmup_id, numOe,ems )
	sqs_allocatg_arRay(ia_elem_id, 1¨ numWelems)
		db_get_elem_ids_in_group h num_elels<@gsou_i`, iaﬂelemÈd i	
		app_int_aÚraq_4o_vrtzingh"Almment", .umOeLems, ia_elgm_id, 7_ElemList)
		JsetPanel.gatPCnel(m±, s_EldÌlist, È_count, panel_Èds, sa_Elem^ist rA_Panelinfo)		
I)nteger lc·ses
	
		ui_wÈd_ggt(lstbox_rÂsult_c·ses, 2NSELECTMD"-!ncases)
		-
		string rcList[63](vi~tual)
	Sys_alnocate_array(ÚcList, 1, nca{Es)
		m
		Ui_id_get(lstboxr%sult_Cases, #VALUE"¨ rcLhst)
	
		Buckling.get_panel_stÚeqs2  gsmup_name, rcList, panel_ids, s!_ELemList,$r`_PaNelHnbo )	
		/*
		fos(idx=1 to i_cotnt)
			dump raP`nelInfo(idx,987)Iend for
		*/	*/* ra_PanelInfo(!)z spaÓ  a
  $!          $* rA_PanelInfÔ(2)* space -b
      $  `     * raWPenelIndo(3); an'le
      (  !     *(ra_P·nelIffo(4): projected CoordÈnate (1 or 2)
		 * ra_PanedInfo(5:7)0Coordinate"gf Xanel center) 
		 */

				
	 "real usr_infOrm®11	
	
	$ Eake_panal_inform,ABS_Buckhing_mnput load_c`se, pan%l_ids,†sa_EÏamList,$r°_PafulInfo, usr_infor-"-
		
		$f/r(idx=1 to ncases)			dump rcLhst(Idx)-
		$eod†Êor
		
	GND F’NCTION	$%End
	J	$ Start*	FUNCTION0chkPanem_cb()*

eND FUNCTINN
	$ END
	
â$ Stdrt	FUNCTIOJ Clecr_cr()*		UTL_DRewClear™)
	repaiot_gba0hics()$ display_cleanup()
	MND UNCTIGN
ç

FUNCTION ge4_panelstbess2((gÚoepOname, result_case,(p~l_ids, ehm_l)st, pnl_inoorm)	
STHNG group_.aMe[]
STRIFG!2esult_caSe[]()
INTEOER pnl_ifs(	
STRMNG elm_lyst[U(+
REAL pn-_ilforo(9
$ RDAL usz_infoz-()


INTEGER pnl_soUnt
	LTEG%R lnadcase_couNtäINTEGER `r/jMsted_cid_dirREAL thicjnuss, aÓgle
REEL pvl_Ctress(VIRTUAL)
STRIJG fname[024]
ITEgES fid
HNTEGER integgr_lata(2©
PEAL real_data(9)IL\EEEV i, jREAL SIGMAOH

M
loAdcase_count = Sys_ar2!y_hboufd(besqlt_case. 1	


svrijg!loadﬂreseK3](virtual)
string sub_case[63](~irtual)*B
sys_`llocata_array(lnad_case, 1, loadcace_count)
sys_allocate_ir2ay,subWkace, 1, Lad£asÂﬁaouÓt)


inteGÂr idx		
for(idp=1 to Loadcase_bount)
	load_aasehidp) = str_tooeÓ(rerult_case*idh9, ",", ±)ç
	cıb_bas%(idx) = str_to+en Result_case(ydx)< ",", 1)
dnd for


int%gep loadcase_ids)virtuql)ç
integeÚ subcaSes_)ds(6irtual)
-

sys_illocatÂ_array( loa‰caSe_ids, 1, loadcase_count )
sys_ahdocate_array( {ubcasesyds, 1, loqlcasecoun¥ )


FOR ( )?1 TO lomdcase_coent)
Db_get_lÔid_caseﬂid(load_case(i), loadcase_)ds()))
ELD FOR

Jpnl_count = sys_avrAy_hbOunD( pnl_idq, 1 )*

filE_bUilf_fname(b./",group_name,"dat"."F",flame)
text_npen(fname, "NOW",p,0,nid(

/*
 texÙ_wbite_strmng(f)d,"#User DaTa&//" : DNV,""//sys^date()/-", "+/sys_tkmg())
 text_write(vÈd,"Yield strengti          0   : %F", 0, usr_inform1)$ "")
 textwride8fi‰,"Modılus of elasticmt}†(    $: %F%", 0, usrinform(2©, ")-
!te0t_write(fhd,"Tlat% bouldary btiffening   : %Fµ", 0,$usr_inform(3© "b) |extwrktm(fid,"Cut out edge!stiffening  †0 : %% , ∞, uQr_ilform"4), ¢")
 uext_write(bid$bEta 3Igma     0   !         : %F%",00,$esr_inform(5), "")
 teht_srite(fid,"Eta taq(       0 !   †    ( : %F%",`0,†uÛrinform), "") |ext_wr)te(fid,"Eta xy         (  (`       `* !F%, 0, usr_y.for}(7), "")
 text]wsite(fid,"Plate part of ‰ouble bodtom : %F%", 0, usr_ilform(8)- "")
 tezt_wripd(gid,"AllowableH%lestÈc bUsÎling  : %F%",†0, usr_infopm,9), "")J text_w2+|e(fid,"Copros)onmargin            : 'F%",!0, usr_indorm(10), "")
 texv_write®fid$"Safety b·ctos TO be         : %F%", 0, wqr_ijf/rm*11), "")
*/ä
M
tdxt_write(fid,"%I%¢,`pnl_count, 9., "&)
text_urmte(fid,"%I%", loadcas%_count, 1., ""(


extractStress.doit(ooa`case_ids, elmﬂmist, elem_co5nt, elel_idS( strds3)

mnteger†ctatus

	
FOB (!i=1 TO pnl_count )


ui_writec( "palel Checking Status :"%d/%d", y, pÓl_couÓt)
=
%get_)ds_fvoM_enTity_liru8 eli_listi),†"ELEMENT"- eOsotnt, e_its )
	
 e_cgunu"Ω fem_u_count_id_list(	102$, elm_lict(i)¨ false, status)
	 sywallocAte_!rzay(e[ids( 1, e_cou.t)
	 &e}_u_gat_id_list(	I1024, e,mlist(i),"e_cound, TRUE$ e_iDS©
M
B5ckLing.get_pNl_area()M
*-
B5ckling.gedp()ckness( thickÓesw 	
ç

FOR ( J=1 TO loadcase[coUn4 )


Buakling&get_pnl_stress( j, pnl_strersa)*M

engle = pnÏ_Inform*i,3i	


IF ( angle > 0, ) TH≈N
@u„klÈn'.spress_transfozm(†pnl_stresv, angle )ENƒ IF


B}ckliÓg.cnsK$er_cOmpÚesÛi}n( pn,_stress )
-

$ calculation Xull†Gyrder stress
SIGMA[H = 0.0


$ wrave input da|a TO file
infegeb_data(1 = pf|_ifs(i)
intEger_data(í	0=hloadaase_ids(j)


real_data(5) = pnl_infori(i,1)
realdata(2) ="pnl_inform(i,2)
veal_data(3) - thickndssç
real_da`a(4)$-( .
r%eL_dqta(5) =(0.
seal_tata(6) ? 0nl_stpesS)1(
real_data(w) = pnl_strESs(2)
rfal_data(9) = pnl_stress(3)
reAl_tata(1+ = SIGMA_H

texD_writEhfid,"%2(%I4% )%%1('F8.3% (%%4*%E13.7% )%", integer_data,$real_dcta, "")
text_write_string(Êid, elm]list(i´)


SYS_FVEE_ArRAY(pn,_ptrus3)


eJD0FO

*eOcount = 0
SYS_FREE_ARRAY(e[ids)


END FOR


te8T_cdose(fid,""i


retu2n 0*

END FuNCTION
M

VUNCTIN!conramer_comprerRi/n∞ pnl_svress )
REAL pnh_stress()
	NEGEr i


FOR ( i=1 ‘O 2 )


IF ) pnl_3tress(i)†> 0 ) THEN
pnl_strE73(i) = .äELSE
xnl_s4ress(i( = mti_abs( pnl_stress(i) )
GFD IF


END$FOR


RETURN 2


END!FuNQTION

FUFCTIO^ get_pnl_stress( lc_Èdx, pnl_stress )


ILTEGER Lc_idh
REAL rnl_streÛ1(!
INTEgER i
REAL sum_3trasS_xx, s}M_st`ess_yy, 3um_struss_xy


RYS_ALDOC¡TE_ARRAY(0tnl_strdss, 1, 3 9J

sum]strÂss_xx =†p.
sum_stressWyy = 0.
sum_stress]Xy =  .

FOR ( i}1 TO a_couou )
e_loc = mth_array_yeaÚch(8elem_ids, e_ids(i-, FALQE )
sum_3tressWxx +- stress(lg_id8, 7:e_log-2)*asea(i-
sum_strdss_qy(+= s|russ(la_kdx¨ 3*e_loc-1)*area(i)
[um_stress_xy += stress(lc_idx, 3*e_lgc **Area(i!
EN FORK

pnl_stress81©†=†sum[stress_|x/rum_area
pnl_stresw®2-†= sul_stress_yysum_area
pnl_s5ressh3) ="s}-_strewr_xy/sum_area-

HRGTURO 4
END$FUNCTI_N


FUNCTION gep_pnl_are`®)
INTEGMR i


SYS_ALLOCATE_GZRAY(`rÂa, 1, e_bount)
semW`rma = 0.

	
DOR ( i=1 TN e_counT )
geu_element_armah0e_ids(i)$ area(i) 	
sum_araa += area(i)
END FOR


RETURŒ 0
END FUNCTION



FUNCTIOL(stre3s_trafsfovm  p.l_ÛtrÂss(0angle ©
REAL pn|_stress8)
REQ ang|e
REAL zx, yy, xy




xx = pnl_stress`1) j ,mth_cosd(ang|e)-**2. + pnlst2ess,6)0* (mth_si&d(aogle))*"2. k @
2*pnl_stress(≥)*mtx_sind(!ngÏe)+mth_aosd(angle)


iy"= pnl_[tress(1)p* (mth_sind(angle))**2. + pnl_stress(2) * (mth_go{d®anflg))**6. - @
2*`nl_stress(≥)*mth_sin‰a~gle)*mth_cosf(anole)


x9 = -1.*pnl_stress®1) *0mth_cosd(angle	*mtj_siNd(angle) +‡qnl_stress(2)*mth_c/sd(angle)"mth[shnd,ancld! + @
pnl_s|ress®3) * ( (mti_cosd®!ngle))*™2> % (mt`[sild(anghe))**". )

pnl_stress(1) = xp
pnm_qtbess(2) = yy
pnl_stress(3)(= xy
RETWN 0

END FUNCTION*
	
FUNCTION get_pjl_arEe()JIFTEGER iä
SYS_AlLOCATE_AVRAI(area( 1, e_ckun`)
sum_Area % 0.

FOR ( k=! TO!d_cOunt )get_element_erea( e^ids(i), area)i) )
cwl_area +=(area(i)
END FOR-


RETURJ 0
ELD FUJ√TIOn


FUN√TION get_thickle3s( t 9


REM d

RE@L thick_sum = 0n
INTEGER i, rids*VIRUAL)M
IN4EGER gen%r_elem_Ùype, dof_set_fhag, condens%_flag
INTEGER geom_fla', fÔrm_flÂg, lqm_fl`g, layer_countINPEGER mht_id, materiaÏ_lyn, materiad_dir
STRING pName[32]
REAL real_array®3)
INTEWER†dat!_typ%, mqteriah^id*INTEGERÄint_vinıe,coord_va|ue, Æote_value, fiÂld_value
SURIG string_valwe[31]J

$ SYS_ALOCATE_ARRAY8 Ù(ick.esS,$1, el%m_„oent )
SYS_ALLOCATEORRA] rils,*1- e_coUÓt )ä

db_wet_region_fr_elements ( e_#ount¨ e_idS,rids)


FOR ( i = 1hTOe_cunv )


db_getﬂregion_egfinition( @
/* rewion ID`   $   *'ri`shi),(@
/* cet namea 00     */rName, @
/* element t{pe KD  */gen‰rﬂdÏem_type, @
/* dof sgt fl!g   " */dof_SÂt_fmag, @ä/*$cnn$ense flaw    */condense_fmag,  
/* geom flag        */geom_flag, @
/* form flag        */form_flag, @
/* lam_flag         */lam_flag, @
/* layer count      */layer_count, @
/* material id      */mat_id, @
/* material linear  */material_lin, @
/* material direct  */material_dir)


db_get_prop_value( @
/* region ID        */rids(i), @
/* word of interest */36, @
/* material ID      */material_id, @
/* data type        */data_type, @
/* INTEGER value    */int_value, @
/* REAL array       */real_array, @
/* char STRING      */string_value, @
/* coord ID         */coord_value, @
/* node ID          */node_value, @
/* field ID         */field_value)


$thickness(i) = real_array(1)
thick_sum += real_array(1)*area(i)


END FOR


t = thick_sum / sum_area


SYS_FREE_ARRAY( rids )


RETURN 0


END FUNCTION


END CLASS
$ End


FUNCTION get_element_area( eid, area )
INTEGER eid, numnode
REAL area


INTEGER nid(4)
REAL n1(3), n2(3), n3(3), n4(3), area1, area2


$SYS_REALLOCATE_ARRAY( nid, 1, numnode )
db_get_elem_nodes( eid, numnode, nid )


SWITCH ( numnode )
CASE ( 3 )
db_get_node(nid(1), n1)
db_get_node(nid(2), n2)
db_get_node(nid(3), n3)
get_triangle_area( n1, n2, n3, area )
CASE ( 4 )
db_get_node(nid(1), n1)
db_get_node(nid(2), n2)
db_get_node(nid(3), n3)
db_get_node(nid(4), n4)
get_triangle_area( n1, n2, n3, area1 )
get_triangle_area( n3, n4, n1, area2 )
area = area1 + area2
END SWITCH


$ SYS_FREE_ARRAY(nid)


RETURN 0


END FUNCTION


FUNCTION get_triangle_area( n0, n1, n2, area )


REAL n0(), n1(), n2()
REAL area


REAL a,b,c,s


a = mth_sqrt( ( n0(1) - n1(1) )**2. + ( n0(2) - n1(2) )**2. + ( n0(3) - n1(3) )**2. )
b = mth_sqrt( ( n1(1) - n2(1) )**2. + ( n1(2) - n2(2) )**2. + ( n1(3) - n2(3) )**2. )
c = mth_sqrt( ( n2(1) - n0(1) )**2. + ( n2(2) - n0(2) )**2. + ( n2(3) - n0(3) )**2. )
s = (a+b+c)/2.


area = mth_sqrt( s*(s-a)*(s-b)*(s-c) )


RETURN 0


END FUNCTION