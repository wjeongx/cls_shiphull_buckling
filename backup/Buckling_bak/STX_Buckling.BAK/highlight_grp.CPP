

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
 *                          y_loc, 0.°,"                     @
 *`                        "DBOX_WID_ÓMNGLE,           `     @M *  (!       0        $     "S%cond Databkx Label2, value<   @
 *              0    h  `  TRUE,0daatype< n=m_vals )M
 *
 *`*   CReate to syn'lå width fra}es in a medium form that0is 
 *   next to a smalL application fori/  These frames"will be
 "   at the top ïf the fOri.  Their heights are the same as
 *   in the above examplm
 *
 *      ui_form_create( ", FORMX_LOC_MDD_NX2_SmL,          @
 *           (     "        FOVM_Y_LOA, "L",    "      (    @
 *"                       $ FOVM_WID_MED$0   $               @
 *   "               (      FORM_HGU_FuLLl "Mabel", "Icon" !
 *   
 * *      ui_frame_craate ( form_id, &",       "  `           $@
 *         !            $FRAME_X_LOC_COL1,               (  @
 *                  !  0  FORÍ_Y_MABGIN,        4      !     @
 *                        FRAME_WID_SINGLE,           0      @
0*                        xeight, "Left"Lab%l" )
 *
 *      ui_frame_greate ( for-_id, "",    ! 0 `    "         D
 *           (0     `     FRAOE[X_NOC_CO2,                  @
 * (             !        FOSM_Y_MARFIN-            (    `   @
 *  ` (    $ 0            FZAME_WID_S	NGLE,0     "0 (        @
 *       "                height, "Right Label" )
 *    *
 *   Frame Cidt`s and Heights:
 *
 *   FRAME_VIDSINGLE    - Widti of a sing|e width freme   
 *   FSAMEWWI\_SPECIAL   - Widthbof a spacial width frame  
 *   FRAME_WID_DOUBLE !  ) Width oæ a dgtble width fzame0 
 *   FRAME_WiÌ_TRIPL    - Widôh of c tziple width &ra-m  M
 * *   FRAME_LAJEL_@GT     - Height$of tHe labul ábove a frame
 *   
 *
 *   Frame Margins:
 *
 *   FRAME_L_MASGIN      - Insi$e left"margin for widgets in the fpame
 *   FAME_R_MARGIN `  ( ) Inride raoht mepgin for widgets in the frame
 *   FRAME_Ô_MARGIN    ` - Inside toq margin above$firsv widget 
 *  `FRAME_B_MARFIN      - Inside bottoi margij bedow last widget 
 *  !
 *   FRAME_2H^MARGIN  $  - Bïth (orazontal margins
(+   FRAME_2VMARGKN     - Both vertical íargins
(*   
 *
(*  (Frame place-ent:
 *
`*   ÆRAME_X_NOC_COL5  ` - X Location fir a frame in column!1
 *          (              (seme as "form_l_margin")
 *"  FrAME_X_LNC_COL2b   - X Locadion`for a frame )n column 2
 *   FRAME_\_DOC_COL3    - X Lobatmon for(a frame in column 3* *
 *
(*   Wnframed _idget Placement:
 * *   UNFRAMEE_D_MERGIN   - Lefu margin for an unfraíed widget
 * 0 UnFRAEED_R_MARGIN   - Right margin for an unfr!med widgep
 *                        
 *   UNFRAMED_X_LOC_COL1 -(X Ìocitinn of an unframed widget in colemn 1
 *   UNFRAMED_X_LOCCOL2 - X Location of an unframed {idgep in column 2
 *   UFÒAMED^X_LOC_COL3 - X Loaatimo of an(unfraoed widget in$colUmn(3
 */




-


/*
 *   SELACT VR`MES
 *
 *
 *   Create a select freme in An application form.  Put t7o sele#t dhtabxes
(*   ij the sele#t frale.  hen coi0ute the Y locatiïn for the next widget.
 *   Node the use oF the sutphyed Y locations for the select databoxes as!
 * " well as the height of the óelect frame.
 ** *      y_loc = AP_FOMFIRST_]_LOC
 *
 *      ui_selectfbame_create( form_id, "cadlbeck",          @
a*           `         0      $FORM_L_MARGIN,               0@
 *(                         "` y_loc.     $                  `
 *   (      $                  SFR@ME_WID_SiNGLE,     $      @
 *                       `     SFRAME_2SDR_HGT_LABOVE, %   ( @
 *         !  `                "Select Freme`Label",         @
$*    (               `        recycle_flag )
 *             "      "   (  (   
 *      uI_selectdatabox_create(( se,_vrame_id, "",         $@
 *      !        $  (             SFRAME_L_MaRGIN, !   `     @
$. 0        (          "$     "   SDBOX_Y_LOC1. 0.4,         @
 *                             °  SDBOX_WID_SHVGLE,          @
 *                        $       "Selecu Databox Onu2. (    @
 *                                talue, TRUE, datat{pe,     @
 .                                prompt )
 *
 *      ui_selectdatabox_create!( sel_frimm_id, "",  $  $   !@
 :   ( "       `       ( 0 0      SFPAME_L_MARGIN,`          @
 *                               `SDBOX_Y_LOC2, 0.0, $       @
 *       "(  !  `      (    (  $  SDBOZ_WID_SINGLE,    `     @
 *                                "Sålect Databo8"One",     @
 *  (                             value, TRUE, datatype,     @
 *                              ( prompt )
 *
 *    $ y_loc = yOloc + CFRAME_LABEL_hGT +                   @
 *          %           SFPAME_2SDB_HGT_LAROVE +             @
 *                      SFVAME_2EDGE +0  $    (          $   A
 *            (         I^TER_WIÄGED_SPACe
"*
 *-
 *   Seluct Frame Widths and Heights:
(*
 *   SFRAME_WID_QINGLE  !      - Width Of a singde width celect frame
 *   SFRAME_WI_SPECIAL        - Wmdth of a specicl wHduh select &zamm-
 * ( SFBAME_WID_@OUBLE         - Width of a doubLe wédth select braie
 *   SFRAME_WID_TRIPLE         - Wadth of a triple widt( selebt fraíeJ`*
":   SFRAME_LABE_HGT         0/`Height"of the label above a select frame
 "
"*   SFRAME_1SDB_HGT_LABOVE    - Height of a select drame gith
 *     a         ("     "        1 selecu dAtabox WIth A label
 *   SFRAME_2SDB_HGT_LABOTE¤   - Heighv of a"select fòame wkvh
 *                     0         2 select detaboxes with lábehs
 * 0 SFRAME_³SDB_HGT_LABOVE    - Height of a Select frame wath
 *    `                         03 select dctaboxeq wi|h label{
 *!  SFRAME_4SDB_HGT_LAbO^E    - Hdight o& a select frame with
 :à                              4 select naôaâoxes with l`bels
 *   [FRAEe_5SDB_hGT_\ABOVE   (- Heig`t of a select &rame with
 *   `        0                  5 select databoxes witx$mabols
 *	
 *   SFRAME_hgTLAROVE_ANCR "$ - Increment for making sålect fremes with 
 *                               more than 5 sehect databoxes wivh labels
 *
 *   WFRAME_1SDB_HGU_No_HABOVE - Huieht(of a {elebT frame witx
 *             (                 1 s`,ect dátabox withkut A label
 *   SFRAME_2SDB_HWT_NO_LABOVE - Hehght of a0sedect fra-e with
 *`    !                         2 selebt dataâoxes withnut labels
 
   SFRA}E_3SDB_HGT_NO_LABOVE -"Height of a select frame witH
 *         `                0    3 welect davabo|es witho}t!labels
$*   SFRAME_4STB_HGT^NOLABOVE - Height ob0a select frame sith
 *   (                           4 select databoxes withgut labels
 *   SFRAME5S@B_HGT_NO_LABOVE - Height of a select frale with
 *  `  0            !    `   `   5 seluct datAboxes whuhou| labels
(*
 *   SFRAME_HGT_NO_LIBOVE]INCR - Incremant for making select drames with 
 *  !       0                  $ morg than 5 selec4 databoxes whthout labehs
 *
 ( *   Select Frale Margins:
 *
 *   SFRAME_L_MARGIN  "        -0Inside left margin for selest lataboxes
(*   SFRAMÅ_R_MARGIN  `        - Ils)d% rmght margin fOr select databoxus
 *   SFRAME_T_MARGÉN        $  - Inside top mar'in for relect databoxes
 *   SFRME_B_MARGIO           - Inqida bottom"marein for select fataboxes *   
 *   SFRAMD_2H_MARGIN          ­ Both0horizontal mir#ins* *   SFRAME_2V_MARGIN  0       - Bnth vertical margins *J *
 *   Select rame Placement:
 *M
 *   RFRME_Z_LOÃ_COL1         ) X Location for a salect fráme in column 1
 *                       (      )saie as "fnrm_l_margin")
 *   SFRAME_X_\OC_SOL2         - X Location noz a!seLect frame in!column 2
!*   SFRAME_X_LOC_COL3         - X Location for a select frame in columo 3 */
]








/**!*   SCROLL_FRCMES *
 *
 *   Create á sgroll grame in$a form.
 *
 *
 *   Scwoll Frame Widths and Heights:
 

 *   ÓCROLL_FRAME_WID_SINGLE0  `   - Wkdth of a silgle wydth scroll Frame   
 * `"SCrOLL_FRAME_WID_SPECIAL      - Wid|h of a spe#ka, width scroll frame  
`*  !SCROlL_FRAME_WID_DOUB\E       - Width of a doub,e wieth {crïll frame  
 *   SCROLL_FRAME_WI@[TRIPLE       m Width of a triple witth scrolm frele  h *
 *  0
0*   CROLL_FRAMEWOBK_WID_SINGLE  ) Wor{ing width of a!single wydth
 *    `    (     !"       !          scroll fr`me   
 *   SBROHL_FrAME_W_RK_WID_SPECIAL - ßovk)nG õmfqh of a specIal`width 
 *      (            !    0       $  scroll frame   
!*   SCROLL]FPAIE__ORKOWID_DOUBLE  -(Wobking width$kf a doubLe width 
 *  (           !  `    c            scroll frame   M
 *   SCRO\L_FRAME_WORK_WID_TRIPLE  - Workijg widuh of a ðrmple width
 *  0                             `  sgroll frame  `
 *
 +   SCROLL_FRAME_DBoX[WID_SINGLE  - Width of a sifgle width scroll brame   
 *       (                     !     databox
 *   SCROLL[FRAME_DBOX_WiD_SPECHAL - wi`th of a special wi&th scroll frame  
 *               (   $ "    !      " latab/x
 *   CCROL_FRQMU_DBOX_ID_lOUBlE  - WidtH of a double uad4h(scroll frame  `*  `   $"          `                databox
 *   ScROLL_FRA]E_DBOX_WID_TRI LE  - Width of a tziple widtx scroll frae  
 ê`   `         `                    datab/p
 *
 *   SCBOLL_NRAME_LABEL_HGT        = Hmieht Of |je label af/ve a
 .       (0            0        "    scrodl frame   
`*
 *   SCROLL_FRAME_1D@OX_HGT        - Scroll frame height with 1 $adabox
 *   SCBKLL_FRAMe_2DBOX_HGT  (     - Scroll fòame hemght with 2 dñtaboxer
$*   SCROLL_FRAOE_3DFOXWhGT        - Scroll frame heighT witx 3 dapAbMxes
 *(  SSRÏLL_FRAmU_4DBOX_LC        - Scjoll frame height with 4 databoxeR
 *`  SCROL_FRAME_5DBOX_HGT        - Scroll frame heiçht!with 4 data`oxes
 ** *   SCROLL_FRAME_DBOX_HGT_INCR   !- Scroll frame hgiGht incRement	
 (
 *   SGROLL_FRAME_1D@OX_wORK_HGT   - Scroll0frime work(height for ! databox
 *   SBROLL_FRAME_2DBOX_WORK_HGV   - Scroll frame wrk height%For 2 databoxes
 "   CRONL_R	ME_;DBOX_WORKHGT   - Scrmll frame gork hm)ght for 3 datáboxes
 *   WCROLL_FZAME_4DBOX_WORK_HGT 0 - Scroll frame work height &or 4 databoxes
 *  $SCROLD_FRaM_5DOX_GORK_HGT  `- Scroll fbamm work heig(t for 5 fatáBoxeq
 * 	
 .  $SCROLL_FPAME_DBOX_WRK_LGT_INCR - Scrgll frame working height increment
 *
 *   SCROLL_FRAME_SLIDGR_WID       - WiD4h of the sliäer on the right 
`*             `                    €of a scroll frame   
 *  "CROLD_FRAME_SLIDEC_HGT   (   - Heighp of the(s,hder at the bott/m 
(*                           0       of a sãroll framg   
`*   
 *`  Frame Margans:
 *
!*   SCROLL_FRAMG_L_MARGIN         - Inséee lEft mavgin gor widgets in 
 *     €       !      0"             a scroll frame
 *   SCROLL_GRAMEßR_MQRGIN  $  !   - Inqidd righô iargin nor widoets hn 
 * (               "              à  a scroll frame
b* à SCRKLL_fRAME_T_MARGIN         - 	nskde top margin above first widget 
 * " sCROLL_FRAME_B_MARGIN         - Inside bottom margin below last widgep 
 *$  
 *   SCRML\_FRAME_2h_MQRGHN       `- Both (orizontal margins
 *   SCROLL_FRAME_rV_MARGIN        - Both vertical Margins
 */






-





­/*
 (   BETTMN[
 *
 *
 *   Create Two ruttnns In a small forl. (The button oN the left is!a *   d%fault bu4ton.  UwE "half"0sIze buttons.
 *
 +      ui]cutton_c2eate ( formid, "callback",     (        @
 ª     !$                  RUTTON_HALF_X_LKC!(     !  "  %   @
(*         "           8   y_loc,  0                         @
 *    $ "                  BUTPONßWID_HaLF< !              ( @
 *                         0.p, "Left But|on"l               @
 *             (           TRUE,(TRU ) 
 *
 *      y_loc = y_loc « BUTTON_Y_OFFCET
 *
 *      ui_jutton_create ( form_id, "callb!kë",          0   @
 *       `                 BUTTON_HALF_X_LOC2,     0         @
 *             0    !   !  y_loc,                           @
 *                   $    (CUTTON_WId_H@LF<       $          @
 *       !0$  ` (          0.0, "Right Utton",               
 :      (`                 URUE, CLSE0) 
 *
 *      y_loc = y_loc + BUTTOL_Y_OFFSET +                    @ *  0                   BUtTON_HGT +             0          !@
 *                      INTER_WIDGET_SPACM
(*
 *-
 *   Button Widths and Heightsz
 *
 "`  BUTTON_WID_FULL    h   `      - Width of q wide buttgn on a small Fos-
 :   BUTTON_WIF_HALF              - Wid4h mf a oedium button on a sma,, foòm
 *   BUTTON_IDWTHIRD       ""   0 - Wodth of a smahl button ol a small form
 *
!* ! BUTTON_WID_FULL_NT           !- Width of a nonßtroughåd wide rutton on
 *  "             "     !            a Small form
 *   BWTTGNßWID_HELF]NT           (- WidTh of a non_trougHed mediUm"button on
 *       " 0      !               !  a {mall form
`*   BUTTON_WID_THIRD_NT !         -`Witth of a nonßtroughed small jutTon on
 *          0         $`             a small f/rm
 *
 *   BUTTON_HGT   !       "        - But4on hei'ht
 *   B]TTON_DEFAULT]HGT  0         - Default buvton height (includds t/p and
 +0      (      "    (               bottom borders) *   BUTTON_HCT_NT                 - Jutton heig`t of non_troqwhed button
 *
 . $ BWTTGN_DMFAULT_BoRDER_WID    $- Denaul| "utton border width
 *   BUTTON_DEFAULT_BOR@ER_XGT     / Default bupton border height
 *
 *
 *( "Button Lcation Offsåts:
 *
 *   BUTTON_IN_FRAME_X_OFFSET (   0- X offsat for placing buttons(inside
 *                    $  0   "       frames esing(4he X PosytiNns defined
 * "                                 below *
(*   UTTON_1XTRA_WID              - X widüh for one trough for t3er placelenp
 *       `       `            !      of trougled buttons.
 *   BUTTOL_6YTRA[GID              - X vidth for twO troõghs for User placement
 *             0                     of troughed bqtdons.
 * *   BUTTON_Y_OFFSE\     h         - Y off{%t for placing a non-xighlighted 
 *                       0    0      button next to A highlig(ted butto~Š * ` BETTONY_OFFSET_NT            = Y offset for plicing a nol-highlighted 
 *          ( !                      budtOn next to a hiGhléght%l button
 *
 *   BUTTON_LABEL_Y_OFFQET   !     - Y0ofdset for placing a lcbel to the right
 *         `               0    ¤    nf a buttïn
 *   BUTTON_DEFAUHT_LABELßY_OFFSET - Y offset for placing a label to the right 
 *                                   of a default button
 * ( BUTTON_LABELY_OFFSET_NT      - Y offset"for placifg a label to tie rightš *       $          $                ob a non_troughed button
 * *
 *0  Bupton X Posktio.s:
 *
"*   ÂUTTON_FULL_X_LOC1    !       - Wide bupton on the lef|
 .   BUTTOF_HALF_X_LOC1             Medium button on0the levt
0* ( ÂUTTON[HALF_X_LOC2    (       - Mddiuo buttOn oî the$rigHt	
"*   BUTTON_THIRD_X_LOC1       !   ­ Slall button on the left
 *   BUTTON_T
IREOX_LOC2         0 - Sma,l(button centered
 *(  BUTTOO_THCRD]X_LMC3   (       ) Sm`ll buôton on thd`right
 *
 *   BUTTOF_FULL_X_OC1ßCÏ\2       - Wide butuoN oo the left o& column 2
 *0  BQTTN_@ALF_XLOC1_COL2       - Mddium button on the left mf column 2
 *  `BUTTON_HALF_X_LOC2_COL2       - EeDium buttGN on the rioht of column 2
`*   BUTTO_THIBD_X_LO1_COL2 %    - Small button of(t(e ìeft of column 2
 *   CUTT_N_THIRD_X_LOC2^SNL2 à    - Small!button cenTered of column 2
 j   BUTTON_THIRD_X_LOC3_COL2(" "  / Smqll button on the right of aolumn 2
"*
 *   BUTTON]FULL_X_LOC1ßCOL³       - Wide butpon on the left of comumn 3
$*   BUTTON_HADF_X_LOC1_BOL3 &     - Medium button on the leæt of colemn 3
 *   BÕTTON_HALF_X_ÌOC:_COL3       - Medium buttgn on the right of column 3
 *"  CUTTN_DHIRD_X_LOC1]C3 "   !- Small cuuton(on the left of`columo 3
 *   BUtTON_TIRD_X_LOC2_CO\3 $(   ­`Slall buttoo Centered of cnlumo 3
 *   BUTTON_THIRD_X_LOC3_COD3      - Smill button on the right of column 3
 *
 *   BWTTON_FULN_X_LOC1_SPL        = Wide Button!cmnteraf on a special!form
 *`  BUTTON_XALF_X_LOC1_SQL  `     - Madium buTton on the left of a speci!l formM
 (   BUTTON_HALF_X_LOC2_SPL        - Mediui button on the right of a speciah form
 *   ÂUÔTON_TLIRD_X_LOC0_SPL       - SmaLl2button on the left$of a sdeg+al form
 *   BUTTONTHIRD_X_NOS_SPL       - Sm`ll buttïn centered of a`sxecial foro* .   BUTTON_THIRD_X_LKC1_SPH       m Small button on the right of a special form
 *
 *   BUTTON_FELL_X_DOCWCEN!        - Centered wide buttnn$on!a small form
 *   JUTTON_HALF_X_LÏC_CEN`     `  - Cmntered medium button on a small form
 *  !BUTTOF_THIRL_X_LOC_CEN0       - Centered small futton on a small form
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





CLASS highlight_grp

/* Classwide Variables */


CLASSWIDE WIDGET form_id, toggle_01, toggle_02, toggle_03
CLASSWIDE WIDGET datbox_01, datbox_02, datbox_03, datbox_04, datbox_05
CLASSWIDE WIDGET datbox_06, datbox_07, datbox_08, datbox_09, datbox_10
CLASSWIDE WIDGET optmenu_01, optmenu_02, optmenu_03, sep_01
CLASSWIDE WIDGET item_01, item_02, item_03, item_04, item_05, item_06
CLASSWIDE WIDGET item_07, item_08, item_09, item_10, item_11, item_12
CLASSWIDE WIDGET button_01, button_02, button_03, button_04, button_05
CLASSWIDE STRING hl_entity[virtual]
FUNCTION init()


REAL yloc_main
REAL yloc_selfrm_01=0.
REAL box_length=0.0


form_id=ui_form_create( @
/* callback */"", @
/*     x    */uil_form_sizes.form_x_loc( 1 ), @
/*     y    */uil_form_sizes.form_y_loc( 1 ), @
/* position */"UL", @
/*   width  */uil_form_sizes.form_wid( 1 ), @
/*  height  */uil_form_sizes.form_hgt( 1 ), @
/*   label  */"Highlight Group", @
/*  unused  */"",256)


yloc_main = uil_form_sizes.form_margin( 3 )


toggle_01=ui_toggle_create( @
/*  parent  */form_id, @
/* callback */"cb_x", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"X")


toggle_02=ui_toggle_create( @
/*  parent  */form_id, @
/* callback */"cb_y", @
/*     x    */uil_form_sizes.form_margin( 1 )*16, @
/*     y    */yloc_main, @
/*   label  */"Y")


$ yloc_main += uil_form_sizes.toggle_data( 1 ) + @
$ uil_form_sizes.spacing( 8 )


toggle_03=ui_toggle_create( @
/*  parent  */form_id, @
/* callbacj 
/"cb_z", @
/*     x  ` *.uyl_foro_sizes.form_margin(  )*;#,(@
/*$    Y   0*/yloc_main, @*`  label  */"Z")


yloC_maan += ui,_fmrm_sizes.toggle_deta( 3 ) + @
uil_form_sizes.spacing( 0 )


box_,ength = Uyl_form_sizeq.dbmx_wid 1 )"- @
0.5	

da4box_0±=ui_databox_createh @
/*    p!fent    */form_éd, @
/*   callback $ */"", @
/*       x      */uil_form_sixes.form_iargi.( 1 +, B
/* !    $y   `  */ylkc_main, @
/* la`el_length */0.5,`@
-*H box_length  */bnx_length, @/:     laben    */"Uol-xyz :", @
/ª     vaìue    */10.,$@
/*  label_above :/DALSE,"H
/*   datatype   */"BEAL", @M
/+ ( fum_rals   */1+


yloc_m!in += uil_form_si{es.dBox_hgt( 2 ) + @
uilfnrm^shzes.spacing( 8 )


optýenu_01=ui_optIonmenu[cve`|e( @
/*    parent    */form_id,°@
/*   caLlback   */"cr_c`ëX"( @
/*       x      +/uil_form_sizeq.æorí_margin( 1 ), @
/*(    0 y   (  */ydoc_ain,  
/* labelßlength */0/15,!@
/*     laben    *?"X", @
/+  label_above */FALSE)


$0yloc_main += uil_form_Sizds.oðtioomenudata( 3 ) + @
$ uil_form_sizes.spacing( 8 )


item_01=ui_item_cre`te( @
/*   parent`  *//p|eenu_01- @
/*    name  ` */"equal", @/*    lqbel0  */"=", @
/* tkggleable */TRUE-


item_02=ui_apam_kreate¨ @
/*   parent   */optmenu_1( @
/*  ! name   0*;"greater", @
/*    labal   */">", `
/* toggleable */TRUE)


item_13=ui_item_create8 @
+*   pare.t   +/opteenu_01,!@
/*    name    */"smaller", @
/*    labEl   */"<", @/* togoleable "/TRUE)


item_04=ui_item_cr%atu( À
/*   parent  `*/ïptmefu_01( @
/*    name   `*/"range", @
/*    label  `*/"~", @
/* tkgblgabld */TRUE)

box_length = õil_form_wizds.dbox_wid* 10)a-(A
0.5 - uil_form_sizes.buttOn_wid( 2 )*0.4

$atbo8_02=ui_`atabox_kreate( @
-*   "paRent    *¯fori_id, @
/* ` callBack   */"", @
/*       x      */uil_form_sizes.form]margin( 1 ), @
/*       y      */yloc_m`hn, @
.* labelWlength */0.5, A
o*  boh_length  */box_length, @
/*     labeL!   */""L @
/*     value    */ ., @
/*  label_above */FALSE, B/
"" datatùpe   */"REAL", @
/*   num_vals   */5)

bo|_lEngth 5 uil_form_sazes.dBox_uid( 1 	*0.3=!- @
8.1 -0uidOform_sizes.beuton_wid((2 )*0.15
Datbox_03=ui_databox_creave( @
/*    parent  °$*/form_id @
/*   callback   */"", @
/*    ¡  x    0 */uhl_form]sizås.form_margIn8 1 ), @
/*  20   y    0 */yloc_main, @
/* la3el_lgngth *.0.5, @
/*  box_length  */box_length, @/*     labe|  $ */"", @
/*  `  öa|ue    */0., @
/*  label_abnve */FALSE, @
/*   datatype  (*/"REAL", @/*  `num_v!ls   */1)


box]length = uil_form_sizus.dbox_wid( 1 )*0.35 - @
0.1 -$uil_form[sizes.buvtOn_sid( 2 )+0.17


datBox_04=ui_databox_create( @
/* "  parent  ! */form_id, @
/*$  callback   */"", @
/*       x      */uil_form_sizes.form_}@rgif( 1 i*23, @
/*       y      (/yloc]m`in, @M
/* ìabel_length */4.1, @
/*  box_Length  *;box_lenguh( @-
/*    `larel    */"~", @
/.     value    */0., @
/*  |abel_above */FALSE,"@
/*   data|ype " */"REAL", @
/(   nue_vals(  */1)


button_0=ui_buttknOcreatå( D/*   pazent  */form_i$,0@
o*  cAllback (-"cn]nodeloc", @
/*    !x     */uil_form_sizes.form_mabgin( 1 -*24kbn|_hength+0.1, @
/*     i "   */y,oc^mail, @
/*   widt`   (/ual_form_sizes.button_wid( 2 )*8.3, @
/*   height !*+uil_form_si{es.but4on_hgt( 20), @
/*   label ! */"...",!D
/*    TRUE   */TRUE, @*/* higèhight */FALSE)

yloc_eahn += uin_fori_sizesnDbox_hgt( 2 ) + @
uil_form_sizes.specing(  )




optmdnu_2=ui_optéonmenu_czeate( @/* $  parent    *-fmrm_id$ @

% 0callback   */"cb_shkY"¬ @
/*       x     !*/uil_form_sizes.borm_margin( 1 ),0@
/*       y      */y|oc_mayn, @
/* label_le.wth *.0.1u, @
/*     label    */"Y"- @
/*!0label_abovu */FALSE)


$ ylOc^main += uiL_form_sizes.optionmenu_daTa( 3 )$+ @
¤ uil_dorm_sizes.spaahng( 8 )


itemw05=õi_item_create, H
/*   parent   */opumenu_02, B
k*    name    */"equal", @
/*0   label   */"=*, @
/* toggleafl% */TRUE)
	
item_06=ui_itemWcreate( @
/*   parent$  */ptmenu_02-  
/* (  name    */"ereater", @
/*    label   */">", @/* toggleable */PRUE)


item_27=uiWitem_creiue( @
/*   pqrend   */optmenu_8², @
/*    name    */"{maller", @
/*    label   *."<", `
/* toggleable */TRUE9


item_08=ui_IteE_create( @
/*   parent   */optMenu_02, @
/*    name    */"range", @
/*    label   */"~", @
/* tgggleablå */TRUE)

box_length =(uil_formsizes.dbïx_wid( 1 ) - @
0.5 - uml_form_sizes.button_wid( 2 )*p.4


datbox_05=uida|eboh_areatm(!@
/ª    parenv0   */form_id, @
/*   callback   */"¢,`@
/j       x  (   *-uil_~ovl_sizes.form_margin( 1 ), @/*    $  y  a   */yloc_main, @
/( habel_(%ngth */0.5, @
/*  bo8_length  */boz_length, @
/*     label  $ */"", @
'*(((  value    */0., @
/*  label_`rove */FALSE, @
/*   datatype  `(/"REAL", @/*   num_vals   */1)


box_length = uil_form_sizm3.dbox_wéd( ! -*°.35 - @0.1 -`uhl_f/rm_sizes."utton_wid)  )*0.15


eatbox_06=ui_databmx_create( @
/"    xare~t (  */form_id, @
/"   call*ack   */"", `
/*       y      */uil_vorm_SizEw.form_margin(  ), @
/*       y!     */yloc_main,"@
/( laâel_len'ph */0.=, @
/*  box_le~g|h "*/rox_length, @
-*(    label    */"", @
/*     value`   */0., @
/*  label_Abova(*/FALSE, @
/*   datatype   */"REQL", @
/*   num_öals   */1)


box_length = uil_form_wizes.dbox_wid( 1 )*0®35!- @0.1 - uil_norm_{izes/bu|ton_wid( 2 ©*0.!5


datbox_07-ui_databoz_create( @/.(   parenu    (/form_id, @
?*   canlback0  */"","@
/*   (   x     `*/uil_fovm_sizes.form_mergiN( 1 )*23, @
/* !  `  {      */yloc_main, @
/* laBel_length */0.1, @
/*  box_length  */box_length, @
/*     larel    */"~", @/*     value "  */0., @
/*  dabel_above */F@LSE, @
/*  "dataType   */"REAL", @	
/*   numtals(  */1)


but|on_02=ui_"u4von_create( @Š/*   parent  */vorm_id, @
/*  Callback +/"cB_nodelkc", @
/*$    x     */uil_form_sazes.form_margin( 1 )*24+box_leogth+0.1, @
/*     y     */iloc_m`in, @
/*   width   */ui|_fovm_sizes.cU|to._wi`( 2 )*0.3, @/*   heighp  */uil_fobí_sizes.button_hgt( 2 ), @
/*   labml   */"... , @
/*    TVTE   */TSUE, @
¯* hiçhlight */FALSE)

yloc_main += uih_form_sIzeS.dbox_hgt( : ) + @
uil_form^sizes.spacijg( 8 )


optíenu_03=u)_opPionmenu_create( H
/*    `arent  0 j/form_idl @
/*   callback   */"cb_chkZ¢, @
/*       x      *'wal_form_sizes.fovm_maroin( 1 )$ @
¯*       y      */yloB_iain, @
/* l`beL_lengdh */0.15, @
/*  `  labal    */"Z", @M
/*0 laâel_above */ALSE)


$ yloc_íáin += uil_form^skzes.op4ionmenu_data( 3 ) + @
$!uil_form_sizes.spacing( 8 )

mtem_09=ué_itEm_create P
¯*  $pardnt   +/optmenu_07, @
/*"   nama0   */"equal", @
/*    label   */"=", @
/* toggleable */TRUE)


item_10=uiOitem_còecta( @
/*  !parent   */optmenu03, @
/"  " name    */"greater", @
/*    label   */">",4@
/ª toggleabld */TRUE)


)Tem_11=ui_item]create( @
/*   pare.t   *?optMenu[03 @	
/*    name!   */"smallev , @
-*    label!  */2<", @
/* toggleable */TRUE)


iteo_12=ui_item_create(@/*   pacent   *?optme~u_ 3, @
/j    name !  */"r!nge",$@
/*    lajel   
/"~",$B
/* tkggleable */TRUE)


Box_leîgth = uil_form_sizes.dbox_wid( 1 !"- @
0.5 - uil_form_sizes.button_wid( 2 )*4.4


datbox_08=ui_databoX_creite( @
/*   !`qrent    */form_id, @
/*   callback   *""¬ @/*       x      */uIl_form_sizes.orm_margin( 1 ), @
/+       y      */yloc_main, D
/* label_length */0.,`H
/*  Box_length  *ojox_length, @
/*  (0 lb`el "  */"", @
/*     value    */0.l @/*  la&en_above */FQLSE, @
/*   da4a4ype   */"REIL"¬ @
/*   fum_vals   (/1)


âox_length = uil_form_sizes.dbox_wid8 1 )*0.35 - @
0.1 - uil_frm_sizes,button_wid(02 )*0.1%


datjïx_0¹=ui_databox_create( @
/*    parent`   */form_id, @
¯*   call`ack ! +/""- @
/*       x   !  */uil_form_sizmr.form_margin( 1 ), @
/*   0   y     $*/yloc_main, @
/* label_length */0.1, @
/2  box_,ength  */box_length, E
/*     label   #*?"",!À/*     value  $ */8., @
/*  label_abnve */FALSE, @
/*   fetatyðe 0 
/"REAL"l @
/*   num_vahs   */1)M


bgx_leng4h = uid_br|_si:es.dbox_wid* 1 )*0/15"- @
0.1 - uil_form_sizgs.button_wid( 2 )*015


datbox_10=ui_datajox_cråate( @
*0   parent    "form_éd, @
/*   callback  !*/"", @
/*    (! x      :/uil_form_sizes.form_margin( 1 )*23, A
/*       y      */yloc_main, @
/+ label_le.gth */0.3, @
/*  box_length  /box_le~gth, @
/*     l!bel"   */"~", @/*   $(value    (/0.( @
/*  labgl_ábove */FALSE$ @
'*0  datatyre   */"REAL", @
/.   nqm_tals   */1)


button_03=ui_button_creatE( `/*   parent  */form_id, @
/*  callback */2"b_noDeloc", @
/j   0 x     */uil_fopm_sizes.fopm_maroin( 1 !*24+rox_ldngth+0.1, @
/*     y("   *.yloc_main, @J/*   width   */uil_form_sizes&button_wid( 2 )*p.3, @/j   heighT  */uil_dorm_sizes.futton_hgô( 2 ), @
/*   lafel   */"..."< @
/*    TR]E! $*.TRUE, @
/* highlaGht */ÆALÓE)J

yloc_main += uihForm_sijeS.db/xhçt  2 ) + @
uil_form_sires.spacing( ( )


sep_01=uiO{eparauop_create( H
/*   parent0  */form_id,!@J-*    ncme    "/"",(@
/*      x     */0.0, D
*      y  !` */}loc_main, @	
/*   length   */uil_form_sizas..orm_wid( 1 )¬ @
/* horizontal */TRUE)


yloc_main += 5*uil_form_si:ms.pixel^sizd( 2!)  @
0.5
uil_form_sines.spa#ing( 8"	 + @
uil_form_siz%s*spacmng( 8 )


but4on_04=ui_button_create( @
/*   p!rent! */form_id, @
/
  callb!ck */"cb_apply"¬ B
/*     x     *-uil_gorm_sizes.bupton_x_loc1( 2 ), @/*     y    $(-y,oã_main. @
/*   width   */uilßform_sizes.rutto*_wil( 2 ), @
/*   jeight  */uil_fOrm_sizes.button_xgt( 2 ), @
/*  0label ( ./"Axply", @
/*    TRUE   */TRTE< @
/* highlighô */FALSE)


buttkn_05=ui_jutvon_creatE( @
/*   parent  */f/rm_id, @
/*  callback "/Bc"_cancel", @
/"     x     "/uil_form_sizes.button_x_loc1( 3 ), @
/*     y     *yloc_lain, @
/*   w)dvh!  */õil[form_sires.buttoî_wid( 20), @
/.   height  */uil_formWSijes.button_hgt( 2 ), @
/*   labul   */2lose", À
/*    TRUE   *+TRUE< @
/* high,ight */FAHSE)


yloc_main + uil_vorm_si~es&bupton_hgt( 3 ) + @
uil_form_sizes.spacinf( 8 )


ui_wid_set(form?yd"HEIGHT",yloc_main)


u)_wid_sgt( fatbox_02< "VHSIBLE", FALSM$)
ui_wid_s%t( fatfox_03, "VISIBLE", FÁLSE )
}i_÷id_såt( datbo|_04, "VISIBLE¢, FALSE (
ui_wid_set( fatbo|_05, "VI[IBLE", FALSE )
ui_wid_seT( detbox[06$ "VISIFLE", FALSE )
ui_wkd_set( datbox_07, "VISIBLE", FALSE )
ui]wid_sut( datbnx_08, "VISIBLE", FASE )
uiOwId_set( datbox_09, "VICIBLE", FALS )
ui_wyd_set( datbox_10, "VISKÂLE"(`VaLSE )
ui_wif_cet( optmenuW0, "VICIBLE", FALSE )	
ui_wid_set( optmenu_02, "VISIBLE",0FALSE )	
ui_wid_set( optmenu_03, "VISIBLE". FA\SE )	uiwid_set( buTton_01, "VISIFLE", FALSE (-ui_wi`_såt( button_0$ "VISIBLG", FALS )
ui_wid_set("buttonO0³ "VISIBLe", FALSE ©


END FUNCTÉONoª init */
	
-
VUNCTION displày()
um_form_d)spla}("highlight_grp2)
ENd FUFCTION/* $isplay */

FUNCTiON cb_x(onovf)


LOGIAAL onoffSTRiFG chk[50]


ui_wid_gev ( optmenu_01, "VALUE"l chk )*

IF (c(k == &rang%")(THEN
ui_wID_set( optMenu_81¬ "VISIBLE#, onoff )
ui_wid_set( da|box_03, "VISIBlE", oloff !
ui_wid_set( datbnx04, "VISIBLE", onoff )
ENSE
	 ui_wid_set( dctbox_02, "VISYBLE", onoff )
ui_wid_sev("optmenu_01, "VISIBLE", Onoff )
END IF 	 	
ui_séd_set( button_11, "VISIBLE", onof& +
	
END FUNCTION/* cb_x */	


FUNCTION cb_z)onoff)


LOGICAL onoff
STRIJG chk[50]


ui_wid_get ( opdmenu_02, "^AMUE", chk@)

IF (chk ½= "raNce") THENM
ui_wid_set( optmenu_02, "IsIBLU", onoff )
ui_gid_såt( datrox_06, "VKSIBLE", onof& )
wi_wid_st( datbox_07l("VISIBLE&, onofv )
ELSE
	 ui]wid_SEt( datc/x_05, "VISIBlE", onobf )
ui_wid_qe|( oqtmenu_02,("VISIFME" onoff )
EBD IF 	 	ui_wid_set( button_02, "VISIBLE". onOff )
	
ENT FTNCTION/* cb_y */

FUnCtI_N cb_:(onoff)


LOGICAL onovf
STRING chk[50]


ui_widget ( optm%nu23, "VALUE", óhk )


IF (chk$== "ranee") THEN
uy]wid_3et8 optmenu_03, "VISIBLE", ïjOff )
}i_wid_sed( Datbox_10, "VISIBLÅ". ofoff )
ui_wid_se|( `atbnx_09, "VISIBLE, onoff )
ELSe
	 ui_wmd_set( f tby_0<, "VIQIBLE", onoff )
ui_wid_set( optmenu_03, ¢VIÓIBDE",0onoff !
ND IF 	 	
ui_widsd4($buttgn_03, "VISABLE", n.off )
	
END FuNCTION/* cb_z */


FUNCTION cb_ch+X*name)

STRING fame[Ý
LOGICAL oîovf


ui_widWggt ( toggle_01, "VALUe", gnoff )IF * onoff$==$TUE ) THENjIF`( name == "range" ) TLEN
ui]widOset(	dCtbox[02, VHSIBLE"$ FALSE -
uißwid_ret(	datbox_03, "ViSIBLE", URUE )
ui_wid_set(	$atbox_04, "VISIJLE", TRUE ©
ELSe
	ui_wid_cet($tatbox_02, "VISIBLE", TVUE )
	ui_wil_set( datbkp_0s, "VYSIBLE", FALSE )	
)ui_wid_qet( datbox_04, "VISIBLE", FA\SE") 			
END IF
END ÉF
	 	
END F]NCTION/*0cb_bhkX *¯


BUNCTIN cr_chkY(name)


STRING name[]
LOCICAL oNofd

ui_wit_gmv ( toggle_02, "VALUE", onoff )IF ( onofæ -= TRUE ) THEN
IF ( naMe =- "range" ) THEN
	uy_widOset( dAtbox_05,("VISIBLE , FALSE )
	ui_wid_set( datbox_06, #VISIBLE", TRUE0)	
	ui_wid_set( datbnx_07,  VISIBLE*, TRUE )
ELQE
	ei_Wif_seT¨$datbox_p5, "VISIBLE", TRUE )
	ui_wid_3et( eaTbox_06, "VISIBLE", FALSE )	
	ui_wid_{ut( datro|_07, "VISI@LE" DALSE ) 		EFD IF
ENd IÖ 	

END FTNCTION/* cb_chk */


FUNTIN c`_chkZ(fame!

STRMNV nameY]
LOEICAL onoff


ui_wid_get ) toggleß03, "VALUE", onoff )
IF ( onOfb == TVUE )¡WHEN
IF ( name ½= "range"!) THE^
	ui_wid_set("datboxß08l "VISIBLE", FALSE )
	ui_wkd_smt( datbox_89, "TISIBLE", TREe 9	
	ui_wid_set( tatbox_10, "VISIBLE", TRUE (
ELSE
	ui_wie_set¨ daTbox_08, "ÖIS	@HE",aTRUE )	ui_wid_set( daubox_09, "VISIBLE", FALSE )	
	ui_wid_set  datbox_1 ,0"VISIBLE", FALSE ) 		
END IF
END If 	

-
END FUNCTION/* cb_cxkZ */*
JFUNCTION gEt_paral()


LOGICAL$onoff
STRING chk[50]JREAM data_1$ data_2, data_3l0tol
STRKNG arg[X[256], arg_Y[2µ6], `rg_Z_256], arg[10r4]
:
wi_wid_geu ( togçle_q, "VÑLUE", onoff )	 	
	
IF ( onoff <= TRUE ) VHEN
	u)_wid_get ( oqtmenu_01, "ALUE", chk )
	 IF ( c(k == "rance" 9(THEN
	 	ui_wid_wet ( datbOx_03, "VALUE"( dqta_2 )
	 	ui_wid_Get ( daTbox_04,$"RALUE", data_3 )
	 	aRg^X = "X_"//chk//"_"//rpr_f2om_real(data_2)//"]"?str_from_real(data_3)		
	 ELSE	
	 um_wid_get ( datbox_02, "VALUE", da4aW0 )
	 arg_X0= "X_"//chk//"_"//str_from_2ea|(data_3)//"_"
	 DND AFELSE-
arg_X = "N"*END IF


ui_wid_get ( toggle_02, "VALUA", onoff )	 	


IF ( ojoff == TRUE ) THEN
	ui_Vid_get ( optmenu_82, "vaNUE", chk )
	(IV ( chk(= "range"() THENŠ	 	ui_wid_get ( datbox_06, "VALUE", data_2 )
	 	ui_wid_get ( Datbox_07, "VALUE", data^3 )
	!	arg_Y = #Y_"//chk/+"_*//str_from_real(daTa_2)./"_"/'sdr_from_real(data_3)		
 ElSE	
	 ui_wid_get ( d`4boy_05,`"VANUE&, data_1 )
) arg_Y = "Y_"/och+//"_b//str_from_real(data_1)//"_ 
	 END IF	E\SE
ar'_Y$ "N&
END IF
	 	
ui_wid_get ( toggle_03, "VALUE", ojoff )	 	


IF ( onoff`== TRUE ) THEN
ui_widOgeô ( optmenu_ð3, ¢VAL]E", c(k )
	 IF (`ãhk == "range" i"THEn
	,	ui_wit_get ¨ datbox_09, "ÖÁLUM", data_2 )
	 	ui_wid_get ((dAtbox_10, "FALUE",(dapa_30)
	 	arg_ = "Z_"./ãhj/'"_"//sd2^&rom_real(data_2)//"_"//str_frnm_real(data_3©		
	 EMSU	
	$ui_wid_cet ( datbox_08, ¢VALUE, daTa_1 )
	 arg_Z = "Z_"//chk//#_"//str_from_real(datA_1)//"_"
	 END IF
EMSE
arg_Z =""N"
END IV	 	
Dump arg_X			
dump argY
dum` arg_Z


ui_wid_gmt ( datbox_01, "VALUE", tol )


arg = arg_X//"/"//arg_Y/."/"//argOZ'/"/"//str_from_real*tol)


dump arg


getElmXYZ(arç)

JEND FUNCT	ON


FUNGTION cc_noDeloc()
ui_exuc_f5nction("nodelïcatIon","display")	
ND FUNCTION	

M
FUNCTION cb_apply()


STRING listBuffer[VIRTUL]
widget sbo}	


lighlight^grp.get_`aram()
highlight()Šlis4[save_group  "liytc", "lis|c", FALSE )
uil_%ntity_group_members_ge| ( "listc", 124, lis4Buffer )


hlentitù - listBuffer
Ê
sbox ½ sys_class_geth"ÓTX_newgrq"-"se,dbox_01")
Ui_wid_set( rbox, "VALUE", listBuffer+ 	


uil_group_dmlete_group.delete_gvoups¨ FALSE, 1, ["listc"] )
	
ENT FUNETION/* cb_hgh */

FUNCTION cb_canael()-
	
$ STX_bgckling.çr0_item()
$ dis0lay_cleanup( -
ui_form_ddhFte8"higèlyght_grp#)
STX_negrp.sgt_seldbox_01()	


END FUNCTION/* cb_cencel */
FUNCTION`get_hì_eluéty()
RETURN hl_entity	
EFD FUNCTION
END CLASS/* CLASSNAME */
