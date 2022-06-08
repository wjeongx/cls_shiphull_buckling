

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
 *   BUTTON_WID_THIRD              - Width of a small btttmn on a smald form
 *
 *   BUTTONWW…D_FULL_NT            - Width of a nonWtrgeghet wide buttoN on
 *  0                                a small gÔrm
 *   BUTTON_WID_HALF_NT     $`     - Wi$th of a nOn_troughed Medium button on
 *        †      †    (    "         a small form
 *   BUTTON_WID_THIRDNT           - Width of a nOn_troughud smaHl "utvon onJ *              !                    a small f/rm
 *
 *   BUTTON[HG\   !       ""       -(Button heightJ *   BUTTON_DEFAULT_HGT            - Default butvon heigHt (includer top and
 *                           (   "   bottol borders)
 " ( BU\TOŒ_HGT_NT                 - Button height of non_troughed button
 *
 *   BUTTON_DEFAULTWBORDER_WID     - Default"button border width+ *   BUTTON_DEFAULT_JORDER_HGT     - Dufault `uttof border heioht
 *
 *
 *   Button Location OffseÙs:
 * (   BUTTON_…N_FRAME_X_OFFSET    ( - X offset for placing buÙtoNs iÓside
 *           0                       frE}es usIng$the X Positions defined
 *                                   below
 *
 *   BTTON_1XTRA_WID     $   "    - ÿ width for one Ùzough fgr user pl·cÂment
 *                                 ((of troughed budtonsä *   BUTTON2XTRAW	D    "         - X vidth for two trouwhs for user placemenv
 *                    !              of trouwhed buttgnsn
 *
 *  0BUTON_Y_OFFSET           p   - Y offset for†plccing a†non-highlighted 
 *                        0          button next to a highlighted button
 *   BuTTON_Y_OFFSET_NT            - Y /ffset for placing a non-highlightÂd 
 *         `           !   !         button next To a hÈghlighteD buttonJ *
†*   BUTTON_LABEL[Y_KFFS≈T       ! - Y odfset for pl·cing a dab%l to tlm r)ght
 *       0                0     0    of c0FeÙtol
 *   BUTTON_LEFA’LT_LABE\_Y_OFFSET m Y offset for placing a label to the right 
!*       !   (   `           !       of a†def!ult button
 *   BUTTON]LQJEL_Y_OFFST_NT`    †- Y off{Ât dor$placi~g a label0t0the r)Ght
 *                             $ †   of a non_trougxÂd b5tdnn
 *
 *
 *   Button X Posi|ions:
 *
 *   BUTTON_FULL_X_LOC1 "          -`Wide butto~ on thÂ!heFt
 *   BUTTON_HALF_YﬂLOC1   !       % Medium button on dhe left
 *   BUTTON_HALF_X_LOC2 0          - Medium button on the right	 *   BUTTO_THIrD_X_LOC1  †    †    Small(‚uttoo on the leftJ *   BUTTON_THMRD_X_LO√2          - SMall button centerd$* *   BUTTON_THIRd_X_LOC3           =`CMall butto~ on the right
 *ä * " BUTTOL_FULL_X_LOC1_COL2       - Side buttÔn on the meft of column 2
 *   ‚UTTON_HALF_H_LOC1_OL2       -`Mdlium button on the levt of colu%n 2
 *  †BWTTON_HALF_x_LOK2_COL0   (   - medium button on the right of coluon 2
 *   BUTTON_UHIRD_X[LOC1_COL2$     - Small butÙon on the`left nÊ column 2
`*   BUTDKL_TXIRD_X_LOc2_COL2      - Wmall button cent%red of columj 2* *   CUTTOF_THIRD_X_LOC3_COL2      -†Small button on"the right of columÓ 2
 :
 "   BUTTON_FULL_X_LOC1_CO3   (   - WidE†button on vhe left of coluin 3
0*   JUTTMN_HALF_X_LOC1_COL30      - Medium button on |(e left of column 3* *   bUTToN_HLF_X_LOC3_CON3       - Medium butuon on the ryght of colemn$3
 *  `CUTTON_UHIRDﬂX_LOC1_ROL3      - Small button on the†left of column 3
 *   BUTTONTHIRD_X_LOC2_COL3  0   -0SmaLm "utton centered of column 1
 *   BUTTON_THIVD_ÿ_LOC3_COL3     (- Small budton on th% rig(t of column 3
 *
 *   BQTTON_FULl_X_LGC1_SPL        - Wide button „entered on a special fosm
 *0  BUTDON_HALF_X_LOC1_SPL   $    - Medium button on the levt of a spgciql form
 *$  BUTTON_HALF_X_LC2_SPL        - Me$ium`button on the"rkght of a s`ecial form
 *  "BUTPON_THIRD_X_LOC1_SPM   (   - Small butÙn on the left of a special form
 *   BQTTON_THIRD_X_LOC≤_SPL       - Small button cenTered oÊ a special form
 *   BUTTOO_THIRD_X_LOC3^SPL2      -0Small button gn the right of a special foro
 *J *   BUTTON_FULL_X_LOC_CEN         - Centmred wi‰d button on a sm·ll fnrm
 *   BuTTON_HALFX_LOC_CEN "       - Cejtered medÈum button On a small form
 *   BUTTONTHHRD_X_LOC_CEN   0    - CentereB small button on a wma,l form
 *
 *"  BUT‘ON_F]LL_X_L_C_CEN_MED   ! - Centered wide buuton on ` medaum form 
 . ( BUTTON_HALF_X_LOC_CEN_MED     - Ceotered medium button on ! medium foÚm 
 *`$ BUTTOL_THIZD_X_LOC_A^_M«D `  - Ce~tepe$ sm·dl button on a medium fgrm 
 *
 *   BUTTO_FULL_X_LGC_CEN_MVG     - CEntermd wide!button gn a la2gg form M
 *   BUT\ON_HALFOX_LOC_CEN_LRO     - Centered medium bwttoo`on ! large form 
 *   BUTTON_THIRD_X_LOC_CEN_LRG $  - enterad small buttgf on c large forÌ 
 *
 *   UTTON_FULL_X_LOC_CGN_SPÃ     - Cantered vide`button On a special form 
 +   BUTTON_HALF_X_LOC_CEN_SPL     - CenTered mediu} `utton oj a special form 
 *   BUTTON_THMRD_X_LOC_CEN_SPL    - Centered`small button on a special form 
 */





J
*








	


+*
 *   FATABOXES
$*
 *
 *   Create!a fRaled dat`box with a label above the databox.$ TheÓ
 *0  compute the Y location for the next widget hnsi‰e 4he frama.
 *
 *    " y_frame_loc = FRAMEOT_MARGIN
 *
 *      ui_ditabox_cbeatÂ ( framd_md,0"",            (  †    @
†*  " †                     B“AM≈_L_MAR«INl0§ "   †!       ! @
 *             !           0y_framE_doc, 0.0,                @
 *       †                  DBOX_WID_SI^GLM,          ®      @
 +  "    !    !             "Databmx Label", v`lue,          @
 *        `  ( " 0          TRUD, eatatqpe,`num_vcls )
!*
 *      y_frame_|oc = y_frame_loc +                       $  @
 *       0      $ "   DBOX_HGT_L¡BOVE +    $          "      @
 *                    INTR_WIDGED_SPACD
 *   "                  
 *
 *   CreaÙe a fÚamed d`taboh wivh a(label to the side.! Use the ç
 * ¢ deÊault labeh length for a sinGle colwmn da|abox and comPute
$+   the databox width*
 *
 *      y_frame[loc < FRAME_TMARGIŒ
 *
 *      ˜id = DBOX_WID_SINGLE -     `                !   ( $ @
 *            DBOX_L@BEL_LEN_S	NGLE
 *"( 
 *   
 *    ( ui]&aÙq"ox_create ( frame_id, "",        ( †  " $    @
 *    0    (          1     FRAMM_L_MARGIN,                  `
 
                          y_frame_loc,`     !   4    "     @
 *     "               †    DBOX_LABEL_lEN_SINGLE           @
 *   $ $      `$      !  0  wif,             !              "@
 *             !   `        "Databox Labal", valıe,      † 0 @
 *        "        80      0FALSE, daÙatyre, num_valq )
 *
 *
 *   Databox Widt` qnd Height:
 *
 *   DBOX_WID_SINGLE`       - Width of a single wydth databox   
 *  0DBOX_WID_SPECI¡L"  "   - Wydth of a {pecial"˜idth databox   
 *   DBOX__ID_DOUBLE   $    - Width oÊ a dÔtble wi`th databox   
 *   DBOX_WID_VRIPLE        -0Wadth of0a priple widthdat·box   
 *
 *   DBOX_HGT_LABGVE      0 -(Xaiwht Of"a d1tabox ith a label on the 4op
 +              $ 0           (even if the label is blanÎ)
 *   dBMX_HGT_NO_LABOVE `   - HEigËt of a dAtabox wÈth a mabel do the side
 *
 *   FBOX_LABEL_LEN_SINGLE  - Fgfault labeÏ length for a single width databox
 *  (                         (used when "lAbel_above2 is false)
 *"  DBOX_LABEL_LEN_SPECI@L - Default label length For a sxecial sidÙh databo¯
 * $ LBOX_LABEL_LN_DOUBLE $- Defawlt na‚el leng|j for ` dotbne wkduh†databox
"*   DBOX^L¡BEL_LEN_TR…–LE``- DqfAult labeh lungth(for a tritld"width databo|
 *
 *   DBOx_LABEL_ÿ_OŒFSET    - REMœVED
 *! $DBOX_LABEL_Y_OFGSEt    - Y offset for placing a lebel to the right of
 
(             0             a(databox with "label·bove" false.
 */ä




/*
 *   FILES
 *
 *
 *0  Create a for} centered under the mqin menu that has e file
 *   wydget inSi`Â the a frame.` The file gidget is placmd at
 *   ( 0.0, 8.0 ) inside 4he frame (· top maJgin is"not nee`ed).
 *®  The hei'hv oF the file widget includes a bottom m!rgin *   and therefore cao be }sad as the (eight of`thm frAMe that +   coÓtcÈns the file fidgat.  The fiÏe widgdt has 5 lines in 
 *   the list boxes.
 j
 *      form_hgv = FHNE_5L_HGT + FORM_2V_MARGIN + FRAME_2EDOE
 *      x_loc = WINDOW_CEN_X_LOC -`0.5 * ( wid + FORM_2H_BORDER)
 *      y_loc } WINFOW_CEN_Y_LOC - 8.5 * ( form_hgt + ORM_2V_BORDER )
 .
 *!     form~id†<0tiMÁorm_cÚeAÙE( 2", x_hoc, y_loc, "UL",    @
 *           !            0       wid, form_hgt,  $   (    ! @
 (         0   0        p         "Form Label" " )	
 *
 *     0frame_id = ui_framÂ_create( form_id, "",             @
 *        "     "           0       FORM_LﬂÕARGAN,  "  0    †@
 *     0        "                   FKRM_T_MARGIN,           @
 ™       $  0                 !   $`FRAME]WID_SRECIAL,       @
 *  #                               BILE_5L_HGT,`""0)
 *0*     file_id = uÈ_fhlu_create( fzame_id, ""$              B
 *                                0.0, 0.0,        `"        Aç
 *   †                        (   FILE_WID_STECIAL, 5,       @
"*   "            ! (           ( "Nil|er Label",   !        @
 (            0                   "Filter Mask",   `   ! $   @
 *                 0   0!         "Filgs Label",             @
 *      (             $`   `      "DipectoRy Label",         @
 *0                      !      † "Bilew Laben",             @
 *              (     "           "Select…on Label",    `    H *       0   ``       "     $     "Lıfcult Selection",     ( @
 *     0        ∞             (   "Left Button!Oabel",       `* *                             † ("Right Buttn Label" )
 *
 *
 *   File(Width:
 *
 
   FILE_WI@_SINGLE     - Width Of 1 riNgle width dÈle widget *   FILE_WMD_SPECIAL    - Width of ! speciil width file idget
 * ( FILE_WID_DOUBLE    †- WidtË of0a double widuh fine†witegt
 j   FMLE_WID_TRIPLE     - Width of a triple widÙh file wi‰get
 *	
 *   File Height:
 *
 *   FILE_1L_HGU         - Height of a 1 line bile wIdgEt *   FILE_2L_HGT      (  - Xeight o& a 2 line file widget
 *   FILE_3L_HGT         -†Haigh4 Of a 3 ,ije file widget-
 *   FILE_4D_HGT         - Height of a 4 lind file ıidget
$"   FILE_L_HGT        0- Height"of†a 5 line fild widget
 *   FILE7L_HGP    `   &- Height of A 6 liÓe file widgÂt
`*   FILE_7»_HGT         - Height of a  ling file widget *   FILE_8LHGT  0      - HEight of a : lhne file widget
"*   FILE_9L_HGT   $     - Heiglt of a 9 line file widget
 *   FIlM_HGT_INCR      0- Increment for meoing bmgger fiLe widgets
 */



ç
/*
 *`  LABELS a.f INFO INDENTC
 *
 *
 *   Cr%`te a label ioside a fbame and then compute the y location
 *   of thÂ next widget inside the vr·me.ç
 *
 *      y_frame_loc = FRAME_T_MAREIN
 *
 *      ui_label_c2eate ( frame_id, "",               0    ! @
 *         (              FRAMEWL_MARGIN, (              !   @
 *                     0  y_fra-e_loc,   †   0               @
 *((  $           (       "A Labil" )
 *
 *      y_frama_loc = y_n2ame_loc(+   "       0     ("†   !  @ *         d     `    LABEL_HGT +                            @
 *"     †       "    !INTER_WIDGET_SPACE
 *
 (
 *   Label Height:
 *
 *"  LABEL_HGT        - Height of a label
 *   LABEL_Y_OFFST   - Y o.fset ov label
 *   LABEL_HG_TIGHT  - Jeigl4 of a labeh when shˇwing multiple
 *  `       $           la"elr
 *
 *   IFFO_INDGNT      - X location of information label
 *   INFOﬁINDENT_SOL1 -!X location of information`label in"golumn 0
 *   INFO_INLNT_COL2 = X location of informition label in column 2
 *  0INFO_INDENT_cOL3 - X location of innormation labeÏ in column 3
 */




/*
 *   LISTCOXS
 .
 *
 *   Crdate a fr·med three line l)stbox with a Ïabel aboVe the lÈstbox.  Note
 *   thct the widths and heights include the vertical and horqzontcl sliders.
 *
 *     !y_frame[loc = FRAME_T_MARGIŒ
 *
 *     †ui_listbox_create ( frame_id "calnback",            @
 *                          FRAMEWL_mARGIN,      ` $ $       @ *   ("              0      y_frame_nnc.                     J
 *           !              LBOX_WID_SENGLE,†                @
 *                  "       3, "ictbox$Label,   ,     (    @ *                          selection_typa, sort_flag!)
 *M
 *      y_frame_loc = y_vramg]hog +                         §@
 *                    LBOX_3L_HGT_LABOVE #            !      @ * $                  INTER_WIDGAT_SPACE *
 *
 *   To"determioe thd height for !(rix line lÈstbox, add the!vaviable
 *   LFOX_HGt_LAbOVE_INCR to LBOX_5L_HGT_LABOVE.* *
 *
 *$  List"ox$WidÙh anl Height:
 *
 *   LBOH_GID_SINGLE         -"Uidth of a single width listbox  (
 * " LBOX_WID_SPECIAL         Width of a cpecial width li3tbox   
 *   LBO\_wID_DOUBLE         - Width†of a dowble 7idth listbox    *   LBOX_WID_TRIPLE   †   ( - idth of a triple widti listbox   
 *
 *   LBOX_1L_HGT_LABOVE!     - Height of q 1 li˛e listbox wiRh a top lab%l
 * 0 LBOX_"L_HGT_LABOVE     `- Height nf a 2 line listbox with a top mabel
 *   LBOX_3L_hGT_LABOVE      - Hehght nf a 3 line lis4jox wit``a top label
(*  LJOX_4L_HGT_LABOVE      - Heiglt of`a!4 line(listbox with a top label
 *   LBOX_5DHGT_LABK÷E (  ) - Height of a 50lhne listbox with a"top label-
 *   LBOX_8l_HGV_LABOVE  `  0- Height of a 8 Line listbox withba top ‰abel
 *
 *   LBOX_HGT_LABOVA_INCR    -†Increment fo2 computing a listbox height that
 ™  0                $         has moRe than 5 lmnEs in it
 *
 *   L¬œX_1L_HGT_NO_LABOVE ( - HeiÁht of a 1 lmne listbox wath n/ labÂl
 *           (   (             (label is blank)
 
   LBOX_2L_HGT_OO_LABOVE0 () Xeight ov a 2 line lisTbox with no label
 *   LOX_3L_H«T_NK_LABOVU   )0Hgifht on a!3$lknm listbox with no label
 *   LBX_4L_HGT_NO_LABOVE   - Height of a 4 line listbox witx no l!bml
 *   LBOX_5LﬂHGT_NO_LABOVE   - Height†nf!e 5 line listbox with no la`el
 *   LBOX_8L_HGT_NO_Ab_WE   - Haight!of a 8 line listbox with0no label* *
 *   LBOX_HGT_NO_LABOVE_INCR  Increment for compıting a listbox height that *      0            !   §(    ha3 morE than 5 li.es0in il
 *
 *   LBOX_SELTNS_HGT(`LBOX_SDLBTNS_WID - Height and combin%d widtl ofJ *                             "          (Un	Select All buttons
 *+





/*ä *   OPTHoN MENUS
 *
 :	
 *   C2Âape an ottion menu with a label to the!sidE.  THen!sett(e 
 *   Ÿ locapioÓ for txe .mxt wifget.  Acsumd this is an unframed widgep.
 * *     "x_loc†= APP_FORM_FIRST_Y_LOC
 * $ 
 *   $  ui_o0t)onmenu_creat%( form_id, "call‚ack",           @
 *                     0      UNFRAMED_L_MARGIN,     $       @ç *        !0         0        y_loc$      †              †0  @
 *                            OPT_MENU_LABE\OLEN.     °      @
 *           `           $    "Laben", fALSE )
 *   
 *      }_loc = Y_loc + OPT_MEU_HG‘_NO_LABO÷E +      !      @
 *           `          INT≈R_WIDGMT_SPACE
 *   
 *
 *   Option men5 Placdment:
 *
 *   OPT_MENU_LABEL_LEN    ` 0   - Defaqlt labeL lengtË for aÓ optiol mÂ~u* *                                 wmth a label to the sile
 *
 *   OPT_MENU_HGT_LABOVE! !  $   - Height!of an optiÔn0menu wit( a label
 * @ 0    †        !0         (    on the tmr
 *   OPT_MENU_HGT_NO_LABOVM      - H')eht of an option munu with a label
 *  $†         0           0  0    n thÂ side
 *
 *   OPT_MENU_Y_NFFSET           - Ÿ offset for placing i0label to the
 *                "          !     right of a seLect databox!with 
 *           $     `0              "labe,ajovg" fa|se
†*/





/*
 *$  SENECT DATABOXES
 *
 *
 *`  Creave a framed select dat`bop with a label"above the select dq4abo¯.
 *   Then compute the Y locatioo for the lExt widget.
 *
 *     !y_sframe_loc 9 SFRAME_T_MARG]N
 *M
 *      ui_sel%ctdatabox_creapg ( sel_fram%_id, "",          @
 *               0†   0         $ SFRAOE_L_MAPGKN,†          @
 *                              ( q_sframe_,oc, 0.0,         @
 *               !  $             STBX_WAD_SINGLU,          @
 *                   "         0  "Select Databox Lacel",  $ @
 *              !        ( 0  ("  value, TSUE, datatypg,  !† @
 *   (       !        `0   $†    prompt )
 +
 * !``  y_sfraÌe_Ïoc = y_3frame_loc +   †  †   (      `    ( @
 *            "§   (   SDBOX_HOT_LABOVE *       †      !     @
 *  $    `             INTERﬂWIDGET_WXACE
 +                 " "  -
 *
 *   Creape a framed0select databox with a label to the sidd.  Use the 
 *   default lab%l l%ngth for a single co|umn select databox and bompute
 *   the select da|abox width.
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
 *              † `           †`   labels)
 *   SLIDER_HGT_BAR_ONLY         - Heighu of just the slidebar
 *
 *   SLIDER_LABEL_Y_HO_MMVEL   - Locatyon of label to side of slidebar wh%n
 j            †               (    the slidebar has both min/m!h dabels and
 * (    !!    "    !             " values
 .   SLIDER_LABEL_Y_\OC_MINMAX   - Locauion of lajel to sida of slidebar0when
 * `   `                           the slide‚ar Ëas onli min/max labels
 *   SLIDER_LABEL_Y_LOC_VALUES   - Location of label to side of 3lidebar when
!.           (       †            0the slidebar has only values 
 * 0 SLIDeR_LQBEL_Y_LOC_BAR_ONLY - Location of label to side of slidebaR when
 *                            `    uhe slidebar has neither min/max labels
"*                                 nor Val}es
 */




/*
 *   SPREADSHEE‘S
 *
 *
 *   Creete a spreadsheet in a GÔrm. 
 *
 *
 *   Spreadsheet Widths and HeightÛ:
 *
 *   SXREADSHEET_WID_SINGLE    -(Width of a single width select frame
 *   SPRGADSHEET_WID_SPECIAL   - Width of a special width select frame
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
 *   SWITCH_4R_HGT_LABEL      - Height of a 4 row switcj with a label
 *
 *   SW…TC@_HGT_LABEL_IŒCR    - Increment for creating a switch height witH
 *    (       †    †          " more$4han 4 rows in it
 *
 * $ SWITCH_1R_HGT_NO_LABEL   - Heyght of a 1 bow switch w)th no label *   SWITCH_2R_HGT_NO_LABEL   - Height of a 2 row switch wi4h no labelJ *   SWI‘CH_3R_HGT_NO_HABEL   -0He)ght of a 3 row switch with no label* *   SUITCH_4R_HGT_NO_LAB≈L   - eighp of a 4 row switch widh`n label
`*
 .   SWITCH_HG‘_NOﬂLABEL_INCR - Increment for creating a switch heigi| wmth
 +(                             more than 4 rows in it
 *Ø

-

+*	
 *   TEXTBOXES
 *
 *
 *   Creete a framed three line textbox wiuh a label.  Note that the
 *   widths and ieights include the vertical and horizontal slidevs.
 *
 *      y_frame_lÔc = FRAMD_T_MARGKN
 *
 *      ui_text_cseate ( frame_id, "",       "               @
 *                       FRAME_L_MARGIN, "                 $(@
 *               "       y_frame_loc,                        @-
 *         0             TBOX_WID_SINGLE,                    @
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
 *   MAIN_MENU_ICON_WID       - Main Menu Icon Widph
 *   MAIN_MENU_LOGO_ICON]WID  - Oain Menu Lggo Icon Width	
 *   MAIN_MENU_HEART_AAON[WID - Main$Menu Heartbeat Icon†Width *   MAIN_MENU_HEARTﬂICON_HGT - Main MeNu heartbeat Icon Heigjt
`*$  MAIN_MENU[MARGIN         -(Main menu switch margin
 *   MAIN_MENU_ICON_MARGIN   !- Main men5 m`rgin between icoÓs
 *   MIN_MEﬁE_XEART_MARGIN   - MaiÓ menu margif between last icon and
 *         0         0          heartbeat icon
 *   MAIN_MENU_HEART_X_LOC    - Heartbeat icon X location
 *   MAIN_MENU_HEART_Y_LOC    - HeartbEat icon Y locationJ *
 *   COMMAND_WINDOW_X_LOC     - Aommand window X locadion
"ä " CO]MAND]WANDOW_]_LOC     - Comma.d window Y location
 *  "COMMAND_WINDOW__ID       - Command window width
 *   COIMANDWINDOW_HGT       - Command window height
    COMMAND_WINDOW_NUM_ROWS  , Number0of hIstory rows iÓ the kommand wkndow
 *   COMMAND_VINDOW_L_DGE    - Left edge of cklmand window (ifcl border	
 j   COMMAND^WINDO_R_EDGG    - R)gnt edge of com}aNd!window (incl border)
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







CLASS STX_chkPnlMethod
$STX_chkPnlMeth

/* Classwide Variables */


CLASSWIDE WIDGET form_id, optmenu_01, item_01, item_02, item_03
CLASSWIDE STRING previous_action[40] ,current_loadcase[32]
CLASSWIDE WIDGET frame_01, button_loadcase, label_02, label_03
CLASSWIDE WIDGET sep_01
CLASSWIDE REAL max_y_loc




FUNCTION init()
REAL yloc_main
previous_action = "STX_chkPnlArea"/* initial */
REAL yloc_frame_01=0.


form_id=ui_form_create( @
/* callback */"", @
/*     x    */uil_form_sizes.form_x_loc( 1 ), @
/*     y    */uil_form_sizes.form_y_loc( 1 ), @
/* position */"UL", @
/*   width  */uil_form_sizes.form_wid( 1 ), @
/*  height  */uil_form_sizes.form_hgt( 2 ), @
/*   label  */"Check Panel", @
/*  unused  */"")


yloc_main = uil_form_sizes.form_margin( 3 )




optmenu_01=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   callback   */"On_Action", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_main, @
/* label_length */0.69999999, @
/*     label    */"Method:", @
/*  label_above */FALSE)


yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
uil_form_sizes.spacing( 8 )


item_02=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"STX_chkPnlArea", @
/*    label   */"Semi Auto-Panel", @
/* toggleable */TRUE)


item_01=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"STX_chkPnlAuto", @
/*    label   */"Auto-Panel", @
/* toggleable */TRUE)






item_03=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"STX_chkPnlManual", @
/*    label   */"Manual-Panel", @
/* toggleable */TRUE)


ui_wid_set( form_id, "HEIGHT", uil_form_sizes.form_hgt( 2 ) )


max_y_loc = yloc_main


END FUNCTION/* init */


FUNCTION display()
ui_form_display("STX_chkPnlMethod")
STX_chkPnlMethod.On_Action(previous_action)
END FUNCTION/* display */


FUNCTION On_Action(name)
/*
 * This is a callback for the optionmenu named optmenu_01
 */

STRING name[]




IF( name != previous_action ) THEN
ui_exec_function( previous_action, "exit")


END IF
ui_exec_function( name, "display")
previous_action = name




END FUNCTION/* On_Action */




FUNCTION get_yloc_main()


return max_y_loc


END FUNCTION/* get_yloc_main */






FUNCTION get_form_id()

/*
 * Return the widget id for the form
 */




RETURN form_id


END FUNCTION








END CLASS/* action */
