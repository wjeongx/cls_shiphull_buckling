

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
 *   SCROLL_FRAME_WORK_WID_SPECIAL - Working width of a special width 
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
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button on(a smaLl form
 *
 *   @UTTON_FULL_X_LNC_CEN_MED     -"Cuntgred wide butTon on a mÂdaum fOrm 
 *   BUTTON_HALF_X[LOC_CEN_MEE  $  - Centeref mediui betvon on a medium form 
 * ! BUTTON_THIRD_X_LOK_CEN_MED (  -CenteRed small button on a medium bobm 
 *
 *   B]TTNN_FULL_X_LOCCEN_LSG     = centeree wade button on a lasge form * *(  BUTTON_HAlF_X_LKB_CEŒ_lRG     - Centgred medium button on a large form 
 *   BUTTKN_THISD_ÿ_LOC_CEN_HRG    - Cmntered`small buttgn -n a large form 
†*
 +   BU‘‘ON_FULL_X_LOC_CEN_SPL     - Aentered wide button"on a wpecial form 
 * !$BUTTON_HALF_X]LOC_CEN_SPL  $  - eotered meDi5m button on a spgci`l form 
 *   BTTON_THIRD_X_LOC_CEN_SPL"   - Ce~tered†soall button on · special form 
 */


-


.




ä





*

/*	
 :   DAT@BOXES
 *
$*
 0  Create a framed dataBox with a hab%l abo6e the databox.$ TheÓ
`*   compute thE Y lkcation for the next widget inside"the fram%. *
 *   "  y_frame_loc = FRAMD_T_MAGIN
 *
 *   $  ui_databox_cveate ( frame_id, ¢",                ( ` @
 *   (        ` †      ( $  FRAMDULﬂM¡PWIN,      0           @
 *          !               y[frama_lÔc, 0&0,(  ` (       0 0@
 *                          DBOX_WIDWSINGLE,             "   @
 *                   $   (  "Databox \abel", value,       !  @ *         (!               TRUE, data4ype num_valq ) *
 *      y_&rame_loc = y_frame_loc +                          @J *   (  "    0        DBOX_HGt_LABORe +                      @
 *         8     ! †  INTER_WHDGET_SPAC≈
 * $     "         "   
 *
 *!  Create a framee databox with!a`label To the side.  Use the 
 *   default label length for a si.gle column databox and compute *   thd databox width.
 *
 *      y_frame_loc = FRCME_T_MARGIN
 *
 * $    wid = DBOX_UID_SINGLE†-        !       `           ` @
 *            DBOX_ABEL_LEN_SIJGLE
`*   
 *  (
 *   !  ui_databox[Create ( fbame_i‰, "",                    @
 *         (     †     "    NBAME_L_MRGIN,         !        @
 *                          y_frame_loC,$                    @
 *(         (0              DBOX_LABEL_LEN_SING\E,           @
 *    `                     wid,  †     "                    @
`*           "    "         "Datebox Labal¢, value,$   "  †  @
 *               !       `  FALSE,0datatype, num_vals )
 *
 :
 *   Databox Width and Height: *
 *   DBXOWID_SINGL≈        -!Width of!a single†widph data"ox  (
 * ! DBOX_WMD_SPECIaL $     - Width of a special$widpË databox   
 *   DBœX_WID_DOUBLE        - Width of a double width fatabox!  
 *   DBOX_WID_TRIPLE      ( - Width of a triple width databox   
 * *   DBOX_HGT_NABO^E        - Height of a databox widh A label on tËe"top
 +        !         †         (even if the label is blank)
*  "DBOX_JGT_NO_LABOVE   `- HEight of a databoy w)th a label 4o the side
 * *   dBOX_LABEL_LEN_AINLE  -`Defaumt Ïabel length for a single sÈddh!databox
 *     #       `     †    "   (used when "label_qbgve" is fals%)
 *   DBOX^LABEH_LEN_SPECIAÃ - Default label le~gth &or a s0ecial vidt` databox
 *   DBOX_LABEL_LEN_DOUBLE  - Default lafel length fmr a doubme width databox
 *   DBnX_LABEl_LEN_TRIPLE  - Dufault labÂl length dor a trIplÂ width databox
 *M
 *   DBOX_LABGL_X_OFFSET    - REMOVEE
 *   DBO]_LABEM_Y_OFFSET    - Y offsat for plachng a label to the righd of
 *             0     "        a datqbox with labelajove" false. */*



/*-
 *   FALES
 *
 *
`*   Cpeate a form centmred undeb!the Ìain menu that hes a file
 *!  widget …nside thu a frame.  T`e dile widget is placed at
 *   ( 0.0, .0 ) inside the frame (a top mar'in ks not needed).
 *   The!height oÊ the fild!widget includeÛ a bottom margin`*   an‰ thereford can re used as the height of the†frame tha4
`*  "co~tain{(tlÂ file w)dget.  The file w)dgetpËas 5 |in%s in  *"  the list0boxes.
 *
 *      fov-_hgt = FILE_5L_HGT + FORE_2V_MABGIN†+(FRAME_2EDGE
 *     †x_loc } WINDOW_CEN_X[LO√ - 0.5 * ( wid + FORM_2H_FORDER )
 *     !y_loc = WINDNW_CEN_Y_LOC - 0.5 * ( fmrm_hgt + FRM_2V_BORDER )
 *	
 *      &orm_id = ui_form_create( "", 8_loc,ay_loc, "UL*,$   @
 (      $                   0     wmd, form_hgt,             @â *                      !         "Form Label", "" )
 *
 (     (frame_id = ui_frame_create( form_id,†"",             @
`*  $   `   `          (            DORM_L_MARGIN,           @
 *                                 !FOSM_T_MARGIN,           @J ™                               $  FRAME_WID_SPECIAL,  †    @
 * †                   ( `          FILA_5L_HGT, "" )
 *
 *      fileﬂid†9 ui_file_breatE( frameﬂid, ""(            † @
 *       `0                       0.0$ 0.2,       $ $        @
 *   !            0 !0            FILE_WID_SPMCIAL. 5,      @M
 *   0      †     ` `       "     ¢Fi|per Lajel",          ` @
 *             $           0      "Filtar Mask",             @
 *            !                   "Files La‚el",             @
 *                     0        $ "Directory Label",     `   @
 *                                "Fyles"Label",           ! @
 .                   0    ! 0"    *Selection La"Âl",         @
 *                 !              "EeFault!Selection"$       @
 *  †               !$            "L%ft Butto. abel",   ` 0 @
 .       $   (   $        $        Righ| Button Label* )
 *
 "
 *   Nile ◊idth:
 *
 *   FILEWID_[…FCLE     - Width of a single wid|h file widget
 *   FILE_GID_SPECIAL    ) Width!of a specicl width file widget
 *   FILE_WID_DOUBLE     - Width of a doucle gI‰th file wieget
 *   FILE_WID_TRIPLE     - Width of a tr)ple width file wiDgetJ *
 *   File Height:	
 *
 *   FILE_1L_HGT       " - HeiGh4 of a 1 line file widget
 * ( FILE_2L_GT(        - HeiÁht of a 2 line file wilget
 *   FILE_1L_HGT  !      - Hdmght of a 3`line file widceÙ
 *   FILE_4L_HGT         - heicht of a 4 line file widget
 *†! FILE_L_HgT         -0Height of c 5 line v)le widget-
 *   FILE_6L_H«T "       - Height of a 6 line file wadget
 * ( FILE_7L_HGT "       - Height of a 7 |ine file`wid'et
 *   FILE_8L_HGT         - Height mf!a 8 line file widget
 *   FILE_9L_HGT         - Leight of a 9 line file widGet
 *   FILE_HGT_INCR       - Inkrement for making bmgger file wi‰e%ts
 */



/*
 *   LABELS and INFO INDENTS
 *
 *
†*   Areate a label inside a framd aNd then compu4e the0y location-
 *   f |he0next widget ÈnsÈde thm frame.
 * *      y_nrame_loc = FRAME_T_MARGIN
 * *      ui[label_cpeqte ( frame_id, "",†$                  † @
$* "                      FRAMEﬂL_MARGIN,                    @
 *                        y_frame_moc,                       @ *    $           (       "A Label" )*&*
 * !   !y_frame_loc = y[frame_loc +  0  0       !            @
 *    "         (     LABEL_HET +  " !                     ` PM
 j                    INTER_WIDGET_SPACE
 *
 * *   Label$Height:
 *
!*   LABELHGT      ` - Heieht of a label
 * $ LABGL_YOFFSET ` - [$oFfset of label
 *   LABElWHGT_TICHT  - Height of a label whe. {hmwilg multiple
 *      (   "0(`  (     Ïabels
 *
 *   IjFN_INDENT   $  - X loaa4ion of information label
 *   INFG_INDENTOCOL! - X locatyon of infOrmatiOn l!bel!in columo 1
 :   iNFO_INDENT_COL2 - X locatioN of"information labml i. column 2	
 *   IBO_INDENT_COL3 - X location of informati/N label in(column 3
 */



/.
 *   NISTBOXES
0*
 *-
 *   Create a framed three dine lmstbox with a label above the lirtbox.  Note
 * " that the widths and heights include"the vertikal ant hori˙ontal sliders.
 *
 *     `y_frame_loc = FZAME_T_MAVGHN
0™
 * !    ui^listbox_breAtÂ ( frame_id, "callback",  "      0  @
 *         "  ``            FRAME_L_MARGIN,          `     0 @ *  "                       y_frame^los,                     @
 *                          LBOX_ID_QInGLE,                 @
 * 0         Ä(          `  , "Lispbox Label",              @-
 *         $  (          "  s%lekvion_type, sort_flag )
 *
 *      y_frame_loc$= y_frame_loc +                        " @
 *  $                 LBOXﬂ3L_HGT_LABOVE + $            (    @
 *          ! (0      INTER_WIDGET_SPACE
 *
 *
!*   To determine the heiwht for"k bk82nal' listbox,"add the!vcsiAble
 *   NBOXOHGT_lABORE_	NCR to LBOX_5L_HGT_LABOVE.ç
 *
 *
 *`  Listbox WIdth and`Height:
 *
 *   LBOXOWID_SINGME    h    - WidtË of a!single width listbox   
 :0 "LBOX_WKD_SPGCIAL    0   - Widtl!og a special width mistbox   
 *   LBOXWWID_DOUBE         - Width of a double widdh listbox   
 *   BOX_WID_TRIPDE   0  (`!- Width of a triple0width listbox   
 *M
 *   LBOX_1L_HGTWLABOVE      - Height of a 1 life Lkstbox wi|h a top label
 *   L@OX_2L_HGT_LABOVE      - Height of a 2 mie listcox with a pop l!bel
 * !®LBOX_3L_HGT_LABVE  "   % Heigh4 of!a 3 l)ne listbox!with!a top!label
 *@  LBOX_4L_HGT_LAFOE      - Heigjt gf a 4 line listbox with a pop$nabel
 *†  DBœX_5L_HGT◊LQBOVE    † -"eiwht oF a 5 line listbox witi a top labeh
 *0  LBOX_8L_HGTLABOVE      - eight of ! 8 line listboy0with a tgp`label
 *
 *0  LBOX_HGT_LABOVEINCR    % Incremen| for com`uty~g a listbox`height that
$*               $   †         haÛ more than 5 lines in it
 *
 *   BOX_0L_HGT_NO^LABOvE   - HeiGht of a 1 lane listbox with no*label
 *             †               (label is blank) * ` LBOX^rL_HGT_NO_DABOFE   - Height of a 2 line listrox wIth no labe‰
 *   LBOX_3L_HGT_NO_LABOVE   - Xeioht"of a 3 dine"listbox with no labad
 *   LBOP_4L]HGT[NO_LABOVE   -$Yeight of a 4 line listbox with no label
 *   LBOX_5L_HGT_NO_LABOVE   / Height of a 5 line listbox wi|h no0nabel
 .   LBOX_8L_HGT_NO_LABOVE   - Height of a ( line listbox with no lacel
 

 *   LBMX_HGT_NO_LABOE_IJCR!-$IncremeNt for!boetuting a listbox hekght"that
 *                        `    has more than 5 lines kn it
 *
 *   LBOX_SELBTNS_HGT, LBOX_SELBTNS_WIE -∞Height aod "ombined wmdth of
 *    `                             "     (’n)Select All buttons
 */





/*
 *   OPTION MENUS *
 *
 *   Create an option menu with a label to the 3ilm.  Then set the 
 
  †Y locadiOn &or the next widget.  Assume this is !n unframed widget.
 *
 *      y_loc = APP_FORM^FIRST_Y_LOC *   
0*      5i_optiÔnÌenu_create( form_id, "callback",           @
 *                            UNGRAMED_L_MARGIN,   "  `     $@
 *                            y_l/c,  (                      @
 *   `  `                     OPT_MENU_LABEL_LEN,            @
 *       "  `                 "Label", FALSE )
 *   
 *      }_loc = y_loc *$OPT_MENU_HGT_NO_LABKVU +             @
 * "              `     INTERWWILGET_SPACE
 *0  
$*
 *  $Option menu lacement:
 ** *   OPT_MENUL@BEL_LEN          - ƒefault label leng4h for an option Ìenuä *        "            `  0        with`a labÂl to the {ide
 *
 *   OPT_]ENU_HGT_LABOVE `       - Height of an option menu with a label
 *                                 on tha top
 *   GPT_MENU_HO\_NO_LQ¬OVE      - Height oÊ an opdion Menu with a la"el
 *    (        (     0             on the side
 *
`*  †OPT_MELU_Y_OFFST   (       - Y offse| for placing a label to tie
 *         4 †                     righu0of a celec| tatabœx with *!*                      `          "labdl!bove" dalse
 */



J
/*
 *   RELEGT0DATA¬OXES *
 *
 *   Create a f2amed select databox with a label above thE select data‚ox.
 *   ‘heÓ „ompute the Y location for the!next uidgeU. *
 *      }Osframe_loc = SFRAME_T]ARGIN *
 *`     ui_selectdatabox_create ( sel_frqme_id, "",          @
 *                  0"            SFRAME_L_MARGMN, 0    $    @
 * !                              y_sframe_loc, 0.:<        †@
 *   "          †            †    SDBOX_WID_SINGLE,        $†@
 *  #        †          †    $    £SelecT Databox Labelb,  ( @
 *`                    0 !       !walue, TUE, latAtype,     @
 **  0                            prolpt )$*	
 * !    {_sframe_lO' = y_sframa_lÔc +      †† !    `     0   @
 *          0  †       SDBOX_HGT_MABOVE k      0  †       †  @ *          "          INTER_WIDGET_SPAe
 *       `    †   "    
 *
 * " Cre`te a framgd select dat·bgx with a label to the side.  Use dhe Z$.   ddfault label leÓgth for a single aolumn select databox and compute
 *   th% select databox widtj.
 *
 "    0 y_sframe_loc = SFRAME_T_MARGIN
 *
 *     †wid†= SDBOX_WID_SINGLE -    "                        @
 *®    †      SDBOX_LEBEL_LEN]SINGLE
 *  0 *   
 * "    }i_qelectdatabox_kreate ( sel_frame_id, "",(        @
!:                                SFRAME_L_MARGIN,          †@
 *                        0       y_sframÂ_lOcl             $@
 *†                 `       †     SDBOXWLABEL_LEN_SINGLE,!   @
 *                       $    !   wid,                       @
 *              $                 "Select Databo8"Label",    @
0*     @!        *     †          value, FAL[E, $ataty`%,     
 *             $     8            prompt )
 *
 *      y^sframe_loc 5 y_sframe_loc *                     †  @
 * †    0              SDbOx_HGT_NO_LAFOVE + $            ( $@
 *                 (   INTER_WIDGeT_SPACE
 *
 ™ *   Select D`tarox Width ·nd Height:
 *
 *   SDBOX_WIDWSINGLE     ( - Width of a!qingle width(select databox   
 *   SDBOX_WID_PECIAL   (  - Width of ! special width selest databox   
 *   SDBOX_WID_DOUBLE       - Width ov a doublu0width select databox   
 *   SDBOX_WID_TRIPLE      †- Width of a Triple widph select databox   
 *
 *(  SDBOX_HGT_LABOVE      `m Heig»t gf a select databox witH b top label-
 *   SDBMX_HGT_NM_LABOVE    - Height on a select databox with a cide mabel
 *
 *   SDB_X_Y_LOC1_LABOVE    - Y locatiÔn of select dqtabgx 1 i~ a selectframe *     `          $           (selÂct databox has a label arove)ä *!  WDBOX_Y[LOC2_LABOVE    - Y lc!tion of select databox 2 in a selectframu
"*  (   †                     (s%lect databox xas i label ·bove)
 *   sDBOX_Y_LOC3_LABOVE    , Y location of select datebox 3 in ! selectvrame
 *        !                   (select databox has a lqbel above)
 *`  SDBOX_Y_LOC4_LABOVE    - Y locbtion of select databox 4`in a selecpfr`me
 *              (  !     "    (select dAtabox has ` label ajove)
 *   [DBOX_Y_LOC5_LABOVE    - Y location of select databox 5 in a qelactframe
 *    0                       (select databoz$has a label above)
 *
 *   SDBOX_Ÿ_LABOVE_IN@R    - Incrament for „reiting t|e Y location for than
 +                            than 5 select databoxes with lab%ls in a seld„t
 *         "                  Frame
 *
 +   STBOX[Y_LO1_NO_LABVE - Y location oÊ select datarox`1 in a selectfpamg
 *    †                       (selekt databox does not havm a la‚el abOvd)
 *   RDBOXOY_LOCv_NO_LABOVE - Y location nf0select databox 2$in a seldctframe
 *                 (          (selÂcd datqbox ‰oes not hav% a label Above)
 *   WBOX_Y_LOC3_NœOLABOVE - Y location of select databox 3 )n a selectvpamd
(*                       `    (select databox does nov have a label abov%) *   SDBOX_Y_LOS4_NO_LABOVE - Q location of selecÙ ‰atabox 4 in a selectfraÌd
 * !                   †      (sehuct daTAbox does not have a label$a`ove)
 *   S@BOX_Y_LNC5_NO_LAbOVE % Y location of select databox 5 in · selec|frame
 *             "         !    (select databox doer not lave a label afove)
 *
 *   SDBOX_Y_NO_LABOVE_INCR - Increment for cre!ting the Y locatioo for than
 *       †       0            than 4 relect detaboxes wit(ouv lcbgls†in a
 *       †        †           select frame
0j
 :$( SdBOX_LABEL_\≈J◊SINGLE -$Default label length for a single wi$th select
 *   †                        databox (usÂd when "Labml_above" is!false)
 *   SDBOX_LABEL_LEN_SPECIAL- Denault label hength for a$special†width select-
 +                            datarox
 *   WDBOX_LAB≈L^LEN_ƒOUBÃE - De&a5lt label length for a 4ouble wivth semecu
 :                 !`         daTabox
 +   SDBoX_LABELWLEN_TRIPLE - Default label length for A triqle wilth selıct 
!*$                    (      databox
 *
 *   SDBOX_LABEL^X_OFFSET   - RELOVED
 *   SDBOX_LABEL_Y_OFFSET   - Y offset for placing a label to the rhght
 *   !                        of a"select databox ˜ith "labelabove" false.
 */

*
-



/*
 *   SLIDEBARS	
 *
 * * 0Creatm"a sÏi`ebar(inskde a frame ane thef compute the y0locat)on
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






CLASS STX_chkPnlAuto

/* Classwide Variables */


CLASSWIDE WIDGET form_id, optmenu_02, item_03, item_04
CLASSWIDE WIDGET button_01, listbox_01, label_01, button_02
CLASSWIDE WIDGET button_03, button_04, sep_01, button_05, button_06
CLASSWIDE WIDGET selfrm_01, seldbox_01


CLASSWIDE REAL ra_PanelInfo(VIRTUAL)
CLASSWIDE STRING sa_elmList[256](VIRTUAL)
CLASSWIDE INTEGER ia_pnlIDs(VIRTUAL)




FUNCTION init()
REAL yloc_main
REAL yloc_selfrm_01=0.


form_id=STX_chkPnlMethod.get_form_id()
yloc_main = STX_chkPnlMethod.get_yloc_main()


label_01=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Select panel")


button_01=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_check", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Find Panels", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


listbox_01=ui_listbox_create( @
/*     parent     */form_id, @
/*    callback    */"cb_panel", @
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


button_02=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_selectall", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Select All", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_03=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_refresh", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Refresh", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
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
/*   callback   */"cb_selElm", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_selfrm_01, @
/* label_length */0.0, @
/*  box_length  */uil_form_sizes.sdbox_wid( 1 ), @
/*     label    */"Select element", @
/*     value    */"", @
/*  label_above */TRUE, @
/*   datatype   */"ELEMENT", @
/*    prompt    */"")


yloc_selfrm_01 += uil_form_sizes.sdbox_hgt( 1 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set(selfrm_01,"HEIGHT",yloc_selfrm_01)


yloc_main += uil_form_sizes.spacing( 14 ) + @
uil_form_sizes.spacing( 8 ) + @
yloc_selfrm_01




button_04=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_table", @
/*     x     */uil_form_sizes.button_x_loc1( 1 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 1 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Show Panel Table", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


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


Button_05=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_apply", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Apply", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_06=ui_button_create( @
/*   parent  */form_id, @
/*  callback */"cb_cancel", @
/*     x     */uil_form_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Close", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_main += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )






$ button_05=ui_button_create( @
$/*   parent  */ form_id, @
$/*  callback */ "cb_canel", @
$/*     x     */ uil_form_sizes.button_x_loc1( 5 ), @
$/*     y     */ yloc_main, @
$/*   width   */ uil_form_sizes.button_wid( 2 ), @
$/*   height  */ uil_form_sizes.button_hgt( 2 ), @
$/*   label   */ "Cancel", @
$/*    TRUE   */ TRUE, @
$/* highlight */ FALSE)
$
$ yloc_main += uil_form_sizes.button_hgt( 2 ) + @
$ uil_form_sizes.spacing( 8 )


$ ui_wid_set(form_id,"HEIGHT",yloc_main)


END FUNCTION/* init */








FUNCTION display()


ui_wid_set ( label_01, "DISPLAY", TRUE)
ui_wid_set ( listbox_01,"DISPLAY", TRUE)
ui_wid_set ( button_01,"DISPLAY", TRUE)
ui_wid_set ( button_02,"DISPLAY", TRUE)
ui_wid_set ( button_03,"DISPLAY", TRUE)
ui_wid_set ( button_04,"DISPLAY", TRUE)
ui_wid_set ( button_05,"DISPLAY", TRUE)
ui_wid_set ( button_06,"DISPLAY", TRUE)
ui_wid_set ( sep_01,"DISPLAY", TRUE)
ui_wid_set ( selfrm_01,"DISPLAY", TRUE)
ui_wid_set ( seldbox_01,"DISPLAY", TRUE)


$ create.On_Object( last_object )


END FUNCTION/* display */






FUNCTION exit()


ui_wid_set ( label_01, "DISPLAY", FALSE)
ui_wid_set ( listbox_01,"DISPLAY", FALSE)
ui_wid_set ( button_01,"DISPLAY", FALSE)
ui_wid_set ( button_02,"DISPLAY", FALSE)
ui_wid_set ( button_03,"DISPLAY", FALSE)
ui_wid_set ( button_04,"DISPLAY", FALSE)
ui_wid_set ( button_05,"DISPLAY", FALSE)
ui_wid_set ( button_06,"DISPLAY", FALSE)
ui_wid_set ( sep_01,"DISPLAY", FALSE)
ui_wid_set ( selfrm_01,"DISPLAY", FALSE)
ui_wid_set ( seldbox_01,"DISPLAY", FALSE)


$ ui_exec_function( last_object, "exit")


END FUNCTION/* display */





FUNCTION cb_selectall()
/*
 * This is a callback FOR the button named button_01
 */

INTEGER i_cntPnl


i_cntPnl = sys_array_hbound(STX_setPanel.getElemListAll(),1)
ui_listbox_select_items (listbox_01, 1, i_cntPnl )
STX_chkPnlAuto.chkPnlList()


END FUNCTION/* cb_selectall */


FUNCTION cb_panel(number,label)
/*
 * This is a callback FOR the listbox named listbox_01
 */

INTEGER number, i, i_pnlID
STRING label[]()


UTL_drawClear()
display_cleanup()	
	
$ SYS_ALLOCATE_ARRAY( ra_PanelInfo,1,number, 1,4)
$ SYS_ALLOCATE_ARRAY( sa_elmList,1,number)
$
$ FOR( i=1 TO number )
$ i_pnlID = str_to_integer(str_token( label(i), " ", 2 ))
$ sa_elmList(i) = STX_setPanel.getElemList(i_pnlID)
$ STX_getPanelEdge( i_pnlID,sa_elmList(i), ra_PanelInfo(i,1:4) )
$ END FOR
ui_wid_set(seldbox_01,"value","")
STX_chkPnlAuto.chkPnlList()




END FUNCTION/* cb_panel */


FUNCTION cb_check()
/*
 * This is a callback FOR the button named button_02
 */

INTEGER i_initSegID, i_cntPnl
UTL_drawClear()
STX_setPanel.init(0)
i_initSegID=UTL_markID.getSegID()
UTL_markID.setInitSegID(i_initSegID)


STX_chkPnlAuto.updatePnlList()


END FUNCTION/* cb_check */


FUNCTION cb_refresh()
UTL_drawClear()
display_cleanup( )
ui_listbox_unselectall(listbox_01)	
END FUNCTION/* cb_refresh */


FUNCTION cb_selElm(event)


STRING event[]
STRING selelm[512]


ui_wid_get(seldbox_01,"VALUE",selelm)
$ DUMP selelm
IF (selelm != "" ) THEN stx_pnlElement(selelm)


END FUNCTION


FUNCTION cb_table()
/*
 * This is a callback FOR the button named button_04
 */

STX_chkPnlAuto.chkPnlList()
STX_check_panel(ia_pnlIDs, sa_elmList, ra_PanelInfo)
UTL_markID.setElmID(ia_pnlIDs(1))	
STX_panel_input.readInput()
STX_panel_input.shwInput()


END FUNCTION/* cb_table */


FUNCTION cb_apply()


IF ( STX_panelinfo_table.get_apply() == FALSE ) THEN
STX_chkPnlAuto.chkPnlList()
STX_check_panel(ia_pnlIDs, sa_elmList, ra_PanelInfo)
UTL_markID.setElmID(ia_pnlIDs(1))	
END IF
STX_panelinfo_table.put_apply()
$ ui_form_hide("STX_chkPnlMethod")


END FUNCTION/* cb_apply */


FUNCTION cb_cancel()


ui_form_hide("STX_chkPnlMethod")
END FUNCTION/* cb_cancel */


/* other FUNCTION */



FUNCTION get_table()
	RETURN true
END FUNCTION	


FUNCTION updatePnlList()
	
	WIDGET wid_array(VIRTUAL)
	STRING pnlList[32](VIRTUAL), pnlIDs[32](VIRTUAL)
	INTEGER i_cntPnl, i


i_cntPnl = sys_array_hbound(STX_setPanel.getElemListAll(),1)


	SYS_ALLOCATE_ARRAY( pnlList, 1, i_cntPnl)
	SYS_ALLOCATE_ARRAY( pnlIDs , 1, i_cntPnl)
	SYS_ALLOCATE_ARRAY( wid_array, 1, i_cntPnl)
	
	FOR ( i=1 TO i_cntPnl )
	 pnlList(i)="Panel "//str_from_integer(i)
	 pnlIDs(i) =str_from_integer(i)
	END FOR


	ui_listbox_items_delete (listbox_01)
	ui_listbox_items_create (listbox_01, pnlList, pnlList, i_cntPnl, wid_array)
	ui_listbox_select_items (listbox_01, 1, i_cntPnl )
	
END FUNCTION




FUNCTION chkPnlList()
	
INTEGER i_cntPnl, i_cntSelPnl, i_pnlID, i
STRING sa_pnlList[256](VIRTUAL)


UTL_markID.orgColor()
i_cntPnl = sys_array_hbound(STX_setPanel.getElemListAll(),1)
IF ( i_cntPnl == 0 ) THEN RETURN 0


ui_wid_get ( listbox_01, "NSELECTED",i_cntSelPnl )
SYS_ALLOCATE_ARRAY( sa_elmList,1 ,i_cntSelPnl)
SYS_ALLOCATE_ARRAY( sa_pnlList,1 ,i_cntSelPnl)
SYS_ALLOCATE_ARRAY( ia_pnlIDs ,1 ,i_cntSelPnl)
SYS_ALLOCATE_ARRAY( ra_PanelInfo,1,i_cntSelPnl, 1,4+3)
ui_wid_get ( listbox_01, "VALUE",sa_pnlList )	
	
FOR( i=1 TO i_cntSelPnl )
i_pnlID = str_to_integer(str_token( sa_pnlList(i), " ", 2 ))
ia_pnlIDs(i) = i_pnlID
sa_elmList(i) = STX_setPanel.getElemList(i_pnlID)
STX_getPanelEdge( i_pnlID,sa_elmList(i), ra_PanelInfo(i,1:4+3) )
END FOR	


END FUNCTION


FUNCTION selpnl_update( i_pnlID )


INTEGER i_pnlID()
INTEGER num_pnlID ,i


$ DUMP i_pnlID
num_pnlID = sys_array_hbound(i_pnlID,1)
$ DUMP num_pnlID


ui_listbox_unselectall(listbox_01)
FOR (i=1 TO num_pnlID)	
ui_listbox_select_items (listbox_01, i_pnlID(i), 1 )
ui_listbox_select_items (listbox_01, i_pnlID(i)+1, 0 )
END FOR	
	
END FUNCTION


FUNCTION updateSelBox(ia_selPnlIDs)
STRING s_elmList[256]
INTEGER ia_selPnlIDs(), i_pnlCount, i


i_pnlCount = sys_array_hbound(ia_selPnlIDs,1)
FOR (i=1 TO i_pnlCount)	
s_elmList = s_elmList//"---"//STX_setPanel.getElemList(ia_selPnlIDs(i))
END FOR	
$ ui_wid_set(seldbox_01,"value",s_elmList)
write(s_elmList )
END FUNCTION






END CLASS/* create */
