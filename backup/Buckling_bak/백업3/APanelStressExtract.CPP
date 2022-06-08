

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
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button oN a smald form
 *
 *   Bu‘TNN_FULLOX_LOC_CEN_EED  "  / SEntebed wide butpOn on a mediQm®form 
 *   BTTTGF_HQLD_X_LOC_BGN_MUF     ≠ centdred letium buttoÓ on†a!mediu| forl 
 *   BUTTOL_THIJD_X_LœC_CEN_MED    - Gentered small "utton on a mmTium(f{rm 
 *
 *   BU\TKNOFULL_X_\O√_CEN_LRG   $ % Centered w)dd button on a Ó!rge fnrm 
 *$` BUTTOn_HALFX_LOC_CMN_LRG   $ - Cen\ered medium!juTton on!a l!rge0foRm †*   RUTTN_THIRD_X_lMC_CAN_LRG"   - Centere` smal| bıt5oj on a Laree fÔrm 
 *
 "   BUTTOF_FUML_X_LO_CEN_SPL`    - Aentered wide butuon on a special fo“m 
 *  (bT‘TON_H@LD_X_LOC_B≈N_SPL     - CenterÂ` mediym!buttoj kN a spEcial for}†
 *   BUTTON_THIRLOXKLOK_CEN_SL     Cmnter%d cmall buTton on a†special fkrm 
 */-*









MN
ä




*/*
 ()  DATABOXMS
 *
 *
 *   CreaÙe a fbamed databox$with a label abkve th% databox.  The.
 :   agmpute the Y hocatign fOr the next vidgev†incide†the fr·me.ä (
 "     (yWframe_loc = FZCME]T^MIRGIN
 *
 *$ `   ui_tatabox_create ( fzame_il, "&,  †    !0  !  8     @* *(0         †            "`FBA]E_L]MARGiN,  (  !            @
(*"(   `              0     y_frame_moc, 1Æ0,    !     !  †0 @
 *0                     †   DRœX_WI‰_SANGLE,     !!          @
 *   !  $    ` `‡       0   "Databox LabEl", value,    (     @
 *       ` "        "     † TRUE$ datatypd, numOvals )	
 *
 ™      y_grame_loc ? y_frame_loc +             "    $"      @
 *    (    0    !     dBOX_hG\_LGBOVE + "     "   (    "     @
 * `    $   ¢         INUE_WIDGUTﬂ[PACE-
 *              0       
 *
 *  !Cruatd a f2·mel databox!whth a labgL 4k the sife& $Use the "*   defatlt label leÓgth!for a single"colu}n dkt£box and compute
 *  `the databo| width.
 * *      y_fra]e_loc ? FRALE_T_MARGIN
 *
 *0    †˜id ? DBOX_WMD_SINGLE ,  (        †`   " "          0@	
 *    `       DBOX_LABEL_LGŒ_SINGLE
!* ! 
0* h J *    ( WI_databox^greate ( framE_id¨ 6",           (  j     A
 *†    (    ‡"       †      FRAMEL_MQPCIO,    `   `         @
 ( "   8      ! 0      (    {_frame_loc,(     0        $     B
 *             $            TBOX^LABE\_LEN_SINGLE, "  "      @
 * `  " (  !            !   wid,"`    $ !                    @
 *             $ "     0    "DaTabox Label"l valuu,0         @
 *  †     (         2       FALSE, datapyxe( nuo_valr )
 ™
Äj$*   D!tabox Width and Height:
 *M
 * ! DBOHWID_SINWLE     0! - Wifth of a singlu"vidth f·t!box $ 
 *   DBOŸ_WID_SPECIAL       - Width of e special0width daÙabox  ! *   F¬oX_WID_DOEDLG    0  † _idth oF ! touble widph daqabox  $
 (  $DBOX_WHD_TRITLE        - Width of e tripde wi$th ‰atabo¯   
 *
 *   DBOXOHGT_LABOVE    ! ( - Height of"a databox siuh q label on thu top
 *    0 `             ( $     (even"id tiÂ laben is blan+)
$*   DBOX_HG_Nœ_LABOVU   0 m Heifht$f a dat`box with a laÊed to p(e sÈde
 * *   DBœX_LUBEL_LEN_SHNGLE  - DÂfault label ,ength for a single widtx databox
 *    0       `               (qsef†when!"laben_acove" is false)
 * b DBOX]LABÂL_LGN_SPECIAL 9 Defa5lt label length fkr a spEckal width datavkx
 *   DBOX_LABEL_LeN_DOUBLE  /`Defawlt lAbel l'fgthfor a double width datAbky
 : $`DBOX_LABEL_LEN_TRIPLE  = Dedaulv nabul lefgtj f/r a triplÂ width dadabox
"*
 *   DBOX_LABEL_X_OF∆SET    -!REMOVED
 ª   DBO\_LAEL_Y_OFFSET    - Y oFfsm4 for placing a nabel(to the Úight mf
 *   ! $  %      $ ¢!"  !     a databox with "labedabove" gaÏsm. */-






/*
 *†0 FI_ES
 *
 *
 *   Cr%atu · form cenderet undez the main melu$that`has ` filE
 :   widget inside thE a frame.  The fil% wid'et is rlacud at
 *0  (!0.0¨ 0.  ) mnsÈde the frAme (a dop -crgyn!iw not needed).
 :   Thd (eight of the file widget yncmudes a(bOutom`marginM
 *   and therefore „in`be used as thg height of txe frame tHat
 *   contaens tha file widgmt.  The file$widÁet has 5 lineS in 
 *  (tËe lisu cpes.†*
 * $    form_hgt = FMLM_5L_HG\ + FORÕ_2V_MARMO + FRMME_0EDGE
 *  (   ¯_loc  ◊I^E_W^CEN__LOC - 0.5 * h wId + NNRM_2H_BoRDER†)M
 *      yl/c = wINDOW_KEN_Y_LOB - .5 * ( form_hgt + fKRM_2V_BORDUR )
 *
 *     `dmzm_id = ui_form_crEate(a"",!x_loc,†y_loc, "UL",$  `H
$*                                wie, fjrm_HGp, (           @M
$* † !                            "Foro!Label", "" )
 *
 *   (  frame_ie =0uiWfraoe_cruate( fgÚm_id, &",           ( ä * 0  !  (      (             (   h FORM]L_MABG…N,           @
 *       †  !         "    $ $  1   FOPM_T_]ARGIN,    †!     * *         `      "     †   &   !   FRALE]WID_SPECIAL, "   $ @ *                 !0               FILE_5L^@GT, """)
 *
 * !   `fi|E_id  ui_fale_create( frame_id, "", (   h†       @
 ™     $        (  ,!(       `    0,p, 0.0,                  @
":                   `!         0 FILA_WMD_SPeCIAl, 5,  0    @M
 *           `        0  `  (     "Filtur Label",            @
0™        †           !$          "Filter Mask", "     ` "  (@
 * ($  0       †   " ((           "Biles LabÂl",   !   0     @
 *†  $    $              0       "Directory!L!be,",  " †    @
 * Ä       `     "              ! "Files Labemb,             @
 *                         $  (  ("Selection Lqbel"-       $ @
 *     (        &  !†0         †("Defcılt$Salectioo",       @
 .    !   $  $ "         ¢ 0  !   "Le&t Button Label",       `
 *"  0   "      † "             !4"Right ButvÔn La"el" !
 . *
 *(  Vile Width:
0*
 *   BILE]WID_CINGLEÄ    - Width ov a!sing|e width file widget
 *   FILE_WID_SPECIAD    ≠ WiD4h!of a special width file gidget
 .   FILEWID_DOUBLE 0   - Width!of a double wi`th fihu wiDge|	 *`  FILEYWID_TRIPLE     - Wmdth gf a triple widÙh(file widget
 *
 *   File Iaig(t:
 *
 *   FILE_1L_JGT  (      - Height of ! 1$line f)le widÁet`*   FILE_2F_XG  $      - HeighÙ of a r lkne gile widget
 *   FIlE_3L_HGT (       - Huight of a 3 line fale widgetä *  †FIlE_4L_HGP !   ! " - height0og a 4 l)ng fiÏe widfed
 *   FILEO5H_HOT `  ($   % HeÈcht ob a 5!lale fiÏe widoet
*   FIMG_6LOHGT   ( "  `- Height of a 6 Ïine fyle widget
 *  `VILE_7L_HGT(        - L%ight og a 7`min‰ Êile widget
 *` !FALE_8L_HGT"        -0HeIÁht of a : line(file wydget	
 *   FILE_9L_HGV "0  (   - Height f!a!y nine$fi,e wh$get
 (   FILE_HGF]IOKR       - Incv%Áent!bor makiog Bigger file widgets
 */




/*
"* †`LABELS and I^FO INDENTS-
 *
†*"*   Crdate a label inside8a frame ane then bmmp}te the y location
 *   of the nexp widget ijsh`e t(e &raÌe>
 *
!*      y_frameWloc = GR@IE_T_MARCIN-
 *
 *      ui_label_create ( fr·me_iD "", 0                "   ¿
 *     †    "           ( FRAME[\_IRGIL,     `  !    `      @* *   ( ‡      !           y_fra-g_loc,(           "†         @
 *!    !               †  "A LQbel"()
 *
 *      y_fsammﬂlOc = y]frame_loc +   †               †!     @
 *  !   "             LABEL_HGT†+(    ` `      (0      †    !@
 *"`                 $INT≈R_WIdCE_SPAGE
 *J :	
 *† !Labal Height:
 * *   MABeL_HGT    †   - Heiwht of a labenç
 *   LABEL[Y_OFF[DU   - Y offset of(labeL* :   LABEL_HGT_UIGT  - Hei'ht of a l@bel whEf showKnw multiple
 (        $         !   m·bels
0"
 *   INFg_INDEJT  "   - X location of iÓformatyon la‚el
!*"  INFO_InDENT_KOL1 - X location mf informati/n lab%l in column 1
(*   INFO_InDENT_COL3 - X location Ôf Ènfor}ation la`gl in sohumn 
 * " INVO_	LDENT_COL3 - X locati/n of ÈfVormatiÔf label in gÔlımn 1
`*/



.*
 *   LISTJOXES	
 *	
 * *   Create a fsAmed thrge hine listbox widj Q label above the |istbox.  NtE
 *   that thd widths and heichts include tje vertkcal and horÈzonval s,iders.
 *	
 *      ˘_frame_ÏoC$= BRAM_T_MARGIN
0* *  !(  ui_listbox_crdcte ( nreme_m‰, 6callb·ci¢,    $ (     @
 ™  Ä         $            !FRAME_L_MARGIN,                  @
 :  `     †$!( (        ` ` y_fbame_noc,        "`           @
 (         0        (  ( $ `LBœX_WID_SINFLE,              0  @
 *        †   "             , "L)sdbox Label",  0(          @
 *   `      ( †   (  ‡    ( selection_type, sorÙ_flag )
 *
 * !  0 qﬂframe_noc = y_Êrame_loc$+              0           @
 * $  (         0     LBOX_3L_HGT^LABOV +             0     D
 *    $  $    "    0  iNTEs_wMDGEU_CPAcE
 *
 *-
 *   To DepermÈNd(the$Hmkojt†vo{ a sm¯`lyne listbox, adf tËe variable
 *   LBOX_HGT\ABOVE[INCR(t ÃBOX_5L_HGT_LABOV. j
 "
 *   Listbox Width and Heigjt˙
 " *   lBO\_WIT_SINGLE0        - idth oF a ringle width lasdbox   
 *   LBOH_WI$_WPECIAL  "     - Gidth of e"speci!l width listbo8   
 * ! LBOX_WID_DOUBLE !      $- Width ov a doub,e"width lÈctbox(  
 ™  `LBOX_WID_TRIPLE          _idth /f a vriple†widd` listbox  0
 *ç* *   LBOX_1L_XGT_LABOVE  †   - eeght of"a 1 line listboy ˜ith a to‡ lebel
 *   BX_2LHCT_HEBGVE †`  `- Height of a 2 liÓe listcOx ˜ith a(top lab%l
 *   \BOX_3_HGT_LABoVE"     - H%Ight of q # line listbox with a`doq la‚aL
 *   LBOX_4l_HGT_LABOWE†$   $-!Jeigit oF a 4"liNe listbox sith!` vop laben	
 *#  BOX_1L_HST_LABO÷E †  0 - Heiohp mf a 5 line Ìistcox with a top label
 *   LBOX_8L_HGT_LIOVE   (  - Heigh4†of`` 8 line listkmx 7ith a!top(label
 *
 *   LBOX_HGT_LABOVe_iNCR    - Ingrement fOr ckmrutanf$a li3tbox height†tÍat
 *       $`      0     !  !    hqs more than 5 dines(in it
 
 ™   LBOP_1L_HG_NO_L·BVE) `-bLehwht0of a"1 line listbox with nk lebel
 +             "     `         (Ïacel0ic`blank) *  (lBOX_2L_HGV_NK_LABOVE   = HeIght of a r line listb/x with jo ,abgl
 : `0LBKX_3L_@GU_NO_LABOTE   %†HaigHu of a 3 line listbox with no!lajel
 *   LBOH_4L_HGP[NOOLABOVE  `- Heioht on a 4(line Nhstbox wmth no label	
 *   LBNX_5L_HG]NO_LAFO÷E   -0Height nf0a 5 lÈ.e listbox witË no labelç
0: 0 LBOX_8L[BGT_NO_LABOVE   - HeÈght of"a 8 linE listbox wjth ^o lqbeÏ
 *ç
 *"  LBOÿ_HGU_NO_LABOVEINR - In#rement for co-puÙing a lastbox heiwHu!thatä *      $                      haq mnre$th·n$= lmnas in it
 *
 *"  H@OX_SELB@NS_HGT<"LBOX_SEeBTNS_WID†- Leight c.d combi~Âd Wilth0of
0*            `   ( `   " "      "        (Un)Selecd Cll buttonsä */




/(
 *   OPTIn MENUS
 *
 * *`( Cre`Tm an option menu wit( a label to!txe sIDgÆ  Then set the 
 *" 0Y mocatin for the napt widgEt.  Assume this*is an unframed widcet.
 * *  "0  {_loc = APP_GORM_FIRST_[_LOA* *   
`*     "uh_optÈonmenu_create( form_m‰, "gamlback2,       †   @
#* †      `                   UNFRAMEDLMMARGIN,    "   $i ! `
 *           0 0`   `        by_lOc,  "           `          @
 .   !`    0    !   $ !   "   OPT_MENU_LABEL_LEN, †          @
 ™!$     † $ 0" "0       p0  ("Label",`FALSE )
 *   
 *      y_hoc ? y_loc +`OR^MENU_HGT_NO_ABOVE +$$      †  ( @-
 *     ( †           0  InPER__DGET]WRACE
 * " 
 *
 .  $OptIon menu!Placument:
 *Mä * ( oPT_MENUﬂLABEL_LEN   "   "  ≠ efaulv lABml length for an option -enu
 *           ( $           `     (!vivh a labe,0to tie sidd *
 *   OPT_›ENU_HGVWLAB÷A         - %igh4 of an opTiof ianu with e label0*       †               $$      † on dhe top
0*   O@T_MENUHGTNNO_LABMVE      "Height on an option Menu with !†larel *   d           †  `    $       " n the s)le
 :
 *   OPT_MENT_Y_œFFSET     !     ) Y offsEt fwr placing q label to thg
 *    p                         "  right od a†sÂleat `atabxrwith 
 j            0      a     a  ! ` 0"labelaboze false
 */M

	


*
 *  `SENACT @ATABﬂXES
 (
 *
 h(  Creipe a framed smlect `a|abkx with A$Labem above the select d`tabox.
 "   Th'n com`Ute the Y lobQtyoÓ(for vËe nE8t s)dgg|.
 *
 (      y_sfbame_loc =(SNRAME_T_MAROIN
 *
 * "    ui_s·LÂctdavabox_create ( sel_framgWid, "",   † " `( Aç0*             $   †       $    ( SFRAME_L_MARGIN,           @
 
  a  0       !   $       0  "   qﬂsframe_lob, 0.0,      0  @
 *    `  0  †             "   "   SDBOX_WID^SIJGLA,     † $ &@* *  $    !    "( (   `    0†   `  "Select Datiboy Lcbel",    @
 *     #                     "    valuÂ, TRuE,0dat`vypm,`    @
 *    0    # 0           † `  `   Prompt )
(*
 *0 `   y]sframe_loc = y_sfr·ma_hoc +         `   "          A
(:    0  $ `    "      SDBOy_HGT_LCBOVE / 0 †   "    ! 0     @
 *           !  `    ( INTES_WILFETSPACE
(*     `    †"          
 *ä * ` Create a fraled selu#t†`atabox"with a labul to uhe side.  Qse Ùhe(
):†` defauLt lebel length fnr a silgÏe column seleat databo8 and compute
 *  0the selecd databox width.
 *
 *     !y_sfraÌe]loc = S∆RAIE__MIRGIN
 *
 *  ! ` vie =![DBO@_WAD_SIJGLE -   (   (  !$ (           `   @
 *            DBOX_LABEM_LDN_SINGLE
 *   
 * $ 
 *0  (  ui_sÂlact‰ataBox_create ((sel_frqme_id< "b,  $°      @
 *           $   `     "  *   `  `SRAME_L_MAS«IN,       0 ( @
 "`                  !            y_sframe_loa, 0  (0† "     @
 *     $        !     †       $ † SDOX_LAFUL_lEN_SINGLE,    @
 *     (          "   †     †    "wid<  †     "        †     @J (         † "(        (          "Select Databox(Lqbel",0  (@
 *   $       "            †`    - value, FQLCG, d`ratype,    @
 * !   !(     ``      "!  0      prnmpt )
 *
$*      y_sframe_Loc = y_sframe_loc +         "   (          @J *®   0      )        †SDBOX_HGT_NO_LABORE +             0   H
 *      (   a          IN‘ER_WIDGET_SPACU-
(** *
 *  $Selacp Databox Width end Height:
 : *0  SEB_X_WID_sINGLD       - ◊idth Ê†a"single width seÏect datibox    *  $SDBOX__IDﬂSPECI¡L      - Wifth o& a spEcyal0whdth se|ect dctabox   J *   sDBNX_WID_D_UBLE        W)dth0mf(A doıjne vidth cÂ,ect dat!box   
    SDBOX_WID_TRIPLE `      Widt` ov a triple ukdtj seldct databox  †
 *
 *   SDBOX[GP_LABOVE       - Hdight mf a select databo| wmth a top labÌm
 * 0 SDBOX_JFT_NO_LABOVE 0  - Hei„ht of a selest databox wit` a site label
 *
 *`  SƒBMX_Y_LoC1_ÃABOVE "  , Y location mf select d`tqboh 1`in a selectframg
 *    †   p               `(  (sehEct0databOx his a label `boVe)
 *   ”DBOX◊Y_LOC2_LABOVE    - Y docatiOn of selecU databOh`" in a sele#tframe
 *  !$b$  †    (!   0         (se,ect dAÙabox has"a label above)
"*   SDBOX[U_L_C3_HAJOVE  ` - Y lÔcation of smlect $atabox"3 in a relect&rame
 "   0  (  `        "   $$ †" (wÂnu#t d!tabox has a labdn abve)
 *   DBO_Y_LOC4_LABOVE    - Y(Ïkc·tion ov select dat!jox†4 Èf q selgctframm
 *            $     "    †    (selec| databÔx haw a label abve(ä *  SDB_XOY_LOC7_LABNVE†($ - Q locqtion of selgct d`taBox 4 In a semectfvame
 *    †  !      `    (       !¨seÏect $atabox has a lajel ajove)
 *
$* ® SDB_X_Y_LABOVEﬂINCR    - IÓcrmmend for creating the Y lo# tioÓ for than
 *    `        ")`  (   $!! ` than 5 select t!taboxew wyuh la"els hÓ a sdleCt
 *  †    †             !    ! brame
(*
!*   sDBOX__LOC_NO_EBOWE m(Y locaTaon of sel%kt dati"O| 1 in a sglaat&rame
 :                 !    †     (select eatabox dges nop have c label abov%)
 *@$!SD¬NX_Y_LKC2_N_LABOVE ≠ Y loaathko of!sele„t databop 2 )o ` suLegtframe
 * (                 "        ®select databox(does`nod have a`labgl†above-J *"! SDBOX_Q_LOC3_NO_\EBOVE†-(Y losatinn Of select datAbo8 3 in a smlectbrae%
`*   "             †"    $    (sele#t dite`ox `oEs not lave a labeÏ above)
 *   RDBOYY_LOC4_NO_LABOVM - Y lÔcation of senact databo¯ ¥ an a sÂlectframe
 *    $   `   0        †      (selec|`fatabox does not h·Ve"a la`el aBÔve) *   SBOH_Y_lOC5_NO_LABo∆E - Y`locatioÓ of select databox$5!in a qElectframe
 *   ") †       !    !        (selacT dAtibo8 doew not havE a label`a`ove)
 (
 *   SEBX]y_NO_l@BOVE_INCR - I.crement nor"creating thd Y ,ocation for than
 *†" (        !         !     thaN µ select databoxgs sithout labels in ·
 .                 $     "    3elect Fvame
`*
 *   SDBOXOLABEF_LEN_SINgLA - Dercq|t label lenftj`for ·&qingle width(salast
 *        `       †      0† 0davaBox (used whef "lcbel[above" is falsm)
`*0  SFBMX]L@B≈LLEN_SPEC	AL- Default"lajed leng4x for†a special widt  welÂct
0*! ¢     `                   ea4abox
 * 0 SDBOX[LABEM_LEN_DOUBLE - Levault lirel nength for a†‰ou"le width selegt* *(   0          !            dat·box-
 *   SDBOX_LABEL_LDN_TRIpLT - Default label lmnfth for a0trip|e sidt`!selest 
 j     ``     "   ``  "   ` 0 databox
 *-
 *  $SDBOX_LCBEH_X_OFFSET$  - EMOVED("   SDBOX_L@BEL_X_N∆FSET!  ¨0Y offset for Placing a habel to thM right™ *      0                (  ` of a cedÂct0`atabox ith #labelabove" false.* j/
ä






/*m
 *   SLIDAB@RS
1*
 *
 *  $Crea|e a`shidub`r inside a fbamE$and theo$cnmpute the y†location *   of the next wieget ijqide the frame.  The slidebar has a label
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


CLASS APanelStressExtract
classwide widget frm_mainform,opt_action,opt_object,opt_method,lbox_loading, btn_option, object_item(4), @
sfra_coord_trans,sdbox_coord_trans,fra_parm,dbox_sigf,dbox_cormgn,dbox_bc1,dbox_bc2, @
fra_sltelm, sdbox_elm, fra_appregion, opt_coord_trans, dbox_span, dbox_space


classwide integer ids
classwide real r_sigf(VIRTUAL),r_tk(VIRTUAL),r_span(VIRTUAL), r_space(VIRTUAL),r_bc2(VIRTUAL)
classwide string s_elm_grp[256](VIRTUAL),s_bc1[20](VIRTUAL),s_coord_id[12]

/* ===========================================
             Initial FUNCTION
   =========================================== */




$ Start
	FUNCTION init()
	real yloc_main,yloc_parm,yloc_appregion,FRA_APPRGN_HGT


		ids=0


		/* ======================== main form =================================== */


		frm_mainform=ui_form_create("form",@
									/* x location */ uil_form_sizes.form_x_loc( 1 ) , @
									/* y location */ uil_form_sizes.form_y_loc( 1 ),"ul", @
									/* width      */ uil_form_sizes.form_wid( 1 ), @
									/* height     */ uil_form_sizes.form_hgt( 1 ), @
									/* label      */ "APanelStressExtract","")


		/* ============ action, object, method - option menu ===================== */
		opt_action=ui_optionmenu_create(/* parent       */ frm_mainform, @
										/* callback     */ "Action_cb", @
										/* x            */ uil_form_sizes.aom_menu( 1 ), @
										/* y            */ uil_form_sizes.aom_menu( 3 ), @
										/* label length */ uil_form_sizes.aom_menu( 2 ), @
										/* label        */ "Action:", @
										/*              */ false)


				ui_item_create(opt_action,"CREATE","Create",true)
		
		opt_object=ui_optionmenu_create(frm_mainform,"",@
													uil_form_sizes.aom_menu( 1 ), @
													uil_form_sizes.aom_menu( 4 ), @
													uil_form_sizes.aom_menu( 2 ), @
													"Object:", @
													 FALSE)


		 object_item(1)=ui_item_create(opt_object,"MP","Multi Panel",FALSE)


		$	ui_wid_set(object_item(1),"ENABLE",FALSE)


		opt_method=ui_optionmenu_create(frm_mainform,"",		@
									 uil_form_sizes.aom_menu( 1 ),		@
									 uil_form_sizes.aom_menu( 5 ),			@
									 uil_form_sizes.aom_menu( 2 ),	@
									 "Method:",				@
									 false)


				 ui_item_create(opt_method,"BPSTRESS", "Buckling Panel Stress", true)
				 ui_item_create(opt_method,"MEANSTRESS", "Mean Stress", true)


		yloc_main = uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 )


		ui_separator_create(/* patrent  */ frm_mainform, @
							/* callback */ "",@
							/* x        */ 0, @
							/* y        */ yloc_main, @
							/* width    */ uil_form_sizes.form_wid( 1 ), @
											true)


		/* ================= configuration button =========================== */


		yloc_main += uil_form_sizes.spacing( 8 )


		opt_coord_trans=ui_optionmenu_create(frm_mainform,"coord_trans_cb",		@
											uil_form_sizes.aom_menu( 1 ),		@
											yloc_main,			@
											uil_form_sizes.aom_menu( 2 ),	@
											"Cooordinate Transformation",				@
											true)


				ui_item_create(opt_coord_trans,"CID","CID",true)
				ui_item_create(opt_coord_trans,"PCID","Projected CID",true)
				ui_item_create(opt_coord_trans,"GROBAL","Grobal",true)
				ui_item_create(opt_coord_trans,"DEFAULT","Default",true)


		yloc_main += uil_form_sizes.optionmenu_data( 2 ) + uil_form_sizes.spacing( 3 )


		sfra_coord_trans=ui_selectframe_create(frm_mainform, @
											 "", @
											 uil_form_sizes.selframe_margin( 5 ), @
											 yloc_main, @
											 uil_form_sizes.selframe_wid( 1 ), @
											 uil_form_sizes.selframe_hgt( 1, 1 ), @
											 "", @
											 false)


		sdbox_coord_trans= ui_selectdatabox_create(sfra_coord_trans, @
													"", @
													uil_form_sizes.selframe_margin( 1 ), @
													uil_form_sizes.selframe_margin( 3 ), @
													uil_form_sizes.sdbox_data( 1 ), @
													uil_form_sizes.sdbox_wid( 1 ), @
													"Select Coordinate Frame",@
													"", @
													true, @
													"", @
													"" )


		ui_wid_set (sfra_coord_trans, "VISIBLE", FALSE)


		yloc_main += uil_form_sizes.selframe_hgt( 1, 1 ) + uil_form_sizes.selframe_margin( 3 ) + uil_form_sizes.spacing( 3 )


		lbox_loading=ui_listbox_create(frm_mainform,"", @
									 uil_form_sizes.frame_margin( 1 ), @
									 yloc_main, @
									 uil_form_sizes.lbox_wid( 1 ),@
									 5, @
									 "Loading Condition", @
									 "extend", @
									 true)


		yloc_main += uil_form_sizes.lbox_hgt( 5, 1 ) + uil_form_sizes.spacing( 3 )
		
		fra_parm=ui_frame_create(frm_mainform,"", @
								 uil_form_sizes.frame_margin( 5 ), @
								 yloc_main, @
								 uil_form_sizes.frame_wid( 1 )+0.1, @
								 uil_form_sizes.frame_margin( 3 )+uil_form_sizes.dbox_hgt( 2 )*7+uil_form_sizes.spacing( 3 )*4, @
								 "")


		yloc_parm = uil_form_sizes.frame_margin( 3 )


		dbox_sigf=ui_databox_create(/* parent       */ fra_parm, @
									/* callback     */ "", @
									/* x location   */ uil_form_sizes.frame_margin( 1 ), @
									/* y location   */ yloc_parm,@
									/* label length */ 1.25, @
									/* box length   */ uil_form_sizes.dbox_wid( 1 )/4, @
									/* label        */ "Yield stress", @
									/* DEFAULT value*/ 235.0, @
													 false,"REAL",1)
													
		yloc_parm += uil_form_sizes.dbox_hgt( 2 )+uil_form_sizes.spacing( 3 )


			 dbox_span=ui_databox_create( @
			/*    parent    */ fra_parm, @
			/*   callback   */ "", @
			/*       x      */ uil_form_sizes.form_margin( 1 ), @
			/*       y      */ yloc_parm, @
			/* label_length */ 1.25, @
			/*  box_length  */ uil_form_sizes.dbox_wid( 1 )/3, @
			/*     label    */ "SPAN (MM)", @
			/*     value    */ 0., @
			/*  label_above */ FALSE, @
			/*   datatype   */ "REAL", @
			/*   num_vals   */ 1)


			 yloc_parm += uil_form_sizes.dbox_hgt( 2 ) + uil_form_sizes.spacing( 3 )
		
			 dbox_space=ui_databox_create( @
			/*    parent    */ fra_parm, @
			/*   callback   */ "", @
			/*       x      */ uil_form_sizes.form_margin( 1 ), @
			/*       y      */ yloc_parm, @
			/* label_length */ 1.25, @
			/*  box_length  */ uil_form_sizes.dbox_wid( 1 )/3, @
			/*     label    */ "SPACE (MM)", @
			/*     value    */ 0., @
			/*  label_above */ FALSE, @
			/*   datatype   */ "REAL", @
			/*   num_vals   */ 1)


		yloc_main += uil_form_sizes.frame_margin( 3 ) + uil_form_sizes.dbox_hgt( 2 )*7 + uil_form_sizes.spacing( 3 )*4 + uil_form_sizes.spacing( 8 )


		/* ============= select frame FOR element select box ================================== */


		FRA_APPRGN_HGT=uil_form_sizes.toggle_data( 1 )+uil_form_sizes.selframe_hgt( 1, 1 )+uil_form_sizes.spacing( 8 )*3+uil_form_sizes.button_hgt( 2 )


		fra_appregion=ui_frame_create(frm_mainform,"", @
								 uil_form_sizes.frame_margin( 5 ), @
								 yloc_main, @
								 uil_form_sizes.frame_wid( 1 )+0.1, @
								 FRA_APPRGN_HGT, @
								 "Application Region")


		/* =============== element group LIST =================================================== */
		yloc_appregion = uil_form_sizes.frame_margin( 3 )


		fra_sltelm=ui_selectframe_create(fra_appregion,"ADD_cb", @
										 uil_form_sizes.selframe_margin( 5 ), @
										 yloc_appregion, @
										 uil_form_sizes.selframe_wid( 1 ), @
										 uil_form_sizes.selframe_hgt( 1, 1 ), @
										 "Auto Execute", @
										 false)


		sdbox_elm= ui_selectdatabox_create(fra_sltelm,"", @
										 uil_form_sizes.selframe_margin( 1 ), @
										 0, @
										 uil_form_sizes.sdbox_data( 1 ), @
										 uil_form_sizes.sdbox_wid( 1 ), @
										 "Select Element Group",@
										 "",true, @
										 "elem2d", "" )


		yloc_appregion += uil_form_sizes.toggle_data( 1 ) + uil_form_sizes.selframe_hgt( 1, 1 ) + uil_form_sizes.spacing( 8 )


		/* ================ add & cancel button ================================================ */
		ui_button_create(fra_appregion, @
						"ADD_cb", @
						 uil_form_sizes.button_x_loc1( 2 ), @
						 yloc_appregion, @
						 uil_form_sizes.button_wid( 2 ), @
						 uil_form_sizes.button_hgt( 2 ), @
						 "Add", @
						 true,false)


		ui_button_create(fra_appregion,"remove_cb", @
									 uil_form_sizes.button_x_loc1( 3 ), @
									 yloc_appregion, @
									 uil_form_sizes.button_wid( 2 ), @
									 uil_form_sizes.button_hgt( 2 ), @
									 "Remove", @
									 true,false)


		$ selected element group


		yloc_main += uil_form_sizes.toggle_data( 3 )+FRA_APPRGN_HGT+uil_form_sizes.spacing( 8 )


		ui_button_create(frm_mainform,"APPLY_CB", @
									 uil_form_sizes.button_x_loc1( 2 ), @
									 yloc_main, @
									 uil_form_sizes.button_wid( 2 ), @
									 uil_form_sizes.button_hgt( 2 ), @
									 "Apply", @
									 true,false)


		ui_button_create(frm_mainform,"CANCEL_CB", @
									 uil_form_sizes.button_x_loc1( 3 ), @
									 yloc_main, @
									 uil_form_sizes.button_wid( 2 ), @
									 uil_form_sizes.button_hgt( 2 ), @
									 "Cancel", @
									 true,false)


		sys_allocate_array(r_sigf,1,1)
		sys_allocate_array(r_tk,1,1)
		sys_allocate_array(s_elm_grp,1,1)
		sys_allocate_array(r_span,1,1)
		sys_allocate_array(r_space,1,1)


	END FUNCTION
	$ End


	$ Start
	FUNCTION display()


		ui_form_display("APanelStressExtract")
		udf_load_result_cases(lbox_loading)
		
	END FUNCTION
	$ End


	$ Start
	FUNCTION Action_cb(s_action_item)
	string s_action_item[]
	real CREATE_Y_LOC, READ_RESULT_Y_LOC


	READ_RESULT_Y_LOC = uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 ) * 2
	CREATE_Y_LOC = READ_RESULT_Y_LOC + uil_form_sizes.button_hgt( 2 ) + uil_form_sizes.spacing( 3 ) * 3 + uil_form_sizes.optionmenu_data( 2 ) + uil_form_sizes.selframe_hgt( 1, 1 ) + uil_form_sizes.selframe_margin( 3 )


				ui_wid_set(lbox_loading,"Y", CREATE_Y_LOC)
				ui_wid_set(btn_option,"VISIBLE",TRUE)
				ui_wid_set(opt_coord_trans,"VISIBLE",TRUE)
				ui_wid_set(sfra_coord_trans,"VISIBLE",TRUE)
				ui_wid_set(fra_parm,"VISIBLE",TRUE)
				ui_wid_set(fra_appregion,"VISIBLE",TRUE)
				ui_wid_set(object_item(4),"ENABLE",TRUE)


	END FUNCTION
	$ End


	$ Start
	FUNCTION coord_trans_cb(s_item)
	STRING s_item[]


		SWITCH (s_item)


			CASE("CID")
				ui_wid_set (sfra_coord_trans, "VISIBLE", TRUE)
				ui_wid_set (sdbox_coord_trans, "DATATYPE", "FRAME")
				
			CASE("PCID")
				ui_wid_set (sfra_coord_trans, "VISIBLE", TRUE)
				ui_wid_set (sdbox_coord_trans, "DATATYPE", "AXIS")
			
			CASE("GROBAL")
				ui_wid_set (sfra_coord_trans, "VISIBLE", FALSE)
				
			CASE ("DEFAULT")
				ui_wid_set (sfra_coord_trans, "VISIBLE", FALSE)
						
		END SWITCH


	END FUNCTION
	$ End


	$ Start
	FUNCTION CANCEL_CB()


	 ids=0
	 ui_form_hide("APanelStressExtract")


	END FUNCTION
	$ End


	$ Start
	FUNCTION ADD_cb()
	STRING select_elm_list_item[1000]
	INTEGER i_be_node(4)
	REAL span, space


		ids += 1


			sys_reallocate_array(r_sigf,1,ids)
			sys_reallocate_array(r_span,1,ids)
			sys_reallocate_array(r_space,1,ids)
			sys_reallocate_array(s_elm_grp,1,ids)


			ui_wid_get(dbox_sigf,"value",r_sigf(ids))
			ui_wid_get(dbox_span,"value",span)
			ui_wid_get(dbox_space,"value",space)


			ui_wid_get(sdbox_elm,"value",s_elm_grp(ids))
			select_elm_list_item="No."// str_from_integer(ids) //" :"//s_elm_grp(ids)
			ui_writec("%s",select_elm_list_item)


			IF(span <= 0 || space <=0) THEN
				APanelStressExtract.get_panel_info(s_elm_grp(ids),i_be_node)
				APanelStressExtract.get_a_n_b(i_be_node,r_span(ids),r_space(ids))
			ELSE
				r_span(ids) = span
				r_space(ids) = space
			END IF


	END FUNCTION
	$ End


	/* =======================================
			remove button callback fuction
	   ======================================= */


	$ Start
	FUNCTION remove_cb()


	s_elm_grp(ids)=""


	ui_writec("No. %d is deleted",ids)


	ids -= 1


	END FUNCTION
	$ End


	/* ====================================================
		apply button callback
	  ====================================================== */


	$ Start
	FUNCTION APPLY_CB()
	STRING action[20]
	INTEGER status


		status = APanelStressExtract.Buck_Panel_Info()
		
		ids = 0
	END FUNCTION
	$ End


	$ Start
	FUNCTION Buck_Panel_Info()
	STRING fname_inp[64],group_name[32]
	INTEGER fid, nrc, i, j, lcid, scid, i_data(5), i_result_id(5), fopt_id, i_tmp,group_id
	STRING s_rc_list[100](VIRTUAL),s_lc_title[64],s_sc_title[64],opt_coord_item[16],sdbox_coord_item[16],s_data[10](14)
	REAL r_data(11),r_t,r_sigx,r_sigy,r_tau
	REAL E, NU,INA,NA, MSH,MSS,MWH,MWS
	LOGICAL Hull_Girder, local_sigx


	db_get_current_group_id(group_id)
	db_get_group_name(group_id,group_name)
	fname_inp=group_name//".inp"


	$ fname_inp = "APanelStressExtract.inp"


	text_open(fname_inp, "NOWV",0,0,fid)
	ui_wid_get(lbox_loading,"nselected",nrc)
	sys_allocate_array(s_rc_list,1,nrc)
	ui_wid_get(lbox_loading,"value",s_rc_list)


	ui_wid_get(opt_coord_trans,"VALUE",opt_coord_item)
	ui_wid_get(sdbox_coord_trans,"VALUE",sdbox_coord_item)


	$ Start
	SWITCH (opt_coord_item)
		CASE("CID")
			s_coord_id = sdbox_coord_item
		CASE("PCID")
			s_coord_id = "Res" // sdbox_coord_item
		DEFAULT
			s_coord_id = opt_coord_item
	END SWITCH
	$ End
	
	text_write_string(fid, str_from_integer(nrc))
	text_write_string(fid, str_from_integer(ids))


	string optStress[virtual]
	
	ui_wid_get_vstring(opt_method, "value", optStress)
	
	string layer[5](2)
	integer idx


	$ Start
	FOR(i = 1 TO ids)
		i_data(1) = i
		r_data(1)= r_sigf(i)
		r_data(2)= APanelStressExtract.get_panel_thickness(s_elm_grp(i))
		r_data(3)=r_span(i)
		r_data(4)=r_space(i)
		
		$ Start
		FOR(j = 1 to nrc)
			s_lc_title=str_token(s_rc_list(j),",",1)
			
			s_sc_title=str_token(s_rc_list(j),",",2)
			
			udf_get_result_id(s_lc_title, s_sc_title, "Stress Tensor", "", i_result_id)
					
			layer(1) = "At Z1"
			layer(2) = "At Z2"


			r_sigx = 0
			r_sigy = 0
			r_tau = 0
		
		
			if(optStress == "BPSTRESS") then
				$ Start
				for(idx=1 to 2)
					i_result_id(5) = udf_get_layer_id(i_result_id, layer(idx))
					r_sigx += APanelStressExtract.get_panel_stress(i_result_id,s_coord_id,"XX",s_elm_grp(i))
					r_sigy += APanelStressExtract.get_panel_stress(i_result_id,s_coord_id,"YY",s_elm_grp(i))
					r_tau += APanelStressExtract.get_panel_stress(i_result_id,s_coord_id,"XY",s_elm_grp(i))
				end for
			else if(optStress == "MEANSTRESS") then
				for(idx=1 to 2)
					i_result_id(5) = udf_get_layer_id(i_result_id, layer(idx))
					r_sigx += APanelStressExtract.get_mean_stress(i_result_id,s_coord_id,"XX",s_elm_grp(i))
					r_sigy += APanelStressExtract.get_mean_stress(i_result_id,s_coord_id,"YY",s_elm_grp(i))
					r_tau += APanelStressExtract.get_mean_stress(i_result_id,s_coord_id,"XY",s_elm_grp(i))
				end for
			end if
			$ End
			
			r_sigx = r_sigx/2
			r_sigy = r_sigy/2
			r_tau = r_tau/2
			
			r_data(5) = r_sigx
			r_data(6) = r_sigy
			r_data(7) =r_tau


			text_write(fid,"%I5%%7F12.3%",i_data,r_data,"")
		
		END FOR
		$ End
	END FOR
	$ End
	
	text_close(fid,"")
	
	END FUNCTION
	$ End
	
	$ Start
	FUNCTION get_panel_info(element_group,nd)


	string element_group[]
	integer status,id_element(virtual),nid(4),n(1000,4),n1(1000,4),nd()
	integer num_element,num_node,max_nnode,cnt,ccnt,icnt,iccnt




	num_element=fem_u_count_id_list( 1024, @
								 element_group, @
								 false, @
								 status)


	 if(list_error_msg(status,2,"")) then


			return status
	 end if


	 if(num_element==0) then
		list_error_msg(48000004,2,"")
		return 48000004
	 end if


	sys_allocate_array(id_element,1,num_element)


	fem_u_get_id_list( 1024, @
					 element_group, @
					 num_element, @
					 true, @
					 id_element)


	for(cnt=1 to num_element)
	 db_get_elem_nodes(id_element(cnt),num_node,nid)


		if(max_nnode < num_node) then
		 max_nnode=num_node
		 end if
		
		for(ccnt=1 to num_node)
		 n(cnt,ccnt)=nid(ccnt)
		
		end for


	end for


	for(cnt=1 to num_element)
	 for(ccnt=1 to num_node )
		 for(icnt=1 to num_element)
			 for(iccnt=1 to num_node)
			
				if(cnt!=icnt && ccnt!=iccnt) then
					if(n(cnt,ccnt)==n(icnt,iccnt)) then
						 n1(cnt,ccnt)=-1
						 n1(icnt,iccnt)=-1
					end if
				end if
			 end for
		 end for
	 end for
	end for


	for(cnt=1 to num_element)
	 for(ccnt=1 to max_nnode )
		 if(n1(cnt,ccnt)!=-1) then
			 nd(ccnt)=n(cnt,ccnt)
		 end if
	 end for
	end for


	END FUNCTION
	$ End


	FUNCTION get_a_n_b(belm_nd,l,s)


	integer belm_nd()
	real a1,a2,b1,b2,side1,side2,l,s,xyz1(3),xyz2(3),xyz3(3),xyz4(3)


	db_get_node(belm_nd(1),xyz1)
	db_get_node(belm_nd(2),xyz2)
	db_get_node(belm_nd(3),xyz3)
	db_get_node(belm_nd(4),xyz4)


	if(mth_abs(xyz1(1)-xyz2(1))>=mth_abs(xyz2(1)-xyz3(1))) then


		a1=sqrt((xyz1(1)-xyz2(1))**2+(xyz1(3)-x}z2h2))+*2)
		b1=sÒrt((zy{2(3)-xyz3(2)+**"+)xyz2(;)-xxZ3(3)i**2)
		a0=syrt)(xyz3(1)-xyz4(1))**2+(xyz3(3)-xy{43))**≤)+		b6=sqrt((xqz4)2)-xyz1(2))**2k)yyz6(3)-x{z1 3))**2)


	elsa
		a1=sÛrp((hyZ1(2+-xyz2(2)i**")(xyz183)-xyz2(2)9**29
		b1=sqrt((xyz2(5)%xyz3(1))**2+(xYr2(3)xyz33))**2)
		a29sqrt(8yyz≥(2)-xyz4(2))™*"+(xyz3(#)-xmz4(3))**2(
		b2=qqrt((xyz4(1)-Xyz1*5)(*.2+(xyz4(3)m|yz1(3))**29


	end if


			
	side1=(mth_abs(a1)+}th_afs(a29)'2
		side2=hmph_abs(b1)+mth_abs(b2))/2
				if(side1>=sidd") then			l=side1			s=side2
			
		else
		âÏ=sitm2
			3=smde1		end if	J



	END ]NCTION

	$ S4ard	
	FUNCtION†get_pajel_thickness(elÂment_group)


âstring elemeNt_groupY],chara„terval[1]*	integer num_element,status¨id_element(virdual),id_regio.(µ00-,cnt,iit_id,data_type, D
			intEger_val,„oord_id,oode_id,fiemd_id
			
	rec| sum_thick-o%an_thick,thick(3)ää
	numWedement=fem[u_counp_ie_list( 1024, @
	C				 element_group, @
								`false,"@
							 stAtuS)


	 if(list_error_msg(status,2,"")- then

	ârmturn status
	 End )f


	 if(nuM_eLement==0) then
		list_erroR_mwg(800004,2"")
	2eturÓ 48000004
	 end if

)sy3_a|locate_array)id_element,1,num_%lement)


	fem_t_get_iD_ÏisT( 1035, @					 element_grout, @
			 luo_glem-Nt, @
					 true, @
					 id_ehele~t)
ä

*	/* ====  -ecn thickness of seldct%d elumentc ==?= */
:-
	db_get_regi/n_for_ele}ents(.u}_element,idﬁemement,)d_region)

M
 sum_thick=0


	for(cnt<1 to num_element)
		db_get_prop_value(iD^region(cnt9l3v,mat_id,data_type<)nteger_val,@
					 thick,character_vaÏ,coord_id,node_iD,bield]id)	*
		sum_4hkck=sUmﬂtlick+thick(1)


	end Êor


	mecn_thiCk=suÌ_thmck/num_elemen|


ç

	returN mean_thick


	EOD FUŒCPIOJâ$ E~‰
	
	FUNCTIo g%t_@anel_stresS(reqult_it,„oord_id,ras_dir,elm_l{T)ö

	integer rÂsult_i`(),num_elm,cnt¨status,i_ejtit˘_count
	real sic(VIRTUAL),sum_rig,msig,b_areas(FIZT]@L)< sum_avea
	ktring res_dir[],elmOlqtK],coord_iD[]

äNu-_elm=fe-_u_count_id_miqt(1∞24,emm_lst,TRWE,rtatuw)


	rysWallosate_!rray(3ig,1,num_e,m)

-
udfﬂget_RmsuLt_data(rasultOid, coozd^id¨`res_lmr, elm_lsÙ, sig)*

	fem_oemM_&`ceﬂarea (elm_lst,r_areas, i_Envity_count)

	swm_sig=0
	sum_areA = 0


)for(cnt=1 to nwm_elm)
		
		Idsiw(cnt) > 0) then
			if(resdir == "ZY") vhen
)		sig(cNt) < mth[abs(sig(cnt))J	)else				igcnt) = 0.pM
			end kf
		end )f
		-
		sum_sie +Ω mth_abs(shg(cnt))*r_Are·˚(cnt)
		su-]area += r_arÂas(cnt)
		
	end for

	msig "mth_abs(sum_sIg/sum_area):J
	retuzn"m3hg


	END FUNCTIœN

	FUNCTION$ged_meaj_str$ss(resunt_il,coord_idrgs_Dir,elm_lsd)M

	intÂeer result^id(),num_eLm,cnt¨status-k_eltity_cou.t
	real sag(VIRTUAL)(sum_sig,msig)r_@rEas(VKRTuAM), Sum_area
	string(res_dir[],ghm_Ïrt[],comrd_id[]

	numelm=nem_u_coent_id_his|(1024$elm_lst,DRUEstatus)


	s9s_allocate_array(sig,1,fumOelm)
ç
	udf_gev_rasult_dqta(result_id, cord_id, res_dir, elm_lst,dsiG)


fem_geom_face_area (enm_hst,r_araas,$i_entity_count9

Isum_sig=0
sum_irea =!4
M
*	for(cnt=1 to$num_elm)


		su-_sig += mth_afs(siÁ8Cnt))*rWareas(cnt+
		s5m_area += r_ir%as(cn4)-
	Jend for
	msiw } sum_skg/sue_area


	return m{ig


	END`FUNCTIœN	
END CLASS
$`Nd