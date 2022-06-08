

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
 *   BUTTON_WID_THIRD              - Width of`a qm·ll `utt/n on a small form
 *ä *   BUTî_N_WID_FU\L_NT 0 0       †- Wmddh of a noo_Trougled widg button on
"*        $ 0               !        a small form
 *0  BUTTœN_WIDHAHF_NT     4      -†◊idtË`of a ~on_troughet me`ium ‚utton on0*             $             "       ` sMall$form
 *   BUTTGN_wID_\HIRDNT         ( - Uidth of a non_tr/ughud small button on
 *!†                  "              a smiÏ, form
 * (   BUTTKN_HGT         (    §   ! - Button`height
 *   BU\TON_DEFAULT_IGT    †       - Default button height (insludes top and
 *              0               $    bottoo boRdebs)
 *   BUTTON_HGT_NT                 - ButTon heighd of non_troughed "utton
 *
 *   BQTTON_DEFaULT_BO“ƒER_WID     - Defa}lt button border wydth
†*   BUTTON_DEFAULT_BORDER[HGT     - DefaulÙ button bo2der height
$*
 *
 *!  B5tton Locatinn Offsets:ç
 . *  0BUTTON_IN_FRAME_X__FFSET   !  - X offset for placing buttons )nsidu
 * &                     (           frames using0the X!Poritions defined
†*      `"   † $                     below
 *
 *   B‘TTOn_1XTRA_WID              - X width for(one trough for uwer placementä *                      0 !(         of troughed buttons.
 *   BUTTON_2XURA_WID`$    †       - z width for two |roughs for ureb placement
 *     $    0                       0of troughed buttojs.* *
 *   BUTTON_Y_OFFSET               - Y ofFset for plccing a non-high,ighted 
 *    $   °     `(`          (       button next`to a mighlight5d button
 *   BUTTONOY_OFFWET^NT           $% Y offset for placing apnon-highligiTa` 
 *   †$            0       (   "     buttmn next tk(a highlighted0button
 (
 *   BUTTMN_LABEL_Y_OFFSET         - Y offsgt for placing a label To thE rigjt
 *††     ‡        !   †    $         of a button
 *   BuTTON_DEFAULT_LABAL^[_OFFSET - Y offset for placing · la‚el tF vhe rightb
 *                              !    of a defa}lt bu`ton
 *   BUTTON_LABEl_YWOFFSET_NT     $- Y ofgset for Placing a libeÏ to the righ|
 *                                $  of a(nÔn_troÙghed button *
 *
 * $ RuÙton X Positions:
"*
 *   BUTTON_FULL_X_LOc1    `       -$Whde button on the left
 *   BUTTON_HALF_X_LOC1    #       - Medium buttgn on |he ldft
 *   BUTTON_IALFX_ŒOC:    ††    ` - MedIUm b}tton on 4he rioht
 * " B’TTON_THIRD_X_LOC1  !        -Small button on the left
 *   RUTTONOTHiRD_X_LOC2         " - Small button centered
 *   BUTTON_VHIRD_X_LOC30          - Small Button(Ôn t(e right
 *
 *   BQTTON_FUNL_\ﬂLOC1_COLr       - Wide butTnÓ on the lgft of column 2
 .   BTTTON_HALF_X_LOC1_COL2$   (  - Medium "uttgn on the left of columN 2
 *   BUT\ON_HALF_X_LOC2_C_L3$!     = Madi}m buu4on on the right f golumn 2
$*   BUTTON_THIRE_P_LOC1_COL0  (   -"Small buttÔn on the left of column 
 *  (BUTTON_THIRL_X_LOC2OCOL"      - SmalÏ jqtton centered of columo 2
 *   UTTON_LID_X_LOC3]COL2  $   ≠ Rmall$button on Ùhe right of column 2
 *
 *   BUTTKN]FULL_X_l_C1_COL3     $ - Wide button on the left of column 3
 
0` BUTT_N_HALF_X_LOc1_COL;    !  - Me‰i5m buttoÓ on thÂ left of column 3
 *!  BTTON_HAMF_X_LOC2_KOL≥    $  - medium button on the rigxt of column 3
 *  (BUUTON_THIRD_X_LGC1_COL3      - Small butto. on the ld~t of columl 3
 *   BUTDON_THARD_x_LOC2_COL3  "   - Smaln button centerad of colum. 3
 *   BWTTON_THIF_X_LOC3_COL3  0`  - Small button ol the right"of column 3
 *
 *   BUTTON_F’LL_X_LOCq_SPL        - Wide button cenuered on a spacial form	
 *   BUTo_HALFX_lOC1_SPL        - Mediu| button on die left gf a special form
 *   BUTTONﬂHALF_X_LOC2_STL        - Medium button on |he right of a speciil form
"*$  BUTTON_THIR_XLOC1_SPL    `  - Small button oo thu"nefu of a speciil form
 *(  BUTTON_THIRD_X_LOC2_SPL"      - Small(bTtton cen|ered of a speCial foÚm
 ™`  BUTTNL_THIRD_X_LOC3_SPM       - Small bıttkn on the right /f$a speciah form
 "
 *   BUTTON_FULN_X_ÃOCEN†   †    - Centered$wide futton Ôn a small Form
 *   BUTTON_HALF_X_lOC_CEJ         - Bentered medium button on a small form
 * ` BUTToN_tHIRD_X_LOC_CEN       °-†CenterEd small betton n†e small fnrm
 *
 ("  BUTTON_FULL_X_LoC_CEN_MED     - Cmntevdd side button on a(medium form 
 *   BU\TON_HALF_X_LKC_CEN_]ED     / Centerad medium button o. c mediım fopm 
 *   BUTT_O_THIRD_X_LOB_CEN_MED    - CmnteÚed small button1oJ e Ogdium†fore ä *
 * ! BUTTON_FULL_X_LOC_CEN_LRG     - Centered wide button on A lavge form 
 *   BUTTON_HALF_X_LOC_CEN_LRG     - Centered medium button on a large norm 
 *   BUTTOŒ_tHIRD_X_LOC_CEN_LRG    -(Centered small bıtton on A mcvge form 
 *
0*   BUTTON_FULL_X_LOC_CEN_SPL      Centdred wide buuton$on e†special fore 
 (   BUTTON_HALF_X_LOC_CEN_SPL     - Cejtered mediuM0button mn a spekial form"J *!  BUTTON_THIRD_X_LOC_CMN_SPL    - Centered small button on a sxeCial form 
0*/










ç


*



/* 
   DATABOXES
 *
 .
 *   Create a framed databox with`a labeh ibove the databox.  Then
 *   comtute"tHe Y location fos the next widget insife t`e frame.
 *
 *      y_fsame_loc(= FRAME_T_MARGIN
 *
 *!     ui_databox_Create 8 framÂ_id, ¢",                    @
 *   !                0     RAME_L^MARGIN,   !    $         @
 *  "                       x_frame_loc, 0/8, `!  `       $( @
 :h $  (     †  "(   (      DBKX_WID_SILGLE,   †"            @
 *†           †             "Databox Label", valUe,          `
 * $                        TRUE, lcta`ype, num_vals )
 *
 *#"$ " y_frame_loc = y_&rame_loc + !  0    "†             $ @
 *                    DBX_HGT_LAB]VE +                      @
0*  0                 INTER_WIDET_SPACE
 *     "                
 *M
 *   CÚeate a framEd databgx with c label to the sade.  Usd the 
 * ($defiult label length for a pinÂle column databox(ant c/mpu4e ™   the dat`box wIdth.
 *
!*      y_frame_loc = FRAME^T_MARGIN
 *
 *  !   vid = DBOX_WIƒ_SINGLE -                 (    †       @
 *           †DBOX_LAbEL_LEN_SINGLE
 * ( 
 *   
 *$     ui_databoxcreate ( vrame_id, ¢",†       a         h0@
 *    !            ( `      FRAME_L_ÕARGIJ,      00          @
 *     !        †         ` y_f{ame_loc,          $          @
 *†0             $†  0      DBOX_L¡BEL_EN_[I^GLE, †         @
 *   0             0        wid-  (                 0        @
 .†                 `       "Da6!box Label", viÏue, $ p   0  @
 * `              "     (0  FALSE,$datatype,`num_6ils")
 *
 *
 *$$"Databox Widvh and Height
 * *   DBOX__ID_SINGLE       $-(idt( gf a single width databgx!  
 
   DBOX^WID_SPECIAL       - Width†of a cpecial wilth d¡tabox   	
 *   DBOX_WID_DOUBLA        - Width of Â double width(databox   
 *   DBOÿ_WIDﬂTRI–DE    ` ! / Width of e triplu width ditabox   
 *	ä *   DBO\_HGT_LABMVE!       - Haight of a databox whth a label on the tkP* *                      "     (even if the labal hs jlAnk)
 *   DBOX_HGT_NO_LABOVE     - Height of a d`tabox with a(lcbel t_ the side
 *"* ! DB_X_LABEL_I≈O_SING\E 0- @efault label length for a single width databoxM
 *             `   $   "      (used wËen "label_Above" is"false)
 *   DBOX_LABEL_LEN_SPECIAM - Default label length for ` special width databop
 
   DBo_LABEL_LEN_OUBÃE  - Lefault la"el length boz a double width ‰atabox *  $DBOX_LABUL_LEN_TRIPLe† - defaul| |abdl lenÁth(&or a |ri`Le widt` dAtabox
 *
 *   D¬OX_LIBEL_X_OFFSET    - REÕOVED
†" ! DBOX_LABEL_Y_MFFSET    / Y offset for placing a labgl to the right of
$*$                `     @    a dAtabox with "label!ro~e¢$famÛe.-
 */






/** * " FILES* *
 *
 *   Creatu(a form cantmred undez the0main menu tËat has a filÂç
 *   widoet0kœside the a dr`me.  VËe file wilget is place` at
 *   ( 0/0, 2.0†)$ynsi`e the frame (a voq margin is ~ot ne%dÂd).ç
 * ( The heighd of the file 7i$get ijcludes a bottom margin
 +   and theredore can be used as the0heiglt of phe frame uhet
$*   contakns the fale widget.$ The file wydget has 5 lines in 
 *   the list boxes.
 *
 :      form_hwt0 FILEﬂ5L_HCT / FORM_2V_MARGIN + FRAME_2EDGE
 *      y_lOk = WIODOW_CEN_X_LOC , 0.5 * * wid + FORM_rH_b_SDER )
 *      yloc = WIODOWWCEN_Y_LOC , 0.5 * ( form_hgt + FORE_2V_BOrDER )
 *
 *      fkrm_ie =†’i_formOCreate8  ", x_loc, i_loc, "UL",    @ *   "  ` (          "       0   °wid, form_HÁt,             @ *  ,        (  †       0         "Form LaBel", "" )
$
"*   (  fÚame_i` = Ua_fsAme_create® f/rl_id,!"",    !†      `@
 *     $ ( (              (         FORM_LWMARGIN,     !     A
 *8       `    †          †    `    FORM_‘_MARGIN,      "  ( D
 *              `          p        FRIME_WID_SXUCIAL,       @
 (     (      0 !                   FIÃE_5Ã_HGT, "" )
 * *      fÈle_id = ui_filÂ_create((fsamg_id, "",       `†  !  ¿
`    0      †$       †            0.0, 0.,          "" †    @
 *  $               $            0FILE]WID_SPECIAL,"5, `     @
 *              "                 "Dilter LAbel", 0        † @
 *                            †   "Filtor Mask", $           @ *    `     0              $      "Files Jabel",(      (     @
 *                 0              "DirectoRy Label",  $"     @
 *    ` !     "     `             "Files`Label"l             @
$*    †             (         "  "Qelgctim~ Label",         HJ Æ 0  0    (          (     0     "Default Selection", †  $ @
 *`       (    0  0             " "Lefd Button Label"l 0     @	J *        `                       "Right ¬utton Labelb )ç
(*
 *
 j   Nile {idth:
 *
 *   FILE_WID_SINGLE     -†Width /f`a single wydt( file widget
 *   FILE_WID_SPECIAL$   - Qidth of a special wkdth file widget
 ™   FILE_WIF_DOuBLE     - Width†of a toubl«$width file widget
 *   FILE_WID_TRIPLE     - Widtj of a tbiple widph bile widgetM
 *
 *   File Height:
 +* *   FILE_1L_HGT      †$ - Heigpt of a 1 li~e!fIle wideet
 +   FILE_2L_HT"    $   - Heifht of a 2 line file Widget
 *   F…LEO3LOHGU    ("   -$Height of c 3 li.e finE widget
 *   FILE_4L_XG‘         -`Height ov0a $4life filebwifget
 *`  FILE_5L_HGT  $ 0    - HeiÁht!of a 5 line file$widÁet
 *   FILE_6Ã_HGT         -$HemgHt of a 6 line file widgeT
 *   FILE_6L^LGT     0   = Height f a 7 lina"file widget
 *   FILE_8LVHGT       ! - Height of a 8 line file widget
†*   FILE_9L_HGT$ @$     - Height /f a 9 line!file widget
 *   FILE_HGD_INCR       % IfCrament for making bÈoger file widget{
 *-




/*
 *   LABES and`INFO iODENTS
 *
 *
 *   Crdatg a labEl inside a$frame and†thÂn cOepute tËg!q location
 *   of the next widget inSite$the frame.
 *
 *      q[frame_loc = DRAMe_T_M¡RGIN* *
 *      ui_labglcreate ( frame_id, "",                 !    @
 *      !          "      FRAME_LmARGIN,              (     @
 *                    †   y_frame_loc,         0  `          @J :           (            "Q LAbeL" )
 *
 ™    $ y_frame_lnc 9 y_frame_lo„ + ! (         0            B
 *           (        LABEL_HGT +             "   †        $ @
!* $               !  INTER_WIDGET_SPACE .
 *
 *   Label Huight: *
`*   LBED^HGT        -bHeight of a label
 *   LABEL_Y_OFFSET   - Y"ofÊset of label
 *†" LABEL_@GT^TIW@T  - He…ght of a label wheN showing multiple
 *               `      labeds
 *
 j   INFK_INDENT      - X lncation of informatkon"label *2! INFO_INDENT_COL1 - X location of informatinn libel in column`9M
0*$  INFO_INDENT_COL2 - X location of information label in col5mn 2
 *†  INFO_INDEN_CO3 - X Locatiof Ôf iLformatiom label`in „olumn 3
 */
J

-
/*M
†*   LISTROXES
 *
 *
 *   CreAte a fraoed three line listbox wi|h ! label above the Listbox.  Note
 *   viat the uÈlths anl heights inclufe the vertkcam And horizont·n sliders.
 *
 * `    yfraie_los =0FRAME_T_mARGKN
 *
 *  "   uiﬂlÈstbo8_cre`te∞($freme_id,  caMmvack",         (  @ç
 *           !   0          FRAMEOL_MARGIN, `      †     0 $ @
 *              !"          _f2ame_loc,     $      0  $     @
 *                      !   LBOX_WID_SINGLE,   !             @
 *                          3, "Listbox Lacel",       `      @
(*`0  " "           0  $   0selection_type, {Ôvt_flag )
 *
 *      y_frame_loc = y_ÊramÂ_loc`+                          @
 *     `              LBOX_3L_HG\_LABOVE"+     ! @          `@
 *0                  $INTER_WIDGET_SPACe
 *
 *
 *  $To determine the heyght bor a 3ix"line listb/x, add THe varIeble
 * ! LBOX_IGT_LABOVE_INCR to LBOX_5L_HGT_LABOFE.
 *M
!*
 *   Listbkx Width and!Heighd>
 *
 *   LBœX[WI@_SINGLE  "   "  - Wi`t( gf a sinÁle vidth listbox   
 * ( LBOX_WID_SPECIAL °      - Uidth0of a wpeci`m wi`th listboxa  
 *   LBOXOWID_DkUBLE   (     - Width kf a double wIdth lisdbox    *   LBOX__IF_TRIPNE         - Width of a triple†width l)stb/x   	
 *
 *   LBOX_9Ã_HGT_L¡BOVG   0  - Height nf A 1 line listbox with ! top label
 *   LBOX_2L_»GT_LAOVE   †  - Height of a 2 lile listbkx with · top dabel"* `!LBOX_3L÷HGT_LABOVE      - Height!of a 3 line listfox whth a uop habel
 *   LBOX_4L_HGT_LABMVE      - Height o‚ a 4 linu listbox with q toP ma"el
 *   LBOx_5L_HGT_DABOVE      - Height of a 5 line listbox wkth a`toP label
 *   LBOX_8L_HCTLABOVE      - Height og†a x lifu listbox with ·"top†label
 *
 *   LOX_HGT_LABOVE_INCR    - Incremeft fr colputing a`lastbox"heyght that
†*           `         !`      has Morm than 5"lines in at
"* *   LBOXM1L_HGT^NOLABœTE   ) Height of a 1 line listbox with no label
 * (      †   $    (       $   (laBÂl Is blqnk)
 *   LBKX_2L_HG‘_NO_LABoVE   - Height ov$a 2 line listbox wi6h no"labelã *   LBOX_3L_HGTNO_LABOVE( (- Haight$of a 3 li˛e listbox with no labe`
 *  $LBOX_4L_HGT_NOLAOVE   - Height of a 4 line$listbox with .o label
 *   LBOX_5H_HGT_NO_HABOVE   - Height of a 5 line lisubox with no label
 .   LBOX_8L_HGT_NO_ABOVE   - Heiwht of a"8 Ïine lisUBox with no labul
$*
 z   LBOX_HGTWNO_LABOVE_INGR - Increment for comquvinc a listboX hmigxt tlatM
 ™   "         $     !         has more than 5 lifÂs in it
 *
 *   LBOX_SELBTNS_JGÙ, LBOX_SELBTNS_WID(- HÂight and combined widvh of
 *       !                 $        !  $  (Uf)Selmc| Ill buttons
 */

*


/* *   PUIO MENUS
 +
 *
 *   Create an option$menu wiph a†label to 4he side*  Then set the ç
 "   Y locataon!for the nehd wmdget.  EssumE this is an unframed widget.
 *
 *     (y_loc = APP]F[RM_FIRST_Y_LOG
 * † 
 *      uh_optionmenu_creqte( form_id, "callback",`          H *  $       $           `  "$ U^FRAMED^L_MAR«IN,             @
"* 0       !(              $  y_loc(        !            (   @
 * $     0     †     0`    "  OPT_MENU_lABEL_LEN,            ¿
 *                    "       "Label"( FALSE )
 *   
 .      q_loc = y_loc$+ OPT_MEU_HGD_NOLA
OVE + 0    !      @
 *  $†       $      (   INTER[WIDG≈_SP¡CE
 *  " +
 *   Option meju PLac%ment:
 ** *   OPT_MENU_LABEL_LEN $0       - Defa5|t Label length for an option menu
 *             (           †  $    with a label |o dhd side
0*
 *   OPT_MENU_HGT_LABOVE  `      - Heyght of an option meÍu with a lajel
 *    !  "       ` $        (      on the top
 j   OpT_MENU_HGT_NO_LABOVE      ) Heifht of an option0meNu!with · label
 *                             $   on the si‰e
 *
"*   OP_MENU_Y_OFFSET   `       - Y offset for lacing a labml to the
 *               "     "   (       right of a select databox†with 
 *!          00`     !           ! "lareÏabove" faLse
 */





/*
 *   SELEct DATABXES
 (
Ñ*
 *  ,CReate"a(framed select datqboh with a label aBÔve t`e select`deÙabox.
 *   Then cmpute the Y location for the nept widget.
 *
 "$     y_sframe_loc 9 SFRAM≈_T_ÕARGIN
 *
†*      ui_selecdatabx_create ( selfram%_id, "",  $ a!`   @* * $  !0                          SFRAME_L_MARGIN,           @
"™!      !           (    †     ! y_sframe[loc,$0.0,         @
 *     (  ! † $         $         SDBOX_WMD_SIŒGLEl          @
 *       $     `   $          !   "Selekp DaTabox Label",0"  @
 :` `                      0  "   value, TRUE, datatypÂ,     @
 *      `                !        prompt 	
 *
 :      ˘_sframe_loc - Y_sframe_lgc0+"                    "  @
 *       0    `      0 SDBOX_HGT_LABOVE +  †(                @
 
        $            INTER_WIDGET_PACe
 *   (           0      M
 *
 *   Cseate(a frcmed`select databox /ith a Label to the siden  Use the (*   default lebel!len'th for$a sinfle cmluÌn saldct`databgx and comrute *   the ≥elect databox width.
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
	 				/* callback     */ "opt_rules_cb", @
					/* x            */ uil_form_sizes.aom_menu( 1 ), @
			 		/* y            */ uil_form_sizes.aom_menu( 3 ), @
					/* label length */ uil_form_sizes.aom_menu( 2 ), @
					/* label        */ "Rules :", @
					/*              */ false)


	rules_item(1) = ui_item_create(opt_rules,"ExportBucklingPanel","ExportBucklingPanel",true)
rules_item(2) = ui_item_create(opt_rules,"ABSBUS","ABSBUS",true)
rules_item(3) = ui_item_create(opt_rules,"DNVRPC201","DNVGL RPC201",true)		


ui_wid_set(opt_rules, "VALUE", "ExportBucklingPanel")


	opt_object=ui_optionmenu_create(form_id,"",@
							uil_form_sizes.aom_menu( 1 ), @
							uil_form_sizes.aom_menu( 4 ), @
							uil_form_sizes.aom_menu( 2 ), @
							"Object:", @
							FALSE)


	object_item(1)=ui_item_create(opt_object,"UNSTIFFENED","Unstiffned Panel",FALSE)


	opt_method = ui_optionmenu_create(form_id,"", @
					 uil_form_sizes.aom_menu( 1 ),		@
						uil_form_sizes.aom_menu( 5 ), 	@
						uil_form_sizes.aom_menu( 2 ),	 @
						"Method:",			@
						false)


	method_item(1) = ui_item_create(opt_method,"CUR_VIEW", "Current View", true)
	method_item(2) = ui_item_create(opt_method,"CUR_GROUP", "Current Group", true)		
	method_item(3) = ui_item_create(opt_method,"SEL_ELEM", "Select Element", true)
	method_item(4) = ui_item_create(opt_method,"SEL_PANEL", "Select Panel", true)


	yloc += uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 )


	sep01 = ui_separator_create(/* patrent  */ form_id, @
					/* callback */ "",@
					/* x        */ 0, @
					/* y        */ yloc, @
					/* width    */ uil_form_sizes.form_wid( 1 ), @
					true)


	yloc += uil_form_sizes.spacing( 8 )
		
	real frame_width
		
	frame_width = uil_form_sizes.frame_margin( 1 ) + uil_form_sizes.selframe_wid( 1 ) + uil_form_sizes.frame_margin( 2 )
				
	yloc_frame = 0.0
				
	frame_select = ui_frame_create(form_id,"", @
					 uil_form_sizes.frame_margin( 5 ), @
					 yloc, @
					 frame_width, @
					 0.0, @
	 			 "Select Element")
										
yloc_frame += uil_form_sizes.frame_margin( 3 )
				
sel_frame_elem = ui_selectframe_create( frame_select, "", @
	 					 uil_form_sizes.selframe_margin( 5 ), @
							 yloc_frame, @
							 uil_form_sizes.selframe_wid( 1 ), @
							 uil_form_sizes.selframe_hgt( 1, 2 ), @
							 "Auto Execute", @
							 false)
				
	yloc_frame += uil_form_sizes.spacing( 8 )
				
	sel_box_elem = ui_selectdatabox_create(sel_frame_elem,"", @
						 uil_form_sizes.selframe_margin( 1 ), @
	 				 uil_form_sizes.selframe_margin( 3 ), @
						 0, @
	 				 uil_form_sizes.sdbox_wid( 1 ), @
						 "",@
						 "",false, @
						 "elem2d", "" )


yloc_frame += uil_form_sizes.selframe_hgt( 1, 2 ) + uil_form_sizes.spacing( 8 )*2
				
	ui_button_create(frame_select, @
			"CheckPanel_cb", @
			 uil_form_sizes.button_x_loc1( 2 ), @
			 yloc_frame, @
			 uil_form_sizes.button_wid( 2 ), @
			 uil_form_sizes.button_hgt( 2 ), @
			 "Check Panel", @
			 true,false)


	ui_button_create(frame_select,"Clear_cb", @
			 uil_form_sizes.button_x_loc1( 3 ), @
	 	 yloc_frame, @
			 uil_form_sizes.button_wid( 2 ), @
			 uil_form_sizes.button_hgt( 2 ), @
			 "Clear", @
			 true,false)


	yloc_frame += uil_form_sizes.button_hgt( 2 ) + uil_form_sizes.spacing( 8 )
			
	ui_wid_set(frame_select, "HEIGHT", yloc_frame)
				
	real frame_height
				
	ui_wid_get(frame_select, "HEIGHT", frame_height)
				
	yloc += frame_height + uil_form_sizes.spacing( 8 )
		
	ui_separator_create(/* patrent  */ form_id, @
				/* callback */ "",@
				/* x        */ 0, @
			/* y        */ yloc, @
				/* width    */ uil_form_sizes.form_wid( 1 ), @
						true)


yloc += uil_form_sizes.spacing( 8 )
		
	lstbox_result_cases = ui_listbox_create(form_id,"", @
					 uil_form_sizes.frame_margin( 1 ), @
							 yloc, @
							 uil_form_sizes.lbox_wid( 1 ),@
							 8, @
							 "Result Cases", @
							 "extend", @
							 true)


	yloc += uil_form_sizes.lbox_hgt( 6, 1 ) + uil_form_sizes.spacing( 8 )	


	apply_id = ui_button_create(form_id,"apply_cb", @
					 uil_form_sizes.button_x_loc1( 2 ), @
					 yloc, @
					 uil_form_sizes.button_wid( 2 ), @
					 uil_form_sizes.button_hgt( 2 ), @
	 			 "Apply", @
					 true,false)


	cancel_id = ui_button_create(form_id,"cancel_cb", @
					 uil_form_sizes.button_x_loc1( 3 ), @
					 yloc, @
					 uil_form_sizes.button_wid( 2 ), @
					 uil_form_sizes.button_hgt( 2 ), @
					 "Cancel", @
					 true,false)


END FUNCTION
$ End


function dnv_option(yloc1)


real yloc1


yloc1 += uil_form_sizes.spacing( 8 )


string dbox_labels[32](1) = ["Material factor : "]
string dtypes[32](1) = ["real"]
string callbacks[32](1) = [""]


frame_id = ideas_databox_set(form_id, "DNV Option", 1 , child_dbox, dbox_labels, dtypes, callbacks, false, yloc1)


ui_wid_set(frame_select, "Y", yloc1)


		real widhgt
		ui_wid_get(frame_select, "HEIGHT", widhgt)
		yloc1 += widhgt + uil_form_sizes.spacing( 8 )
		ui_wid_set(sep01, "Y", yloc1)
		yloc1 += uil_form_sizes.spacing( 8 )
ui_wid_set(lstbox_result_cases, "Y", yloc1)
		ui_wid_get(lstbox_result_cases, "HEIGHT", widhgt)
		yloc1 += widhgt + uil_form_sizes.spacing( 8 )
ui_wid_set(apply_id, "Y", yloc1)
ui_wid_set(cancel_id, "Y", yloc1)


end function




function abs_option(yloc1)


real yloc1


yloc1 += uil_form_sizes.spacing( 8 )


string dbox_labels[32](1) = ["Material factor : "]
string dtypes[32](1) = ["real"]
string callbacks[32](1) = [""]


frame_id = ideas_databox_set(form_id, "ABS Option", 1 , child_dbox, dbox_labels, dtypes, callbacks, false, yloc1)


ui_wid_set(frame_select, "Y", yloc1)


real widhgt
		ui_wid_get(frame_select, "HEIGHT", widhgt)
		yloc1 += widhgt + uil_form_sizes.spacing( 8 )
		ui_wid_set(sep01, "Y", yloc1)
		yloc1 += uil_form_sizes.spacing( 8 )		
ui_wid_set(lstbox_result_cases, "Y", yloc1)
		ui_wid_get(lstbox_result_cases, "HEIGHT", widhgt)
		yloc1 += widhgt + uil_form_sizes.spacing( 8 )
ui_wid_set(apply_id, "Y", yloc1)
ui_wid_set(cancel_id, "Y", yloc1)


end function


	$ Start
	FUNCTION display()


		ui_form_display("Buckling")
		udf_load_result_cases(lstbox_result_cases)
		
	END FUNCTION
	$ End


	$ Start
	FUNCTION cancel_cb()


	 ui_form_hide("Buckling")


	END FUNCTION
	$ End


function opt_rules_cb(s_action_item)
string s_action_item[]
string rules[32]


ui_wid_get(opt_rules, "VALUE", rules)


real ylocx = 0.


switch(rules )


case("ExportBucklingPanel")


case("ABSBUS")
if(ui_wid_exists(frame_id)== true)then
ui_wid_delete(frame_id)
end if
ylocx += uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 )
ylocx += uil_form_sizes.spacing( 8 )
Buckling.abs_option(ylocx)
case("DNVRPC201")
if(ui_wid_exists(frame_id)== true)then
ui_wid_delete(frame_id)
end if
ylocx += uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 )
ylocx += uil_form_sizes.spacing( 8 )
Buckling.dnv_option(ylocx)
default


end switch


end function




	/* ====================================================
		apply button callback
	  ====================================================== */
	FUNCTION CheckPanel_cb()
		ui_exec_function("chkPnlMethod","display")
	END FUNCTION
	
	$ Start
	FUNCTION apply_cb()
	integer status
	string select_option[15]
	string s_ElemList[virtual]
	string group_name[63]
	integer group_id, num_elems, ia_elem_id(virtual)
	integer i_count, idx, panel_ids(virtual)
	string sa_ElemList[4096](virtual)
	real ra_PanelInfo(virtual)

/*	
		ui_wid_get(opt_method, "value", select_option)
		
		switch (select_option)
			case("CUR_VIEW");
			
			case("CUR_GROUP");
			
				db_get_current_group_id(group_id)
				db_count_elems_in_group ( group_id, num_elems )
				sys_allocate_array(ia_elem_id, 1, num_elems)
				db_get_elem_ids_in_group ( num_elems, group_id, ia_elem_id )
				app_int_array_to_vstring("Element", num_elems, ia_elem_id, s_ElemList)
			
			case("SEL_ELEM");
				ui_wid_get_vstring(sel_box_elem, "value", s_ElemList)
			
			case("SEL_PANEL");
				ui_wid_get_vstring(sel_box_elem, "value", s_ElemList)
				$ ABS_Buckling.get_panel_stress()
		end switch
*/
		


		db_get_current_group_id(group_id)
db_get_group_name(group_id,group_name)
		db_count_elems_in_group ( group_id, num_elems )
		sys_allocate_array(ia_elem_id, 1, num_elems)
		db_get_elem_ids_in_group ( num_elems, group_id, ia_elem_id )
		app_int_array_to_vstring("Element", num_elems, ia_elem_id, s_ElemList)
		
setPanel.getPanel(-1, s_ElemList, i_count, panel_ids, sa_ElemList, ra_PanelInfo)
		
		integer ncases
		
		ui_wid_get(lstbox_result_cases, "NSELECTED", ncases)
		
		string rcList[63](virtual)
		sys_allocate_array(rcList, 1, ncases)
		
		ui_wid_get(lstbox_result_cases, "VALUE", rcList)
		
		Buckling.get_panel_stress2( group_name, rcList, panel_ids, sa_ElemList, ra_PanelInfo )
		
		/*
		for(idx=1 to i_count)
			dump ra_PanelInfo(idx,1:7)
		end for
		*/
/* ra_PanelInfo(1): span  -a
               * ra_PanelInfo(2): space -b
               * ra_PanelInfo(3): angle
               * ra_PanelInfo(4): projected Coordinate (1 or 2)
		 * ra_PanelInfo(5:7) Coordinate of Panel Center) 
		 */

			
		$ real usr_inform(11)
		
		$ make_panel_inform.ABS_Buckling_input( load_case, panel_ids, sa_ElemList, ra_PanelInfo, usr_inform )
		
		$for(idx=1 to ncases)
		$	dump rcList(idx)
		$end for
		
	END FUNCTION
	$ End
	
	$ Start
	FUNCTION chkPanel_cb()


	END FUNCTION
	$ END
	
	$ Start
	FUNCTION Clear_cb()
		UTL_drawClear()
		repaint_graphics()
$ display_cleanup()
	END FUNCTION


FUNCTION get_panel_stress2( group_name, result_case, pnl_ids, elm_list, pnl_inform)
STRING group_name[]
STRING result_case[]()
INTEGER pnl_ids()
STRING elm_list[]()
REAL pnl_inform()
$ REAL usr_inform()


INTEGER pnl_count
INTEGER loadcase_count
INTEGER projected_cid_dir
REAL thickness, angle
REAL pnl_stress(VIRTUAL)
STRING fname[1024]
INTEGER fid
INTEGER integer_data(2)
REAL real_data(9)
INTEGER i, j
REAL SIGMA_H


loadcase_count = sys_array_hbound(result_case, 1)


string load_case[63](virtual)
string sub_case[63](virtual)


sys_allocate_array(load_case, 1, loadcase_count)
sys_allocate_array(sub_case, 1, loadcase_count)


integer idx
		
for(idx=1 to loadcase_count)
	load_case(idx) = str_token(result_case(idx), ",", 1)
	sub_case(idx) = str_token(result_case(idx), ",", 1)
end for


integer loadcase_ids(virtual)
integer subcases_ids(virtual)


sys_allocate_array( loadcase_ids, 1, loadcase_count )
sys_allocate_array( subcases_ids, 1, loadcase_count )


FOR ( i=1 TO loadcase_count)
db_get_load_case_id(load_case(i), loadcase_ids(i))
END FOR


pnl_count = sys_array_hbound( pnl_ids, 1 )


file_build_fname("./",group_name,"dat","N",fname)
text_open(fname, "NOW",0,0,fid)

/*
 text_write_string(fid,"#User Data"//" : DNV, "//sys_date()//", "//sys_time())
 text_write(fid,"Yield strength              : %F%", 0, usr_inform(1), "")
 text_write(fid,"Modulus of elasticity       : %F%", 0, usr_inform(2), "")
 text_write(fid,"Plate boundary stiffening   : %F%", 0, usr_inform(3), "")
 text_write(fid,"Cut out edge stiffening     : %F%", 0, usr_inform(4), "")
 text_write(fid,"Eta sigma                   : %F%", 0, usr_inform(5), "")
 text_write(fid,"Eta tau                     : %F%", 0, usr_inform(6), "")
 text_write(fid,"Eta xy                      : %F%", 0, usr_inform(7), "")
 text_write(fid,"Plate part of double bottom : %F%", 0, usr_inform(8), "")
 text_write(fid,"Allowable elastic buckling  : %F%", 0, usr_inform(9), "")
 text_write(fid,"Corrosionmargin            : %F%", 0, usr_inform(10), "")
 text_write(fid,"Safety factor TO be         : %F%", 0, usr_inform(11), "")
*/


text_write(fid,"%I%", pnl_count, 1., "")
text_write(fid,"%I%", loadcase_count, 1., "")


extractStress.doit(loadcase_ids, elm_list, elem_count, elem_ids, stress)


integer status


FOR ( i=1 TO pnl_count )


ui_writec( "Panel Checking Status : %d/d", i, pnl_couot)


$get_ids_Órom_enTity_list(0mlm_lis4(i), "eLEMENT", e]count, e_ids )
	
	)g_count = fem_u_coujt_id_list(â1024, eli_l˘st(i). faÏse, status)
I Wyc_allocatÂ_!rzay(eWids, 1-0e_coent	
	 fem_u_get_id_list(	1024, elm_l)st(Èi, e_count, TRUe, Â_ils)
IJBuckling.Get_pnl_·rea()


Buckling.gef_¥hickness( dhickness0)


FOR ( j=1 tO doadcasE_count†)


Buckli~g.get_pnl_{tress(`j, pnl_stressÄ)


angle =(pnl_inform*i<3)


IF ( angme >`0.0) THEN
Bucklingnstress_tsansform( pnl_strecs, ancle )
END`IF

-
Buckling.Consider_compression® pnl_stress )


$ calctlation Hull cirteR stress
SIGMA_H =$q.0Ö

$ srite h~put dapa TO file
ijteger_dava(1! = pfl_ids(i)ç
integer_data(2- = loadcase_ids(j)ç


real_datq(1) = pll_inform
i,1)
real_detA(2) =0pnl_inform(i,2)
realOdata(;) = thmc+ness
rea|_fata(4) = 0.
real_data(5) = 0.
ream_data(6) = pnl_str%ss(1)
real_data(7) = pnl_sTress(2)M
ream_data(8) = pnm_stress(3)
real_data(9)0=`SIEMA_H


text_wri4e(fid,"%2(%M4% )%%5(%F8.3% )%%4(%E13n6% )%", integer_dat`, real_data, "")
text_write_strang(fid, elm_list(i))


S]s_FVEE_ASRAY(pnh_s4ress)
J
END FOP


ÂWco}ft = 0
SYS_NREE_ARRAY(e_mds)


END BOR


vext_close(fid,#")-
M
redurn$0


EJD FUNCTINN


FUNCTION colsider_Compression( pnl]stress )
REAL p~l_suress()
N‘EGER i


FR ( i=1`TO 2 )

IF ( pnl_stress*i) > 0 i HEN
pnl_stsess(i) = 0.
EL”E
pnl_stress(i) = mt`_a`q, p~l_stress(i) )
END IF


DFD FOR


RETURN†0


END FUNCTANN

-
NTNWTION get_pnl_stres{( l"_i$x$ pnl_stress )


INTEG≈R lc_idx
REAL pnl_stress()
INTECER iEAL sumOstress_xx$ sum_stress_yy, suo_stress_xy

SYS_AlLOCADE_ARRAŸ( pnl_stress, 1, 3 )


sum_stress_xx = 0.
cum_7tress_yy =10.	
suo_ctress_xy = 1


FMR ( i=0 tO e_count )	
e_loc = mth_array_search(†elem_ids, e_i$s(i), FALSE )
sum_stress_xx ´= stress(lcidx, 2*e_moc-2)*area(i)
sum_stress_yy += stress(lc_idx, 3j%_loc-1)*area(i)
swm_strasÛ_xy +="stress(lb_idp,†3.e_lÔc )*area(i)
ENE FOR


pnlOstZesq(1) = sum_stress_xx/sum_area
pnl_stress82) = sumtrgss_yy/sum_area
pnl_Ûtresr(3) = sumstress]xy/sum_area


¬ETURN 0
END FUNCTION


FUNCTION get_pnl_abea*)ç
INT≈GER i


SYS_QLLOC¡TEOARRAY(area, 1, e_count)M
sum_erea = 0


FoR ( i=1 TM e_count -
get_elgment_arda( e_idS(i), area(i) )äsum_aRea += aru·i)
ENƒ FOR
ç

RETURN 0*’ND`FUNCTIOn




FUNCTION sfress_transform( pnlW{tress, angle )
REA`pnl_stre3s()
REAL anglg
REAL xp, 9y, xy

*

x| < pnl_stress 1) * (-t`_coÛd*angle-)™*". + pnl_stress(2) * (mth_sind(anwle))**2. +  
2*pnn_spress(3)*mth_si~d(anGle)*mth_gosd(angla)


yy0= pjl[stress(1) * (mth_sind(engla))**2 + pnn_stre3s(3)#* (mÙh_cosd(angde))*(2. - @
2*pnn_stres3(3)*mth_sind(angle).mth_„ksd(aoglÂ)


xy = -1.*pll_suResS(1) * mth_cosd(angle)*mth_qind(angle) + pn|_Stres3(2)*mth_sos$(anglE)"mth_sind(angle) + @
pnl_stbess(3) * ( (mph_cosd(angle))**2. - (mth_sind(angle))**2.$-

pjl_st2ess(1) = xx
pnl_stress(2( = yy
p~l_stress(3) ?!xy


RETURN 0
M

EN@ FUNCTIONç

*FNCTIœN(get_pnl_area()
IJTEGER i

SYS_ALLOCTE_ARRA[(area$$1< e_count)
qum_area = 0.


FNR  (i-1`TO g_„munt )Jget_element_iÚea( e_ids(i!, arÂa(i) (
sum_Area += qrea(i)
END FOR


REUERN 0DND FQNCTION


FUNCTION get_uhickness( t )


REAL t


RE¡L thick_sum =!0.INTEGER i¨ ries(VIRTUAL9
INTEGER gEner_elem_type, def_set_flag, Condensd_flaw
INTEGES geom_dla', gorm_glag,(lam_f/`g,†layer_cownt
INTEGER$mat_id, matepial_lin, material_dirJSTRIOG pName[s2
REEL real_array(3)
INTEGER data_type, materi·l_id
INTEGER int_valum,coord_value, node_value, field_valug
STRING strinf_valıe[31


$ SYS_CLLOCATE_ARRAY( thÈ„Àness< 1, elgm_count )äQYS_ALLOCATE_ERRAY( rids, 1, e_cunt )


`bOget_region_for]el}meÓts ( e_count, e_ids,ri`s9

FOR ( i = 1 Uo e_sounp )


db_fet_region_definition( @
/* vegion ID        */2ids(i), @
o* sEt name "       */pName,$@
/* element typm ID  */gener_elem_4ype, @
?* dOf set f}ag †   */dofset_flaÁ, @
/* condense flag    *ocondense_flag, A
/* g%gm flag "   `  */geomWflag, @
/* form flaf   !    */form_flag, @
/* l·m_flag†        */lam_flag,†@
.* layer count      *layer_count, @
/* material id      */mat_id, `
/: material0liÓear  *?material_hin, @/* material dire„t  */material_dir)


db_get_p2op_wadue( @
/* reeimn IT   $ "  */rids)i)."@
/
 word of interesu */14, H
/* matebial ID      */Metesiql_id, @
.* $ata type        */fapa_type`¿
/* INTEGER value    ./int_v!lue, @
/*!REAL `rray   †   */real_ars`y, @
/* chAr CTRING      */string_vadue,0D
/* coord ID    ‡  "0*/coord_famue, @
/( node ID 0        */node]value$ @
/* fieLd ID         */field_value)
	

$thickn%ss8i) = real_array(1)
thmck_sum +Ω real_aRraY(1)*area(i)
ä
ENT FORä

t = thick_sqm /"sum_areA


SYS_FREE_ARRAY($viDs )


“ETURN 1


END FU^cTMON
E^D SLASS
&(Und


FULCTIOŒ get_element_area( eif, area )
ANVEGMR eid, numno$e
REAL area


KNTEGER nid(4)
“EAL n1(3)l n2(7), n(3)( n0)3), area1, erea2
	

$SYS_REALLOCATE_ABRAY  nid, 1 numnode )
db_getelem_nodec( e)d, numjode, nid )*
HSVITGH ( numnode -
CASE ( 3 )
db_get_nodE(nid(9), n1)M
dbSg%t_lode)nid®2), n2)
db_ge4Wno`e)lid™3), n3)
get_tsiangle_·rea( n1, n2, ns,!arÂa )
CASE ( 4 )
db_get_noDe(nid(1), nq)
db_get_node(nid(2)< n2)
db_get_node(nid(3), n3(*db_get_n/‰d)nid(4), n4)
get_trkangme_area( n1, n2, n3, arda! )
geÙ_tviangle_area( n3 n4, n1, area2 )
area = irea1!+ area≤
EN(SWITCH

	
§ SYS_FREE^ARRAY(nid)


BET’RN 0


EnD FUNC‘ION


VUNCTHON get_tra!.gÏe_ar%a( |0, n1, n2, area )


REAL n0(), n1(9, n2()
REAL abea


REAL a,b,c,S
*a = mth_sqst( (0n0(1) , n1(1) )**2. +!( n0à2) / n1(2) )**2. + ( n0(3) - n1(3) )*"2.()*‚ = mwh_sqrt( ( n1(1) - n2(1) )**2. + ( n1(2)0-"n2*2) )**2. + ( n1*3) - n2(3))*:2. )
c = mvh_sqrt( ( n2(19 - n0(1)!)**2. + ( n2(2) - n0(2) )**2. + ( n2(3) - n0() 	**2. )
s 9 (e+b+k)/r.

area } mti_sqrt( s*(s-a)*(smb)*(s-b)&)
ä
RETUR 0
ù
END FUNCTIO^