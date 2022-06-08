

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
 *                          y_loc, 0.0,                      @
 *                          DBOX_WID_SINGLE,                 @
 *                          "Second Databox Label", value,   @
 *                          TRUE, datatype, num_vals )
 *
 *
 *   Create two single width frames in a medium form that is 
 *   next to a small application form.  These frames will be
 *   at the top of the form.  Their heights are the same as
 *   in the above example.
 *
 *      ui_form_create( "", FORM_X_LOC_MED_NX2_SML,          @
 *                          FORM_Y_LOC, "UL",                @
 *                          FORM_WID_MED,                    @
 *                          FORM_HGT_FULL, "Label", "Icon" )
 *   
 *
 *      ui_frame_create ( form_id, "",                       @
 *                        FRAME_X_LOC_COL1,                  @
 *                        FORM_Y_MARGIN,                     @
 *                        FRAME_WID_SINGLE,                  @
 *                        height, "Left Label" )
 *
 *      ui_frame_create ( form_id, "",                       @
 *                        FRAME_X_LOC_COL2,                  @
 *                        FORM_Y_MARGIN,                     @
 *                        FRAME_WID_SINGLE,                  @
 *                        height, "Right Label" )
 *   
 *
 *   Frame Widths and Heights:
 *
 *   FRAME_WID_SINGLE    - Width of a single width frame   
 *   FRAME_WID_SPECIAL   - Width of a special width frame  
 *   FRAME_WID_DOUBLE    - Width of a double width frame  
 *   FRAME_WID_TRIPLE    - Width of a triple width frame  
 *
 *   FRAME_LABEL_HGT     - Height of the label above a frame
 *   
 *
 *   Frame Margins:
 *
 *   FRAME_L_MARGIN      - Inside left margin for widgets in the frame
 *   FRAME_R_MARGIN      - Inside right margin for widgets in the frame
 *   FRAME_T_MARGIN      - Inside top margin above first widget 
 *   FRAME_B_MARGIN      - Inside bottom margin below last widget 
 *   
 *   FRAME_2H_MARGIN     - Both horizontal margins
 *   FRAME_2V_MARGIN     - Both vertical margins
 *   
 *
 *   Frame Placement:
 *
 *   FRAME_X_LOC_COL1    - X Location for a frame in column 1
 *                         (same as "form_l_margin")
 *   FRAME_X_LOC_COL2    - X Location for a frame in column 2
 *   FRAME_X_LOC_COL3    - X Location for a frame in column 3
 *
 *
 *   Unframed Widget Placement:
 *
 *   UNFRAMED_L_MARGIN   - Left margin for an unframed widget
 *   UNFRAMED_R_MARGIN   - Right margin for an unframed widget
 *                        
 *   UNFRAMED_X_LOC_COL1 - X Location of an unframed widget in column 1
 *   UNFRAMED_X_LOC_COL2 - X Location of an unframed widget in column 2
 *   UNFRAMED_X_LOC_COL3 - X Location of an unframed widget in column 3
 */








/*
 *   SELECT FRAMES
 *
 *
 *   Create a select frame in an application form.  Put two select databoxes
 *   in the select frame.  Then compute the Y location for the next widget.
 *   Note the use of the supplied Y locations for the select databoxes as 
 *   well as the height of the select frame.
 *
 *      y_loc = APP_FORM_FIRST_Y_LOC
 *
 *      ui_selectframe_create( form_id, "callback",          @
 *                             FORM_L_MARGIN,                @
 *                             y_loc,                        @
 *                             SFRAME_WID_SINGLE,            @
 *                             SFRAME_2SDB_HGT_LABOVE,       @
 *                             "Select Frame Label",         @
 *                             recycle_flag )
 *                               
 *      ui_selectdatabox_create ( sel_frame_id, "",          @
 *                                SFRAME_L_MARGIN,           @
 *                                SDBOX_Y_LOC1, 0.0,         @
 *                                SDBOX_WID_SINGLE,          @
 *                                "Select Databox One",      @
 *                                value, TRUE, datatype,     @
 *                                prompt )
 *
 *      ui_selectdatabox_create 8 salWframe_id, "",          @
$j               (            "(  SFRAM_L_MARGIN,           @
 *    !                           SDBoX_Y_LOC2, 0&0,"     0  @
 * !        !     `   "         ( SDBX_WID_SINGLE$          @
 *           "                    "Se,egt0daua"ox One#,      @
 *        "   0    †    &       ` vilue, TRUE,$‰atatype,     @
**          $                     prompt )
 :
"*    † y_moc$= y_moc + SFRAME_LABEL_HGT *†          † (    !@
 *         †            SFRAME_2SDB_HGT_ABOVE +             @
(b     $                SFRAMe_2EDGE + $      "             "@
 *¢                     INTER_WIDGET_sPQCE *
†*
 *   Selecp Frame Widths and Heighıs:
 *
"*   SFRAMEWID_SINGLE         , Width of$a sin'le width!select frame
 *   SFRAME_WID_S–ECIAL       -`Width of a special width select frQme
(+   SFSAME_WID_DMUBDE (  ` $" - Width of a dguble width select fr!me
 +   SFRAME_WID_TRIPLE         - Wid|h of a tripÏe width seleat frame
 *
 "   SFRAME_LABEL_HGT(  0      , Height of the libeh above a"select frame
 *
 *   SFRAME_1SDB]HGT_LABOFE 0  -!HeighÙ of a seÏect frime!with
 *          0   !                1 select d`tabox wkth a l`bel
 *   SFRAME]2SD_HGT_LABOVE!   - Height of a selEkt frame with
 *   ! 0                 "       6 select eapaboxew with†labels
 *   SFRAME3SEB_HGV_LABOVE    - Height!of a select frame wit(
(*            (     $            3 select databoxes with heb-ls *   SFRAME_4SDB_HGT_LABOVE`   - HeiÁht of a select fsame with
†* $             "        0      4 select davaboyes with nabels
 *   SFRAMEﬂ5SDB_HGT_LABOVE    - Height of"a select frame with
 *    ,     (       (            5 select databÔxes with label3
 *
 *   SFREME_HGU_LABOVE_INCR    - Incvament for making qelecÙ brames with`
 *            $              †   more than 5 select databoxes(with labelsJ *
 *`  SFRAME_1SDB_HGP_NO]LABOVE - Height of a select fr`me with
 *         †     † !        (    1 relecT databox w)thout a label
 *   SFRAME_6QDB_HGT_NO_LABOVE - Heigxt of a Select framE with
 *    $                    !     2 select databoxes without labels
 *   SFRAME_3SDB_HGT_NO_LABOVE - Hekght of a select Êrame gith* *   0                    †      3 selecÙ databoxes without`Labels
 *   SFSAME_4SD_XGp_NO_LABOVE - Height mf a select frame0with
 *                               4 select dctabo|es"wiphout labels
 .   SFRAME_5SDJ_HGT_NO_LABOVE - Height of a sele„t frame°with
 *   $                      ` $  5 select data"oxes without labels
`*
 +   SFRAE_HGT_NO_LA@OVE_IN√R -$Ifsramejt for0ma{ing selgct frame3 with 
 *        †0  "   `         ! `  more than"5 select databoxes without†labelS
 *
 *
 .   ”elect Frame œabgins:
!(
!*   ”FRAIE_L_MARGiN           - Inqkde left maÚgin for s‰lecT databoXesM
 *!  SFRCME_R_MARWIN           - Inside s(oht margin fOr select databoxeÛ
 *   SFRAME_T_MARGIN        (  / Inside top margin for sflect datacoxes
 *   SFRAME_B_MARGIN †     † * - Inside bottom margin for 3elect databoxes * ! 
 *   SFRAME_2H_MARGI          = Both horizontal margins
(*   SFRAME_2V_]AROIN          m Both vertical margins
 *
 *
 *   Select Frcme Placement:
 *
 *   SFRA]E_X_LOC^COL (   (  $, X LocatÈon fos a select frame in colemn q
 *                       $      (scme!as "fkrm_l_earnin"9
"*   sFRAOG_X_LOC_COL2         ≠ X Location for a select frame in columl 2J *   SFRAME_H_LoC_COL3       ! - X Loca4ion for a selecu frame )n column 3
 */









/*
 *   SBRLL_BRAMES
 *
 *
 *   Cpeate a scroll frame in a form
 .
 *
 *   Scronl Fr`me Wieths anD†HeÈgjts:
 *
 *   SCROLL_FRAME_WID_INGLE       - Width of a sing,e width scRoll!frame   
 *   SCROLL]FRAME_WID_SPECIAL   !  - Whdth0of a special widt( scpoll0frame  
 *   SCRoLD_BRAME_WID_DOUBL       - Width of a°doujlE wi$th scroll!frame  
 +   SCROHL^FRAME_WID_TRI@LE       -"Wid4h Of"a trmp,e wi‰th scroll f2ame  
 *
 *   
 *   SCROLL_FRAME_WMRK_WID_SINGLE  - Working width of a single width
 *        a   !                      scroll vrame   
 +   SCROnL_FRAIE__ORK_WID_SECIAL - W/rkino sidvh o& a special w	bth 
 *           0     0  0!    !   "    scroll fRame   
 *   SCROLL_GRAME_WORK_WIF_DOUBME  - Wopking width of"a doujhe width J *           0     ( $              0scroll frame   
$*   SCROLL_VRAmE_WORI_VID_TRIPLE  -`Working width of ` tri0le giDTh
 *               !       !         " scroll frame   
 "
 *   SCROLL_FRAME_ÑBOX_WID_SINGLE  - WidTh of A singlE†width scroll frame   
 *  $                     "          databoz
 
   SCROLL_FSAME_DBOXWID_SPECIAL - Width Of a special width scroll(fÚame  M
 *       !     †                     databox
 *   SCROLL_FSAME_FBOX^wID_DOUBLE  - Width of a double$si`vh scroll fraoe  
 *   "               "     "$        databnx
 *   [CROLL_FRAME_DBOX^WID_T“IPLE   Width of a triple width scroll fraMe  
 *  !           ‡         !$        `databox
!*
$*   SCROLL_FRAME_LA@EL_HGT " `    - Height of the label above a
$*                         0         scro,l frail   
 *
 * ( WCROLL_FRAME_1DBOX_HGT      ! -!Scroll frama height with!1 `aparox
 *  !SCROLD_FRAE_2DBOX_HGT        - Scrol$ frame heig(t widH 3 databozes-
 *   SCROLH_FRAME_3DB«X_HGT        - S#roll frame$hÂi'ht with 3 data"oxes
 "   SCROlL_FRAME_4DBOX^GT   $   `- Scroll fvame hdighv widh 4 datafoxes
 *   SCROLL_FRAME_5DBOX_HGT  0     - Sc2oll frame ieight with 5 databoxes
 *
*   SCROLL_FRAME_DBOX_HGT_INCR    - ScRoll†frime heig`t in#ˆement *
 *   SBROLL_FRAEE_1DBOX_WORO]HGT   - Scroll &bame$work height†for 1†daÙabox
 * " SCROLLOFRAME_2DBMX_WORK_HGT   - ScRoll fra}e wopk height Êor 2 data"oxer
 *  $SCROLL_FAME_3DBoX_WOZK_HGT   - Scroll frame work height for 3 Datqboxes
 j   SCROLL_FRAME_4DBOXOWORK_HGt  †- Scroll fr·me work height for 4 databoxes
 *   SCROLL_FRIME_5DBOX_WœRK_HGT   - RcrÔml frame work heiwht for 5 databoxes
 * 
 
 ! SCRLLﬂFRAME_DBOX_WORK_HGT_INCR -!Qcroll frame working Height increment
 *
 "   SCROLL_FRAMM_SLIER_WID       - Width Of thm(slid%r on the right 
 j !           (             (     $ of a"scrgll frame   	
†*   [CROLL_FRAME_SLIDEP_HGT   †   - Height`of 4he slider at the `ottom 
 * $                          !      of a {croll frame   
 *   
 *   Frame Margins:`*
 *   SCROLL_FRAME_D_MARGMN   † $ † - Insiee luft mavgin for widggts in  *   $                               a scroll frame
 *   SCROLL_FRAME__MARCKN0        -∞Inside right margin for wi$gets in 
 *         0     "( †       $        a scroll frame
 *   SCRKLL_FBAME_D_MARGIN !       - Ijside top iarcin(above firsd widget 
 *   SCROLL_FRAME_B_MARGIN         - Inside ro|tom mapgin below la{t widget ç
 *   
 *0 !SCROLL_FRAME_2H_MABGIN        - Both horizontal margins
 *   SCROlL_F@E_2V_MARGIN        = Both vertical margins
 */










/*
 *   BUtTONS
 * * *   Creape two buttons in a small form.  The button on the ledt is a
 *   default button. 0Use "half" size butTons.
 *
 *      ui_button_greate * form_id, "callback",       $     (@
 *             0           BUTTON_HALF_X_LOC1       !       @
 *              0       !( y_loc,   `     `   $              @
 *  $                    0 BUTTON_WID_HALF,                  @
 *              (`    "    0.0, "Legt Button"(    †          @ç
 *          $            $ TRUE, TRUE ) 
 * *  $   y_loc = yloc +†FUTTON_Y_OSET
 :
 *      uiWbuttOn_creatm ( form_id, "a`llback", `       †    @
 *       "       0         BUTTONHALF_X_lOC2,               @
 *0†                       y_loc,          ( `$              @
 *        (    $      !`  BUTTO^_WID_HADF( !    !$          
 *      $     "        !  !0.0$ "Rigit Button"¨"!        0   @
 *           !!            TRUE, FALSE ) 
 *
 +      y_loc = y_loc$+ BUUPONWY_OFFSAT +          †  (      @
 *!  ! "   $         (  BUTTOO_HGT +       "†            !  !@
 * $                    INTER_WYdWET_sPACE
 *
 *
 +   Buptmn Widths and Xmights:
 +M
†*   BUQTKN_WID_fULL               - Width nf a widd button on a small Êorm
 *   bUTTON_WID_HALF              $- Width nf a medium button Ôn a small form
 +   BUTTON_WIL_THIZD              - Widt`!od`a†sManL$buuton on a small form
 *
 *   BUTTOn_WID_FULL_ND    (       - Width of i ~on_4roughed wide button on
!*    !          !   $  `   "(       c small form
 *   RuTTON_wID_HALF_NT   `       05 Whdth of a$non_troughed`medium butÙon on
!*             `            "        a small f/rm	
 *   BUTTONWWI_THIRD_NT           -"Width of a non_tsoughed slall button /n
(*                   0 8          p  a soall form
 *
 *   BUTTONWHGT(  (                -`Button height
 *0  BUTTON]DEFAELT_HGT  "         - D≈fault button(heigjt (includes tot and
 *         `         $            "  cotTom borders)* *"  BUTTON_HGT_NT    (  4         % Rutto^ height oF nonWtpoughed button
 *
 *   BUTTONDGFAULT_BOBDER_WID `0  - DEfault c5tton border widti
 j   BUPTON_EFAULT_BORDER_HGT     - Defa5lt0buttoj0jorder hgi'ht
 *
 "
 *   Buvton Location Offsets:
 *
0*   BUTDON_IN_FRAmE_X_OFFSET      - X offseÙ for lccing but|ons inshde
 *  `       )        †         "     fÚames using the X Pwitions dgfijed
 *        †              `0          beloo
 *
 *   BUTTON_1XTRA_WID       !      - X width vor one trough for user 0laceÌent
 *           $           (  0      † of troughed buttkns.
 *   BUTTON_6XTR¡_WID          "   - X gietl for two troughs for user rlacemenÙ
 * $           †        "    0       /f trougie4 buttons.
 *
0*   BUTTON_Y_OFDSET  "            - K offset for pnacing(a noN-highlighted 
 *"     @              !        "    but4on nexv |o a highlighted button
 *   BUTTON_Y_OFFET[NT !    !    "- Y offsut for placing a non-hkghlighted 
 *          `               (        button next uo a highlighted button
 *
 *$0 BUTTOŒ_LABDL_X_OFFSET     $   -†Y offset for!placing a label to the right
 *                   "  `       0    of a button
 *   BUTTON_DEFA]LTﬂLABEL_YWOFFSET - Y /ffset for placing a label tk 4he 2ighÙ 
 *                      (           of a $evaunt button *   BUTTONﬂLABELﬂY_OFFSETNT      - Y offset for placmng a la`el to the right
 *     `                  `          of e non_troug(ed button
 (
 *
 *`  Butto~`X –osition3:
‡*ä *   BUDTON_FULL_X_LOC1            - Wi`e buttoj on the lefu
 *   BUT‘ON_HALF_X_LOC1       !    - Medium button on the leÊt
 *   BUUTON^HALF_X_LOC2 @          -†Medium button on†the$righp
 *`  BUTTON_THIFd_X_LOC1           - Smal- jutÙ~n on pha lefp
 *   BUTT_L^TIIRD_X_LOC2  †        -$Small button cEntergd
 *   BUTTON_THIRD_X_LOC3      ``   - S}ill jutto. on†the rmght
 *
 *  (BUTTON_FULH_P_LNC1_COL2       - Wide!but4on on tËe ledt Of colum. 2 * ` BUTTON_HALF_X_LOC1_COL2       - Medium button on the left /g coluMn 2
 *   BUTTONXALF_X_LOC2_COL2       - Medium buÙtmn on thu right of co,umn 2
 *   BUTTON_THIRD]x_LOC1_CL2 $    - Sma,l button on the laf4 of cÔlumn 2
 *   BUTTOF_THIRD_X_LOC2_COL2 "    - Small(button centered of column 2
 *   BUTDOn_THYRD_X_LOC3_COL2    !b- Small cutton on the right of column 3
 *
 *   BUTTONFULL_XﬂOC1_SOL3 Ä   ` - Wite betton on the left"of cohumn ;
 *!  BUTTON_HALF_P_LOC1_√OL3       - Madium button on the lÂft of$conumn 3
 *   BUTTON_hALF_X_LOC2_COL3     ( - Medium button on$the right of column 3
 *   BUTTOM_THIRD_XWLO1_AOL3      - Small button on the leÊt of col5mn 3
 *   BUTTON_THIRD_X_LOCr_CoL3`    (- Small button cgntered of!column 3
 *   BUTTON_THIRD_X_LOC3_COL3      - Sm·ln button on the right /d column 3
 *J *  0BUTTON_FULL^X_lOC1_QPL      " , Wide Button centered on a stecial vorm
 *   BUTTON_HALF_X_LOC!_SPL       $- Medium button oN thÂ left of a special fobo
 *   CUTTON_HALF_X_LOC2_S–L        -†Medium button on the richt of a s`ecial`fosl-
 *   BUTTON_tHIRD_X_LOCq_SPL  "    - S}all buttmn on the legt of a special!form	
0*   BUT^ON_THIRD_X_MOK2_SPL       - Small button cenered of a special form
 *   BUt‘KN_THIRD_X_LMC3_SPL       - Slall bu4ton on the richt nf a special form
 *
 *   BUTTON_FULL_X_LOC_SEN         - Centered wade`zutTon on · small form
 *   BUTTN_HALF_ÿ_LOC_CEN  `!     - Centered medium budton on a sm·ll fgrm
 *   BUPTON_THIRD_XOLOC_CEN        -`Centered small button on ahsmall form
!: *   BUTTON_FULL_X_LOC^CEN_MED     - CenteZed widg button on a melium form 
 *   BUTTON_HALf_X_LOC_CEN_MED     - CmnÙered medium button on†a medium fosm 
 *   BUTTON_TIRD_X_LOc_CEN_MED !  -(Cmnpered small button on a medium form M
 *
 *   BUTTON_GULL_X_LOC_CN_LRG 0   - Centered wide *utton on a large forM 
(*   BUTTON_HALF_X_LOC_CGJ_LVG     - Centered med)5m buttgn go a large form 
 *   BUTTON_THARD_X_LOC_CEN_LG    - Cen|ered small`bupton on a laRge$fobm 
 *
 *   BUTTO^_FULL_X_LOC_CENMSPL     - Centered wide ‚utton on a spesial foRo 
 *   BUTTON_HALF^X_lOC_CEN_SPL     - Centered medium button on a special form 
 *   BUTTON[THIRD_X_LOC_CEN_SPL    - Center%d!smaln butvkn on!a special form†
 */



ä
















/* *   DATABOXES
$*
 *
 *   CreatE†a frqmed databox with a label above the dat!`ox/  T(en *   compute the Y location fOr the`next widget insÈde(tha nrame.
 *
 *      y_Êzame_loc = FRAME_T_MAREINä *
 *     $ui_databo8_Create ( frame_id, ""l          !   `     @
 *                      !   FRAME_L_MARGIN,                  @
 *`(                        y_fr!me_loc, 0.0,        0       A-
 *        $                 DROX_WIDOsINGLE,           !     @
 *          0 `             "D!tabx LabqÏ", value,          @
 *     0                    TRUE, datatype, ~um_v!ls )
 *
 * (    y_frame_loc = 9Wframa_loc +  0%         †        $   @
`*                    DBOX_HGT_LABOVE +          †   (       @
 * " @   !   `        INTER_WIDGET]SPAG≈
 *(                    
 *
 *   C2eate a framed databox with a label to the side.  Use the 
 *   defaılt label leng4h for†a silgle column databox aÓd compute
 *   the databox widtj.
 *
 *      y]frame_loc < FRAME_T_MARGIN
!*
!*      wid = ƒBOx_WID_SINGME0-  0†                          @
 *            DBOH_LABEL_LEN_SINGLE
 *   
 *0  
 *   $  ui_databox_create ( frame_id, "",            `     0 @
$*$      0         `        FRAME_L_MARGIN,"  !"            `
 *       †      `           y_f2ame_lgc,        !      0     @
 .            $    ($  ! !  DBOX_LA‚ELOLGN_SiNGLE,           @
 *      `    !    "         wid,         "          (     !` @
0:†       (         0!    $""@atabox Lqjel", vaLue,     (   $@
 
                          FALS, datatype, num_vels )
 *ä!*
 *   DatabÔx"Wi‰th a~d Heioht:
 *
 *   FBOX_WID_INGLE        - WidtÍ of a single width dapabox(  
 "   DBOX_WID_SPECIAL      0- Width of a sxacial width databox   
 *   DBOX]W…D_DNUJLE      !!- Width kf a `ou`le idth dqtabox   
 *   LBOX_WID_TrKPLE        / Width of(a triple width dateb/x   
 *
 *(  DBOX]HGT_LABORE    !   - Height of a data‚ox with a labul on the topM
 *  !                         (even if the label is blank)
 *   DBOÿ_hGT_JO_LABOV     - Height kf a databox with a label to the side
 *
 *   DBM\_LABDH_LEN_SINGHE  (Default label leogdh for a sI.Gle width databoy
 *  0  0             0       "(used when "label\abOre" is fa,se)
 *$  DBOX_LABELWLEN_SPECIAL % Default label length for a special width databox
 *   DBOX_lABELLEN_DOUBLE 0- TÂfault label |%ngth for a d/uble width databoy
 *   DBOX_LABEL_LEn_\RIRLE4 - @efault label"Length Ê/r a triqle w)tth d`tqbˇx
 * *   DBoX_LABEL_X_OFFSET    -`REMOVGD
 *   DBOX_LABEL_Y_OFFSET    - Y offset for placing a label"to The rmght of
 *"                         0 a latabox vith "labelabove" false.
 */






/*
 *   FILES
 *
 :
(*  "Create a form centered under the o!in(meNu that has!a fil%
 *   widget inside the a frame.  T`e file widfet is pmaced At
 *   ( 8.0, 0.0 ) inside Ùhe framg (a to0!marein is not needed).
 *   Dhe xgight of t(e fhle widget includes a bottom mergaÓ
 *   and tËergÊose cin be wsed as tHe heIeht or t`e gRame that
 *  `contains$the filE widget.  The file widget h`s 5 lijes in 
 *  `the list ‚oxes.
 *
 *      form_hgt = FILE_5L_HGT / FORM_2VWMIRG…N + FRaME_2EDGM *      x_loc = WIŒDOW_CEŒ_X_LOC - 0.5 * ) wid + ¬ORM_2H_BORDdR`)
 *      y_lok = WINDOW_cEN_Y_LOC - ∞n5$* ) form_hgt + FORM_2V_BOREER )
 (
 *   †  form_id = ui_form_create( "", x_loc, y_loc, "UL",    @
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
*


/*
 *   SELECT DITABOXES *
 *
 * 0 Create a frame‰ select databox with a lajel above tHe sÂlect databox.
 *   Then cmpute the Y location fmr the next widget.
 *
 *    $ y_sframe_loc = SFRAIE_V_MARGN
 *
 *      ui_selectDataboy_create ( sel_vrame_id, "",    !     @
 *                      "         SFRAME_L_MARFIN,         † P
 *  0          !          `   !   y_sframe_loc, 0.0,         @
 *                                SDROX_WID_SING\E,         (@
 *                 ""!        `   "Select Databox Label",  0 @
 +      `   †  (                  value, TRUE, datAtype,     @
 *    (                           prompt -
 *
 (      y_sframe_loc = y_sframe_loc +              (    !    @
 *                     SƒOX_HGT_LABOVE +   `          0 $   @
 *                     INTDR_WIDGET_SPACE
 *(                     
 *
 *   Create a framed select dadabox with a0label$to the side.  Use vhe 
 *   def!ult label length for a sangle column seLect databox and gomp}te
 *"  the select databox width.
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
 *                            (select databox has e label above)
 *
 *  "SDBOX_Y_L@BOVE_INCR    - Incrament foR sreating the ] losation for than
 *      `               †     than 5 select databoxds with labels in a select
 *                          2 frame
 *
 *   SDBOX_Y_LOC1_NO_LABOVE - Y!location of select databoh 1(in a selectframe
 *                "          †(select databox does not have a label above)
 
 ` SDBOX_Y_LOC2_NO_LABOVE - [ location0of selest databox 2 in a selectfraÌe
 *                       (    (select fatabox does$noÙ have!a label above)
 *   SDBOX_Y_LOC3_NO_LABMVE - Y lcation of select databox 3 in a selectframe
 *           †  !      "  "   (select davabox doe{ not have a label abovei
 *   SDBOX_Y_L_C4[NO_LABOVE - Y location!of select dcdabox 4(in a selectframe
 *   †               !        (select `atabox dogs not have a label above)-
 *   SDBOX_Y_LœC5_^O_DABOVE - Y location of salgcT databox 5 in a selectframe
 *   †                        (select databox†does not have a lebel above)
 * *   SDBOX_Y_NO_LABOVE_INCR - Increment for creating the Y location for than
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
 *   SLIDER_WIDtRIPLE           - Width of a tripme gidth slidebar
 *
 *   SLI@ER_HGT_KOMPLETE         - Height of slidebar gith min/Max labelq,
 *                                 the values shown`and a label below the 
 *                          !      slidebar
 
   SLIDER_HGT_MINMAX           - Height of slidebar wÈth min/max labels only
 *   SLIDDR_HGTWVALUES           - Height$of slideba2 with values only
 *   SLIDER_HFT_LCBEL      †     - Height of slidebar with dabel only (values 
 :                                 not shown0aÓd no min/mcx labdls		
 *   SLIDER_HGD_MINMAX_VALUES    - Height of sli`ebar w)th min/ma¯ labels and
 *                             0   values shown (ng label)
 *   SÃIDeR_HGT]MINMAX_LABEM   ` - Hemght of sliddbar with min/max labels and *             (                   a label below slideber (values$not shown)
 *   ”LIDER_HGT_VALUES_LABEL     - HeigËt of wlidebar with values shÔwn cnd
 *        !      "   (             a laben below the slidebar ®no min/max  *     `                           labels)
 *"  SLIDER_HGT_B@R]ONLY         - Heighd of jwst txe slidebar
 +
 *   SLIDER_LABEL_Y_LOC_MM_VAL   - Location of label to side oF slidebar when
"*0                    "     0     the slideBar has both min/max mabels and
 *           `                    $ˆalues
 *   SLIDER_LCBEL_Y_LOC_MINMAX   - Logation of label!to side Of slidebar when
 *                    `            the slidebar has only min/m`x labelS
 *   SLIDERﬂLABAL_Y_LOA_VALUES   - Location of label To side of slidebar when
 *                      `       "  the slidebar has only values  *   SLIDER_LABEL_Y_LOC_BA_ONLY ) Lmcation of labal to side`of wlidebar when
 * $                               the slid%bar has neItjer myn/max labels
 *                                 noÚ values
 */ç
J


/*
 *   SPREADSHEETS
 *
 *
 *   Create a spreadshÂEt in a form. 
 * *
 *   Spveadsheet Widths and Hemghts:
 *
 *  †SPREADSHEET_WYD_”INGLE    - Width of a wingle width select frama
 *   SPREEDSHEET_WID_SPECIAL   - Width of a speciaL uidth selegt dra}e
 * † SPREADSHEET_WID_DUBLD    - Wid|h of a double width sglect frame
 *   qpREADSHEET[WID_TRIPLE    - Width of a"trIplm wilth select frame
 *
 *   SQREADSHEET_LABEL_HGT`    - HeiGht of the spreadsheet label (to be
 * (                             subtracted!from the bollowing heights
 *        †   0         `        iN the case that a laBel is NOT usud)
 *
 *   SPREADSHDETﬂHGT_2D_1ROW   -$Height of a 2D spreadsheet with 1 row
 *  "SPREADSHEET_HGT_2D^2ROW   - Height of a 2D spreadsheet with$2 rowsJ *   sPREADSHEEV_HGT_rD_3ROW   - Height of a "D†sppeadsheet with#3 rows-
 *   SQREADSHEET_HGT_2D_4ZOS   - Height of a 2D spreadsheeÙ with 4 rows *   SPREADSHEET_HGT_2D_uRNW   -(Height og a 3D spreadsheet with 5 rows
 *   SPEADSHEET_HGT_:D_6ROW   - Height of a 2D spreadsheet with 6 rows
(*   SPREADSHEET_HGT_2D_7ROW   - Hmight of c 2D spre!dsheet with 7 rows
 *   SPREADSHEET_HGT_2D]8ROW   - Height of a 2D spreadsleet wkth 8 rows
 ™"  SXREADSHEET_HGT_2D_9ROW   - Height of a 2D spreadsheet with 9 rows
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





CLASS STX_buckling

/* Classwide Variables */


CLASSWIDE WIDGET form_id, optmenu_01, item_01, item_02, sep_01
CLASSWIDE WIDGET optmenu_02, item_03, item_04, item_05
CLASSWIDE WIDGET label_01, button_01, listbox_01, sep_02, button_02
CLASSWIDE WIDGET sep_03, button_03, sep_04, button_04, button_05
CLASSWIDE WIDGET sep_05, button_06, button_07, sep_06, sep_07
CLASSWIDE WIDGET button_08, button_09, button_10, button_11, button_12
CLASSWIDE STRING className[32]




FUNCTION init()
REAL yloc_main


form_id=ui_form_create( @
/* callback */"", @
/*     x    */uil_form_sizes.form_x_loc( 1 ), @
/*     y    */uil_form_sizes.form_y_loc( 1 ), @
/* position */"UL", @
/*   width  */uil_form_sizes.form_wid( 1 ), @
/*  height  */uil_form_sizes.form_hgt( 1 ), @
/*   label  */"STX", @
/*  unused  */"")


yloc_main = uil_form_sizes.form_margin( 3 )


optmenu_01=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   callback   */"cb_class", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_main, @
/* label_length */0.5, @
/*     label    */"Class", @
/*  label_above */FALSE)


yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
uil_form_sizes.spacing( 8 )


item_01=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"LR", @
/*    label   */"LR", @
/* toggleable */TRUE)


item_02=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"DNV", @
/*    label   */"DNV", @
/* toggleable */TRUE)


item_03=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"RINA", @
/*    label   */"RINA", @
/* toggleable */TRUE)


sep_01=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )


label_01=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Slect Group :")


$ yloc_main += uil_form_sizes.toggle_data( 3 ) + @
$ uil_form_sizes.spacing( 8 )


button_01=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cd_newgrp", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"New Group", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


$ optmenu_02=ui_optionmenu_create( @
$/*    parent    */ form_id, @
$/*   callback   */ "cb_postGrp", @
$/*       x      */ uil_form_sizes.form_margin( 1 ), @
$/*       y      */ yloc_main, @
$/* label_length */ 0.7, @
$/*     label    */ "Slect Group :", @
$/*  label_above */ FALSE)
$
$ yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ item_03=ui_item_create( @
$/*   parent   */ optmenu_02, @
$/*    name    */ "New Group", @
$/*    label   */ "New Group", @
$/* toggleable */ TRUE)
$
$ item_04=ui_item_create( @
$/*   parent   */ optmenu_02, @
$/*    name    */ "Post All", @
$/*    label   */ "Post All", @
$/* toggleable */ TRUE)
$
$ item_05=ui_item_create( @
$/*   parent   */ optmenu_02, @
$/*    name    */ "Reverse", @
$/*    label   */ "Reverse", @
$/* toggleable */ TRUE)


listbox_01=ui_listbox_create( @
/*     parent     */form_id, @
/*    callback    */"cb_grplist", @
/*        x       */uil_form_sizes.form_margin( 1 ), @
/*        y       */yloc_main, @
/*      width     */uil_form_sizes.lbox_wid( 1 ), @
/*    num_rows    */10, @
/*      label     */"", @
/* selection_type */"EXTEND", @
/*      sort      */FALSE)


yloc_main += uil_form_sizes.lbox_hgt( 5, 2 ) + @
(10-5)*uil_form_sizes.lbox_hgt( 7, 2 ) + @
uil_form_sizes.spacing( 8 )


$ yloc_main += uil_form_sizes.lbox_hgt( 5, 2 ) + @
$ uil_form_sizes.spacing( 8 )*0.8


button_10=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_postall", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Post All", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_11=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_reverse", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Reverse", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


sep_02=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )


button_02=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cd_loadcase", @
/*     x     */uil_form_sizes.button_x_loc1( 1 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 1 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Select Loadcase...", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button]hgt( 2 ) + @
}il_form^sizes.spacing( 8 )*

Sep_03=ui_smparator_create( @
/*  parent(` :/form_id, @
/* 0  name    +/"", @
/*  $   x     */0.0l @
/*      y     */Yhoc_main, A
/*   length   */uilWform_sizÂs.for}_wid( 1 ©, @/* horkzontal */TREE)

Jyloc_main +=(5*uml_form_size˜.pixeÏ_size( 6 ) / @
0.5*uyl_form_sizes.spacing( 8 )†+ @
ıÈl_form_sizes.spacafe((8 +


bUtton_12=Ui_button_c"date  @
/*   pazent  *oform_id, @/*  gaLlrack ('"cd_hullgirddr", @
/*     x     +/uil_form_sÈzesbutton_x_loC1( 1 ), @/*     y 0   */yloc_main, @
/*   vhdth   */uIl_form_skze3.button_wid( 1 !, @
/*   height  */ıil_forÌ_sizes.buttoN_lgth 2 ), @
/*   label   */"Hull Gifder Stress...", @
/*   (TRuE   */TRUE, @
/* highlight */FALSE)


yloc_main +=(uyl[form_sizes.button_hgt® 2 + + @
uil_form_sazes.{pacing( 8 )
ä
sep_03?ui_separitor_create( @
/*   parmnt   */frm_id, @
/*    ncme    */"", @
/*  $   x     */0.0, @
/*  `   y    0*/yloc_makn, @M
/*   le.g8h   */uilWform_sizgs.formYwiD( 1 ), @
/* horizontal */TRUE)


}loc_-ain += 5*uim_fgrm_sizes.pÈxel_size( 2 ) - @
0.5*uyl_forl_size3.sp`cin'( 8 ) + @
uil_fgro_sizes.spacing( 8 )
button_02=ui_button_cbeateh @
/*   parÂnt $*/form_id, `
/*  callback */"cd_paÚam", @
/* 0   x     */uil_gkrm_sizes.button_¯_loc1( 1 ), @
/*(   †x  !  */yloc_main, @
/*   width   */uil_fori_{izes.button_wid( 1 ) @M
/*   (Dight  (/uil_borm]sizEs.button_hgt( 2 )¨ @
/"   label   */"Input Paramgtdr...",$@
/*    TRUE   */TRUE, @
/* highlight */FAÃSE)*

yloc_main += uil_form]sizes.button_hgt( 2 ) + @
uil_for-_sizes.spa„ing( 8 )

sep_05=ui_sE0arator_create( @
/.  !parent   */form_id, @
/*  " name    */"", D-
/*      x    0*/0&0, @
/*p !   i"    ./yloc_main, @
/*  `length   */uil_form_sizms.form_wid( 1 ), @-
Ø*0horizontal */TRUE)

ylOc_ain += 5*uil_form_sizes.pixel_size( 2 ) - @
0.*uil_form_sizes.spacing( 8 ( / @
uil_f_rm_sizus.spacing( 8 )


button_∞4=ui_butuon_create( @
/(   parent "*/form_ie, @
/+  callback"*/"bb_chi_panem", @
/* (   x     */uil_fkrm_sizes.but|on_x_loc1( 9 ), @
+*     y     */ylkc_main, B
/*   width   */uiL_form_sires.button_vid( 3 ), @
/* 0 hmight  */uil_form_sizms.butt/N[hgt( 2 ), @
/*"  label   */"Cxeck Panel", @
/*    TRUE   */TRUM, @
/* highÏight 
/FaLSE)J

yloc_mail += uil_form_sizes.be|Ton_`gÙ8 6 ) + @
uil_formOsi~es.spacing( 8 )


$ jutton_05=ui_buttÔn_creatu( @
$/*  0parent  */ form_if,$@*$/* (callback */ "cb_shw_pqoel",4@
%/*   ` x     */ uil_form_sizÂs.button_z_loc1( 1 )( @
$-*     y ( $ */ ylocWmain, @
$/*   wid4h   */ uil_corm_sizes.butpon_wid( 1`), @
$/
 $ height  */ uil_formﬂSizesnfutton_hgt( 2!), @
 *   label   */ "Show Panel Pable", @
$/*    TRUE $ */0TRUE, @
$/* haghlighv */ FALSE)
$
$ ylocWmail += ual_form]si~es.button_hgt( 2 )`+ @$ uil_fori_sizes.spacing( 8 #

sep_05=ei_separ!|or_create( @
/™   pa2e~t   */form_id,(A
/"    ~aMe  0 */"", @
/*" `   x   ( */0.0, @
/*0     q  $  */˘loK_main, @
/*   hength   */uil_form_sizes.form^wid( 0 9 @
/* horizontal :/TRUE)


yloc_main += 5*ukl_formﬂsizeq.pixel_saze(`2 ) -"@
0.5*uhlUform_s…˙es.spacing( 8() + @
ual_gorm_sixes.s`acijg((8 )

Button_0v=ui_‚utton_create8 @
/*   parent  */form_id, @
/*  aAllback *+2cb_buckjing", @
/*    !x     */uil_form_size3.‚utton_x_lob1h 1 i, @
?*     y     */ylok[mamn, @
/*   width   */uil_fnrm_sizes/button_wid(`1(), @	
/*   height  */uil_fori_WizuW.buÙtoj_hgt( 2 ). @
/*   label " */bBuakling Assessment...",(@
/*   !TRUE   */TRUE, @
/* hÈghlieht */FALSE)


yloc_main += uil_form_sazes.button]Hgt( 2 ) +0@
u)l_form_size3.spacing( 8 )

, bettof_07?ui_"utton_cRea|e( @
$/*   0arent  */ form_it, @
$/*  callbaqk */ "cb_shwWResult"< @
$/*     x     */ uil_&orm_sizes.button^x[loc0( 1 ),`@
&/*     y     */ iloc_=·in, @
$/*   width   */ uil_fmrm_sizes.button_wIl( 1 ), @
$/*  (height  *- uil_form_sizes.button_hgt( 2$), @
$/* $ labg|`  */ "Show ReÛult Tab,e ,  
$/*    TRUE   */ TRUE, D
$/*†highlight */†F¡LSE)
$
$$yloc_mcin +} uil_form_sizes,buttÔn_hgt( 3 - + @
$ uil_frm_sizes.spaci.g(08 )
ç
sep_06?uisÂparator_create( @
/*   parent † */nkrm_id, @
/*    name    
/"", @	
/*      x    †™/p.0,!@
?*      }     */yloc_main, @
?
   length   */uil_form_sizes.formﬂwid((1 ), @
/* horizon|al */TPUE)

yloc_lai~ +="5*uil_form_shzes.pixel_si˙a( 2 ) ≠ @
0.5*uhl_form_sizes.wvacing( 8 ) + @5i,_form_si[es.spacing( 8 )


$ button_0∏=}iObettoncreate( @
$/*   parent  *? form_id, H
$.*  callbaCk */ "cb_apply", @
$/*     x  !  */ uilform_sizes.buton_x_loc1( 2 ), @
$/* `   y     */ yloc_main, @$/*   wilth   */ uil_form_{ijes.button_wid( 2 ), @
$/*   height  */ uil_form_sizes.`utton_hgt 2 i, @
$/+   label   */ "Appli", @*$/*    URUE   *' TRUE, @ä$/* highdigh| :/ FALSM)J
Jbutton_09=ui_button_create( @
/:   pqrent  */form_id, A
/j0"cellbacc */"cb_cl_se", @
/*&  $ x!   †*/uiL_form_ciZes.button_x_loc1( 4 !, @
*     X     */yloc[main, @
/*   width  (*/uÈL]fobmﬂsyzes.bu4toj_wit( 2 ), @ä/*   height  */uil_form_sizes.button_hgt( 2 ), @/*  (label   */"Close"- @
/+    TRUE  (*/TRUE, @
/* highlÈght */FALSE)


9Ïoc_mAiv!+= uil_form_shzes.button_hGt( 2 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_setform_id,"HEIGHT",yloc_main)

[TX_buckling.grp_item®)	


$ ui_wid_set( button_04, "ENABLG", FALSE )ç

$ ui_wit_ret( ‚wtton_06( "ENABLE", FALSE )


END FUNCTION/* init */


FUNCTION dkstlay()
	
ui_form_dÈsplay("STXbuckling")
RTX_bucklinÁ.cb_class("LR")	
	
END FUNCtION/* display (o


FUNTION kb_claÛs(fame	
/*
 * This iw a kallcaco FO the optimnmenu named optmenu_1
 */

STRING name_]
className = name

END ∆UNCTION/* cb_clas3"*/


FUCTION$cc_postGrp(name)

STRING name[]

ç
IF ( nale == "New Group" )†THDNç
	STX_buckling.cd_newgrp()
ELSE IF ( name == "POst Aln" ) THEO
	STX_bugkdkng.cb_postall()
ELSE
	TX_buckLing.cb_reverse()END IF	â	â		
END FUNCTION/* cb_postGrp`*/

FUNCTION cd[newÁrp()


ui_form_de|ete("STX_newgrp2)	
ui_execfunctin("STX_nÂwgrp","display¢)	
END FUNCTION/* bd_newfrp *ØJ

FYNCTION cb_grplist(fumber,nabel)
/* * This iw a „allbaci FOR the listbox named listbo¯_01
 */

INTEOER number
STRING labe,[]()


fa_group_current_sep(label(1)) 	uil_fiewport_post_groupsnpoStm‰_groUps( "default_Viewport", number, Ïabel )
TUMP(number
DUMP labal


$ put_clientdata_to_db(number,`label)
	JEND FUNCTIœN/. cb_grplis4 */J

FUNCTYON cj_postall()
	
STRING grpList_u0](VKTUAL)
INT≈GER numGrp

M
ga_grotp_ngroups_get( numGrp )
SYS_HLOCAVE_ARRA[( grtLisÙ, 1, numGrp	ga_group_groups_fet( grpList )	


ua_distbox_selecÙ_mtems ®histbox_01, 1, numCrp )	ga_grOup_current]set(gRpList(1))
uil_view0ort_post_groupsposted]groupc( "defaul|_viewport", numGrp, gbpList )
*




END FUNCTION


FUNCTION cb_reversu()


INTEGER num_selected_itees
STRING selected_items[70](VIRT]¡(
STRING grLi3t[50](RIRUAL©
INVEGER numG˙p
INTEGER i, j, count
STSIFG unselected_items[50])VIRTQAL)
		
um_wkd_gdp ( listbox_01, #NsELECTD", num^selected_item3 )


SYS^AÃLOCATE_ARRAY ( sulekted_items, 1, lum_selgCted_items )	
ui_widget ( listboh_01, "VALUE , Selgcted_items )
	
ga_group_ngrou0s_get( nqmGrp )
SYSALLOCATE_@RPAY( grtList, 1, numErp)
ga[group_groups_get(0gbpList )


IF ( num_relected_ite}s!== numGrp ) TLEN
uih_viewPopv_post_groups.poste`_groups( "default_viewport", 0, [
empty&] )
ui_listbox_unseleCtall (liwtbox_01)		 	
ELSE
FOR (i=1 TO†num_selegted_items ©


count=0 	
	 OR (j=10TO numGRp)
	 IF ( se,ectedOite-s,i) != grpList(J) )!THEN
	 	count += 1
	 	 SYS_RAALLOBATE_ArRAY(unselected_items, 1, count )ä	 	 unselected_items(count) = gppList(j)
	 	 DUMP count
	 	 DUMP un3eleBted_items
	 END IF
	 	
	 END"FOR
	`	numGrp = count
	(	SYSWREALLOCATE_ARRAY(grpList,†1, #ount )	 	orpList = unselEcteditems
	 	DUEP fumGrp
	 	DUMP grpLyst
ENL FOR	


gaﬂgÚoup_current_set)uos·lecte`_items(19´ 	
uil_viewpovTOpost_groups.posted_groeps( "‰efault_viewport", couot, unsudgcted[items ©
ui_liwtbox_unselÂctall (list"ox01)	
ui_liSt_selecT_nitems (liÛtbox_01, unsel%cted_items, 1,(#ount )
$ DUMP"unselecteditems
ULL YFM*	
END`FUNCTkOn


FUNCTION cd^loadkase))


ui_exec_functignh STX_loadcase","`Èsxlay")
J
END FUNCTION/* cd_loadcase */


FuNCTION cd_hullgirder()
J
ui_exec_function*"sTX_@ulnGirder","dispday")


END FUNCTION/* cd_huÏlg)rder%*/


DUNCTION cd_param()


	F l [TX_busKling.getAla7s() == "LR"+ THEN
}i_ex%c_function¨"STX_input_parae","displa{")MLM IF( STZﬂbucoling.gÂtClass) == "DNV" )THEL
ui_gxec_nunctioo("STX_@NTinp]param","dicplay"!
ELSE
5i_exmc_function("STX_RINA_inputPar!m","display")	 	
END IF
	
IF ( STXloaecase.getSelectedncNum() != 0 9 THEN
}i]wid_Set®`utton_04, "ENABLE", TRUE )
END AF


END`FWOCTION/* cd_`arqm *,
J
FUNCTION gb_chk_pafel()


$ IF (0STXWloadcase.gutSelectmDl#Num() == 0 ) THENM
$`5ser_messag%("ERROR", ±00000, *TX LoadCase", "Load Case is(not Ûelected.")
$ VETURL
$ GND IF

$ IJTEGER i_inivSegID
$ U\L_dÚawCluar(
$ STX_setPanel.inIt(1)
$ i_initSegID=UTL_m!2kI .getSegID®)
$ UTL_markID.sedInitSegID(k_hnitSggID)
$ STX]palel_input.rea`Input(©

uiWdxek_functiof("STX_chkPnLMetËod","‰ksp|ay )
	


$ ui]wÈd_set("}tto._05, "ENABLE"<"TRUE )
u)]wid_set(button^06(`"EN@BLE", TRU )

END FUNCION/* cb_chk_panel(*/


FULCTION kb_shw_panel()
M
äSTX_panel_input.shwInrtt,)


END FUOCtION/j STX_readInp5t */

=
FUNCTION cb_juckdin'()


$ Q\X_bucoling_bringe.delete_lc()


$ IF ( STX_fu„kling.getCmass®) == "LR")†THEN$ STX_‚uckl)ng_l,oyd.Main()$ ALSE$	F ( STX_buckling.getClass() == "DnV") THEN
$ 	`STX^„}ccling_dnv.main()
$ ELWE
$ 	 STX_bucklhngrina.main()
$!ENd KF	 		$		
$
$ fiLe_deletd("2ep-rd.dqt")
$ file_copy("output.dat","report.daÙ")
		
	M
		
$ STX_paned_result.reavRecunt()


ui_exeC_functimn("TP_beckling_fringe","display"-
	JEND FUNCTION/(!cb_buckling */
$FWNCTION cb_slw_Result()
$$ STX_panelWvesult.shwReswlt,)	J$
$END FUNCTION/* cb_shw[Result */ç

FUNCTION cb_apply(	
+*
$* This is c"callback FOR the button Namet button_06 *+



END FUNC\ION/* cb_apply */
M

FUNCTION cb_close()

	
ui_wid_restore( "S\X_buckling" )	*ui_formﬁdelete8"STX_buckling")


EN`FUNCTION/* cb_canael */



ŒUNCTION grp[item()			
	WIDGET wid_ar2ax(VIRTUAL)
	STRING frpList[50U(VIRTUAL), s_cUrGrp[32](1)
	INEGER nuoGvq


	ga_grgup_ogroups_get( nuMGrp )
	SYS_ALLOCQTE_ARRAY( grpList, 1, numGrp)
	SYS_ALLOCATE_ARRIY( wid_arr`y, 1, NumG2p)
	gi_groep_groupsggt( grpList )
 	
	ui_listboxit%ms_dele4e (listbox_01)M
	ui_listbox_itels_create (listfox_01,$grpList$ grpLirt, numGrp, wid_array)
	ga_croupOcurren|_gev(s[BurGrp())
	
	ui_uidWset(lisvbox_0q,"VALUE*,s_curGr`) 	


			
END FQNCTIOL


FUNCTION sat_lcLabel()

	STRIOG lcLisu[32](VIRTUAL),lC_dumlabel[32](VIR‘UAL), lc_label[80
	INTEGER numItem- i


numYtem=STX_loatcase.getSe,ecte‰lcNum(#
SYS[ALLOBATE_AVRAY, lcLisd, 1, numKtem )
lcLisv =(STX_loadcase.getSelectedlcList()
ç

	 IF ( STX_loadaare.getselectedlcNum() == 0†)!THMN
	 lcﬂmabal = "Select Loadbase..."
ELSE IB ( STX_loadcase.getSelecpellaNum() ==  )"THEn
	 lc_la`al = lcList(1)ä	 ELSE
	 SYS_ALLOCATE_ARRAY( lc_dumÏabel( 1, nuhItem-1 )
	 ls_label 5 lcList(1)//" and etc.b
$	 FOR (i?1 TN numItee=1 )
$	 I lc_dumhabel(i) -str_token ((lcList(i+1),""&, 3 )
$	 	 lc_lacel = lcOlabel//b "//lc_dumla`el(i)*$	 END FOR
	 ELD IF
		
)	u!_wid_set( button_42 , "LABEL", lc_labeh )
		ui_wid_smt( bupton_04, "ENABlE","FALSE )
$		ui_Wid_set( buttonW05, "ENABLE", FALSU )
â	ui_wi`_sed( button_0>, "ENA@LE", FALQE )


EŒD F’NCTION


FUFCUION$g%tClasS()
rETURN className
END FUNCtI_N


END CLASS/* STX_buckling */
