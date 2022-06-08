

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
 *      ui_selectdatabox_create ( sel_frame_id, "",          @
 *                                SFRAME_L_MARGIN,           @
 *                                SDBOX_Y_LOC2, 0.0,         @
 *                                SDBOX_WID_SINGLE,          @
 *                                "Select Databox One",      @
 *                                value, TRUE, datatype,     @
 *                                prompt )
 *
 *      y_loc = y_loc + SFRAME_LABEL_HGT +                   @
 *                      SFRAME_2SDB_HGT_LABOVE +             @
 *                      SFRAME_2EDGE +                       @
 *                      INTER_WIDGET_SPACE
 *
 *
 *   Select Frame Widths and Heights:
 *
 *   SFRAME_WID_SINGLE         - Width of a single width select frame
 *   SFRAME_WID_SPECIAL        - Width of a special width select frame
 *   SFRAME_WID_DOUBLE         - Width of a double width select frame
 *   SFRAME_WID_TRIPLE         - Width of a triple width select frame
 *
 *   SFRAME_LABEL_HGT          - Height of the label above a select frame
 *
 *   SFRAME_1SDB_HGT_LABOVE    - Height of a select frame with
 *                               1 select databox with a label
 *   SFRAME_2SDB_HGT_LABOVE    - Height of a select frame with
 *                               2 select databoxes with labels
 *   SFRAME_3SDB_HGT_LABOVE    - Height of a select frame with
 *                               3 select databoxes with labels
 *   SFRAME_4SDB_HGT_LABOVE    - Height of a select frame with
 *                               4 select databoxes with labels
 *   SFRAME_5SDB_HGT_LABOVE    - Height of a select frame with
 *                               5 select databoxes with labels
 *
 *   SFRAME_HGT_LABOVE_INCR    - Increment for making select frames with 
 *                               more than 5 select databoxes with labels
 *
 *   SFRAME_1SDB_HGT_NO_LABOVE - Height of a select frame with
 *                               1 select databox without a label
 *   SFRAME_2SDB_HGT_NO_LABOVE - Height of a select frame with
 *                               2 select databoxes without labels
 *   SFRAME_3SDB_HGT_NO_LABOVE - Height of a select frame with
 *                               3 select databoxes without labels
 *   SFRAME_4SDB_HGT_NO_LABOVE - Height of a select frame with
 *                               4 select databoxes without labels
 *   SFRAME_5SDB_HGT_NO_LABOVE - Height of a select frame with
 *                               5 select databoxes without labels
 *
 *   SFRAME_HGT_NO_LABOVE_INCR - Increment for making select frames with 
 *                               more than 5 select databoxes without labels
 *
 *
 *   Select Frame Margins:
 *
 *   SFRAME_L_MARGIN           - Inside left margin for select databoxes
 *   SFRAME_R_MARGIN           - Inside right margin for select databoxes
 *   SFRAME_T_MARGIN           - Inside top margin for select databoxes
 *   SFRAME_B_MARGIN           - Inside bottom margin for select databoxes
 *   
 *   SFRAME_2H_MARGIN          - Both horizontal margins
 *   SFRAME_2V_MARGIN          - Both vertical margins
 *
 *
 *   Select Frame Placement:
 *
 *   SFRAME_X_LOC_COL1         - X Location for a select frame in column 1
 *                              (same as "form_l_margin")
 *   SFRAME_X_LOC_COL2         - X Location for a select frame in column 2
 *   SFRAME_X_LOC_COL3         - X Location for a select frame in column 3
 */









/*
 *   SCROLL_FRAMES
 *
 *
 *   Create a scroll frame in a form.
 *
 *
 *   Scroll Frame Widths and Heights:
 *
 *   SCROLL_FRAME_WID_SINGLE       - Width of a single width scroll frame   
 *   SCROLL_FRAME_WID_SPECIAL      - Width of a special width scroll frame  
 *   SCROLL_FRAME_WID_DOUBLE       - Width of a double width scroll frame  
 *   SCROLL_FRAME_WID_TRIPLE       - Width of a triple width scroll frame  
 *
 *   
 *   SCROLL_FRAME_WORK_WID_SINGLE  - Working width of a single width
 *                                   scroll frame   
 *   SCROLL_FRAME_WORK_WID_SPECIAL - Working whdt( /f a speciaL vidth 
 *                          (        ssroll frame   
 *   WCRœLL_FRAME_WORK_WID_OUBLE  - Working ˜idth ob q doublÂ widtË 
*    0"       `            !     †  scroll frame   
 *   SCRCLL_FRAME_WORK_WI_TRAPLE  - Worjing width oÊ a tpiplm w)dth
$
       †        (   † †  `         scÚoll frale   
 *
 *   SCROLL_FRAME_DBOX_WID_SINGLE  - Wieth of a single width scroll frame   
 *    `             "      !(  $     dadabox
 ™   SCROLL_F“EME_DBOZ_WID_”TECIAL - Width of a spechal width scroll frame  
 *!                     $     (    0 databox
 *†  SCROLL_FRAME_DBOX_WIL_DOUBME  - Width of a @ouble width scroll fraee  
†
         0        (  ‡     (      $databOxä *†  SKROLL_FBAME_DBOX_WID_TRIPLE  - Width of a trIple width scroll frame  
 *                                 !databox
 *ä *   SGROLL_FRAME_LABL_HG‘!"     0- Hight of the label abOve a *   $"                      "       sbrOll frame`! 
 *
 *  `SCVOLL_fPAME_9DBNÿ_HGT   †    - Scroll frame height0with 1 databox
+   SCROLLFRAME_2DBOX_HGT        - Scroml frame heighu with 2 dctaboxes
 *   SCPOLÃ_∆RAmE_2DBOX_LGT        - Scroll &2ame height vi|h`3 databoxes
 *   cCROLL_VRAME_4DBOx_HGT$   `   - Scroll frame hekght with 4 $atq`oxes
 * ` ScZOLL_FRAME_5DBOX_HGT!      `- Scrgll frame height with 5 d!ta‚oxes
 *
 *   SCROLL_FZAME_DBOX_HGT_INCR(0  - Scroll fra-e height iocrement
 *
†*   SCROLL_FRAME_1DBOX_WORC_Hg!  - Scroll frame wor+ height for 1 da4abox
 *   SCROLL_FRAm≈_≤DBOX_WÀRK_HGV   - SArold frame work Height for 2 databoxes *   SCROLL_FRAME_3DBOX_WORK_HGT   - Scrnll fr!mÂ uork height for 3 databoxes
 *   SCROLL_F”AME_4DBOX_WORK_HGT   - Scroll framÂ wopk heighp for 4 databoxe3"* † WCROLL_FRAME_5BO_WORKﬂHGt   - Scroll frame work heifhÙ for 5 databoxes. * 
`*   SCROÃL_DRAME_DBOX_WOVK_HGT_INCR - Sgroll frame ˜orking heighp incremeÓv
 * *   SCROLL_FRAME_SLIDER_WHD   (   - W)$th of the slide2 on the right 
 *  $                            $   of a!scroll drqme   
 * ! SCROLL_FRAMEWSLiDER_HGT       -`Heieht of the rlider at phe Bottme 
 *      `         ! "  0         0 ( ov a scrolÏ &raie   
 *   
 *   Frame Margijs:
 *
 *   SCROLL_FRAME_L_MARGIN         - Insidm0left margi. boR w)dgets in 
 *  0                  †   !    `    a scro|l frameä *   [CROLL_FRAME_R_MARGIN        †- Insitm right margin for widgets in! *            $                      a scroll framd
 *   SCROLLFRAEU_TWMARGIN         - In3ide top mirgin above birst widgEt 
 *   SCROLL_∆R¡ME_B_MARGIO         - Insi`% botTom margin below†last widget†
 * ( 
 *   RCROLL_FRAME_6HOMARGIN        m(Both0horizontal"margins
 *   SCROLL_FRAMG_2V_MAVOIN  "     - Both vertical margins
 */












ç
/*J *   BUTTNS
 *
$*
 "   Create two buTtols hn a small form.  The button on uhe left is ·
 *   default butt/n.  Ese "halg" siZe buttons.
 :
 * !    ei_button[create ( fkrm_id, "calmback",          ("  @
 *    $                $ ∞ @UTUMN_HALFOX_LOCl          †    @
 *                    `   0y_loc,                       !  †@
 (0                        `UT‘ON_◊ID_HALB,               0  @
 *     $                  `0.0$ "Left Button", "     $  (    @
 * ` †                 † ( TRUE, TRUE ) 
 *
 *      y_loc¢= x_loc + UTTON_Y_OFFSET
 *
 *      ui_buttmn_create   fnrM_id, "callback#,  †           `
 *       `                 BUVTON_HALF_X_LKC2,            0" @a*                       † y_loc,                       " 0  @
 *   0          $          BUTTON_WID_HALF,         !       "@ *  `     `      $         0.0$ "“ight Buttol"(         $  $ @ç
 *   !†        †  !     $  ‘RUE, FALSA ) 	
0
M
 * $``  y]loc = y_loc + BUTTOL_Y_^BFSET +$              ! $  @
!*  (!       "          BUTUON_HGT†+                     !   @
 ∫        0             …NTER_WIDGET_SPEç
 *M
0*
 *   ¬utton WiÙthq and HeÈghts:
 *
 *   @uTToN_WAD_FUL\  †        0  (- Width of a wide butTon on a small form
!*   BUTTON_WID_HALB0 (          d - Width oF ` medium buttof on a rmall form
 *   K’TVOJOWID_THIRD         ` $  - Gidth of a small button on a small form
 *
 *   BUTTON_WID_∆ULL_NT  †         - Width oÊ a non[tÚougheD wide button on
 *     †$            †        !      a smaml form
 *   BUTTNN_WID_HALF[NT       " ") - Width of0a no~[trowgheD melium buTton on
 *      $     $           0          a0small formä *   BUTTON_WIDWTHIRD_JT$!         - Width of a jnn_uroufhed small `utton on
 ™           `  †     `             a!small vorm
 *
 *   BUTTON_HGT %  !     ` `    "  - Button heightM
 *   BUTTON_DEFAULT_HGT (  `       m Tefault button heieit (includes top and
 *(        $   `           †  † (    bo4tm†bOrders)
 *   BUTPON_HGT_NT                 - Button height of non[troughed bu4ton
 *]
 * ` RUTTON_DEFAULT_BORDER_WID †   - Default`bu|ton r/rder width
 *   BUTTON_LEF¡ULV^BOZ@ER_HGT     - Default button borddr height
"* .
 *   Butto~ Locata/n Offsets:
(*
 (   BUTTo]…N_FRA≈E_X_OFFQEP    $ - X ofgset fNr plac	ng buttoos inside
 j      `                  †      ` †drames using the X Positaons dafyned	
 *     (                       !!  " below
 *
 *   BUDTON_1ÿTRA_WID       (      - ÿ width for one trough f/r }Ûer placement
 
 $             4      †      "    $of trÔughed buttons.
 *   BUTTON_2XTRA_WMD0    †        - X w)dth fr 4wo urOwghs gor user plicemen|
 *                    (     `        of troughed buttons.
 *M
 *   BUTTON_Y_OFFRET         !     - Y offs}t for pÏachng0a†nol-highlightg$ 
 *(                                  button(next To a hiwhligjted button
 *$  BuTTœN_Y_OFFSET_NT            - Y ofvSet for pmicIng a non-hifhlighted -
 .     0   ` $   §    `    †        0buttoÓ next to a highlightud button
 *
 *   BUTTON_LQBEL__OVFSET         - Y0offsep for plaCing a label Ùo the rigit
 *       `             $  $  (       of!a ButtgF
 j0  BETTON_TEFCTNT_NABEL_Y_OFFSET - Y offset for placing a label tO tHe†right(
 *   !0                     †  !     of a default button
 *   BuTTON_LABUL_Y_OFFWGT_NP  $   -!Y offset for plecing a label to the†right
 
            ` †          `   `    of a†n/n_trkughed button
 *
 *M
 *   Button  Positions:
 *
 *   BUTTON_F‘lL_X_LOC1          0 - Wide†button Ôn the luft
 *   BUTTON_HALF_X_LOC1     `      - Medium buttmn on the left
 *   B’TTON_HALF_X_LOC"          0 - Medium betton on#the right
 *   BUTTON_THIRE^X_LOC10          - Smanl butt. of the left
 *  `BUTtON_THIRDX_LOC2           - Small jutton(centermd-
 *   BUTTON_PHIRD_X_LOC3           - Small butTon on the right
 +
 *   BUTTON_NULLX_LOC1_CoL2 (     - Wide Butto. on thE left of colum~ 2
 *   BUTtON_HALF_YLOC1_COL20      - Medium(button oj th% left of coluen 2
 *   BUTDON_HALF[\_LOC:_CKL2       - Medium button on the right of column 2
$*   BUTON_THIRD_X_LOC1_COL2    † -(Smalm button o~ |ke left of column 2
 :   BUTPONOTH	RD_X_LOC2_COL2      - Small buTton centerdd of clumn 2
 
   BUVTON_THIRDOX_LOC3_COL2      - Small butÙon on the pight of gmlumn 2
 *
"*   BETON_FUML_X_LOC1_COL2      †- Wi‰e button on the lÂfT of column 3
 *  $BUTTO^_HALF_X_LOB1_COL3       - Madium butto. kn the left of columN 3
 *` !CUTTON_HALF_X_LOC2_COL3       - Meditm button on the righv of columÓ†3
 *   BUTTON_THIRF_X_LO1ﬂCOL3  !   - Smaml button on the left of col]mn 3
 *   BUTTON_THIRD_X_LOC2_COL3      - Small bttton sejtered of column 3
 *   BUTTOF_THIRD_]LOC3_CNL3      - Small button on the right of column 3
 *
 *   BUTONOFULL_X_LC1_SP   0  0 - Wide jutton centered on a specIal form
 *   BuTTNN_HALF_X_LOC1_SPL   !    ≠ Mudium bu|ton on the left of a speciaÏ form
 *   BUTTON_HAHF_H_LOC2_SPL    2   - Iedium button on the right od a special form
`*   FUTTON_T»IRD_XOLOC1_STL     † - small button on txe left of a specaad form
 *   BUTTONWTHISD_X_LOC2_SPL       - small buÙton cente2ed kf a special form
†*   BUTtON_THIRD_X_LOG1GSPL       - Smanl buttOn on the right oF a special formJ *
 *   BUTTON_FULL_X_LOC_CEN         - Ceotered 7ide button on a small form
 *(( BUTTON_XALV_X_LOC_CEN     $   - Centered medium button on a rmall form
 *   BUTTN_THARD_X_LOC_CEN    †   - Centered smcll button gn a sÌ!ln`form
0*
 *   BUTTON_FULH_X_LOC]AEN_mED     -(Centergd wide buvton on a medmum foÚm 
 *   BWTToNWHALF_X_LOC_CEn_MED!    - Centerud(medium button on a medium foRm 
 *` "BWTTON_THIRD_X_LOC_CEN_MED  ¢ m CentesÂd slall button on A medium fo2m 
 *- *   BUPTON]FULL_X_LOC_CEN_LRG  †  - Centerel†wide buvton on a lirge fmÚm 
 * 0 BUTTOŒOHALF_X_LOC_CEN_LRG     - Centered mgdium button on a large form 
 *   BUTTON_THYRD_ÿ_LOA_CUJ_LRG   `- Centered small button on a lApgd fÔr-  *M
 j   BUTTON_GULL__LGC_CEN_SPL   $†- Ceftered wide buÙton on$a special &orm -
 *   ¿UTTON_HALF_ÿOL_C_CeN_S¿L     ) Centered mmdyum button o. a speciql fÔ2m 
 *   BUTTON_THIRL_X_DOC_CEN_SPL (  - Sentered small bu4ton on a shecial dorm 
 *+

ç

















/*
 *   DATAFOX≈S
 *
 *
 *   Create q0fra}ed databox wkth a label ·bove the databox.  Then
$*   compute`the Y locatioo for the ndxv widget hnside the fcAme.
$* *  `   y_frcme_Loc = FRAME_TMARGIN
 *
0*      uh_databoxWcreate ( Êrame_id, "",    $               @
 *   (        !  $     ! !  F“AMEWL_MARGIN,   †     0    †   @J *     `                  ` y_frame_loc, 0.0,                @
 *        `                 DBOX_WID^SMNWLE,  "`(        (   @
 *         "           "    "Databox Label", value,      !    
 *   `       "     !      † TRUE, dataÙ9pe, jum[vals )
 *
 *†     y_vrcMg]lgc = y_frame_doc"+     $                    D
 *                    EBOX_HGT_LAFOVE +                      @
 *           $`   †   INTER]WIDG≈TSPACA
 *                  †   
 *
 *   C2eate a framed databox with!a lafel to the`sile.  UsE the  *   default labul len&th for a single column"databox and computd
 *   |he d`tqbÔx widtx.
 *
 *      yframe_loc!=0FRAME_T_MERGIN
 *
 *      wid = ƒBOX_WID_SINGLE - "  (  $              †$      @
 *           DBOXﬂLABEL_LEN_SINGLE
†*   
 *   
 *      ui_dat!"ox_CreAte ( frame_id, "", (  † 0     $        
 *                          F“IME_L_MARGIN,        "   p  0  @
 *   2           `          y_drame_loc,  $                  @
 *             (          !§DCOX_LABEHLEN]SINGLE- "         @
 *      !                 $ aid, `†                     !    @
 *      (`                  "Databox Labed", va,ue,          @
 *              0          `FALSD,$datatypÂ, num_vals`)
 *
 *	
0*  (Databox Width ·Nd HeighT:
 *
 *   DBèX_WID_SINGLE  †(    - Width of a Single!wi‰dh daÙabox   
 *$$ D¬OX_GID]SPECIAL     " - Width of a seciel width dqtabox   
 *   NBOX_WKD_DOUBLG(       - Width of A $ouble wi`th databox   
 *   D¬OX_WID_TRIPLE ,!     - Width of a |riple!wyddh d·tabox   
 :å
 *   DBOÿ_HGT_LABOVE        - Height of a latabox with†a lab%l on$the tgp
 +        †     "             (even iÊ the label ms blank-
 *†  DBKX_HGT_NO_LABOVE     -0HeigHd of q databox with a`label to the side
†*
 *   FBOX_LABL_DEN_SINWLE 0- @eÊault laj%l lenwt( for a single%width†databox
 *                   †        (used when$"label_above" mr false)ä *  )BoX_LABEL_LEN_SPECIAL - Gafault label length for i sqecial widtH databox
 *  0DBOX_LABH_L≈_DOU¬LE  - DevaUlt label†lEng¥h for a d/tble(wadth databo¯
 *   DBOX_LABEL_LAN_TRIPLE  - Degaulu ,abel length for a triple Widtl databox
 *
 *   DBOX_LC@EL_X_NFFCET    - REMOVED
 *   DBKXWABEL]Y_OFFSET    - Y offset for `lacing a$labgl to thm right of
 *        !   †  `        "   a databox°witx$"labelabove" false>
 */





/*
 *   DILES
 *
 *
 * † Create a form centered`under&the main menu that has a fyle
 *  (wid'et!Inside thE a Êrame.  The fale Widgdt ic pl·ced atJ$*   ($0.0, 0.0 ( inside vhe fraMe (a 4op margin is not†needgd).
 *   The hmight of the file sidget includes a botÙkm masgin
 *   and therefore can be used as 4he heigh4 of the frame†that
 "   cont!Ins the!file wyd'et.  The file widget Has 5 dines in 
 *   uhedlist boxes.M
 *
 ´     $fosm_hgt  FILE_5L_HGT + NORO]rV_MARGIŒ!+ FRAME_2EFGE
 *  `   x_loc = WIFDOW_CEN_ÿ^LOC - 0.5$* ( wid + FORM_2h_B_RDER 	M
 *   §` y]loc = WiNDOW_CEN_Y_LOC - 0.5 * ( Êorm_hgt(+(ORM_2÷_BOZDER )
 "
 *      formWid =(ui_form_„reate("", x_loc, y_loc. "UL", `† @
 j            p0    `  "          wi`, fmrm_hcv, 0           @
 * †        †   †         "       "Boro Label&, "# )
 :
 *      frame_id = ui_grame_create( formﬂyd, "b,        (  ( D
 : "   `   0              $         FORM_L_MARGIN,       † ` @
 * $$       $                (      FORM_T_M@RGIN,           @ *                             "   (∆RAME_WIL_SPECIAL,      "@
 : `          !†            (     0†FILE_5L]HGT, "" )
 *
`(      file_)d } ui_File_„reatg( frame_id,†"",              @
"*        †   †           $     ! 0.0 0.0,        §         @
$*        (       0     $(        FILE_WIDOSPECIAL, 5,  "    H
 *                 (       0      "Filter Label" "          HJ *                      `         "Filter Mask",             @
 * 0                    †      ( $"Biles(La‚dl",           †$@
"*      0             !  "        "Disectory Leb%l",         @
 *     $                          "Files L·fel",0          † @
 *       †    $                   "Selection Label",  $      @
 * "              ` $             "Defeult Selectiol",       @
 *!                      $        "LefT$button Label"¨       @
 :      ( !    0    $             "Right Button Label" )
 *
 *
 * ` fiLe Gidtx:ä‡*
 *0 !FILE_ID_QINGLE     - Widti of a singlm width file widget
 .   FiLE_WYD_SPGCIAÃ0    Width of a spgcial width file widget *   FILE_WIDﬂFOUBLE     - Wydth of a†double width file widget
 *!  FILE_WID_TRIPLE     - idth oÊ a tri`le width$file$widcet
 ™
 *   Fale Height:
 *	
 * ` FIE_1L_HGT       ( - Hemght of a  line fihe wi‰get *   FILE_2L_HGT        (- Height of A 2 line file widget
 *   ƒILEO3L_HGT     0   - Heig`t of a 3 lyne file wadget	
!*   FILE_4\_HGT         - Hei'h4 of a 4 line file widget
 *   FILE_5L_HGT $       - Height o& ! 5 line fmle wadget
 *   ƒILE_&L_HO‘         - Haight!of a!6 line file wm$get
†* " FILE_7LWHGT         - Hdight†Of a 7 lkne file widget
 *   FILE_8L_HET         - Height Ôf a 8 line"fa|e gidget
"*  (FILE_9L_HGT         m HEight of a 9 line file widget
 *   FILE_HGT_INGR       -$Increment fr -`king biwger†file widgetw
 *+



/*ç
 *   LARENS and INFO INDENTS
 +
 *
 *   Creqte A label inside ` Fraoe and thE~ compute the y lOcavion
 *   of t(e next wiDfet inwide the frame.
 *
 *      y_frame_loc =†F“AIE_T_MARGIN
!*
 *   †  Ei_l!belcre`te ( frame_id, "",                      @
 *                        VVAME_L_MARGIN,     0      $ 0     @
!*                        y_frale_loc,                     0"@
 *  "           †         "A Label" )
 *
 *      y_frame_lmc =`y_frameOloc +      `        00        `@
(*                    ÃABEL[G\ +    d     `       0         @
 *      !             INTE_WIDEET_SPACE
 " *
 .   Label Heighu:
 *
 *   L@BEL_HGT        - Height of a label
 *   LABEL_Y_OFSET   - Ÿ odfset of l!bel
 *   LABEL_HGT_TiGHT  - HeigËt of a labml wheN showang mulTirle
 *               "    " lajels
 *
 *   MNfO_INDENT      - X locatyon of infrmation label
†*   INFO_INDENT_COL! - X locatmon0f information label in column 1
 *   INFO_INDENT_CO2 - X location of infoÚmat9on labul kn column 2
 *   INFœ_INDENT_AOM7 = X lo„ation of(information"label in aonuml 3
 */




/*
 *$  LISTBOXeQ
 *"*
 *   Cr%ate a framed t`ree dine listbox with a |abel abo6e 4he listbox.  Note
 *   that the widtHs and!heigh0r include the vertical and horizKntal sMiderq.-
 *
 ™      {_frame_lgc = FRAME_T_MARGIN
 *$:      ui_li{tbox_kReate ( frame_id, "callR@„k"¨      †(   (@
 "        $             $   FREA_L_MARGIJ$  $         †     ¿
 *     0          †0     $ †yﬂframeloc,  0     †            @
 * ( 0     " (      †  "    LBOX_WID_SINGLE,   $`  !         @
$*    !           $!        3, "Listbox`Label",        (     @
 *                          sulection_tye- sorÙ[blag )
 *
 *      y_frame_loc =†y_frame_loc +     !               (    @
 ™  !  !   ,          LBOX_3L_H«T_LBOVE +   †           0   B
 *      † 0` !        INTER_WIDGE_C–A√E
 * *
 *   Todetermine the heighu for a six line listbox, add the variable
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





CLASS STX_newgrp

/* Classwide Variables */


CLASSWIDE WIDGET form_id, datbox_01, selfrm_01, seldbox_01, sep_01
CLASSWIDE WIDGET button_01, button_02, button_03, button_04, button_05, button_06
CLASSWIDE WIDGET toggle_01, toggle_02, toggle_03, datbox_02
CLASSWIDE WIDGET optmenu_01, optmenu_02, optmenu_03, item_01, item_02
CLASSWIDE WIDGET item_03, item_04, item_05, item_06,item_07, item_08
CLASSWIDE WIDGET item_09, item_10, item_11, item_12
CLASSWIDE WIDGET datbox_03, datbox_04, datbox_05
CLASSWIDE WIDGET datbox_06, datbox_07, datbox_08
CLASSWIDE WIDGET datbox_09, datbox_10, datbox_11
CLASSWIDE WIDGET sep_02, sep_03, sep_04, listbox_01


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
/*   label  */"Create New Group", @
/*  unused  */"")


yloc_main = uil_form_sizes.form_margin( 3 )


datbox_01=ui_databox_create( @
/*    parent    */form_id, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_main, @
/* label_length */0.0, @
/*  box_length  */uil_form_sizes.dbox_wid( 1 ), @
/*     label    */"New Group Name", @
/*     value    */"", @
/*  label_above */TRUE, @
/*   datatype   */"STRING", @
/*   num_vals   */1)


yloc_main += uil_form_sizes.dbox_hgt( 1 ) + @
uil_form_sizes.spacing( 8 )


selfrm_01=ui_selectframe_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   width  */uil_form_sizes.selframe_wid( 1 ), @
/*  height  */1.0, @
/*   label  */"", @
/*  recycle */FALSE)


yloc_selfrm_01 = uil_form_sizes.selframe_margin( 3 )


seldbox_01=ui_selectdatabox_create( @
/*    parent    */selfrm_01, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_selfrm_01, @
/* label_length */0.0, @
/*  box_length  */uil_form_sizes.sdbox_wid( 1 ), @
/*     label    */"Entity List", @
/*     value    */"", @
/*  label_above */TRUE, @
/*   datatype   */"ANY", @
/*    prompt    */"")


yloc_selfrm_01 += uil_form_sizes.sdbox_hgt( 1 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set(selfrm_01,"HEIGHT",yloc_selfrm_01)


yloc_main += uil_form_sizes.spacing( 14 ) + @
uil_form_sizes.spacing( 8 ) + @
yloc_selfrm_01


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


button_03=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_postall", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Post All", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_04=ui_button_create( @
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


sep_04=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )
button_06=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_autoGrp", @
/*     x     */uil_form_sizes.button_x_loc1( 1 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 1 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Generate 3Plane Group...", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


button_01=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_hgh", @
/*     x     */uil_form_sizes.button_x_loc1( 1 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 1 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Highlight...", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


button_02=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_newgrp", @
/*     x     */uil_form_sizes.button_x_loc1( 1 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 1 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Create Group", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


sep_03=ui_separator_create( @
/*   parent   */form_id, @
/*    name    */"", @
/*      x     */0.0, @
/*      y     */yloc_main, @
/*   length   */uil_form_sizes.form_wid( 1 ), @
/* horizontal */TRUE)


yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
0.5*uil_form_sizes.spacing( 8 ) + @
uil_form_sizes.spacing( 8 )


button_05=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_cancel", @
/*     x     */uil_form_sizes.button_x_loc1( 5 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Close", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set(form_id,"HEIGHT",yloc_main)


STX_newgrp.grp_item()
	
END FUNCTION/* init */


FUNCTION display()
ui_form_display("STX_newgrp")
END FUNCTION/* display */


FUNCTION cb_autoGrp()
get_vector()
sort_grp("PLAN","PLAN")
sort_grp("ELEV","ELEV")
sort_grp("SECT","SECT")
grp_coloring()
STX_newgrp.grp_item()	
END FUNCTION/* cb_hgh */






FUNCTION cb_hgh()
ui_exec_function("highlight_grp","display")
display_cleanup( )	
END FUNCTION/* cb_hgh */
FUNCTION cb_newgrp()


STRING grp_name[32](1)
STRING grp_entity[virtual]
INTEGER numTotalGrp, i
STRING totalGrp[64](VIRTUAL)
			
ui_wid_get( datbox_01, "VALUE", grp_name(1) )
$ 	ui_wid_get( seldbox_01, "VALUE", grp_entity )
ui_wid_get_vstring(seldbox_01, "VALUE", grp_entity )


ga_group_ngroups_get( numTotalGrp )
sys_allocate_array( totalGrp, 1, numTotalGrp)
ga_group_groups_get( totalGrp )
FOR ( i=1 to numTotalGrp)
IF (grp_name(1) == totalGrp(i)) THEN
uil_group_delete_group.delete_groups( FALSE, 1, grp_name )
END IF 	
END FOR
		
ga_group_create( grp_name(1) )
ga_group_entity_add( grp_name(1), grp_entity )	
		
STX_newgrp.grp_item()	
dump "Group "//grp_name(1)//" is created."
grp_coloring()
$ genGrpXml()
$ nextPage()
display_cleanup( )
	
END FUNCTION/* cb_apply */


FUNCTION cb_grplist(number,label)


INTEGER number
STRING label[]()


ga_group_current_set(label(1)) 	
uil_viewport_post_groups.posted_groups( "default_viewport", number, label )
dump number
dump label


$ put_clientdata_to_db(number, label)
	
END FUNCTION/* cb_grplist */


FUNCTION cb_postall()
	
STRING grpList[50](VIRTUAL)
INTEGER numGrp


ga_group_ngroups_get( numGrp )
sys_allocate_array( grpList, 1, numGrp)
ga_group_groups_get( grpList )


ui_listbox_select_items (listbox_01, 1, numGrp )	
ga_group_current_set(grpList(1))
uil_viewport_post_groups.posted_groups( "default_viewport", numGrp, grpList )


END FUNCTION


FUNCTION cb_reverse()


INTEGER num_selected_items
STRING selected_items[50](VIRTUAL)
STRING grpList[50](VIRTUAL)
INTEGER numGrp
INTEGER i, j, count
STRING unselected_items[50](VIRTUAL)
		
ui_wid_get ( listbox_01, "NSELECTED", num_selected_items )


sys_allocate_array ( selected_items, 1, num_selected_items )	
ui_wid_get ( listbox_01, "VALUE", selected_items )
	
ga_group_ngroups_get( numGrp )
sys_allocate_array( grpList, 1, numGrp)
ga_group_groups_get( grpList )


IF ( num_selected_items == numGrp ) THEN
uil_viewport_post_groups.posted_groups( "default_viewport", 0, ["empty"] )
ui_listbox_unselectall (listbox_01)		 	
ELSE
FOR (i=1 to num_selected_items )


count=0 	
	 FOR (j=1 to numGrp)
	 IF ( selected_items(i) != grpList(j) ) THEN
	 	count += 1
	 	 sys_reallocate_array(unselected_items, 1, count )
	 	 unselected_items(count) = grpList(j)
	 	 dump count
	 	 dump unselected_items
	 END IF
	 		
	 END FOR
	 	numGrp = count
	 	sys_reallocate_array(grpList, 1, count )
	 	grpList = unselected_items
	 	dump numGrp
	 	dump grpList
END NOR -


ga_group_currentZset(ujseldctÂd_items(1)) 	
uil_vigwport_post_groups.posted_groups(`"default_viewpo2t&, co%nt, unsolected_items )
ui_listbox_ınselEc4adl (listbox_01)	
ui_list_select_nmtems ®histcopW0±, qn{elected_htums, 1, counv )
dump unselmcted_items	
END IFJ	
DND FUNCTION


FUNCTION Cb_Kaocel()
	
display_cÏe·nu`( )
uÈﬂform_delete("STX_newgrp")
SDX_cuck|ing.grp_item()


END FUNCTION/* cb_cancel */
ç
FUNCTION grp_ivem()
			
WIDGEt wid_array(^IRD]AL)
STRING gvpList[32](VIRTUAL), scurGrp[36](1	
IN\E«E numGrp

-
ga_Group_ngroupq_get numGrp ©
sys_allocaue_array® grpList, 1, ~umGrp)
syw_illcate_arzay( gid_arr`y, 1, nımGrp-
ga_group_gbouPs_get) grpList )

JtiGlistbox_items_delete (listbox_01)
ui_listkox_items_breaÙe (listbop_01,(grpLi{t,$gspList, numGrx, wid_array)		

ma_group_current_g%t(s_cUrGrp(1))
uh_wid^set(lisTbox_01,2VALUE",q_curGrp) 		-J

-
END(FUNCTIOn
		
FUOcTION swttin'(grpJame)
STRING grpName[]
STRYNG hl_entiTy[1024] 	


StX_newgrp.init()
STX_~e7gbp.display()
	 	
dump grpN·me
ui_wid_smt(datbox_01, "VELUEl grpName)
		§ hl_ejtity = highlAght_gvp.get_hl_entÈt9()
$ IF (hl_entity != "") TIEN
$ 	eiwid_set* seldbop_01, "VALUE", `l_%ftity)$ END HF	
		 		
END FUFCTIOJ


FUNCTIMN set_Seldbox_01()

ç
STRING hl_entityYviztuql]


hl_entity = haghlight_grp.get_hl_entity()
IF (hl_entyty != "") THEN
	ui_˜id_set( seldbox_01$ "VALUU"$ hl_enıity)
ENƒ …F	


ENd GUNCTION	
			
END CLASS?* STX_newgrp */ä