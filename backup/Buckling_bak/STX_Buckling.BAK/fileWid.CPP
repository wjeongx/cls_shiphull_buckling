

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
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button oN(a small form
 *
 *   BUTTON_FULL_X_DMC_GEN_IED     , Centered wide bu4ton on a mmdium form 
†*   UVVON_LALF_XﬂLOC_GEN_MED     - entered medium button†on a medium0fgrm 
 *   BUTTOF_THIRd_X_LOC_CEN_MED    - CÂnt%red small button of a medium fOrm 
†(
 *   BUT‘NN_FULL_X_LOC_CEN_LRO     - Centered wide†bupton on a lrge form$
 *   BUTTON_H@LF_X_LOC_CEN_LRG!    -`Centeref mediu} bttton on a$large vorm 
 *   RUTPON_THIRD_X_ÃOC_CEN_LRG    m Centered small button0on a large form 
 * * ! BUTVON_FULL_X_LœC_CEN_SPN     - Centered wmde button0on a special fore 
 *  !BUTTONﬂHALF_X_LOC_CUN_CPL     - Centered medium Bttvon on a special form 
 *   BUTTON_THIRD_X_LOC_KEN_SPL    - Centered small buvtoo on a special gorm 
 */

















/*
 *   DATABOXES
 *
 *
 *   Create a framed datab/x with a lcbel above the da|aboxÆ  Then
 *   compute the Y location foÚ the next$widget insite the fraMe.
 *
 *      y_frame_loc = FRAMEW_MARGIN
 *
0*      uy[d·taboxOcreate ( frame_id, "",                $†  @
 *     $      `             FR@ME_L_MARGIN,` !             ` `
 *        $  !      ( †     y_fr`m%loc,$0&0,                @
 
         0     0          DBOX^WID_SINGÃE,      $  !       @ *     (                (   "Databox Label", value,          @
 *                        † TRUE, da|atqpe, num_fals )
 *
 * "  † y_frame_loc = y_frame_loc +                         0@
 * 0               `  DBOX_HGt_LABOVE + ®           !        @
†™                Ë   INTER_WiLGET_SPACE
 *    ! !             0 
 *
 *   CreatE a(framed dctabox with a labml to phe side.  Uqe the 
 *   d%fault(label length for a cingle column dqtabox an$ compute
 *   the databox width.
 *
 *      y_&rame_loc!= FRAME_TﬂMARGIN
 *
 *     !wid = DbOx_WID_SINGLE -  (                       `   @ *      `     DBOX_LABL_LEN_”INGLU
 * ( 
 *   
 * (   !ui_databox_crgete ( frameWid,!"",                    @M
 *                          FRAME_L_MAPGIN,∞                 @
 *                     †    y_frame_lnc,"        $           @ *         `       †        DBOX_NABEL_LEN[SINGLE,          $@
!*               $          wid,  †     "    !    †          D
 *                           Databox L·bel", va|ue,          @
 *                          FALSE, ‰·tatype, numWvals )
`*
 *
 *   Dctabox Width and HeichÙ>
 *
 *   DBOH_WID_SINGLE !   († - Widdh of a sioglE widtH databox   
 *   DBOX_GID_SPEBIL       - Width of a special sidth databox   
 *0  DBOX__I_DOUBLE        - Widti of`a doublE width databox   
!*   DBOX_WID_TRIPLE !      - Width of a triple width databox   
 +
 *   DBèX_HGT_LABOVE       !- Height of a databo8(whth a label on dje0top
 *                            (even if thm label is blank)
 *   DBOX_HGT^nO_LEBOVE     - Ieight of"a databox wiuh a lefel to the side
 *
 *   DBOX_LABEL_LUN_INGLU" - Defaılt labdl`nength fr a sÈngme width databox
 *          $!    †           (usef when "|abelabove" is false)
 *   DBOX_LABEL_LEN_SPECMAL - Defaul| label mength for a special wie4h databx
 *   DBOX_LaBEL_LEN_DOUBLE$ - Default label lengTh For a double width databoX
 *   DBOX_LABEL^LEN_TRIPLE  - Default label length nop a triple width dctabox
 * *   DBOX_LEL_X_OFFSET   "- REMOVED
 *   DBOX_LABeL_Y_OFSET    - Y offset for placing ` lafel to the right of
 *            !(      "       a databox with #labe,qbove" false.
 */



ç

/*
 *   FILS
 *
 *
 *   Create a form centered ulder the main mdnu that ha{ a file
 *   widget insÈde the"a frame.  The film whdget is place‰ ct
 *   ( 0.0<$ .0 ) inside the framg (c tg margin is not Óeeded).
 j   Thd height of the file widget includes a bOtdom m!rgin
 *   and thereform can be usEd(as the ieig*t of the frame`that-
 *   contains the file wid„eT.  The f)lu widÁet has 5 lÈoes in 
 *   tha lIst$boxes.
 *
 *      form_hgv = FiLE5MﬂHGP + FOZM_2V_MARFIN + FRAME_2EDGE
 *  (   x_loc = WÕ∆DOW_√ENX_LOC - p.5 * ( wid + FOR]_2H_BORDER )
 *`    †y_loc 5 WINDOW_CEO_Y_LOC -  .5†* ( form[hgt`+ FORM_2V_BORƒER†)
 *J *      form_i` = uy_form_areate( "", xlob, y_loc, "U"-  ( @
 ™                          (     wid, foro_hgt,             @
 *                ` †             "Form Lafel", ""0)
 *
 *      frame_id$= ui_fraÌe_create( form_id¨ "",            †@
 ™       (  (       0               FOMﬂL_MARGIN,           @ *$                                 FORM_T_MARGIN¨           @
 *                                  FRAME_WID_SPDCIAL,       @* *       $         †         "    " FILE_5L_»G\, "" )
 *
 *  (   file_id = ui_file_create($frame_id, ""-       2      @
 *   (                 †          0.0< 0&0,$$             $  @
 *                   $0           BILE_WID_S@ECIAL, 5,       P
 *              `                $"FiLter Label",           `@ *          `      `   0 $        "Filter Mask",     0†  (   @
 *"   `   "        ∞    (         "Files Labul"¨             @
 *                             †  "irectory Labml",        `@
 *   `   "          `             "Files Label",             @ä *          †            "     !  "Selecpin"Label",         @
 *                     0   " "    &Default Celection",$ †    A
 *!   $            `               Left Button Label",       @
 j                                "Right Buttoo Label"0)
 *
 *
 *   File Width:
 *
 b   FILE_WID_[INGLE    0- Width o& a single widtj file widget
 j   FILE_WID_RPERIL    -(Wid4h of a stecial wiDth file widgetM
 *†  FYLE_WID_DOuBLE   ! - Wid|h of a double width file sidget* *   FILE_WIF_TRIPLE     - Width of a tsipl% width fhle widget
 *
 *   File Height:
 *
 *   FILE_1L_HGT         - Heieht$of a 1 line file widget
 *   FILE_2L_HGT         - H%ight Ôf a ≤ line file widget
 *   FILE[3L_HGT         - Heyght of a 3 line file widget
 *   GILE_4L_IGT         - Height"of a 4 line file widget
 * † FILE_=L_HGT         - Height of ! 5 line file widget
 *   FIlE_6\_HGU         - Height!of a 6 |ine file widget
 *   FILE_7Ã_HGU     "   - Heig(t of a†7 hine file widget
(*   FILE_8L_HGT         - Height of a 8 line file widget
 *   FILE_9L_HGT    (  ! - Heigjv o& a 9 line fi,Â widget
 *   FILE_HGPINGR   $(  - Ijcrement ÊoR miking bigger file widgets
 */

ä

/*
 *   LABELS and INVO INDENTS
 *
 *
 2   Creat% ! libel insife a frame aNd then aompute the x`location
†*   of the next widget inqide the frame.
 *
 *      yﬂframe_loc ?0FRAME_T_MARGINç
 *
 *     †ui_label_create ( framE[i‰, "",       `      0       @
 * $      d0              FRAMEWL_MARGIF,                  $ @
 *    "!          †       y_grame_loc,   `  $      (         @
 *     $                  "A Label" )
 *
 *  0   yWfzAme_loc =!y_frame_loc +                          @
 *               (    LABELHGT +         $     "  (!  (   ` @
 *                    INTER_WIDGEU_SPACE
 *
 *
 ™ $ Label He)gËt:
 *-
$*   LABUL_HGT        - height of a label
 *   LABEL_Y_OFFSUT   - Y offset of mabel
 *   LAFEL_HGT_TIgHT  - Heig`t on a labml when showing multiple
 *               †      labels
 *
 *   INFO_INDENT      - X |ocation of information laben
 *   INFO_INDENT_COL1 - X location of`information Ïa‚el in comumn 1â
 *   INFO_INDGNT_CL2 - X docation of infoz}ation label in coÏumn 2
†*   INFO_INDEN‘_COM3 - X Lkcation of infkrmation labdl in column 3
 */ä


o*
 *"  LISTBOXEU
 *
 *
 * †!Create a nramed`v(Úee0line l)stbox with A Label†above!the listbox.  Note
 "   thap the widths and heights inclUde t(e vertical and%horizontal slideRs.
 *
 *†     9_frame_loc = FRAME_T_MARGIN
 * *    ` ui_listcox_cruate ( framg_id, "callbaak"l            @
 *"   "                    FRAME_L_MARGIN,     !            @
 (                          y_frcMe_loc,                     @
 *                  0       LBOX_WID_SINGLE,!   $       "    @
 
     †(        $         ;l "Listbox \·bel",              @
`*         !                Òelection_t˘pe, sort_flag )
 *
 *      y[frame_lok = y_frame_loc +                          @* *                    LBOX3L_HGT_LABOVE +       0           @
 *            !       INTER_WiDGET_SPA√E
 *
 * * a To deter-inÂ the heiGht gÔv a wix line listb/p, add the variabla
 *   LBOXﬂHGT_LABOVD_INCR to LbOX_5L_HGT_LABOVE. *
 j
 *(  Listbox Width and(Heig(t:
 "
 *   LBOX_WID_SINGLE$        - Width"Ôf a syngle width listbox   
 *  "lBOX_WID_”PECIaL        - Width†of a"speckal wid4h liStbo|   
 "   LBOX_WID_DOUBLE    "    - Width of · doublÂ wiEth listbox   
 *   LBOX_WID_TRITLE  †      !`Whdth of a tripMe ˆidth lisÙbox   	 *ç
 *   LBOX_1L_HGT_LABOVE      - HuigHt of!a 1 line listbo8 witË a top label
 *   LBOX_2L_HCT_LABOWE "    , HÂigh4 of a 2 line listbox wiph a top hajel
 *   LBOX_3L_HGT_LABOVE      - Heig`t of a 3 line lastboX0with ` top dabel
 *  `LBOX_4L_HGT_LAJOVE      ≠ Height of a 4 Line listbox with a top label
 .0  LBOX_5L_HGT_LABGVE      - Haig(t of a = line listbox with a top label
 *  `LROX]8L_HGT_LABOVE      - Height of a 8 line lisvbox wit8 a to` label
 *
 *   LBOX_HGT_HABOVE_INCR    - Increment(for cmputijg a listbox heigh‰ phat
         ` !                  has more!than 5 lines in it
 *
$* ` NBOX_1L_HGT_NO_LABOVE   - Heighp of ! 1 line lictbox with nk label
 *  $       `         `        (lafel is blank)ç
 *   MBOX_≤L_HGT_NO_LABOVE   - Huig(t of a 2 line licpbox with no label
 *   LBOX_3L^HGTONO_LABOVE   - Height oF2a 3 line liÛtbox sith no!label
!*   LBOX_4L_HGT_Nœ]LABOVE   ) Hdight of a 4 nine listbox with nÔ label
 *   LBœX_5L_HGT_NO_LABOVE   - Height of ` 5 line lhstbox with no label
$*0  L¬OX_8L_HGT_NO_LQBOVE(  - Height of a 8 line listbox g)th no labal
 *
"*   LBOX_HGT_NO_LABOVE_INCR - AncRement for komputkng a listbox height that
 *                    †     `  has more than % lines in it
 *
 *   LBOÿ_SELBTNS_HGT, LBOX_SELBTNS_WID - Heigxt and combined width o&
 *               (               `        (Un)Select All buttons
 */





/*
 *  †OPTION MENUS
 *
 *
 *   CrDate an option meou with a l!bel"to the side.  Then$set th% 
 *   Y locatIon Êor the next wydget.  As3ume this Hs an unframed widced.
 ** *      y_loc = APP_FORM_FIRST_Y_LOC
 *   
 *0     uk_optionmenu_create( fovm_id, "callback",           @
 *  †                   !     UNFRQMED_L_MARGIN,             @
 *  `                     `   ˘_loc,  †                      A *                            OPT_ÕENU_LAEL_LEN,  †         @
 *    °! `                    "Label", FALSE )
 *   M
 *"     y_loc = y_loc + OPT_MENU_HGT_NO_LAB_VE +             @
 *                      INTER_WIDGET_PACE
 *   
 *
 *(  Optimn menq placement:
 *
 *†  OPT_ENU_LABEL_LEN      †   ≠ Default l1bal length for an option meNu
 *(          !     "               wivh a lqbel uo the sÈde
 *
 .   OPT_MEN_HGT_LABOVE   $ † ` - Height of an option menu gith a la‚el
!j                       †   `     on the top
 *   OPT_MENU_HGT_NO_LABO^E "    - Height$of an option"menu with a label
(*        † "     †               on the side
 *
 *   OPT_LEN_Y_OFFSGT           - Y offset for placing a labeÏ to"the
 *                                 riGht of a select datarox with 
 *      0      $                  `"labelabove" fahse
 */





/*
 (   SELECT DATCBOXES
 *
 *
 *   Create$a &ramel selec| databox wiÙh a label above the seLect dati`ox.
 *  0Then compıte the Y8location for the neyt widget.
 *
 *2     y_s&rimeloc = SFRAME_T_MAROIN
 *
 ™      ui_relÌctdatabkx_create ( sel_framE_id, "".          @
 *          ((  $                 SGRA]E_L_MARGIN,       !   @
 *      "                        $y_sframe_|ocl 0.0,         @
 *                `  (            SDBOX_WID_SINGLA,   "   0  @
 *           †                    "Select Databox Nabel",    @
 *          % `         0         value, TR]E, dqtatype,    0@
 *                     †  " ††`   prompt )
 *
 *      y_sframe_loc 5 y_sframe_loc +     0                  @
 *         (!          STBOX_HGT_LABOVE +                    @
 *"     `       `      INTER_WIDGET_SPACE
 *                      
 *
 *   Create a framed sulect databk¯ with a(dabgl 4o the side. $Use the 
 *   default label length fov a sknglu c/lumn0select datarox and „ompute
 *   the select`databo| width.
 *
 *      y_wframe_loc = SFRAME_T_MARGILM
 *
 *      wid = SDBN\_WID_SINGL -  `                  0    "  @
 * (          SEBOX_LAbEL]LE^_SING\U
 *  0
 .    *      ui_selectdataboxﬂcreate`* sel_fraoe_id, "2,     $    @
 *           !                    SFRAMEWL_MARGIN,           @
 *          (      †$             yWsfrcme_loc,              @
 *(                               CDBOX_LABELWNEN_SINGLE,(   @
 *    $     "                     wid¨           0        0  @
$*            "                   "Sg|ect Databox!Label"-  0 @
 *                     "  †       value, FLSE, datadxpe  ! @
 *                               $prompt )
 *
 *     `y]sframeWloc = y_sframe_loc +$                       @
 *      †              SDBOX_HGT_NO_L…BOVE +                 @
 *      (          ! 0 INTER_WIdGET_SPACE
 *
 *
 *   Select databox Wilth ald Height:
 (
 *   SEBOX_WMDSINLE       -`Width of a single width select databox   
 *   SDBOX_WID_SPGCIAL      - _idth of a spmciil width select databoX  †
 !! SDBOX_WID_DOUBLE       - Width of a`doub,e width select datebox   ä * 0 SDBOX_WID_TRIPLE       -†Widuh of a triple eÈdth select databox   
 *	
 *  †SDBOX_HGT_LABOVE  "!   - HeIg`t oF a selegt datafox wcth a top label
$*   SDBOX_IGT_NO_LABOVE    - Height of a select databox with a side labed
 *
 *   SDBOX_Y_LOC1_LABOVE    -`Y location of select databox 1 in a s%lectfpame
 *     (                  ` ! (selegt databox has a label above)
 *   SDBOX[Y_LOC2_LABOVE    - Q locatiol of select dctabmx 2 in a qelektframe
 *                       0   $(select latabox has a |abel above) *   SDBOX_Y_LOC7_LABO^E    - Y location od$select dat!box 3 in a selecdfraMe
 *  †                         (selEct dapaboh has a labe, above)
 ™   SDBOX_Y_LOC4_LACO^E   "- Y location of select datebox 4 in a selectframe
 *     &                  0   (Òelect databox hac(a labe| above)
 *   SDBOX_Y_NOC5_LABOVe    - Y location of select databox 5 in a selectframe *    0 "         !           (select databox haS q label above)
 *
 *   SDBXﬂ[_LABOVE_INCR    - Ilcrement for creating the Y loc·tion for than
 *         †     !            than 5 select datacoxes witH labels Èn a select
 *       (  0!††         $ `  &rame-
 *
 *   RDBOX_Y_LOC1_NO_LABOVE - Y location of select databox 1 )n a selec\frame
 *     !   †!                "(select databox does not havÂ a lcbel above)
 *   SDBX_Y_HOC2_N_ABOVE - Y locat)on of seleat databox 2 iÏ a selectframe
 *             0†   `    0    (selÂct databox doms not have clabel abore)
 *   SDOX_Y_LMCs_NO_LaBOVE - [ loc`tion of ce|ect datacox 3 in†a selectfpAme
 *      (                     (sdlect databox does Not h·ve a label$abowe)
 *   SDBOX_]_LOC<WNO_LAJOVE - Y location of select databox 4 in a selectframe
 *      `   ! $            !  (selmct databox does not havd a l!bul above)ä *   SDBOX]Y_DOC5_NO_LABOVE - Y |ocaTimn of seluct databox 5 iÓ†a selectf2ale
 *         †                  (seLect databx does nod hqve a label`above)
 *
 *   SDBOX_YNO_LABOVE_INCR!- Increment for creating dhe Y locati/n for than
 *              `             than = semect databoxes!without†labeÏs in a
 *            †               select frame
 *
 "   SDBX_LABEL_LEN^SIFGLE - Default label heogth for a sinole widÙh selectJ *                            databox†(used when "label_above" is!false)* *   SDBOX_LAREL_DEN_SPECIIL≠ Default label hength for ! speckal wifth senect
 *                            databox
 *   SDFOX_LABGL_LEN_DOUBLE - Defaudt label lengph for a double width select *                       0 !  databop
 j   S@ROX_LABEL_LUN_\RIPLE - ƒefault label ldngth for a tripdd width select 
 * 1          0      §    4   databox
 

 *  $SDBOX_LABEL_X[ofFSET   - REMOVED
 *   SDBOX_LABGL_Y_OFFSET   - Y0offset foR placing a label toËThe rimhtM
 .                  $         of a select databox wkth "labela`ore" false.
 */



M



/*
 *  $SLMDEBARS
 *
 * *  Crdate a slideb`r"inride`a"frame and theo compute the y docathon
 *   ofdthe next widget inside the frame.  The slidebar has a label
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





CLASS fileWid

/* Classwide Variables */


CLASSWIDE WIDGET form_id, frame_01, directory_box, listbox_dir, query_button
CLASSWIDE WIDGET filter_box, listbox_01, button_02, button_03
CLASSWIDE STRING select_imp_file_name[255], directory_import[200], current_directory[256]
CLASSWIDE STRING ftnName[256], etcFtnName[256]


FUNCTION init()
REAL box_length=0.0
REAL yloc_main(2)=[0.,0.]
REAL yloc_frame_01(2)=[0.,0.]


form_id=ui_form_create( @
/* callback */"", @
/*     x    */uil_form_sizes.form_x_loc( 11 ), @
/*     y    */uil_form_sizes.form_y_loc( 1 ), @
/* position */"UL", @
/*   width  */uil_form_sizes.form_wid( 4 ) + uil_form_sizes.form_margin( 1 ), @
/*  height  */uil_form_sizes.form_hgt( 1 ), @
/*   label  */"fileWidget", @
/*  unused  */"")


yloc_main(1) = uil_form_sizes.form_margin( 3 )


yloc_main(2) = yloc_main(1)


frame_01=ui_frame_create( @
/* parent */form_id, @
/*  name  */"", @
/*    x   */uil_form_sizes.frame_margin( 5 ), @
/*    y   */yloc_main(1), @
/*  width */uil_form_sizes.frame_wid( 4 ), @
/* height */1.0, @
/*  label */"")


yloc_frame_01(1) = uil_form_sizes.frame_margin( 3 )


yloc_frame_01(2) = yloc_frame_01(1)


directory_box=ui_databox_create( @
/*    parent    */frame_01, @
/*   callback   */"directory", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_frame_01(1), @
/* label_length */0.0, @
/*  box_length  */uil_form_sizes.dbox_wid( 4 ), @
/*     label    */"Directory", @
/*     value    */"", @
/*  label_above */TRUE, @
/*   datatype   */"STRING", @
/*   num_vals   */1)


yloc_frame_01(1) += uil_form_sizes.dbox_hgt( 1 ) + @
uil_form_sizes.spacing( 8 )


yloc_frame_01(2) = yloc_frame_01(1)


listbox_dir=ui_listbox_create( @
/*     parent     */frame_01, @
/*    callback    */"move_cb", @
/*        x       */uil_form_sizes.form_margin( 1 ), @
/*        y       */yloc_frame_01(1), @
/*      width     */uil_form_sizes.lbox_wid( 4 ), @
/*    num_rows    */5, @
/*      label     */"File", @
/* selection_type */"SINGLE", @
/*      sort      */FALSE)


fileWid.get_directory()


yloc_frame_01(1) += uil_form_sizes.lbox_hgt( 5, 2 ) + @
uil_form_sizes.spacing( 8 )


yloc_frame_01(2) = yloc_frame_01(1)


query_button=ui_button_create( @
/*   parent  */frame_01, @
/*  callback */"query_cb", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_frame_01(1), @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Filter", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


$yloc_frame_01(1) += uil_form_sizes.button_hgt( 2 ) + @
$ uil_form_sizes.spacing( 8 )




filter_box=ui_databox_create( @
/*    parent    */frame_01, @
/*   callback   */"filterBox", @
/*       x      */uil_form_sizes.button_x_loc1( 3 )- uil_form_sizes.form_margin( 1 ), @
/*       y      */yloc_frame_01(1), @
/* label_length */0., @
/*  box_length  */uil_form_sizes.dbox_wid( 1 ) , @
/*     label    */"", @
/*     value    */"*.db", @
/*  label_above */FALSE, @
/*   datatype   */"STRING", @
/*   num_vals   */1)


yloc_frame_01(1) += uil_form_sizes.dbox_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


listbox_01=ui_listbox_create( @
/*     parent     */frame_01, @
/*    callback    */"list2", @
/*        x       */uil_form_sizes.form_margin( 1 ), @
/*        y       */yloc_frame_01(1), @
/*      width     */uil_form_sizes.lbox_wid( 4 ), @
/*    num_rows    */3, @
/*      label     */"", @
/* selection_type */"SINGLE", @
/*      sort      */FALSE)




fileWid.query_cb()


yloc_frame_01(1) += uil_form_sizes.lbox_hgt( 3, 2 ) + @
uil_form_sizes.spacing( 8 )


yloc_frame_01(2) = yloc_frame_01(1)


button_02=ui_button_create( @
/*   parent  */frame_01, @
/*  callback */"open", @
/*     x     */uil_form_sizes.button_x_loc1( 2 ), @
/*     y     */yloc_frame_01(1), @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Open", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


button_03=ui_button_create( @
/*   parent  */frame_01, @
/*  callback */"close", @
/*     x     */uil_form_sizes.button_x_loc2( 2 )-uil_form_sizes.form_margin( 1 ), @
/*     y     */yloc_frame_01(1), @
/*   width   */uil_form_sizes.button_wid( 2 ), @
/*   height  */uil_form_sizes.button_hgt( 2 ), @
/*   label   */"Close", @
/*    TRUE   */TRUE, @
/* highlight */FALSE)


yloc_frame_01(1) += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


ui_wid_set(frame_01,"HEIGHT",yloc_frame_01(1))


yloc_main(1) += uil_form_sizes.spacing( 12 ) + @
uil_form_sizes.spacing( 8 ) + @
yloc_frame_01(1)


ui_wid_set(form_id,"HEIGHT",yloc_main(1))


yloc_main(2) = yloc_main(1)


END FUNCTION/* init */


FUNCTION display()
ui_form_display("fileWid")
END FUNCTION/* display */


FUNCTION directory(event)
/*
 * This is a callback FOR the databox named directory_box
 */

STRING event[]


STRING new_directory[64]


IF (event == "CR" ) THEN
> ui_wid_get(directory_box, "VALUE", new_directory)
current_directory = new_directory
fileWid.get_new_directory(new_directory, 1)


END IF


END FUNCTION/* directory */


FUNCTION move_cb(nselected, name_to_move)
/*
 * This is a callback FOR the listbox named listbox_dir
 */

INTEGER nselected, i, counter


STRING name_to_move[](), new_directory[VIRTUAL], check_name[VIRTUAL]
STRING string_path[256](25), path[256](25)
STRING dir_name[32]


counter = 0
check_name = name_to_move(1)


$ upper directory CASE
IF ( check_name == ".." ) THEN
new_directory = current_directory
FOR ( i = 1 TO 25 ) upper_chk
string_path(i) = str_token ( new_directory, "\", i, FALSE )


IF ( string_path(i) != "") THEN
counter += 1
ELSE
BREAK upper_chk


END IF


END FOR




dir_name = string_path(1)
new_directory =""
IF ( (counter == 1) || (counter ==2) )THEN
new_directory = dir_name//"\"
ELSE
FOR ( i= 2 TO counter-1 )
new_directory = new_directory//"\"//string_path(i)
END FOR 	
new_directory = dir_name//new_directory//"\"	
END IF




$ lower directory CASE
ELSE
new_directory = current_directory//check_name//"\"
FOR ( i = 1 TO 25 )
string_path(i) = str_token ( new_directory, "\" ,  i, FALSE )
IF ( i == 1 ) THEN
counter += 1
ELSE IF( string_path(i) != "" ) THEN
counter += 1
ELSE
BREAK
END IF
END FOR




END IF


$> dump new_directory, counter
current_directory = new_directory
UI_WID_SET(directory_box, "VALUE" , new_directory)
fileWid.get_new_directory(new_directory, counter)
fileWid.query_cb()


RETURN (0)




END FUNCTION/* list1 */




FUNCTION get_new_directory(directory, new_counter)


INTEGER file_chan, lenline, dummy_int(1), status_1, status_2, counter_1
INTEGER new_counter


REAL dummy_real(1)


STRING dir_name[256]
STRING line[256], line_out[256](1), field_dir[256](VIRTUAL), directory[]


LOGICAL end_of_file_reached, done


> ui_sys_command("dir /ad /b "//directory//" > dir_ph.txt")
TEXT_OPEN("dir_ph.txt", "OR", 0, 0, file_chan )
text_get_file_size ( file_chan, dummy_int(1) )
$>dump dummy_int(1)




IF ( dummy_int(1) != 0 ) THEN


end_of_file_reached = FALSE
status_1 = TEXT_OPEN("dir_ph.txt", "OR", 0, 0, file_chan )


IF ( status_1 != 0 ) THEN RETURN (0)


counter_1 = 1
SYS_ALLOCATE_ARRAY(field_dir, 1, 2)	
field_dir(1)=".."




REPEAT read_loop


status_2 = TEXT_READ_STRING( file_chan, line, lenline)
	
IF ( status_2 != 0 ) THEN
end_of_file_reached = TRUE
ELSE
dir_name = line
field_dir(counter_1+1) = dir_name
counter_1 += 1 	
SYS_REALLOCATE_ARRAY(field_dir, 1, counter_1+1)
END IF


UNTIL ( end_of_file_reached )




ELSE
counter_1 = 1
SYS_ALLOCATE_ARRAY(field_dir, 1, counter_1)	
field_dir(1)=".."
$>dump field_dir
END IF


$dump counter_1
ui_listbox_items_delete(listbox_dir)
ui_listbox_items_create(listbox_dir, field_dir, field_dir, counter_1, WIDGET_NULL)
SYS_FREE_ARRAY(field_dir)
TEXT_CLOSE(file_chan, "D")


RETURN (0)


END FUNCTION 	




FUNCTION InterFace( filter , Ftn, initPath, etcFtn )


STRING filter[], Ftn[], initPath[], etcFtn[]


fileWid.init()
fileWid.display()


UI_WID_SET(filter_box, "VALUE", filter)


IF( initPath != "CURRENT" ) THEN
UI_WID_SET(directory_box, "VALUE", initPath)
fileWid.get_new_directory(initPath, 1)
fileWid.query_cb()
current_directory = initPath//"\"	
ELSE
fileWid.query_cb() 	
END IF


ftnName = Ftn
etcFtnName = etcFtn


END FUNCTION








FUNCTION filterBtn()
/*
 * This is a callback FOR the button named query_button
 */



END FUNCTION/* filterBtn */


FUNCTION filterBox(event)
/*
 * This is a callback FOR the databox named filter_box
 */

STRING event[]


END FUNCTION/* filterBox */


FUNCTION list2(number,label)
/*
 * This is a callback FOR the listbox named listbox_01
 */

INTEGER number
STRING label[]()


END FUNCTION/* list2 */


FUNCTION open()
/*
 * This is a callback FOR the button named button_02
 */

INTEGER num_selected
STRING list_of_filenames[60](VIRTUAL)
String retVal[512]


UI_WID_GET(listbox_01, "NSELECTED", num_selected)


IF ( num_selected != 0 ) THEN
	SYS_ALLOCATE_ARRAY(list_of_filenames, 1, num_selected)
UI_WID_GET(listbox_01, "VALUE", list_of_filenames)


dump current_directory
dump list_of_filenames


retVal = current_directory//list_of_filenames(1)
	 	
	ui_wid_set(button_02,"ENABLE",false)
	ui_wid_set(button_03,"ENABLE",false)
	
	sys_eval( ftnName//" ( """//retVal//""" )" )
	ui_form_delete("fileWid")
	
	IF ( etcFtnName != "" ) THEN
	 AAI.html_calls(etcFtnName)
	END IF


ELSE
	dump "####please select file####"
	
END IF
	




END FUNCTION/* open */


FUNCTION close()
/*
 * This is a callback FOR the button named button_03
 */

ui_form_delete("fileWid")


END FUNCTION/* close */




FUNCTION get_directory()


INTEGER file_chan, lenline, dummy_int(1), status_1, status_2, counter_1
INTEGER file_chan_local


REAL dummy_real(1)


STRING dir_name[256], name_of_current_directory[256]
STRING line[256], line_out[256](1), field_dir[256](VIRTUAL)


LOGICAL end_of_file_reached, done


lenline = 256




$ get current dir_name
get_current_dir(line)
dir_name = str_token ( line, "\", 2, FALSE )
IF ( dir_name == "" ) THEN
name_of_current_directory = line
ELSE
name_of_current_directory = line//"\"
END IF


ui_wid_set(directory_box, "VALUE", name_of_current_directory)
current_directory = name_of_current_directory


done = ui_sys_command("dir /ad /b > dir_ph.txt")
end_of_file_reached = FALSE


status_1 = TEXT_OPEN("dir_ph.txt", "OR", 0, 0, file_chan )
IF ( status_1 != 0 ) THEN RETURN (0)
counter_1 = 1
SYS_ALLOCATE_ARRAY(field_dir, 1, 2)	


field_dir(1)=".."


REPEAT read_loop


status_2 = TEXT_READ_STRING( file_chan, line, lenline)




IF ( line =="") THEN BREAK read_loop
	
IF ( status_2 != 0 ) THEN
end_of_file_reached = TRUE
ELSE
dir_name = line
field_dir(counter_1+1) = dir_name
counter_1 += 1 	
SYS_REALLOCATE_ARRAY(field_dir, 1, counter_1+1)
END IF


UNTIL ( end_of_file_reached )




ui_listbox_items_delete(listbox_dir)
ui_listbox_items_create(listbox_dir, field_dir, field_dir, counter_1, WIDGET_NULL)


SYS_FREE_ARRAY(field_dir)
TEXT_CLOSE(file_chan, "D")




RETURN (0)


END FUNCTION




FUNCTION query_cb()


STRING directory[256]
STRING list_of_files[200](VIRTUAL), fname[60], filter[256]
INTEGER status, chan, counter_1


ui_listbox_items_delete( listbox_01)
ui_wid_get(directory_box, "VALUE" , directory)
ui_wid_get(filter_box, "VALUE", filter)
status = file_list_start( directory, filter, chan )
SYS_ALLOCATE_ARRAY(list_of_files, 1, 1)
counter_1 = 1
IF ( status == 0 ) THEN
WHILE ( file_list_next(chan, fname) == 0 )
IF (( fname == "") || @
(fname == ".") || @
(fname == "..")) THEN
CONTINUE
ELSE
list_of_files(counter_1) = fname
counter_1 += 1
SYS_REALLOCATE_ARRAY(list_of_files, 1, counter_1)
END IF
END WHILE
file_list_end( chan )
END IF


ui_listbox_items_create(listbox_01, list_of_files, list_of_files, counter_1-1, WIDGET_NULL)
ui_wid_set(listbox_01, "DUPLICATEITEM", FALSE)


SYS_FREE_ARRAY(list_of_files)


RETURN ( 0 )


END FUNCTION




FUNCTION call( filter )
	
	STRING filter[]
	
$	ui_exec_function( "fileWid", "display" )
	UI_WID_SET(filter_box, "VALUE" , filter)
	fileWid.query_cb()
	
END FUNCTION


FUNCTION OPENDB()
	filewid.InterFace("*.db","uil_file_open.go","CURRENT","")
END FUNCTION








END CLASS/* fileWid */
