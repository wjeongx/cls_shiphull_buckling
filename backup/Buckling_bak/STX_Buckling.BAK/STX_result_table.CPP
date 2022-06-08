

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
 *   BUTTON_WID_THIRD              - Width of a wmall butpon on a rmall foRm
!ä
 * ( BUTTON_WID_F’LLNT       !` ( - Width0of a non_trouGhe$ wide†button!on
 *         !  !  $     !         (   a small fosm
 *  `BUTTON_WID_HANF_NT            - Widuh of a non_troughed Ìedium button on
 "           !               !     "a smell form
 *   BUT‘OO_WID_THIRD_NP$†         - Uidth ov a non_tr/ughed small futton on
§*           0   (            $      a smalÏ$form
!*
 *`  BUTTON_HGT  `                 - Butuon height
 *†0 BUTTOF_DEFAULU_HGT          0 - Dafault butÙon height (i:cludes 4gp andJ *"            0                     bottom borferw)
 "   BUTTON_HGT_NT                 - BuvtOn ieighd of non_troughed bupton
 *
 *0  RUTTON_DEBAULT_BœRDE“_WID     - Default butto~!bOrDdr wifth
 *   FUTTON_EEFaULT^BœREER_HGT     - De&ault button border huight
 *
 *	* *   Button Location Obfsets: *
 *  0BUTTON_IN_FRQMEﬂX_FFSET   †  -(X offset$fos placing buttons inside
 +                        !          fr·mes uÛing vhÂ X!Positions!defined
 .     "              0              be,ow
 *
 *   BUTTON_!XTRAWWID              - X wydth for one!trough fmr$user placemenu
 *    (`   (     0            "      of tr/ughed buttons.
 *   BUTTON_2XTRAﬂWID             `-  w-dt( for two`troughs for user pl!geient* *  0                                kf§troughed buttons.)*
 *   @U‘TON_Y_OFFSET               - Y ofgset for placing a no.-hÈghlighted  *             †                     button next to a highlighted†button *   BUTTON_Y_OFF[ET_NT   0$   "(  -  offset fov pNacine a non-highlig(ted 
 *        †     ¢ †    `       !     Button nextptg a`highlmghted0button
 *
 *   BUTTON_LABEL_Y_ODF”ET         % Y ovfset &or plabing`a`label to the righ4
 *               !  0      "    0    of c butqon
 *   BuPTON_DENAULP_LABEL_Y_OFFSET - Y offsev for plqsing a label Ùo thu right * .                             (     of adef·Ult but4oN
 (   UTTON_LA@EL_Y_OFGSET_NT      - Y offset for p,·cine · nabel po the zight
 *     Ä      $   †"       "      `  of a non_troughed "uttn
 *
 *
 *   Buttgn$P Tositions:
0*
 *   BUTTON_FULL_X_LOC5            - Widm button on the left
 *  !BUTTON_HAF_X_LOC1$           -`Mmdium button on the left
 *   BUT\OF_HAMF_X_LOC2!           = Õedium button on the right
 :   BUTTON_THIRD_X_LOC1 "         - QMall butvon on the left* *   BUT\ON_THIRD_X_LOC"     (     - Sma|l futton centered
 *   BUtTON_TH	RD_X_LOC3           - Small button on dhe right
 *
 *   BuTTON_FULl_X_lOC1_COÃ≤    †  - Wide!button oÓ the left of colwmn 2
 *   BUTTON_HLF_X_LOC1_COL2       - Medium bUttoÓ on thÂ neÊt of$column":
 *   bUTTON_HALF_X_LOC2_CON2      $- Medium betton on |he ryglt`oÊ column 2
†*   BUPTON_THIRDX_LOC1_COL2      - Smaml butvon on the lefd of column 2 *   BUTTON_THIRL_X_LOC2^COL2   !  - Small button cuntered of #oÏumn 2J *   BUTTONTH…RD_X_LOC3_BOL2      - SmaÏl  utton o. the rifht of co,uin 6
 *- *   BUTTK^_FULL_P_LOC1_COL3      `- Uiee button on the left of column 3
 *   BUTTON_HALF_X_\œC1_COLs       - Medium button o~ thE mef| Of`column 1
 *   BUTTON_HALG[X_LOC6_COL3   "   ≠$Medium betton on the rkght oF0column 3
 *   BUTTON_THIRD_X_LOC1_CML3    0 / Small button /n t(g left of column 3
 *   FUT\ON_THIRD_X_LOC2_COL3      - Cmall btt|on centerad og column 3
 *   BUTTOF_THIRE_X_LœC3_COL1      - Small buÙtn . the right gd #olumn 3
 *
 *   BUTTON_FULL_X_LOC1OSPL0       - Wide bu4ton centered on c special fori
 * ( BUTTOL_HALF_X_LOC1_SM†       - edium(button on uhe†left of a special form
 *   BUTTON_ALF_X_LOC2SPM    4   - Melium button on the right of a sPecial forÌ
 *   BUTTON_THIRDX_LOC1_SP       -`Small b5tton on the left oF q spe„iaÏ foÚm
 *   UTTON_ThIRD_X_OC2_PL       - Small button centered ob a sqgcial`form
 * ! BUTTON_THIRD_X_LOC3_SPL       - Small b}eton on the rig`t of a spucial$bormä *	
 *$  JQTTO^_FULL_ÿLOC_CEN         - Centered wide bwtton of a soall form
 *‡  BUTTON_HALF_X_NOC_cEN        `- Ceftered ee`ium button kn a small dorm
`*   BUTTON_THIRD_X_LOC_√EN  "    !- Ceotered smal|†button on a smqll frm
 *
 *  !B]TTON_FULL_X_LOC^CEN_MeD 0   - Centebed uide bw4ton kn q$medium"fo2m 
 *   BU‘TON_HALF_X_LOC_CEN_M@D     -"Cen|ered medium juttol oo a eedium form 
$j   BUTTONTIR@_X_LOC_CEN_MEƒ    - Centered sÌaxl buttol On a mefium0fov}!
 *
 *   BU\TOF_F]LL_X]LOC_CEN_LG "   - Ceftered sideabutton on a lasge form( *  $BUtTON_HALF[X_lKC_BMN_LRG     - Centered$medium button on a large norm 
 *   BUTTON_THIRD_X_LOC_CEN_LRG "  - Centered sma|l bu4tˇn on a large form 
 *
 * 0 BUPTON_FULL_@_LOc_CEN_SPL     - Centere` wide butdkn on a!speciÂl fmrm†
 *"  BUTTON_HALF_X_LOC_CEN_SPL     - Cdntered metium!butto> on"a special dorm 
$*   FUTDON_THIRD_X_\O_CEN_SPL 0  - Centdred small button on a specaal frm 
 ./



















/*
 *   DAUABOXES
 *
 *ç
 *  `Create e framed databgx with a label above thm databox,  Then
 *   comtutÂ†the Q locauion for the next widget insIde the f~ame.
 *
 
  $   y_frame_loc = FRAME_\[MARGIN
 .
 *      ua_databox_create$( fvame_id(`"",                    @
 *  "       !               DRM_L_MARIN,    $   †         @
 *       "            !    y_frameWlÔ„, 8.0,                @
`*    `!        `  †  (     DBGX_WID_QINGLE,                 @
 .    $   $ $               "Databox L!bel", value,0  !" (   @
 *        †          †    $ TRUE, datatype,`num_vals ) *
(*`   $ Y_frame_lgc = {_frame_lo# +     !   0        $       ¿
 *                    DBOX_HGT_LABOVE +       $    $         @
 *                 " (INDAR__IDG≈T_SPAKE
 *                      
 *
 *   Crmate a framed databox with a label to the sif%. `Use the 
 *   default label length for a {ingle column daÙerox anD compute
 *  the databox widuh.
 *
 *    " y_frame_lgc = FRAME‘_MARGI
 *
 *      wid = DBNX_WIF_SINDLE -        8     0   (           @-
 *       †    DBOX_LABEL_LEN_SINGLE
 *   
 *   
 *      ui_databox_czdate ( frame_ad, "",            $   0   @
 *      (                 " FRAME__MARGIN,#      (          @
 *   (        (            `y_frame_loc,           "         @
 *      "  "   p            DBMX_LABEL_LEN_SIÃGLE,           @
 *     0    †        †      wh`,                             @
 *               †          "Databgx Label", telue,        ` @
†*               (          NANSE, datatype, numWvsls )
 *
 :
 (   Databox Whdth and Heigh|*
 *
 *   DBOXﬂWID_SInGLE   d    - Width oF e single ˜idth databox † -
"*"  DBOX_WMT_SQECIAL   "   -†Width of a special width databox   *!™   DBOX_W…D_TOU∆LE $      - Width og i double ˜ifth dadabox   
 *   DBœX_WIDﬂTBIPLM        - Gidvh0of a tbiqle widÙh databox0   *ç
 * ( DBOX_hGT_LABO^E        - Leighp of a databox$with a label on the top
 *   0                 §      (e6en if the lab%l is`bla.k)
 *   PBOX_HGT_NO_LABOVE     -$HGight"of a tatacox with$a label to phu side
 *
 *   DSX_LABEL_LEN_”INGLE  - Defaunt label length for a single width databox
 * ( (  0     †   (           (used vh%n`"larel_above" is false)
 * ` BOX_LABEL_LEN_SPECIAL"/ Defaul| label lengt` for a¢special wadth Databox
 *( `DBoX_x@BEL_LEJ_DOUBLE  - Default labdl Length fkr a double wi‰th datcboh
 :$  DBOX_LaBEL_LEN_TRIPLE  - Def!uLt nabdl length nmr0a trilu width databox
 *
 *   DBOx_LABEL_Y[KFFSEP    -!REMOVED
$* 0 DBOX_LABEL_Y[OFFSET    - Y offset for plackng a lqjel to tje riÁht of
 *    †       "  `    †   †   a databx with!"labelabova" fAlse.
`*/





/** *   FILES	
 *
 *
 *  Create a form ceotered uÓdes the main menu phat har a file. *#  widget inride the a fra-e.  The file widget ir laced `t
!*   ( 0.0, 0.0 ) inside the frame ,a tk` margin is0nnt needed).
 *   The heigLt of tle file wid'et includes a boptom maroin
†*   anD fherefore „`. be used as the height nf dhe frame that
 *  (contains tHe file0wieget.  The file widget has 5 lines in 
`*   the lisT boxes.M
0*
 *  `   fnrm_hgt`= VIlE_5L^HGT + FORM_V_ArGIN + FRAME_2EDGE* *      8_loc = WINDOW]CEN_X[LOC - 0.4 *  wid + FORM_2H_BORDER )
 * "   `y_l/c = W…NDOW_CEN_Y_NOC -`1n5 * ( fori_hgt + FORM_2VﬂBORDER )
 *
 *      form_id = uiKBoRm]create(`#", z_loc, y_loc, "UH"l    @
 *  †  !  $    (               $  wid, vorÌ_h't, †           @I
 * †0       `     †               "Form Libel", "" )
"*
 $     frame_id = ui_fbame_create  for˝_id, "",           † @
 * "    (     0                     FORM_DMARGIN,          @ç
 *       b        (                 FœRM_T_MARIN, $         @
 *   ®                       !    ` FRAME_WID_[PECIAL, !   ( @
 *  ! !             (  !    $  "    FIDE_5L_HGTl "  )
$*-
 *    ! file_id = ui_file_create((frama_id, "", 0       †    @
 *         `    $           0     0.0, 1.0¨ "                @
 *                 $        Ä   ( FANE_WID]SPECIAL, 5, *     @
 *  $ `          $ 0  $   ((      "Filter Label&,           "@
!*†0 0    `           †  $   $`   "Filte2 Mask",   !       0 @
 *          "   " 0               "Files Label",   "         @
 *  !    $  (          (          "Direc|ory Label", "       @
 *   †        ` (         0$      "Dilec Label&,         †   @
 *        "! "                    "Selection La`el",  !      @
 *   "  0      †  ! 0             &DeÊ·ult Selektionc,      0@
 * !    $      0   !   (         ""Left Button Label"l       @
 *  `  "       $ $             0 ""Riglt†BUtton Label"$)
 j
 *
 *   File Width:
 *
 *   FILG_WID_SINGLE   ! - WiDth of ` single width 6ile widgmt
"*   NILE_WID_SP≈CIAL((  , Gidth of a cpecieÓ width fkle widcet
 *  ÄFILE_wID_DoULE     - Width of a double`width file widfet
 *   FILE_WYD_TRIPLE     - Width /f a 4riple idt( fi|e widget
!
=
`*   Fije Height8
 *
 *   FALE_1LHGX         - Leight oÊ`A 1 lije file widget
 *   FILErL_HGT"        - HeIght of a 2 line filÂ(wideet
 *  !FILE_3L_HGT         - Heigh| of ·`3 nine fhle widget
 * ! FILE_4L_HGT        $- Heig(t of a 4 lind file widgdt
 * 0 FILE5L_HGT         -(heig`t of"a 5 line file†w)dgetç
 *   FILE_vL_HGT         - HÂhght of a 6 line filg0gidget *   FILE_7L_HCT         - Height of a 7 line vile widge|
 j   FILE_8L_HGT 0`      , HeÈght of a 8 line0filg widget
 *   FIÃE9L_HGT `       , @eicht0of a 90line file wi`get
 *(  ILE_IGT_INCR       - Incbement gor making bigger fil% widgets
 *-




/*
†*0 $LABELS afd IFFO INDeNTS
 *
 *
 
   Crmate a labdl insidg(a frame `nd"then compute 4he y!loc·tion *   f the naxt(wifget insite Ùhe frame. *
 *     $y_frame_loc = FRAME_T_MARgIN
 *
 :      qi_label_sreate ( frame_id,`"",                     `@
 *              "†        FRAMU_L_MARGIF,                    @
 *  (            (   "    y_frame_lgc, †  (     !$  0        H
 (    !    "              "A Larel" )
 *
 *   †0 y_bramÂ_loc -(yWframe_loc +           `   `          @
 *0     00       †   !LC@EL_HGT +†     (      0         	   !@
 *  †                 INTER_WIDGET_SPACE
 *
 *
(* ` LabeL Hdight:$*
 *  0LABEL_HGT (      % Height of a label
0
   LABEL_Y_OFFSET " - Y off3et of label
 * $ LABEL_hGTT	GHT  - Height of a label when showine m5ltipnu
 *$ (      "    `   ` ! l·bels
 *
(* 1 INFO_INDENT    ! - X location of informatikn mabem* j   IŒF_INDEŒT_OL1 - X location of informaÙion label in cÔlumn 1
 *  §INFO_MNFELTOCOL2 - X |ocatin of infoÚmation label io"columb 2
 *   INF__IŒDENT_COL3 - x location0of information labeh in column 3
 j/




/(
 *`  LASTBOXESJ *
 *
 *  !Greate a fram%d three line li[tbox with a labeh above tjm mkstbox.  Note
 *   that Thq widths and°heights$include t`e tertical and horizÔjtal sliders
 (
 *$     y_frame_lÔc = FRAME_T_MARGIN
 *
 *      ui_lirubox_cre!te (†frame_id, "ga,lbacc",!       00  @
 *                          FPIME_L_MARGIN,     ( 0          @
 *              0      $    y_fra-e_loc,   "   (    †       !@
 * 0  $            (       "LCOX_WID_SIGLE,  !           !  @
 *†      0`      `    0     ≥.  Lastbo| Label",        !     @
 *†"  !         !(       †  s!lection_Tyxe. sor4_fl·g )-
 *
(*      y_frame_~oc = }framm_l/c +       †         !(    !  @
 (           $        LROXO3LHGT_LABOVE +    !              @ç
 *)         (       0 INTER_WMDGeT[SPACE
 *
 
* *   To deteÚmine"the heighÙ fgr a six0L)ne listbox, add the vari!bhe
 *   LBOX_HG‘WLABOVE_INSR†to`LBOX_5L_HGT_LABOVE.
"j
 *
 *   LiÛtbox Width anf dight:
¢*
`(   LBOX_WID_SiNGM         - Whdth$of a8Sangle"wÈdth Listbox   
 *  0LBOÿ_WID_SPECIA\        - Widt( of a speciah width listbox  ! j   LBOX_WID_DGUBLE "       - Width of a double(wifth lhstbox  !
 *   DBOX_WID_TRIPLE         - Width of a tri`le width Ïistbox   
 *
 *   L@OX_1L_HGT_LABMVE     "- Height f a 1"l)ne listbox 7ith(a top label
 *   LJOX_2L_HGT_LAFOVE      = Height of a 2 line listbox sith a top label
 *   LCOX_3L_HGT_LABOVE       Height of a 3 line listb/x with a!top labml
 *   LBOX_4L_HGT_LABoVE    `$eH%iÁht of a 4 line listbox$wyth a top laben
 *   HBOZ_=L_HGT_LABOVE!      Height of # % Ïine mistbox with a top libel
 *   ÃBOX_8L_HG\_LAbOVE      - HeygHÙ of a 8 line lhqtbox with a toP labe¸
 *
 *`† lBNX_HGT_LABOVE]INCR    - Incr•ment for computing a listbox heigËt that
 *        †    (     `  !      hqs more than 5 lindq in it
 *
 *0  LBOX_1L_HGT_NO_LABOVM   - Hehght o' a 1 line listbox with fo label
 *  $                         08label iÛ blanK-
 (   LBOX^2L_HGT_NO_ABœVE   - Hmight of a 2 line listbox ˜i4` no label
 *   LBOX_3L_HGT_Nœ_LABOVE!  - Hemght of a 3 linq listbox With No |abel
(*   LOX_4L_H«T^N_L¡BOVE   - Height of a 4 line lisTbox with no label
 *   LBOX_5LHGT_NO_LABOVU"  - HeIght kf a 5 ling liqtbox with no label
 *   LBOX_8LOHGT_NO_DABoVA † - Hcight†ov a 8®dyng lIstbox wath no labeL * *  †MBOX_HGT_NO_LABOVE_MNCR - Increment fr computing a l)stbox0heighu t`at	
 *  0                          has!more thcl 5 lines in it
 (
 *   LBOx_SELBTNs_HGt, LBOX_SELBTFS_WID -0Heigh4 anD0comrined width /f
 *       0     "   ! $       †            (Un)Select All butto.s,
 */





/

$*   OPTION M≈NUS
 *
 *
 *   Creatu an option }%nu with a label to the sife.  Then†set th% 
 *   Y location for The nÂzt widget.  Assume t(i3 Is an unfr`med widget.
`*
 *    0 yOloc = APP_FoRM_FIRSTOY_LOC
0*  (
 * `    u)_optionmenu_creete( form_id "calDback",           @
 *         0    (        `    UJFSAMED_L_≈ARGiN, !   $       @
 *!  $ †                      y_loc,  `                 0    @
 *     `    `0 0              OPT^MGNu_LABEL_LEN,$         0 ¡M
 
         (!                 "Label", FALSE )J *   
 *   "  9_los`= y_loc + O–T_lENU_HGT_NO_LIBOVE +$"     ! 0$`!@
 *                      iT≈R_WIdGE_sPAC≈
 * ! 
 *
 *b  Option menu Placement∫
 

 *   OPT_MENU_LABELWLEN          - DÂfault label leÓgph foR a~ option menu
 *                                $wiu` e libel tm the wide *
 *   OPT_MENU_HG_L¡bOVE         - Heighu mf an0oqtign menu with a nabeÃ
0*0      ! †  $   `$     " ! !    $Ôn the top
 *   OPT_MDNU_HGT_NO_LABOVE, $   - Height on an(ptio~ menu with a label
 +   !              `0        "   `on$the side
 *
 *   OPT_MENU_Y_OFFQET        $ ( Y ofbget for plccine a lab%l to |heM
 *      † "     ""                 righÙ of†a†select databox wit( 
 *                             ! 0 "<abeÏabova" false
 n/





/*
 *   SELECT DA\ABoXES
 *ä *
 *  $Create a f2amed select databox with a!label above the$selÂct dqtaboxÆ
 *"  Then computu the Y location for the next widge|.
 *
 *  `   y_sframe_Loc = SFRAME_T_ÕARGIN
 *
 "     0ui_selectdatabox_cr%ate ( sel_frame_id, "",          @
 *d   `                   †       SFRAME_L_M¡RGIN,! (   $    @
 /       `                   !    y_sframe_loc, 0.0(    !  ( @ä j   "           Ä     †  ` ((    SDBMX_WID_SINGLD,  !       @
 * †0        0       ! $          "S%lect Fatabox Label"<    @
 *         "                   `  value, TRUE, data|ypa,  (  H
 *!  (          (        " (  "$  prompt )-
 *
 *  0   9_sframe_loc = y_rframe_loc #0      "           `     
 ™   $       !         SDBOX_HGTOLABORE + !         (!       @
 *!      !             INTER_W	DGET_SPCE
0*           `         ) *
 *"" Cre!te a0framed selest data"ox ˜ith a labelt the side.  Usg the 
 *   ‰efaılt label length for a!single c/lumn selEct`databox and kompute
"*   T`e se,ect databox width.
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





CLASS STX_result_table


CLASSWIDE WIDGET range_form, spread, input_dbox, text_01, button_01, datbox_01
CLASSWIDE INTEGER num_row, num_col
CLASSWIDE STRING row_labels[30](VIRTUAL),col_labels[20](VIRTUAL)
/*--------------------------------------------------------------------------*/





FUNCTION init


REAL x_loc, y_loc, label_wid, wid, hgt, spread_wid


$ STRING col_labels[20](20,1)
INTEGER i
WIDGET dummy_label_id


wid = uil_form_sizes.form_wid( 3 ) + uil_form_sizes.form_wid( 2 )
hgt = uil_form_sizes.spread_sheet_hgt( 10, 1 ) * 1.02
$ spread_wid = uil_form_sizes.spread_sheet_wid( 3 ) + uil_form_sizes.spread_sheet_wid( 2 )
spread_wid = uil_form_sizes.form_wid( 3 ) + uil_form_sizes.form_wid( 2 ) - uil_form_sizes.unframed_margin( 1 )*6

/*
   * Create the "Clevis Design Cases" form:
   * ------------------------------------------------
   */




	range_form = ui_form_create( 	@
			/*	callback	*/	"",	@
			/*	 x    	*/	0,	@
$			/*	 x    	*/	uil_form_sizes.form_x_loc( 11 ),	@
			/*	 y 	   */	uil_form_sizes.form_y_loc( 1 ),	@
			/* position */	"UL",	@
			/*	width	   */	wid,	@
			/*	height	*/	uil_form_sizes.form_hgt( 1 ),	@
			/*	label	   */	"Buckling Result Table",	@
	/* iconname */ 	"" )

/*
   * Find the longest Entity label:
   * -----------------------------
   */


dummy_label_id = ui_label_create( range_form, "", 0.0, 0.0, "Dummy" )
ui_wid_set( dummy_label_id, "DISPLAY", FALSE )


label_wid = 0.0
FOR( i = 1 TO num_row )
ui_wid_set( dummy_label_id, "LABEL", row_labels(i,1) )
ui_wid_get( dummy_label_id, "WIDTH", wid )
IF( wid > label_wid ) THEN label_wid = wid
END FOR
label_wid += 20.0*uil_form_sizes.pixel_size( 1 )



/*
   * Create the Neutral Entities LIST of items: 
   * ----------------------------------------- 
   */




x_loc = uil_form_sizes.unframed_margin( 1 )
y_loc = uil_form_sizes.form_margin( 3 )


spread = ui_spread_create( @
/* parent    */range_form, @
/* callback  */"spread_cb", @
/*    x      */x_loc, @
/*    y      */y_loc, @
/*  width    */spread_wid, @
/*  height   */hgt, @
/* label_wid */0.0, @
/*num_v_cols */num_col, @
/* num_cols  */num_col, @
/*  num_rows */num_row, @
/*num_layers */1, @
/* col_label */col_labels, @
/* row_labels*/row_labels, @
/*   label   */"", @
/* layer lab */"Case", @
/* layer val lab*/"", @
/* selection */"SINGLE")


y_loc += hgt + uil_form_sizes.spacing( 36 )* 1.02 + uil_form_sizes.spacing( 8 )

/*
   * Create a separator WIDGET.
   * -------------------------
   */


ui_separator_create( range_form, "", 0.0, @
y_loc, @
2.02*uil_form_sizes.form_wid( 3 ), TRUE )


y_loc += uil_form_sizes.spacing( 10 ) + uil_form_sizes.spacing( 8 )


text_01 = ui_text_create( @
/*  parent  */range_form, @
/* callback */"", @
/*     x    */x_loc, @
/*     y    */y_loc, @
/*   width  */uil_form_sizes.tbox_wid( 2 ), @
/* num_rows */2, @
/*   label  */"", @
/*   text   */"", @
/* editable */FALSE)


$ y_loc += uil_form_sizes.tbox_hgt( 3, 2 ) + @
$ uil_form_sizes.spacing( 8 )




datbox_01=ui_databox_create( @
/*    parent    */range_form, @
/*   callback   */"", @
/*       x      */uil_form_sizes.button_x_loc3( 6 ) * 2.0 - uil_form_sizes.button_wid( 3 )*1.2*3., @
/*       y      */y_loc, @
/* label_length */0., @
/*  box_length  */uil_form_sizes.dbox_wid( 1 )*0.7, @
/*     label    */"output-name:", @
/*     value    */"report", @
/*  label_above */FALSE, @
/*   datatype   */"STRING", @
/*   num_vals   */1)





button_01 = ui_button_create ( @
/*    parent   */range_form, @
/*   callback  */"save", @
/*      x      */uil_form_sizes.button_x_loc3( 6 ) * 2.0 - uil_form_sizes.button_wid( 3 )*1.2, @
/*      y      */y_loc, @
/*    width    */uil_form_sizes.button_wid( 3 ), @
/*    height   */0.0, @
/*    label    */"Save", @
/* labelinside */TRUE, @
/*  highlight  */FALSE )
	


ui_button_create ( @
/*    parent   */range_form, @
/*   callback  */"cancel", @
/*      x      */uil_form_sizes.button_x_loc3( 6 ) * 2.0, @
/*      y      */y_loc, @
/*    width    */uil_form_sizes.button_wid( 3 ), @
/*    height   */0.0, @
/*    label    */"Close", @
/* labelinside */TRUE, @
/*  highlight  */FALSE )


y_loc += uil_form_sizes.tbox_hgt( 2, 2 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set( range_form, "HEIGHT", y_loc )
	
END FUNCTION/* init */


/*--------------------------------------------------------------------------*/


FUNCTION spread_cb( status, from_c, from_r, to_c, to_r, layer )


STRING status[]
INTEGER from_c, from_r, to_c, to_r, layer
STRING cell_data[40]
INTEGER loadcase_id
STRING loadcase_title[40]


ui_spread_get_cell( spread, from_c, from_r, layer, cell_data )


IF ( from_c == 1 ) THEN
	ui_wid_set ( text_01, "VALUE", "You selected Panel "//cell_data//"!" )	
Else IF ( from_c == 2 ) THEN
	loadcase_id = str_to_integer( cell_data )
	db_get_load_case_title(loadcase_id, loadcase_title)
	ui_wid_set ( text_01, "VALUE", "You selected "//loadcase_title//"!" )
ELSE		
ui_wid_set ( text_01, "VALUE", "You selected "//cell_data//"!" )	
END IF


END FUNCTION/* spread_cb */

/*--------------------------------------------------------------------------*/




FUNCTION display


ui_form_display( "STX_result_table" )
ui_spread_set_layer_value(spread, 1, "STX result table" )


END FUNCTION/* display */

/*--------------------------------------------------------------------------*/






FUNCTION save()


STRING s_fName[32]
ui_wid_get( datbox_01, "value", s_fName)	


STX_panel_result.saveOutput(s_fName)


END FUNCTION




FUNCTION cancel()


ui_wid_restore( "STX_result_table" )
ui_form_delete ( "STX_result_table" )


END FUNCTION/* cancel */

/*--------------------------------------------------------------------------*/




FUNCTION InterFace( className,count, Data )
	
INTEGER count
STRING className[],Data[]()
INTEGER i, j


$ num_row = count
num_row = sys_array_hbound(Data, 1)
num_col = sys_array_hbound(Data, 2)


SYS_ALLOCATE_ARRAY(row_labels,1,num_row,1,1)


STX_result_table.set_colLabels(className)
STX_result_table.init()
STX_result_table.display()


FOR (i=1 TO num_row)
FOR (j=1 TO num_col)
ui_spread_set_cell( spread, j, i, 1, Data(i,j) )
END FOR
END FOR


$ SYS_FREE_ARRAY(Data)	
SYS_FREE_ARRAY(row_labels)
SYS_FREE_ARRAY(col_labels)


	 	
END FUNCTION


FUNCTION set_colLabels(className)


STRING className[]
SYS_ALLOCATE_ARRAY(col_labels,1,num_col,1,1)


IF ( className == "LR" ) THEN
/* labels */

col_labels( 1,1 ) = "PID"
col_labels( 2,1 ) = "LCID"
col_labels( 3,1 ) = "a"
col_labels( 4,1 ) = "b"
col_labels( 5,1 ) = "t"
col_labels( 6,1 ) = "c"
col_labels( 7,1 ) = "d"
col_labels( 8,1 ) = "Sx"
col_labels( 9,1 ) = "Sy"
col_labels( 10,1 ) = "TAU"
col_labels( 11,1 ) = "Sed"
col_labels( 12,1 ) = "Sec"
col_labels( 13,1 ) = "FOS"
col_labels( 14,1 ) = "Req.t"
col_labels( 15,1 ) = "INC"
col_labels( 16,1 ) = "FOS"
col_labels( 17,1 ) = "Req.a"
col_labels( 18,1 ) = "FOS"
col_labels( 19,1 ) = "Element"


ELSE IF ( className == "DNV" ) THEN
col_labels( 1,1 ) = "PID"
col_labels( 2,1 ) = "LCID"
col_labels( 3,1 ) = "I"
col_labels( 4,1 ) = "S"
col_labels( 5,1 ) = "t"
col_labels( 6,1 ) = "a"
col_labels( 7,1 ) = "b"
col_labels( 8,1 ) = "Sax"
col_labels( 9,1 ) = "Say"
col_labels( 10,1 ) = "TAU"
col_labels( 11,1 ) = "Scx"
col_labels( 12,1 ) = "Scy"
col_labels( 13,1 ) = "TAUc"
col_labels( 14,1 ) = "biax1"
col_labels( 15,1 ) = "biax2"
col_labels( 16,1 ) = "INC"
col_labels( 17,1 ) = "b1(r)"
col_labels( 18,1 ) = "b2(r)"
col_labels( 19,1 ) = "Req.a"
col_labels( 20,1 ) = "b1(r)"
col_labels( 21,1 ) = "b2(r)"
col_labels( 22,1 ) = "Element" 	


ELSE
col_labels( 1,1 ) = "PID"
col_labels( 2,1 ) = "LCID"
col_labels( 3,1 ) = "a"
col_labels( 4,1 ) = "b"
col_labels( 5,1 ) = "t"
col_labels( 6,1 ) = "c"
col_labels( 7,1 ) = "d"
col_labels( 8,1 ) = "Sx"
col_labels( 9,1 ) = "Sy"
col_labels( 10,1 ) = "TAU"
col_labels( 11,1 ) = "Scx"
col_labels( 12,1 ) = "Scy"
col_labels( 13,1 ) = "TAUc"
col_labels( 14,1 ) = "C&S1"
col_labels( 15,1 ) = "C&S2"
col_labels( 16,1 ) = "B&S"
col_labels( 17,1 ) = "INC"
col_labels( 18,1 ) = "C&S1"
col_labels( 19,1 ) = "C&S2"
col_labels( 20,1 ) = "B&S"
col_labels( 21,1 ) = "Req.a"
col_labels( 22,1 ) = "C&S1"
col_labels( 23,1 ) = "C&S2"
col_labels( 24,1 ) = "B&S"
col_labels( 25,1 ) = "Element"
END IF 		
END FUNCTION
END CLASS/* spread_sheet */

