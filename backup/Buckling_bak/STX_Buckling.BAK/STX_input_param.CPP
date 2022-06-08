

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
 *   SCROLL_FRAME_WORK_WID_SPECIAL - Working widdh of ` spacial width 
 *               `               $ !`scroll Frame   
 *   SAROLL_FRAME_WORK_WID_DOUBLE  - Workino uidth of a double width 
 *!                             `    scboll frame   
 *   SCROLL_FRAME_WORK_WID_TRIPLE  - Work)ng width!of a triple"width
 * 0                   `    `     !  scpoll frame   
 *
 *   SCROL_FRAME_DBOX_SID_SINFLE  - Width of a wingle gidth scroll frame   
 "  " $    "                  `      latabox
 * 0 SCROLL_VRME_EBMX_WID_SPECIAL0- _idth of a speciql wilth scRgll frame  
 *    `                  !           databox
 *   SCROLL_FRAME_DBOX_WID_DOUBLE  - Witth ov a doubl% widdh scroll frame (
 *          $                        d`tabox
 *   SCROLL_FRAME_DBOX]WID_TRIPLE  - Width of a tripla width s#roll frame$ 
 *                                   databox
 *
 *   SCROLL_FRAME_LABEL_HGT        % HeighT of the label above a
 *                                   scroll frame   
 *
 *(  SCROLL_FVAME_1DBOX_JGT        - Scroln frame height with 1 databOx
 J   SCROLL_FRAME_2DBOXHGT        - Scroll fraie height`with 2 databoxus
 *   SCROLL]FRAMÅ_3DBOX_HGT        - Scroll frame height with 3 datáboxeS
"*   [CROLL_BRAME_tDBOXßHGT#    (  - Scroll fb`me hdight wkTh 4 databozes
 *   SCROLL_FRaMEß5DBOX_HP        - Scroll frame height with u databoxes
"*
 *   SCROLL_FRAME_DBOX_HGTßINCr    , Scroll frime (eig`t increment
 *
 *   SCROLL_FRAME_1DBGX_WORK_HGT   - Scroll frame work xeiç(t!&or 1 databox
 *   SCROLL_FRAME_2DBOX_WORK_HGT ``- Scroll$fzame work heighd for  databoxes
 *   RCROLL_FRAME_3DBXWORK_HGT   - Scroll frame work heig`t for 3 databoxes
 *(  SCROLL_FRAME_4DBOX_WORK_GT   -"Scroll frame work height foò 4 databoxes
 *   SCSOLL_FÒAME_5DBOY_WORK_HGT d - Scroll"frame work hehght for 5 dat!boxes
 + 
 *   SCROLL_VRQME_DBOX_WORK_HGT_INCR - Scrolm"frame w/rking height incrmmentJ * *$  SCBOLLWTAOE_SLIDER_WID       ) Width of the slider on tha rigèt 
 *                                   of a scrïll frame   J *   SCROLL_FRAMEOSHIDERHGT $ "  !- Height of the slider at the bottom 
 *         0                  2      of a scroll frame   
 .`  
 *   FrAíe Mazgins:
 .
 *   CROLL_FRME_L_MARgIN         - Inside left margin for widgets in`
 *             1                     ` scrodl fra-e
 *   SCROLL]FVME_R_MARGIN         - Inside rieht margin for widgets in 
 *à $         ¨      "   (  $     `  a scroll fra}e
 * ` SCRNLL_FRAME_T_MARGIN         - I.side top mapgiÎ ab/ve fhrst widget 
 *   SCRNLL_FPAME_B_MARGIN!        - Inside bottom margin below last widgut 
 *   
 *   SCROLL_FRAME_2H_MARGIN       (- Both horizontal margins
 *   SCROLL_FRAME_2V_MARGIN        - Both vertical margynsM
 */













/*
 *   BUTTO^S
 *
 *
 *   Create two buttons in a small foRm.  The jutton on the left is a
 *   dufault button. (Use!2hamf" size buttonc.
 *
 *  `   ui_button_creape ( form_id, "ccllback",              @
 *     $                (  BUTTON_@ALF]X_LOC1,               @
 *             $           y_loc,                            @
 *                         BUTTON_WID_HALF,                  @
 *         (               0.0, "Legt Button",               @
 *  `                      TRUE, ÔRUE ) Š *
 *$     y_loc = y_loc + BUTTON_Y_OFFSET
 *
 *      ui_`utton_#reade ( form_iD, "callback2$           $  @
 ª           (             BUPTON_HALF_X_LOC2,               @
 *                         y_loc,        " (                 @
 (   `                     BUTTON_UID_HILF,                $$@
(* $        $!`            0.0, "Right Buttïn","             @
 *                    0    TPUE, FALRE )  (
 *      y_loc = x_lOk + BUDTON_Y_OFFSET +                    @	
 *                      BUTTON_HGT +    (              0     @
 *                      INTER_SIDGET_SQACE
0*
 * *   B}ôpon Widths and HeiGhts:
 *
 *   BUTTON_WIE_FULL    0          - Width of a wide button on a small form
 *   BUTTON_WID_HALF           (   - Width oæ a medyum button on a smanl fïrm
 * 0 BUTTON_WID_THIRD          0   - Width of a"small bqtTon on a!smgll fmrm
 *
 *   BUDTONWID_FULL_NT   (        - Width of a nmn_troughed 7ide button!on
$*  ! !      (                      `a small form
 ª   BUTPMN_WID_ÈALF_NT0         ° -`Vidth of a non_troughel melium button on
 *   0              `             $  a small form
 *   BUTTON_WID_THIRDNT           - Whdth of a non_trouGheD small button on
 *                    `   $          a small fopm
 *
 *   BUTTON_ÈGT!  0    "(          !Bõtton height
 *   BUTTON_DEFAULT_HGT         0  - Tefault button `eight (includes top and
 
  `    0              0$           bottom borders)
 *   BUTTON_HGT_T    !            - Button height of non_proughed button
 

 * ! bUTTON_DEFAULT_BORDER_WID     - Default b}tton border wkdth
 *   BUTTON_EEFAULt_BORDER[ÈGT     - Default button border hgéght
 *
 *
 *   Button Locatiol Offsets:
 *
 * 0 @U\TON_IN_FRAMD_X_OFFSET   0  m X nffs`t for$placing butvons inside
 j                         $         frales using the X Positioos definedM
 *!                                  below
 *Š *   BUTTON_1XTRA_WID`             -$X whd4h for ond trough for user placement
(*       0   `(       (       ( !    of troughed bqttons.
 *`  BUTTON_2XTRA_WID           !  - X wiDth for uwo troughs for u{er placemenT
`*        0 "" (                     of uro5ghed buttojs.
0*
 *   BUÔTON_Y^OFFSET    (          - Y offceT for placing a non-highlighted 
 *        $     "                    button next to a highlightEd button
 *   ÂUTTON_YOFFSET_JT            - Y offset for placing a$fnn-highlighted 
 *           (                       b7tton next to a highlighted `utton
(*
 *   BUDTON_LABEL_Y_OFFRET         - Y offset for placing a labe, to the right
0*                                   ob ` rqt|on
 *   BUTTON_DEFAULT_LABEL_Y_OFFSET , Y offset for placing á label to the right 
 *                                   of a default button
 *   BUVDN_LABEL_Y_OFFSET_NT      - Y"offset for placing a label to the òight
 *   $     !                 !       of a non_troughed button
 *
 *
 *`" Button X Po{itions: *
 *   BUPTON_FULl_X_LMC1            - Gidd button on the left
 *   BUUTON_HAHF_X_LOC!            - MeDium butt+n on the left
 *   BUTTON_HADN_X_LOC2            , Medium`button on the right
(*   BUTTON_THIRD_X_LOC1 0  `     0- Small buôton on the left
 *   BUTTON_THIRd_X_MOC2(      (   - Small button centered
 *$  BÕTTON_DHIRD_X[LOC3     `   ` - Small bõtton on"the right
 *
(*   ÂUUTON_FULL_X_LOC1_COD2       - Wide buttoN mn the left og cOlumn 2
 *   BUTTON_HELF]X_LOC1_COLr       - Medium button oî!the left of coluin 2
 *   BUTTON_HAlF_X_LGC2_BOL2       - MEdium btvton on the right of column 2
 *   UTTON_THIRD_X_LOC1_COD2 `    - Small buvton of the left of coluin r
 *   BUTTON_THIRD_X_LOC2_COL2  8   - Small button centered of`column 2
 *   BUTTON_THIRD_X_HOC3_COL2      - Sm`ll button On the`right of coluMn 2	
 *
 *   BUTTON_FELL_X_\OC1_COL3       - ×idå button!on the left gf column 3
 *   ÂUTTON_HALF_X_LOC1_COL3       - Medium button on phe left$of column  *   BUDTON_HALF_X_LOC2_CKL3       % Medium button on the right`of cnlumn 3* *   BUTTON_tHIÒD_X_LOCq_CO3   (   Small$buttoN on the legt of column 3
 :   BUTTONßTHHRT_X_LOC2_COL3  "   - Smalh button centered!of column 3
 *   BUTTON_THIRD_X_LOC3_COL3      - [mall button on the òight of col|en ³
 *
 *  0BUTTON_FULL_X_LOC1_SPL$       - Wide bõtton centered on ! special fmrm
 *   BUTTON_XAlF_X_LOC1_SPL        - Íedium button on ôhe left of a special form
 *   BUTTON_HALF_X]LOC2_SPL        - Meäium button on th% right of ` special forM
 * , BUTTON_THIRD_X_LOC1_SPL       -0Small jutton oo the left of a special form
 *   BUTTON_TXIRDßX_LOCr_SPL       - Wmal, button centered oF a!specian0form
 *   BUTTONWTHIRL_X_LOC2_SPL       - Small button on the right of a speãial form
 *
 *  `BUTTON_FULL_X_LOC_CEN         - Centered gide button on a smaHl fobm
 *  (BUTTON_HAÌF_X_LOC_CEN         -(Centered medium button on a small form *   BUTTON_THIRD[Ø_lOC_CEN        - Centesed small button`on a small Form
 *
 *   BTT\ON_FUNL_P_LOC_CEN_MED$    - Centered wide butto.0On a medium form 
 *   BUTTON_HALF_X_LOC_CEN_MED     - Centered med)um b4tton on a mgdium vorm 
 *   BUTTON_THIRD_X_LOC_CEÎ_MED    - Ce~pered smalL buTton on a mgdiui form 
 "J *   CUTTÏN_FULL_X_LOC_CEN_LRG     o Centuved wide button on a large form 
 *   BUTTON_HÁLF_X_LOB_CEN_LRG     , Centered medium buttoN oo a large forM 
 *   BUTTON_THIRD_X_L_C_CEN_LRG!   - Centered qm!ll button"on a large form 
 *
 *   BTTTON_DULL_X_LGC_CEN_SPL $  (-$Centere% wife âutton on a sðecial form 
 *   BUTTON_HALF_X_LOC_CEN_SPL "   - Ce.tered mudiUm  utton on a special bopm 
 *   BUTTON_THIRD_X_LOC_CEJ_SPL    - Centeved smAll âutton on a special form 
 */


J
















/*
 *   DATABOXES
 *
 *
 *   Create a framed databox with a label above the databoxn  Thfn * 0 compede the Y location fmr the next widget inside the frámen-
 *-
 *      yOfr`me_noc = FRAME_T_MARGIN
 *
 * ,    ui_d1tabox_create ( frame_id, "",       `   "        @
 *      8          !        FRAME_L_MASWIN,    (             A
 *                      0   y_frame_loc, 0.0,       (     !   
 *            !         !   DBNX_WIF_SINELE,     0           P
 *     " `        ! (      0"Databmx Label", valuå,   $      @
 *                       0  TRUEl datatxpe, numOvaLs )
 *`*      y_frame_lOc = y_fraíe_loc +"  ¡                      @
 *                    DBO_HGT_LABOVI +               ( 0    @
 *           ` $      INTER_×IDGET_SPACE
 *                      
 * *   Create a framed dAtabox with a labEl to!the side. 0Use ôhe 
 *   default laBel lgngth dor a single co,umn databkx and compute . $ the databx!width.M
 *
 *      y_fraMe_loc = FRAME_T_MARGIN
 *
 *      wid = DBOX_×ID_SINGLE -  !   !    "                  @
 ."  $ ! $    DBOX_LABEL_LEN_SINGLG
 *   
 *  `
 *      ui_databop\sreate ( frame_id, "",     (          0   @
 *     `              !     FRAMG_L_MARGIO,         "        @
 *                  !      xOærame_lok,                  "$ @
 *         "   !            DBOX_LABEL_HEN_SINGE-  0        @ 
                          ÷id,    `     (                  @* *            0             "Databïx Ìabel", value,          @
 *                      0   FALSE, datatype, num_v!ls )* * (
 * ( Databox Widtx and Height:
 *
 *   DBOX_WIÄ_SINGLE        - Width of a`single sidth databo8  0
 "   DBOX_WID_SPECIAL$      - Widvh od a cpecial width databex0  
 *   DBOX_WID_DOUBLE (      - Width`of a double width databox   
 *   EBOX_WID_TRIPLE        - Width of c triple width data`ox   
 *
 *   DBOX_HGT_LABOVE        - Height of a dadabox with a label on the tmp
 * 0          `           `   (eöen if the labal is blank)
 +   DBOX_HGT_NO_LABOVE     -!Height of a databox with a label to the side
 *
 *   LBOX_LABEL_LDN_SINGLE  -!Default lAbel0l%ngth for a single width databox
 *         0     (     (      (usdd when "label_above"0is falóe)
 *   DBOX[HABEL_LEF_SPECIAL - Default label length for a(speciql width dat!boz
(*   DBOX_LBEL_LEN_DOUJLE$ - Tegault label lEngth for a double widt`"databox
 *   DBOX_LABEL_LEN_TRIPLE  í Defauld label lengtl fos a triple"width databox
 (	
 *(  ÄBOX_LABEL_HOOFFSAT    - RUM_VED
 *   DBOX_LAEL_Y_OFFSET    - Y offsd| for placing a label to tje right of
 *          !                 a databox wiôh "labelabove¢ f!lSe.
 */






/(
 * " FILES
 *
 *M
 *   Breate a!form centgreD under tèe main menu that has a`file* *   widgut inside the a frame.  The file widGet is placed a6
 *   ( 0.°, 0.0 ) insidå the fsame (a top margin és not needed).Š *   the height nf the file widget incl}des A bottOm -arghn *   and thereæorg can be usmd as phe height of the frame that
 *   coftains the file wi$get.  The!fale widget has$5 lines in 
 .   the lirt boxes.
 * *      form_hgt = FILE_5L_HGT + FORM_2V_MARGIN + FRAME]2EDGE
 *      x^loc = WINDOW_CEF_X_LOC - 0.5 * ( wid!+ FOVL_2H_BORDER )
 *      yOloc = WINDOW_CEN_Y_LOC - 0.5 " ( form_het + FORO_2VBORDER0) *
 *      form_id!= ui_form_create( "", x_lob, y_loc, "UL",   $@
 *       0         0       `      ÷id, form_hgt             @
 *                $               "Form Lebal", "" )
 *
 *      frame_id = ui_fraíe_creAtå( form_)d, "",         !   @
 *           !                     !FORm_L_MARGIF,           @
 *               $                  FORM_T_MARGIN,           @
 * $                                FRAME_WID_SPECIAL, !   ( @
 *             (           !        FILE_5L_HGT( "" )
 *
 *      file_id = ui_dile_create( frame_id "",              @ * $           "                  .0, p.0,      !    `      @
 *                  $          "  FILE_WID_ÓPECIAL, 5,   8  !@
 *                                "Fiìter Label",  0         @
 *      $                 b       "Filter Mask", $  0        @
 
           !             0    0  Files Label",       0     @ *   (              "       0     "Directnry0Label", 0       @
 *                                "FilEs Lajem",$ !          @
 *    !      $      (             "Selection Label", $       @ *          $    (   (            "Default Selcction".       @
 *     (                          "Left Butt/n Label",       @
 *                  "            ""Right Bttton Label" )
 *
 *
2*(  Dile Width:
":
 "   FILE_WID_SINGLE     - Width ?f a!sIngle width file widgEt
 +   FILE_WID_SPGC	AL    m Width gf a special width file widggt
 *   ILE_WID_DOEBLE     - Wifth of a double width file w)dget
 *   FILE_WID_TRIPLE  "  ­ Width o& a&tòiple width file wadgetM
 *
 * 0 File Height:
0*
 *   FILE_1L_HGT 0       - Height of a 1 line file whdgeu
!*   FILEW2L_HGT       ` - Height of a 2 |ine file wid'%t
 ª`  FILE_3L_HGT "       - HeiGht of a 3 line file widget
 *   FILE_4L_HGT         - Height ïf ` 4 line filo widget
 *   FILE_5l_hGT         = HEight of a 5 line file w)dget
!ª   FILE_6L_JGT         - Heig`t of a 6 line fi,e wiäGet
 *   FILE_wH_HGT      2  - Height Of!a 7 linm file widget
!*   FILE_8L_HGT       ( - Height on ! 8 line file widget
 *   IME_9L_HGT         - Htight of a 9 line file widget
 *   FILEOHGTWINCS       - )ncrement &or makinG bigger fIle"widgets *?


/* *   LABELS and INFO ÉNDENTS
 *
 *
 *   Create a libel inside a frame and phen0compute the y location
 j   of the next widget inside the fraMe.
 *
 *      y_frame_loc = FRAM[T_MARGIN
 *
 *      uh_dabelWcr%ate ( fpame_id, "",0                     @
 *                       "FRAME_LMARGIN,        8        "  @
 *                        y_frame_lgc.              "        @
 *       (                "A Label"`)
 *
 "      i_frame_loc = y_frame_loc +       ` ( 4          0   @
 * "                  LABEL_HGT +      $     `               @
 *          "       ! iNTER_WIDGET_SPACE
 *
 *
`*  (Label Height:
 *
 *   LYBEL_HGT        - Height of a label
 *   L@BEL_Y_OFFSeT   -!Y nfbset ob label
 *   LABEL_HGT_TIÇHT  - Jeight0of a label when sho7ing m5ltiple "                      l`Bels
 *
 *`  INFO_INDENT      - X location oæ inbormat)mn labdl
 "   INFO_INDENT_COL1  X locatioo of inform`tion label in column 1
 *   IFFO_INDENT_COL6 -"X location of iNformation label in column 2
 ª ( MNFO_YNDENT_COL3 - X location of informatéon label in column 3
 *?



M
/*
 *   LISTBOXES
 *
 *
 
 ! crea|e a framed thru% line listbox with a label abovu"the`listbox.  Nnte
 *  *that the widths and heigh4q includå tje vertical aod `orizontal sliäers.
 *
 *      y_frame_loc = FSAME_T_MARGIN
 *
 *      uißlistcox_create0( frameWid, "callback",            @
 * ((       0    (          FRAME_L_MARGIN,           `   (  @
 *      (         $      `  yframe_loc,                     @
 *                          LBNX_WID_SINGLEm  0               
 *              "  0        3, "Liqtbox Label",    (    !    @
 *                          selectiOo_vype, sort_flag )
 *
 *!     y_frame_loc } y_frame_doc +          `               @
 *      !  (  (       LBOX_3L_IFTLEBOVE +      !    `       @
**           "        INTER_WMDGET_SPACE
 *
 *
 :   To detdriine dhu ieight for a six line listbox, add the variable
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





CLASS STX_input_param

/* Classwide Variables */


CLASSWIDE WIDGET form_id, label_01, optmenu_01, optmenu_02, sep_01
CLASSWIDE WIDGET label_02, datbox_01, sep_02, label_03, datbox_02
CLASSWIDE WIDGET sep_03, label_04, datbox_03, datbox_04, sep_04
CLASSWIDE WIDGET label_05, datbox_05, sep_05, button_01, button_02
CLASSWIDE WIDGET label_06, datbox_06, datbox_07, sep_06
CLASSWIDE WIDGET item_01, item_02, item_03, item_04, item_05
CLASSWIDE WIDGET item_06, item_07, item_08, item_09, item_10
CLASSWIDE WIDGET optmenu_03, item_11, item_12, item_13, item_14, item_15
CLASSWIDE REAL usr_inform(5)


FUNCTION init()
REAL box_length=0.0
REAL yloc_main


form_id=ui_form_create( @
/* callback */"", @
/*     x    */uil_form_sizes.form_x_loc( 1 ), @
/*     y    */uil_form_sizes.form_y_loc( 1 ), @
/* position */"UL", @
/*   width  */uil_form_sizes.form_wid( 1 ), @
/*  height  */uil_form_sizes.form_hgt( 1 ), @
/*   label  */"Input Parameter", @
/*  unused  */"")


yloc_main = uil_form_sizes.form_margin( 3 )


label_01=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Edge Constraints Factor")


yloc_main += uil_form_sizes.toggle_data( 3 ) + @
uil_form_sizes.spacing( 8 )


optmenu_01=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   callback   */"cb_edgea", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.4, @
/*     label    */"Edge-a :", @
/*  label_above */FALSE)


yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
uil_form_sizes.spacing( 8 )


item_05=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"1.0", @
/*    label   */"none", @
/* toggleable */TRUE)


item_01=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"1.3", @
/*    label   */"floors, deep girders", @
/* toggleable */TRUE)


item_02=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"1.21", @
/*    label   */"build up, rolled angle", @
/* toggleable */TRUE)


item_03=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"1.1", @
/*    label   */"bulb plate", @
/* toggleable */TRUE)


item_04=ui_item_create( @
/*   parent   */optmenu_01, @
/*    name    */"1.05", @
/*    label   */"flat bar", @
/* toggleable */TRUE)




optmenu_02=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   callback   */"cb_edgeb", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.4, @
/*     label    */"Edge-b :", @
/*  label_above */FALSE)


yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
uil_form_sizes.spacing( 8 )


item_07=ui_item_create( @
/*   parent   */optmenu_02, @
/*    name    */"1.21", @
/*    label   */"build up, rolled angle", @
/* toggleable */TRUE)


item_06=ui_item_create( @
/*   parent   */optmenu_02, @
/*    name    */"1.3", @
/*    label   */"floors, deep girders", @
/* toggleable */TRUE)


item_08=ui_item_create( @
/*   parent   */optmenu_02, @
/*    name    */"1.1", @
/*    label   */"bulb plate", @
/* toggleable */TRUE)


item_09=ui_item_create( @
/*   parent   */optmenu_02, @
/*    name    */"1.05", @
/*    label   */"flat bar", @
/* toggleable */TRUE)


item_10=ui_item_create( @
/*   parent   */optmenu_02, @
/*    name    */"1.0", @
/*    label   */"none", @
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


label_02=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Corrosion Margin")


yloc_main += uil_form_sizes.toggle_data( 3 ) + @
uil_form_sizes.spacing( 8 )


box_length = uil_form_sizes.dbox_wid( 1 ) - @
0.5


datbox_01=ui_databox_create( @
/*    parent    */form_id, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.45, @
/*  box_length  */box_length, @
/*     label    */"Tc = ", @
/*     value    */0.0, @
/*  label_above */FALSE, @
/*   datatype   */"REAL", @
/*   num_vals   */1)


yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
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


label_03=ui_label_create( @
/*  parent  */form_id, @
/* callback */"", @
/*     x    */uil_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   label  */"Yield Stress [Mpa]")


yloc_main += uil_form_sizes.toggle_data( 3 ) + @
uil_form_sizes.spacing( 8 )


$ box_length = uil_form_sizes.dbox_wid( 1 ) - @
$ 0.5


$ datbox_02=ui_databox_create( @
$/*    parent    */ form_id, @
$/*   callback   */ "", @
$/*       x      */ uil_form_sizes.form_margin( 1 ) * 3.0, @
$/*       y      */ yloc_main, @
$/* label_length */ 0.45, @
$/*  box_length  */ box_length, @
$/*     label    */ "Sigma_y = ", @
$/*     value    */ 235., @
$/*  label_above */ FALSE, @
$/*   datatype   */ "REAL", @
$/*   num_vals   */ 1)
$
$ yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
$ uil_form_sizes.spacing( 8 )


optmenu_03=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   callback   */"", @
/*       x      */uil_form_sizes.form_margin( 1 ) * 3.0, @
/*       y      */yloc_main, @
/* label_length */0.6, @
/*     label    */"Sigma_y =", @
/*  label_above */FALSE)


yloc_main += uil_form_sizes.optionmenu_data( 3 ) + @
uil_form_sizes.spacing( 8 )


item_11=ui_item_create( @
/*   parent   */optmenu_03, @
/*    name    */"235", @
/*    label   */"235", @
/* toggleable */TRUE)


item_12=ui_item_create( @
/*   parent   */optmenu_03, @
/*    name    */"265", @
/*    label   */"265", @
/* toggleable */TRUE)


item_13=ui_item_create( @
/*   parent   */optmenu_03, @
/*    name    */"315", @
/*    label   */"315", @
/* toggleable */TRUE)


item_14=ui_item_create( @
/*   parent   */optmenu_03, @
/*    name    */"355", @
/*    label   */"355", @
/* toggleable */TRUE)


item_15=ui_item_create( @
/*   parent   */optmenu_03, @
/*    name    */"390", @
/*    label   */"390", @
/* toggleable */TRUE)


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


$ label_04=ui_label_create( @
$/*  parent  */ form_id, @
$/* callback */ "", @
$/*     x    */ uil_form_sizes.form_margin( 1 ), @
$/*     y    */ yloc_main, @
$/*   label  */ "Hole Factor ( c , d )")
$
$ yloc_main += uil_form_sizes.toggle_data( 3 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ box_length = uil_form_sizes.dbox_wid( 1 ) - @
$ 0.5
$
$ datbox_03=ui_databox_create( @
$/*    parent    */ form_id, @
$/*   callback   */ "", @
$/*       x      */ uil_form_sizes.form_margin( 1 ) * 3.0, @
$/*       y      */ yloc_main, @
$/* label_length */ 0.45, @
$/*  box_length  */ box_length, @
$/*     label    */ "c = ", @
$/*     value    */ 0., @
$/*  label_above */ FALSE, @
$/*   datatype   */ "REAL", @
$/*   num_vals   */ 1)
$
$ yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ box_length = uil_form_sizes.dbox_wid( 1 ) - @
$ 0.5
$
$ datbox_04=ui_databox_create( @
$/*    parent    */ form_id, @
$/*   callback   */ "", @
$/*       x      */ uil_form_sizes.form_margin( 1 ) * 3.0, @
$/*       y      */ yloc_main, @
$/* label_length */ 0.45, @
$/*  box_length  */ box_length, @
$/*     label    */ "d = ", @
$/*     value    */ 0., @
$/*  label_above */ FALSE, @
$/*   datatype   */ "REAL", @
$/*   num_vals   */ 1)
$
$ yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ sep_04=ui_separator_create( @
$/*   parent   */ form_id, @
$/*    name    */ "", @
$/*      x     */ 0.0, @
$/*      y     */ yloc_main, @
$/*   length   */ uil_form_sizes.form_wid( 1 ), @
$/* horizontal */ TRUE)
$
$ yloc_main += 5*uil_form_sizes.pixel_size( 2 ) - @
$ 0.5*uil_form_sizes.spacing( 8 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ label_05=ui_label_create( @
$/*  parent  */ form_id, @
$/* callback */ "", @
$/*     x    */ uil_form_sizes.form_margin( 1 ), @
$/*     y    */ yloc_main, @
$/*   label  */ "Hull Girder Stress")
$
$ yloc_main += uil_form_sizes.toggle_data( 3 ) + @
$ uil_form_sizes.spacing( 8 )
$
$ box_length = uil_form_sizes.dbox_wid( 1 ) - @
$ 0.5
$
$ datbox_05=ui_databox_create( @
$/*    parent    */ form_id, @
$/*   callback   */ "", @
$/*       x      */ uil_form_sizes.form_margin( 1 ) * 3.0, @
$/*       y      */ yloc_main, @
$/* label_length */ 0.45, @
$/*  box_length  */ box_length, @
$/*     label    */ "Sigma_h = ", @
$/*     value    */ 10., @
$/*  label_above */ FALSE, @
$/*   datatype   */ "REAL", @
$/*   num_vals   */ 1)
$
$ yloc_main += uil_form_sizes.dbox_hgt( 2 ) + @
$ uil_form_sizes.spacing(`8 )
$$ sep_05=ui_separa|or_create( @
$/*   parent   */ frm_ie, @
$/*    name    *0"",`@
&/
      x     */ 0.0,(@
$/*      y$    */ yloc_mqinl @Š$/*   length   */ õil_form_sizes.form_wid( 1 ), D
$/* horizontam * TRUE)
$
4 q,oA_main += 5*uil]form_sizes.phxel_size 2 ) -`@
$ 0.5*uil_form_sizås.spacyng( 8 ) + @$ uil_form_sizes.sxacing( 80)


label_06=ui_labeì_create( @
/* `parent !*/form_id, @
/* callback */b", @
-* 0   x    */ual_form_sizer.form_mapçén($1 ), @
/*     y  ( */yloc_main, B
/*   labe,  */"Iteration Factor")

yl/c_main += uél_form_sizes.toggle_data( 3 ) + @
uil_form_sizes.spácing( 8 )


box_length = uil_form_sizes>dboX_wid( 1 9 - @0.5


`atbox_16=ui_databox_create( @
/*    parelt    */For}_id, @
.*   callback   */"",`@
/*   `   x      */õil_formßsizes.form_margin 1 ) * 3.0, @
/*       y      */yhoc_mi)n, @
/* label_len'th */0.7, @
/*  box_length  ª/box_lengtè, @
/*     lacel   @*o"sáfty facTor : ", @
/*     vaLue    ª/1.0, @
/(  label_above *?FAlSE, @
/*   data4ypE   *."REAL", @/*   num_6als"` */1)


yloc_main += uil_form_sizes.Dbox_hgt* 2 ) + @
ñil_form_syzms.spacing( 8 )


$ box_length = ual_formZsizes.dbox_wid( 1`) = @
$ 0.5
$
$ dat`ox_0·9ui_databox_create( @
$/*    paRent    */ form_id, H
$/*   callback   */ "", @
$/*       x      */ uil_form_sizds.form_oargin( 1 ) * 3.0, @
 /*       y      */ yloc_íaio, @
$/* label_lengd` *+ 0.7, @$/*  box_lenwth (*/ box_length, @
$/*     label(   ª¯ "corrosion mazgin : ", @
$/*     value    */ 2.0, @
$/*  mabel_cbmve */ FALSE, @
$/*   datitypm   */ "REAL", @
$/*   ntm_vals   */ 1)
,
$ yloc_main += uil_form_sizes.drox_hgt) 2 ) + @
$ uil_form_sizes.spacing( 8 )M

M
sep_06<ui_separator_creaue( @
/*   parenp   */fosm_id, @
/* `  nale $  */"", @
/* "    x$    *-0.2, @
/*    ! y     *'ylc_main, @/"   length   */uil_fïrm_sizes.form_÷id( 1 ), @*/* hïrizontbl "/TRUE)


ylgc_maIn +=05*ui,_form_sIzgs.pixel_rize* 2 )0- @
0.5*uil_form_sizes.spacing( x ) + @
uilßform_sizes.spacing( 8 )


button_019ui_buTton_kriate( @
/*  $pabenô  *form_id, @
/*  ca|lback */"cd_apply*, @
/*     x     */uil_form_sizes.buttof_x_|oc1( 2 !, @
/*     y    !*:ylocÝmain, @
/*"  width   */uil_formsizes.button_wid( 2 ), @
/*   ègight  */ui|_fOrm_cizes.button_`gt( 2 )( @
/*   label   */"Apply", @*/*    TRUE   */TRUE, @
/* highlight */FALSE)


bttton_0²9ui_button[create( @
/*   parelt  
/form_)d, @
/*  callback */"cb_cancel", @
+*     x  !  */uil_form_sizes.button_x_noc1 3 ), @
/*     y     */ylog_main- D
/*   width   */uil_form_sizes>buTtmnOwmd( 2 ), @/*   height  */uil_form_cizes.button_hgth 2 ), @Š/*   label   */"Cancel", @
/*(  (TRUE  (*/TRUE,$@
/* `ighlight */FALSE)

	
9Loc_main += uil_form_sizes.button_hct( 2 ) + @
uil_form_sizer.spac)ng( 8 )


ui_wid_set(form_id,"HEIGHT",ylo#Wmaij)


ED FUNCTION/*()nit */
*
NUNCTION dirplay()
ui_fozm_display("SX_ilputßpqram")
END FUNCTION/* display */-


FUNcTION cb_edgeahnaie)
/*
 * This$hs c callback`fr the(optionmenu na-ed optmenu_ 1
 */

STRING namm[]


ENÄ FUNCTION/ª cbßedgea */


FUNCTIOo(cb_edgåb(~ae%)
/** * This is ! callb!ck for the optiofmenu named optmenu_02
 ./

STRING name[]J

END FUNCTION/* cc_edgeb */


FUNCTION cd_apply(	


STRING selecteäItem1[20], selectedItem2[20]
	
uh_wid_get( optmenu_01, "VALUE", selectedItem1 )
usz_inform(1))= str^4o_real ( selectedItem1 	

ui_wid_get( op4melu_02, "VALUE", selectedItem2 )
usr_info2m(21 = stb_to_real ( selectedItem2 )
	
ua_wid_ge4( datbop_01, &VALUD", usr_inform(3) )


ui_wi$_get( optmenu_0s, "VALUEb, selectedItem1 )
usr_inform(4) - str_to_real ¨ selectedItem1 )

$ ui]wid_get, datbox_06, "vALUE", usr_inform(4) 	
ui_wid_gåt( dAtboh_06, "VALUe", usbinfgrm5) i
$ ui_wid_get( da0`ox_04, *VALUG", usr_inform(6) )
D ui_wid_gdt( datbox_05, "VALUE", usr_inform(7) )Š$ ui_wid_get( datbox_p6, "VAMUE", usr_inform(<! )
$ ui_wid_get( datbox_07, "TALUE", uñr_inform(9) )

ui_form_hide("STX_inptt_param")


END FUNGVION/* cd_applx */


fUNCTION gmtUsrInfo()
	
return usr_inform


EÎD DUNCTION
FUNCTIMN cb_cancel()
Šui_wid[resto2e( "STX_inbut_Param" )
ui&orm_hide( "[TX_inðut_param" )

UND FUNCTION?* cb^cancel */


DND CLASS'* STXOinput_param */
