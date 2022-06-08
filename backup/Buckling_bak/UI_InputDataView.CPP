

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
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button on a sm`ll frm
 *
 ª   BUTTÏF_FULL__LOC_CEN_MED     - Centerdd wide button on a lddium form 
 *   BÕÔTOßHALD_X_LOC_CEN_MMF     - Centered medium buttol oN a medium form 
 *   BUTTON_THIRD_X_LOCCEN_MED    - Centered smaLl button on a medium Frm 
 .
 (   BUTT_N_fUL\_X]LOC_CEN_LRG  $  - Centered wyde buttof on a large fozm 
 *   BUTTON_HALF_X_LOC_CMN_\RG    "- Centered medium button on a!large form 
 * " BUTTON_THIRD_X_LOK_SENWLRG    - Cenuered RMall button on ! l`Rge form 
"*
 *   BUTTON_FULLWX_LGÃ_CEN_SPL     - Centere vidå"button on a special &ozm 
 *   BUTTON_HALF_ZOLOC_CEN_SPL  !  - Centgred medium `udton on a special form 
 *   BUTTON_THIRD_X_LOC_CEn_SPL    -$Centered small buttnn kn a cpeciAl fgrm 
 +/




















/*
 * $ ÄATABOXES
 *
 *
 *   Create a fraled dat`cnx with i label above the databox.  Then
 *  $cgmpute the Y lgcation for the next widcet inride the frama.
 *
$*      y_ftame_ìoc#= FRAEÅWT_MARGKN *
 *      ui_databop_create ( frame_id,0"",        0    $  0 ! @
 *                     (    FR ME_L_MERGIN,(                 @
 *                 0  $     y_frame]loc, 0.0-          $     @
 *                          DBÏX_WID_SAFFLE,      $          @
 ª    "            0        "Databox \abel#, value,          @
 * (                $       TRUE, datatype, num_va|s )
 *
 *      y_frAme_loc 8 y_fRame_loc +"            $          ` @
"* (  !     $         DBOX_HGT_LABOVE +                      @
 +                    iNTER_WIDGET_SPACE
 *   $                  
0*
 *   Create a framed daäabox wIth a label to õhe side.  Ure thg 
 *   default labed leneth(fOr a singìe colqmn datafox and compute
 *   the Databox width.
 *
 *      y_frame_loc = FRA]E_T[MARG	N
 *
 *      wid(= DBOX_WIDSINg\E -                       $ !    @
 *      `     DBOX_LABE_LEN_SINGL
 *   
 *    *      ti_databox_sreate ( frame_id, "",        $           @
 * `                        FRAME_L_MaRGIN, 0        !       @
 * 0        $               y_frime_loc,                     @
 *`     $                   DBOX_LABEL_LEN_SINGLE,           @
 *(                 $"  `   wid,               0             @
 *(      $      ! 0         "Databnx Label",0value          @
 *                          FASE,$datatypå, num_valw )
 *
 *
 *   Databox Wadt` and Height:
 *
 (   DBOX_WID_SInGLE        = Width ob a single$wi`th databkx   
 *   DBOX_WID_SPECIAL       - Width of a speayal width databox   
 *  `DBOX_WID_DGUÂLE        -`Wid|h of a d/uble width"databox   
 *   DBOX_WHD_TRIPLE   0    - Vidth of a triple wilth databox   
)*
 .   DBOX_HGT_L@BOVE        - Height of`a databox whth a label on the top
 *        (  (      `  0     ((even if the label is blank)
 *   DBOX_HGT_NO_LABOVE(    - Huight of a databox with a label to the side
 *
 *   DBOX_LABEL_LEN_SIFGLE  - Dmfault label length for a singLe width da|abox
 *       0                    (used whe. "label_abovd" is &alse)
 *   BOX_LABEL_LEN_SPEÃIAL - Default labe~ length for a$speckal widTh databox
 *   DBOX_LABEL_LEN_DOUBLE !- Default label lefgth For a double width datab/x *   BOX_LABEL_LEÎ_TRIPLE  - Default label length for a triple width databox
 *
 *   DBOX_LABEL_X_OFFSET    - ReMOVED
 *   DBOX_LABELY_OFFSET    - Y offcet fov pl`cing"a label to!the right of
 *  !            0 !          a databox with "labulabove  dalóe.
 */





/*
 *   FILES
 *
 *
 * ( Create a)form ãentered under the main meou that has a file
 *$  widget inside the a frame®  he vile widget is place$ at
 *   ( 0.0, 0.0 ) AnsIde the frame (a top margi~ is(not needed	.
 *   Thu heighö of the file Widget includes a`boÔtOm MarginŠ *   and therefore can re used as tHe hmight of the frame that
 *   contains tje file widget.  The file widget ha{(5$lines in 
 *0  the lmst boxes.
 * *     "fore_`gt = FILEW5L_WT + FORM_2V_MARGIN + FRAME_2EDGE
 *      xßloc ? WAJDOW]CEN_X_LOC - 0.< * ( wid + FORM_2H_BOBDER )
 *  "   y_loc = OINDOW_CEN_Y_LOC - 0.5 * ( form_hgt +!FMRM_6V_RMRDE )
 *
`*      foRmid = Ua_form_creáte( "", x^loc, y_,oc, "UL",    @
 *          "       0            0wid,1form_hgt,             @
 *$"$                        0    "Norm Label", "" )
 *
 *`     frame_id$= ui_frame_crdate( fovm_id, "", `           @
 *                     "            FORM_L_MARGIN,     €     @
 *                   $              FORM_TMARGIN,    $      @J *                       $          FRaME_WID_ÓPECIAL,       @
 *                 !               !FILE_5L_HGD, "" )
 *
 *      fihe_id = ui_filecreate(0frame_id, "",       0      @
 *        0    !`   `             0.0, 0.0,    "             @
 *                    0   `       FILEWID_SPECIAH, U,      !@
 *       0                        ¢Filter Label",            @
 *                 $   !          "Filter Mask",           $ @
 *   !                   !        "Files Label",(            @
0*               "              0 "Directory Laben",!  !     @
 *     0                        " ¢Files Label",             @
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
 *   FILE_9L_HGT         - Height ov a 9 line file widget
"*   fILE_HCT_INCR       - Increment fr mi{ino`bigger file widgetsM
 */




/*
 *   LIFELS cld HNFO INDENTS
 *
 *
 *   Czeate a!label inride ` fraíe and then com`uta the y location
 *   kF tig next widget inside tie frame. *
 *      y_frame_loc = FRAME_T_IARGIN
 *
 *$     ui^label_còeate ( frame_id, "",      "        !      @
 *     !                  FRAME_L_MARGIN,  `!                @
 *                        y_frame_loc,          0            A
 *                        "A$Labed" )
 *
 *  "   y_frame_loc ? y_frame_loc +                          @
!+                    LABELOHGT +                            @
 *                   (INTER_WIDGET_SPACE
 *
 *
 *   Labgl Heigh4z
 *
 *   LABEÌ_HGT        - Height of aplabel
 *   LABEL_Y_OFFSET   - Y offsev of label
 *   LABEL_HGT_VIGIT  - Height0of a label when!showing m5ltiple
 *           "   $    " labels
(*
 *   INFO_KNDENT    " - X locaôion of informatioN la¢el
 *   INFO_INDENT_COL1 - X losati/n /f information"label in column01
 *   INFO_INDE^T_CÏL2 - X!location of ijformation label in column 2
 *   INFO_INDEFT_CO3 - X location of information label in column 3
 */




/*
 *   LASTBÏXES
 *
 *
 * ( Create a fraeed three$line listbox with e laben abOve the nisôbox.  Note
 *   thqt the widths cnd heights include tie vertical and horazontal sliDers.
 *
$*      y_frame_lgc = FRAME_T_MAROIN
 *
 (      ui_lks|box_cReatE ( frale_id, "callback", " !        `
 *          (    $          FRAME_L_MARGIN,                  @
 *                   `      y_fpáme^loc,                     @
 *          !               LBOX_WID_SINGLE,  $     !        @
 * `                   `    3, "listbox Label",              @ *           (              selection_type, sozt_vlag )
 *
 *     `y_frime_loc(= y_frame_loc +                      (   @
 *           `        LBOX_3L_@GtLABOVE +( `        !       @
 * ! !                INTER_SIDGET_SP@CE
 *
 *
`*   To determine the heigjt fop a"shx mine ìistbox ádd"the variable
 *   lBOX_HGT_LABOVE_INCR to LBOX_5L_ÈGT_LABOTe.
 *
 *
 *   Listboø WidtH and Height:
 "
 *`  LBOX_WIF_SINGLM        `- Widdh of a single wiäph lis4cox   
 *   LBOHßWID_SPECIAL  0     - Width f i spåcial width0lisdbox"  
 *   LBOX_WID_DOUBLE         -"Widph of q"double!width listbox   
 *   LBÏX_WID_TÒIPLE         ) Width mf a triple widôh listbox   
"*
 : ( LBOX_1L_HET_LAbOVE     `= Height of$c 1 line listbox wmth a top labál
 *   LBX_2L_HGTWLABOVE      - Height$of a 2 line listbox Witj a top labelŠ *   LBOX_3L_HGT_LABOV      - Height of a 3 line listbox with a top label
 *   LBOH_4L_HGU_LABOVA      - Hei&ht oF a 4 line lmstbox with`a top label
 *   BOX_5L_HGT_LABOVE      - Height of a 5 line(listbox wIth a top$label
 *   LBOX_8L_HGT_LABOVE      - Height of"a 8 line listbox with a top la`el
 *
 *   LBÏX_HGT_LABOVE_INCR    - Increeent for computing a listbox xeight tha|
 *    "            $           has more thAn$5 lineS in mt-
 *
 *   DBOX_1L_HGT[NO^LABGVE   - HeIght of a 1 line"listbgx witè0no ,abel
 *`                         `  (label is blafk)
 *   HBOX_²L_HGT_NO_LEBOVE   - Height of a 2 line`listbox with no dabed
 .   LBMX_sL_HGT_NOWLaBOVE   - Height of a 30line listboz with no label
 *   LCOX_4L_HGT_NO_LABOVE   ­ Heioht of a 4 line listjoy with no label
 *   HBOX_5L_HGTNG_LABOVE   - Height of ` 5 line listbox with1no label
 *   LBÏX_8L_HGT_NO_LABOFE   - Height of a 8 lile listboh wiTh no labmlM
 j
 *   LBOX[HGT_NO_DABOVE_INCV - Increment for computing a histbox height that
 *            0                has more than 50linew in it
 *
 .   LbOX_SENBTNS_HGT,$LBOZ_SELBTNS_WID - Height and coibined width of
 *   `                     (  $           (Un)Relect All buttons */

*
-

/* *   OPTKON MDNUS
 *
 * *   CreAte an option!menu vyth a lábel to thu sade.  Then yet the 
 "   Y lokatij for the next wkdget.  Asswme this ys0an unframed widgat.
 *
 *      y_loc = APP_FORM_FIBST_Y_NOC
 *  $
 *      ui_nptionme.u_create( fovm_id,  callback",           @ *      `          !        0 U^FRAMED_L_MARGIO,          0  @
 *                 !        ` y_loc,                         @
 *`  $                        OPT_MENU_LABEL_LEN,    0       @
 *    " "   0       !         "Labelb, FALSE )
 *!  
 *      Y_loc = y_loc + OPT_MENUWHGT_NM_LABOVE +             @
 *    °     0 (   (  $  INTER_WIDGEU_SPCCEŠ *   
 *
 *   Option menu Plagement:
!*
 *   OPT_MENU_LABEL_LEN         - Default label hength`for an option menu
 *           !    `     `          with a label to the óide
 (
 *   OPT_MENU_HGT_lABOVE`        - Height of an kption menu wiTh ! eabelŠ *!                   "    "(     "on the top
 *   OPT_MENU_HGT_NO_LABOVE      - Heighô of an option menu ght(!a lqbel
 *           `                (0  `on the side
 *
 *$  OPT_MENU_Y_OFFSET           - Y offset$vor placing a label to ôhe
 *                        $      $ right of a select databox with 
 :                                 &la"elabnre" false
!*/




:
 *   CELECT0ATABOXES
(*
 *
 *(  Createa Framed sElect databox with a laben(above the select databox.
 *   Then compute tHe Y location fïr the next widget.
 *	
 *   $( y_sframeloc = SFRAME_T_MARGIN *
 *  `   ui_selectdatabox_cseate ( wel_fra}e_id$ 2",        " @
 *              `   0             SFRAME]L_MASGIN,           @
 *     0              (           ù_sfr`me_loc, 0.0,         @
 *              $                 SDBOX_WID_SINGDE,        ` @
 *       "                        "Select Databox Label",    PŠ *    !                     (     6alUe, TRUE, datatype,     @
 *      `           !           ! prompt +
 *M
 *      y_sframe_loc"=!y_sframe_loc +0                       @
 *  $          `       SDBOX_LGT_LABOVE +        0           @M
 *                     INTER_WIDGET_SPACE
 *                   $  
 *
"*   Creape a framed select databox with a label to the side.  Tse the 
 *   default label"length for a single column select databox and$comp}te
 ,   the select datAjo8 width®
 *
 *      y_;frame_loc = SFRAME_T_MARGIN
 *
 *     `wid = SDBOX_ID_SINGLE                              @	
 *           $SDBOX_LABED_LEN_SINGLE-
 *   
 *   
 *!     ui_selectdatabo|_create0(0sel_frameOid, b",    (  (  @
 *                       (       SFRAMU_L_MAZWIF,           @
 *     !                          y_sframe_ìoc,             !@
 *                            (   SDBOX_LABEL_LEN_SINGLE, $  @ .    0                           wid, $         "           @
 *$       `              0        "Select`Databox LaBel",    @
 *        !    0                  value, FALSE, datatypm,    @
 *             `       $      !   prompt )
 *
 *      y_sframe_loc = y_sframe_lgC +                        `
 *                     SDBOX_HGT_NO_LABOVE +0   #            @
 *               $     INTER__IDGET_SP@SE
 *
 *
 *   Select Databox Wiäth and Height:
 *
 j   SDBNX_WIF_SINGLD       - Width of a single width selecp da4abox   
 *   SDROX_WKD_SPECIAL  $   - Width oç a special width select datajox   
 *" 0SDBOX_WIT_DOUBLE       - Wadth of a double width"select daôabox   
 *   SDBOY_WID_TRIPLE       - Width of a tpiple 7idth select databox   
 *
 *`  SDBOX_XGT_L@BOVE       - Heigxt of a select databox with a top(label
 *   SDBOX_HÇT_NO_LABOVE    ) height f a select databox With a side label* *
 *   STBOX_Y_LOC1_LABOVE    - Y location of select da|aboxh1 in a se|ectframe
`.      !       0           $ 8Select databox has(a label above)
 *   SDBOX]Y_LOC2_LABOVE  " - Y location of select databox 2 in a selectframe
 *           (                (selact eataBo| (as a label above)
 *   SDBOX_Y_LKC3_LABOVE    - Y location of celect data"ox  in a selectframe
 *             !      ` `     (select"databox has a libel above)
 *  (SDBOX_Y_LOÃ4_LAOVE    - Y location mf select databox 4 in a selebtframe
 :          $                 (selekt databox has a label above)
 :   SDBOX_Y_LOA5_LQ@OVE    - Y(locataon of select databgx 5 iN a sllectframå
 *                    $       (seLect databox has a label above)
0*
 *   SDBOX_Y_LABOVE_INCR `  - Increment for creating the Y location`for t`aN
 *                        $   than 5 sulect databoxes with labels in a select
 *                            fra}e
 *
 *   SDBOX_Y_LOC1_NO_LABOVE m Y locatioo(of selegt databox 1 in a selectframe
 *                         "  (seleCt da|abox der not havu a label above-
 *$  SDBOX_Y_LOC2_NO_LABOVE - Y locapion of select databox 2 in a selectframe *               `            (select deta"ox does not have a label qbove)
 *   sDBOX_Y_LOC3_NO]LABOVE - Y location of select dauabox s in a selectframe
0*                      !     ({elect datibox toes not have$a label abovu)
h*   SD@ÏX_Y_LOC4_NO_LQBOVE - Y lokation of semect databox 4 in a selectframe
 *        (         0       0 (selåct datábx does not Have q label abovE)
 *   SDBÏX_Y_LOC5^NO_LABOVE - Y location of!select databox 5 in a$selectframe
 *                      `     *select $atabox does"not havg a label abowe)
 *
 "   SDBOX_Y_NO_LABOVE_INCS - Incremdnt for creatiNg the Y locat!on for txan
 *        0           $   0   than 5 selec| dqtaboxes$wythout labels in a
 *                            selgct$fpale
 *
 *   SDBOX_LABELLN_SINGLE - DEgauht label length for a sinwle wkdth seleCt
 *   $ $                  "   databox (used when "label_above" is false)
 *   SDBOX_LABEL_LEN_ÓPECIAL- Default label lenoth foò ! special width select
 *  ! `                       databox
"
   SDBOX_LABEL_LEN_DOUBLE  Default label length for a double width select
 *     `                      databoX
 *   SEÂOX_LABEL_LEN_TRIPLE - Default label length for$a triqle whdth select 
 *                  $         databox
 *
 *   SDbOX_LABEN_X_OFFSET   - REMOVED
 *   SDBOX_LABEL_Y_OFFSET   - Y offset for plasing a labdl do the right	
 ª                            of a select datcbox with "labelabove" false.
 */






/*
 *   SLIEBARS
 *
 *M
 *  `Create a slidebar`inside a frame and theî cmmpõte the q locction
 *   of the next widgmt ifside the frame.  The slidebar has a label
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





CLASS UI_InputDataView


classwide widget mform, ss_id, btn_Apply, btn_Exit, Input_dbox


FUNCTION init()


real y_loc = 0.


mform = ui_form_create(	/* callback */ 		"",							@
						/*     x    */ 		uil_form_sizes.form_x_loc( 2 ),			@
							/*     y    */		uil_form_sizes.form_y_loc( 2 ),		@
							/* position */		"UL",						@
							/*   width  */ uil_form_sizes.form_wid( 2 ) * 1.02*1.5,		@
							/*  height  */ uil_form_sizes.form_hgt( 1 ),			@
							/*   label  */ "Load Combination Factor",		@
							/*  unused  */ "")						


y_loc += uil_form_sizes.form_margin( 3 )


Input_dbox =ui_databox_create( @
/*    parent    */mform, @
/*   callback   */"input_box", @
/*       x      */uil_form_sizes.form_margin( 1 ), @
/*       y      */y_loc, @
/* label_length */0.0, @
/*  box_length  */uil_form_sizes.dbox_wid( 1 ), @
/*     label    */"Input New Value", @
/*     value    */"", @
/*  label_above */FALSE, @
/*   datatype   */"STRING", @
/*   num_vals   */1)




y_loc += uil_form_sizes.dbox_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )




y_loc += uil_form_sizes.spread_sheet_hgt( 12, 1 ) + @
		 0.453 * 20 + @
uil_form_sizes.spacing( 8 )


btn_Apply = ui_button_create( @
/* parent         */mform, @
/* callback       */"cb_Apply", @
/* x position     */uil_form_sizes.button_x_loc1( 2 ), @
/* y position     */y_loc, @
/* width          */uil_form_sizes.button_wid( 2 ), @
/* auto size      */0, @
/* label          */"Apply", @
/* label inside   */TRUE, @
/* default        */FALSE )


btn_Exit = ui_button_create( @
/* parent         */mform, @
/* callback       */"cb_exit", @
/* x position     */uil_form_sizes.button_x_loc1( 3 ), @
/* y position     */y_loc, @
/* width          */uil_form_sizes.button_wid( 2 ), @
/* auto size      */0, @
/* label          */"Exit", @
/* label inside   */TRUE, @
/* default        */FALSE )


y_loc += uil_form_sizes.button_hgt( 2 ) + @
uil_form_sizes.spacing( 8 )


$ wid = uil_form_sizes.form_margin( 1 ) + uil_form_sizes.spread_sheet_wid( 2 ) + uil_form_sizes.form_margin( 2 )


ui_wid_set(mform, "HEIGHT", y_loc)


END FUNCTION


FUNCTION display()


ui_form_display("UI_InputDataView")
UI_InputDataView.Read_Input_Data()


END FUNCTION


FUNCTION cb_exit()


ui_form_hide("UI_InputDataView")
ui_form_delete("UI_InputDataView")


END FUNCTION


FUNCTION Read_Input_Data()


	integer f_id, i_tmp
real r_tmp
string s_tmp[7]


	text_open( "input.dat", "or", 0, 0, f_id)
	
	integer npanel, nloadcase
	
text_read(f_id, "%I%", npanel, r_tmp, s_tmp)
text_read(f_id, "%I%", nloadcase, r_tmp, s_tmp)


integer cols = 13
integer rows


rows = npanel*nloadcase


integer i_value(virtual)
sys_allocate_array(i_value, 1, rows, 1, 2)


real r_value(virtual)
sys_allocate_array(r_value, 1, rows, 1, 11)


string ElementList[2048](virtual)
sys_allocate_array(ElementList, 1, rows)


string row_labels[11](virtual)
sys_allocate_array(row_labels, 1, rows)


string col_labels[16](13)


col_labels(1) = "LID"
col_labels(2) = "span-l"
col_labels(3) = "space-s"
col_labels(4) = "yield"
col_labels(5) = "thick."
col_labels(6) = "tk"
col_labels(7) = "hole-a"
col_labels(8) = "hole-b"
col_labels(9) = "SIGMA_H"
col_labels(10) = "sig_xx"
col_labels(11) = "sig_yy"
col_labels(12) = "tau_xy"
col_labels(13) = "Elements"


	integer count = 0
integer idx, idz, string_length


string BucklingInput[2048](virtual)
sys_allocate_array(BucklingInput,1,11,1,rows)


for(idx=1 to npanel)
for(idz=1 to nloadcase)
count +=1
			text_read(f_id, "%2I%%9F%", i_value(count,1:2), r_value(count,1:11), s_tmp)
text_read_string(f_id, ElementList(count), string_length)


row_labels(count) = str_from_integer(i_value(count, 1))


BucklingInput(1, count) = str_from_integer(i_value(count,2))
BucklingInput(2, count) = str_from_real(r_value(count,1))
BucklingInput(3, count) = str_from_real(r_value(count,2))
BucklingInput(4,count) = str_from_real(r_value(count,3))
BucklingInput(5,count) = str_from_real(r_value(count,4))
BucklingInput(6,count) = str_from_real(r_value(count,5))
BucklingInput(7,count) = str_from_real(r_value(count,6))
BucklingInput(8,count) = str_from_real(r_value(count,7))
BucklingInput(9,count) = str_from_real(r_value(count,8))
BucklingInput(10,count) = str_from_real(r_value(count,9))
BucklingInput(10,count) = str_from_real(r_value(count,10))
BucklingInput(10,count) = str_from_real(r_value(count,11))
BucklingInput(11,count) = ElementList(count)
		end for
end for


	text_close(f_id, "")


integer sheet_height


sheet_height = 0.453 * 20


ss_id = ui_spread_create(/* parent       */ mform,						@
						/* callback       */ 	"spread_cb",							@
						/* x position     */ 	uil_form_sizes.form_margin( 1 ),			@
						/* y position     */ 	uil_form_sizes.dbox_hgt( 2 ) + uil_form_sizes.spacing( 8 ),						@
						/* width          */ 	uil_form_sizes.spread_sheet_wid( 2 )*1.5,	@
						/* height         */ 	sheet_height,			@
						/* label_width    */ 	80. * uil_form_sizes.pixel_size( 1 ),							@
						/* num_vis_cols   */ 	cols,						@
						/* num_cols       */ 	cols,						@
						/* num_rows       */ 	rows,						@
						/* num_layers     */ 	1,							@
						/* col_labels     */ 	col_labels,					@
						/* row_labels     */ 	row_labels,					@
						/* label          */ "Buckling Input Data",		@
						/* layer_label    */ "",							@
						/* layer_val_label*/ "",							@
						/* selection_type */ "EXTEND" )


ui_spread_set_cells(ss_id, 1, 1, 11, rows, 1, BucklingInput )
END FUNCTION

/*    
FUNCTION Read_Input_Data()

	integer f_id, i_tmp
    real r_tmp
    string s_tmp[7]
    
	text_open( "input.dat", "or", 0, 0, f_id)
	
	integer npanel, nloadcase
	
    text_read(f_id, "%I%", npanel, r_tmp, s_tmp)
    text_read(f_id, "%I%", nloadcase, r_tmp, s_tmp)
    
    integer idx, idz, i_value(2), string_length
    real r_value(9)
    string ElementList[2048]
            
	integer count = 0
    for(idx=1 to npanel)
        for(idz=1 to nloadcase)
			text_read(f_id, "%2I%%9F%", i_value, r_value, s_tmp)
            text_read_string(f_id, ElementList, string_length)
            count +=1
            ui_spread_row_create(ss_id, str_from_integer(i_value(1)))

            ui_spread_set_cell(ss_id, 1 ,count, 1, str_from_integer(i_value(2)))
            ui_spread_set_cell(ss_id, 2 ,count, 1, str_from_real(r_value(1)))
            ui_spread_set_cell(ss_id, 3 ,count, 1, str_from_real(r_value(2)))
            ui_spread_set_cell(ss_id, 4 ,count, 1, str_from_real(r_value(3)))
            ui_spread_set_cell(ss_id, 5 ,count, 1, str_from_real(r_value(4)))
            ui_spread_set_cell(ss_id, 6 ,count, 1, str_from_real(r_value(5)))
            ui_spread_set_cell(ss_id, 7 ,count, 1, str_from_real(r_value(6)))
            ui_spread_set_cell(ss_id, 8 ,count, 1, str_from_real(r_value(7)))
            ui_spread_set_cell(ss_id, 9 ,count, 1, str_from_real(r_value(8)))
            ui_spread_set_cell(ss_id, 10 ,count, 1, str_from_real(r_value(9)))
            ui_spread_set_cell(ss_id, 11 ,count, 1, ElementList)
		end for
    end for
		
	text_close(f_id, "")
		
END FUNCTION
*/




FUNCTION spread_cb(status, from_c, from_r, to_c, to_r, layer)
	string status[]
	integer from_c, from_r, to_c, to_r, layer
	string cell_data[40]
	
	if( (from_c == to_c) && (from_r == to_r)) then
		ui_spread_get_cell(ss_id, from_c, from_r, 1, cell_data)
		ui_wid_set(input_dbox, "value", cell_data)
	else
		ui_wid_set(input_dbox, "value", " ")
	end if
	
END FUNCTION/* spread_cb */


FUNCTION input_box(value)


string value[]


integer i, j
$string data
string cell_data[40]
integer from_col, from_row, to_col, to_row, layer


ui_spread_get_selected(ss_id, from_col, from_row, to_col, to_row, layer)


if(value == "CR") then
	ui_wid_get(input_dbox, "value", cell_data)
	$cell_data = str_from_real(data)
	$cell_data = data
	for( i= from_col to to_col)
		for( j = from_row to to_row)
			ui_spread_set_cell(ss_id, i, j, layer, cell_data)
		end for
	end for
end if


END FUNCTION/* input box */




FUNCTION cb_Apply()


ui_form_hide("UI_InputDataView")
ui_form_delete("UI_InputDataView")


END FUNCTION/* cb_Apply */


FUNCTION Write_Input_Data()


END FUNCTION


END CLASS