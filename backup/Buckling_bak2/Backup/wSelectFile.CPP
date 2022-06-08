
/*$$   ANALYSIS -  Select an Output File Name   */
/* 
  *  Purpose:
  *     Create the Analysis Select File Form for use by the Analysis
  *     Import Model and the Analysis Import Results Forms for the
  *     Miracle analysis code. 
  *
  *  Input:
  *     <none>
  *
  *  Output:
  *     <none>
  *
  */


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
 *   BUTTON_THIRD_X_LOC_CEN        - Centered small button on a small form
 *
 *   BUTTON_FULL_X_LOC_CEN_MED     - Centered wide button on a medium form 
 *   BUTTON_HALF_X_LOC_CEN_MED     - Centered medium button on a medium form 
 *   BUTTON_THIRD_X_LOC_CEN_MED    - Centered small button on a medium form 
 *
 *   BUTTON_FULL_X_LOC_CEN_LRG     - Centered wide button on a large form 
 *   BUTTON_HALF_X_LOC_CEN_LRG     - Centered medium button on a large form 
 *   BUTTON_THIRD_X_LOC_CEN_LRG    - Centered small button on a large form 
 *
 *   BUTTON_FULL_X_LOC_CEN_SPL     - Centered wide button on a special form 
 *   BUTTON_HALF_X_LOC_CEN_SPL     - Centered medium button on a special form 
 *   BUTTON_THIRD_X_LOC_CEN_SPL    - Centered small button on a special form 
 */





















/*
 *   DATABOXES
 *
 *
 *   Create a framed databox with a label above the databox.  Then
 *   compute the Y location for the next widget inside the frame.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_databox_create ( frame_id, "",                    @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc, 0.0,                @
 *                          DBOX_WID_SINGLE,                 @
 *                          "Databox Label", value,          @
 *                          TRUE, datatype, num_vals )
 *
 *      y_frame_loc = y_frame_loc +                          @
 *                    DBOX_HGT_LABOVE +                      @
 *                    INTER_WIDGET_SPACE
 *                      
 *
 *   Create a framed databox with a label to the side.  Use the 
 *   default label length for a single column databox and compute
 *   the databox width.
 *
 *      y_frame_loc = FRAME_T_MARGIN
 *
 *      wid = DBOX_WID_SINGLE -                              @
 *            DBOX_LABEL_LEN_SINGLE
 *   
 *   
 *      ui_databox_create ( frame_id, "",                    @
 *                          FRAME_L_MARGIN,                  @
 *                          y_frame_loc,                     @
 *                          DBOX_LABEL_LEN_SINGLE,           @
 *                          wid,                             @
 *                          "Databox Label", value,          @
 *                          FALSE, datatype, num_vals )
 *
 *
 *   Databox Width and Height:
 *
 *   DBOX_WID_SINGLE        - Width of a single width databox   
 *   DBOX_WID_SPECIAL       - Width of a special width databox   
 *   DBOX_WID_DOUBLE        - Width of a double width databox   
 *   DBOX_WID_TRIPLE        - Width of a triple width databox   
 *
 *   DBOX_HGT_LABOVE        - Height of a databox with a label on the top
 *                            (even if the label is blank)
 *   DBOX_HGT_NO_LABOVE     - Height of a databox with a label to the side
 *
 *   DBOX_LABEL_LEN_SINGLE  - Default label length for a single width databox
 *                            (used when "label_above" is false)
 *   DBOX_LABEL_LEN_SPECIAL - Default label length for a special width databox
 *   DBOX_LABEL_LEN_DOUBLE  - Default label length for a double width databox
 *   DBOX_LABEL_LEN_TRIPLE  - Default label length for a triple width databox
 *
 *   DBOX_LABEL_X_OFFSET    - REMOVED
 *   DBOX_LABEL_Y_OFFSET    - Y offset for placing a label to the right of
 *                            a databox with "labelabove" false.
 */






/*
 *   FILES
 *
 *
 *   Create a form centered under the main menu that has a file
 *   widget inside the a frame.  The file widget is placed at
 *   ( 0.0, 0.0 ) inside the frame (a top margin is not needed).
 *   The height of the file widget includes a bottom margin
 *   and therefore can be used as the height of the frame that
 *   contains the file widget.  The file widget has 5 lines in 
 *   the list boxes.
 *
 *      form_hgt = FILE_5L_HGT + FORM_2V_MARGIN + FRAME_2EDGE
 *      x_loc = WINDOW_CEN_X_LOC - 0.5 * ( wid + FORM_2H_BORDER )
 *      y_loc = WINDOW_CEN_Y_LOC - 0.5 * ( form_hgt + FORM_2V_BORDER )
 *
 *      form_id = ui_form_create( "", x_loc, y_loc, "UL",    @
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
 *   SDBOX^LEBEL_8_OFFSEt   - RELOVED
`
   SDBOY_LABEL_X_OFFSEV   - Y ofÊset dor lacing a label to the right
 *          (`          !     of a seleCT databox`with "labelabove" false.
 */
J






/*
 *   SLIDEBAZS
 *
 ™
 *   Cseate a slidebar inside a frame and then compute the y locationç
 *   of the jext widedt insiee the fr!me
  The Ûlidebar has a label
 *   a2 well a3 min/max labEÏS avove ‰he displayed values.
 
	
 *    ! y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_slidebar_create ( fzamg_id, "callback¢,      $    @
 *          `    ! !        !FRCME_L_MARFIN,  (              @
 *                           yﬂÊrame_loc,                    ¿
 * †                       ` SLIER_WID_SINGLE,            ( @
 *         "                 "Slidebar Larll", vadue,    0   @	J`j     !             0 0    (num_dagits,(TRUE, "Min", "Maz", @
 *        "       !     !    TRUE, 0,(10 )                   @
 *
 *      Y_frime_loc = y[frame_loc"+  "  `  °               0 P
 * `(          °   `  SLADER_HGT_COMPLETE +  `                
 *                    INTER_WIDGET_SPACE
 *
 *
 *   Sliderbaˆ Width and Height:
 *
 *   SLIƒER_WID_SINGME0     "    - Width of a {incle width slydeb!v
 *  `SLIDER]WID_SPECIAL          - Width of a special width slidebar
 *   SLIDER_WID_DOUBLE         ! - Width of a doub,e width {,I`ebar
 *   SLIDER_WID_TRIPLM           -2Width of a tRiple width sladerar
 *
 *   SLIDER_HOTCOMPLETE         - HeiGht od slidebar with min/max labels,
 
                              (  the valqes showj and a labeh below the 
 *                        !        slidebar
 *   SLIDER_HGTﬂMINMEX    !      - HeighÙ of slilebar with min/max Ïabels only
 *   SLIDER_HGT_VALUES    `      - Height of wlidebab with values only
 *   SLIDER_HGT_LABEL    "       - Ieiwht of slIdebar!with lqbel only0(valueS 
 :0    `     `   !                 no4 shown i.d no min/max labels)
 *   SLIDER_HGT_MINMAX_VALUES    - Height ofprlidebar witH -in/max labels Aj$
"*           †              "$     values shown (no lAbel)
 *   SLIDER_HG‘_MINAX_LABEL     - H%ight of"slidebar with lhn.max labels and
 *†          0                     · label below slkde"ar (values not sxown) *   QLIDERﬂHGL_VALUES_LABEL     - Height of wlidebar wmth values rhown and
 *                        "        a ,abel$be,ow the slidebar (no(min/max 
 * †                     p         labels)
 *   SLIDER_HGT_BAR_OLY   (     - Height od just the slidebar
 *
 * 0 SLIDEB_LABEL_Y]LOC_MM_VAL   - Locatioo of label to sÈde od slideber when
 *                                 the rlidebar hac†both min/max Ïabels and
 *                                 valueS
 *   SLIDER_LABEL_[_LOC_MINMA\   - Location of label tk site of slidebAr hen
 *       `          !  `           thg slÈdebar har onny min/max labels
!*  0SMIDER_LABEL_Y_LOC_VALUES0  - Locqtion of labeÏ to side†of slidebar when
 * $                    `    (     the slidebar has only values 
 +   SLIDER_LABELZY_LOC_BAR_OFLY , Loc`tion of larel to sIde of sÏidebaÚ when
 *                     ∞           the slhdebar has ngither }in/max labels
 *               $          !      n/r values
 */


	


/*
(*   TReADSLEETS
 *
 *
 *   Create a sprÂadsheet yn a norm& 
"j
 *
 *   ”pReadsheet Widths†and Hmifhts:
 * *   SPRE¡DSHEET_WIL_SINGLE    - Wid4h`of"a single uidth selebt0fr!meç
 * " SPRE@DSHEETOWID_SPECIAL   - Widt( of a specËal width select fzame-
 *   WREADSHEEt_WMD_DOUBLE    - Vidth mf a double wi‰th selÂct frame
 ™   SPEADSHEt_GID_tRIPLE    - Width of a trirle width select fpameí *
 *   CPREADSHEET_LABEL_HGT0    - Huight of the spreadshemp label (to be
 *    0                          subt2acved frgm the folLowifg0`eighTs
 *   "                           in uhe c`se that a(label is NOT ured)-
 *
 *   SPREADSHEET_HGT_2D_1ROW "$- Hekght of a 2D spreadsheEt with 1 row
 *   SPREADSHGE_HGT_2D_2ROW   - Height of a 2D spreadsHeet gith 2 rows
 *   sPREADSHEET_HGT_2D[3RW$( - HgÈght of a 2D spreadshedt with 3 rows* *(  SXREADSHEET_HGT_2D_4ROW  ∞- Height of a(2D sreadsheet with†4 rows
†*   SPREADSHEETOHGT_2D^5ROW   , Height /f a®2D sppeadsheet witH = ross
 *  "SPREADSHEET_HGT_2D_6ROW   †Height of a 2D wpreadsheet With 6 rows
 *"  SPREADSEET_HGT_2D_7ROW  †-"Height of a 2D spreadsheet wi4h 7 pows
&* † SPREADSHEET_HGT_2D_8ROW   - Height of a 2D`spre!dSheeT with ( rovs
 *   SPREADSHET_HGT_2D_9ROW  `- Hehght of a 2D spreadsheut with 9 rows
 *   SPRE¡DSHEET_HGT_2D_1ROW  - Height of a 2D srreadsheet witl 10 rows
 *   SPREADSHEETﬂ»GT_2F_INCR   - Heio`t incremgnt fov 2D spreadshegt
 

 *`  SPReADSHEET_HGT_3D[1ROW   - Height of a 3D spreadsheet with 1 vow
 *†  CPREADSHEET_HT_;D_2VOW  "- Hemght of a 3D spreadsËeet with 2 rows *   SPREADSEET_HGT_3D_3ROW† !- Heieht`of a 3D spreadsheet with 3 rows
 *   SPREADSHEET_JT_3D_4ROW   - Height of a D s0readsheet wit` 4 ro7q
 *   S–ZEADSHEET_HGT_3Dﬂ5ROW   - Jeight!of a 3D†spreadÛheet"siuh 5 rows
 *   SPREAD[HEET_HG\_3D_6ROV   - Heiglt OF a 1D spreadsËeet(with 6 rows
 *   SPVEADSHEET_HgT_3D_7ROW   - »eigh| o& a"3D0streadsheet with 7$rows
 *  0SPREADS»EET_HGT_3D_8ROW   - Height of e 3D spre`dszeet with 8 rows *   SPVEADSHEEP_HGT_3D_9ROW   - Height }f`a 3D spseadsheet with 9 rows
 + "†SPREAD[HEET_HG\_D_10ROW  - Height of a 3D spreadsheeu with 10 rows
 *   WPZEADSHEET_HgT_3D_INCR   - HdÌght increeent for 3D spreadsheet
 *>






/*
 * ` SWITCHES
 *
 * *   Create`· framed tso row switch with a label.  NMte that tHe-
 ™` $number of rous is a fu~ctin of the "num_cols"(vari`ble and the
 *   number(of items c2eated fmr the switch.
 *-
 .      y_frame_loc = FRAME_T_MARGIN
 *
 *      ui_switch_#rua|e($frame_id, "callback",              @
 "              "      †  FRAME_L_MARGIn,              !†    @
 
    $   !              †y_frame_loc,                       @
 +                0       nwmcolw, "Switch Label",  `       
 *        "               alwaysone_Êlag )
 *
 *   b  y_f2ameloc = y_frame_loc +      †           $       @
 *  $       `         SWI\CH_2R_HGT_LABEL +     "†           @
 *      @          !$ INtER_WIDGET_SXACE *
 *
 *   Switch height:
†*
 *
 *   SWITCH_1R_HGT_LA@EL    " -`Leight od a 1 ro switch witH a lgbel
 *   SWITCHW2Q_HGT_\@BEL      -$Height of a 2$row switch Wit( A lqbel
 *   SWITC»_3R_HGT_LABEL      % he)ght oÊ a 3 row switcj sith a label
0*   SWiTCH_4R_HGT}LABEL      - Heiglt of a 4 row swi|ch with a`labed
 *
 *   SWITCH_HGV_LABUL_INCR    ≠ Incre-ent gor creating a swktch height vithJ *   $              `       $   oore than $rm7s in it
 *
 *   SWITCH^1R_GT_NO_LABEL` !m Heifht`of a 1 row sWitch with no`label
 *   SWIDCH_2RWHGT_NO_LABEL "  Hehg`t of ` 2 row cwitch witH no label
 *   [WITCH_3R_HFTﬂGo_LAJEL   - Heioht mf m 3 row switch(with fk(label
0*   SWITCH_4R_HGT_NO_LABEL  $- Height of a 4 row switgh with no lacel
 *
 *   SWITCJ_HGT_NO_LABEL_INCZ - Increient for"creating a switch heiÁht wiTh
 +       (               (   `  more than 5 rows kn it
 */




/*
 *   TEXTBOXES
 *
 *
 *   Create a framed tjrea line textbox witi a label. "Nnte that the
 *   widths and heights includm the vertical and†hkzizontal sliders.
 *
 *0     y_frame_loc = FRAME_T_MARGIN
 *- *      ui_textOcveate ( frame_id, "",      "       (        @
 * (  $   "    0         FRAME_L_MARGI,      (      0    0  @
 *                       {_frame_lnc,( `    `  0  (    "†   `@
 *  †    `   !        `  TBOX_WID_SIFGlE(                    
 *    $                ` 3, Textbox Label",                 @
 *                      "This is uext" editable_flag )
 +
 ™      y]&rameWloc = y_frame_lo# +!" "                $     @
 * (                  TBoz_3L_HGT_L¡BOVE!+                 ` PM
 *                    INTER_WIDGE‘_SPACDM
 *
 *
 *   To determine the†heighv for a six line Ùeptbox, add the val5e
 *   og "TBOX_HOT_LABOVE_HNCR" to "TBOXﬂ5L_HGT_LABOVE".
(*
 *
 * ! Uextbox Width and HeiehÙ:
d*
 *   TBOX_WIDOSINGLE         - Width of0a singlu width tePtbox   
 *   TBOX_WID_SPECIAL        - Width of a speaial widtx textbox!  
 *   TBOX_WID_DOUBLE         - Width mfp` fouble wËdth texpbox   
†*$  DBOXﬂWID_tRIPLE  !      - Width"of a triple widuh textboy   
 ** ´(  TBOX_1L_HCT_LABOVE   Ä  - Heifht ov p 1 line textboh wiÙh a top |abel
 j   TBOX_2L_HET_LABOVE      - HeIght oÊ a02 line textbox witË`a top labul-
 *   TBOX_3L_HGT_LABOVE     - Height of c 3line textbox with c 4/p label
 *   DBOX_4L_HGTﬂLA¬OVm      - Height of a 4 line textbox with a top label
 *   TBOX_5N_HGT_LABOVE    ! - Heighd of a 5 lyNe texvbox with a top lab%l
 *
 *   TBGX_HGT]LABKVE_INCR    - Incremenu for compqting a textbox heighT that
 j                   $   `     his More than$5 lines in it
(* *   TBOX_1LHGT_NO_LABOVE   - H%ight of a 1 li.e†textbox with no dabelä *$       "          (         ,|abel is bl·nj)
 *   TBOX_2L_HGT_NO_HABOVE   , Height0of a 2 line te8tbox with no label
 *   TBOX_3L_HGT_NO_LABOVE   e Height of a 3 line tuxtboz0with†no lacel
 * $ TBOX_4L_HGT_^O_LABOVE   - Hei'ht mf i 4 line textbox with no label *   TBGH_5LHGT_NO_\ACOVe   ≠ Height of a 5 li~e textbox with no Ïabel
 * *   ‘BOX_HGT_NO_LIBOVE_MNCR ≠ Ifcrement†&or somputinf a tehtbox height that
 *                    $      ` has morÂ thaj 5 lines mn it
 *'





/*
 (   TOGGLES
 *
 *
 *   Create0a toggle@anside a0&reme an‰ then$cnmpute the y location
*   og The nUxt widget in The`fÚame.
 *ä *   $  y]frame_loc`=(FRAME_T_MQRGIN* *
 *      wiﬂtoggle_create ( frAme_id, "callba#k",      ! (    @
 * $                  `    RAME_LMA2GHN,† `                @
 *   (     !               ygrame_l/c,  `                "  @
 *                   "  $ $"Toggle Label" )
 *ç
 *$     y_frame_doc = y_frame[l}c +         0  †         (   @
 *  0                 TOGGLG_HGT +                        0  @ä *                    INTR_WIDGET_SPACE
 *
 ** *  "Toggle He)ght:
 *
 *   TOGGLE_HG     † - Height of a teggle
 *   TOGGLE_Y_OFFSET  - Y mffset for placing ! label to t`e side
 *    ¢                †of a togGle
 */

	/*
 *   LANGUAGE
 *
 *
 +   Language!veriables:
"*
 *   ENGJISH !  ( - "English"
 *†(0GERMAN  ( "  - "German"
 *   sPANISH      -""spanish 
 * ( BRENCH       - "French
 * " KANJI        - "Kanji"
 *
 *   LANGUAGE     - Cur2ent lcnguage (sge abov%(
 "   H¡NDEDNESS   % DetermiÓas whmther formw appear gn zight of lef| side
 *    $       " (   of screen
 */ç




/*
 *   SCBEEN
 *
 *
 *   ScÚedn variables: *
 *   PIXEH_WID   - Wydth kf a pixel (in iNches)
 *   PIxEL_HGT   - Height Ôf a ixeL (in inches)* *
 *   SCVE≈N^WID ) Wkdth mf logical screen (io inches)
 *  †RCREEN_HGT$ - Heighu`of logkcal scraen ,in inches)	
 */


-

/*
 *  !BASIC lA[OUT
 *
 .
 *   Bas)c layout varÈables:
 

 *0  MAIN_MENU_X_LOC          - Main menu X location
 * $ MAIN_MENU_Y_lOC!        †- Main menu Y locavIonJ *   M@IN_MENU_WID  0         - Main menu(width
 j $ MAIN_MENU_HGT         !  - Õ!in menu height
 *   MAIN_MENU_L_EDGE  #    ! - Left edgE of main mdlu ()ncl border-
 *   MAIN_]ENU_R_EDGE  0      - Rig(t edge0of†main menu (incl bgrder)
(*   MAIN_MMNU_T_EDGE         - Top edge of mcin menu ()ncl border)
 *   KAIN_MENU_R_ELGE        0- Bottom edfe of main menu (incl "order)
 *†  MAIN_MENW_SWITCH_Y_LOC   - Switc( Y nncataon
 *   MAIF_MENU_ICON^Y_LOC     - Icon Y lokatiol
 *   MAHJ_MENU_IBKN_HGT       , Main Menu Icon Height
 "  (MAIN_MENU_ICON_WID       - Main Menu Icon Widph
 *   OAINﬂMDNUﬂLOGO_ICON_WID  - Õain Menu Logo Icoo Width
 *$0`MAIN_MENU_HEIRT_ICON_WID - Main Menu Hea2tbeat Icon Width
 *   M@IN_MENU_HEART_I√ON_HGT - Mai. Ienu!Heartbeat IcÔn Height
 (   M¡IN_MENU_MARGIN        !- Main ienu switch margin *   MAIN_MENEICON^OARGIN    -0Mcif menu margin between iconr
 *   MAIN_MENU_HEAR_ARgIN   - Main manu margin betwed~ last icon and
 *        !  $          "    ` `heartbeeu icon
 *   MAI_MENU_HEART_X_LOC  ( - He`rtbeat icon X location
 *   MAIN_MENU_HEDRT_Y]LOC    - Heartbeat ycon†Y locatiofç
 *
$:$  COMM·NDOWINDOW_X_LOC     - Comma˛d Gindow X locati/n	
 *   COMMA^D_wINLOW_Y_LOC   ! , Command window Ÿ lo„ataon
 +   COMMAND_WIJDOW_WID       - Command window width
 *   C_MMAND^WCFDOW_HGT       ) Command ˜indow height
 * $ COMMAND_WILDOW_NUM]ROWS  - Number of!hhstory rows iN phe commald window
 *   COMMAND_WINDOW_L_EDGE$   - lefu edgaof command wiÓdow (incd border)
 (   COMMAND_WINFOW_R]ADGE    - Right edge of command window 8incÏ forder)
 *   CœMMANd_WINDOWOT_EDGE    - Top$edge of comeand windgw (incl boRderi
 *   COMMAND_WINDOW_B_EDGE `  - Bottom edge of comm!nd window (incl boRder)
 *
 *   GRAPHICSOWIDOW_X_LOC (  -0Grathics wineoW X location
 *   GRAPHICS_WIJDOV_Y_LOC    - GsapHics uindow X location	
 ´  0GRAPHICS_WINDOW_WID    ( - Graph)cs window width
 *   GRAPHKCS_WINDOW_HGT     "-`Graphics window height
 *   GRAPHICS_WINDO◊_L_EDGE ! - left edge of graphics window (ing, border)
 *  !GRAPH)CS_WINTOW_R_EGE   - Right e‰ge of gbaphics$Window  incl bordev) *   GRAPHIC€_WINDO__TWEDGE   - To0(edge of graphics window (incl jorder)ç
†*   GRAPHICS_WINDOW_B_EDGE*  , Bottom edge of gpaphics wimdow0(incl bordÂr)
 *
 *0  SHOW[SPREAD[XEET_NUO_ROWS ) Number of rows in†the show spreadsleet widget
 *
†*   GRAPHICQ_WINDOWW…D_QTR  - Quarter width graphics window
 *   GRAPHIK”_WINDOW_HCT_QTR  - Quarter width graphics window
 * *`  ORAPHICS_WINDOW_X_LOC_UM - QuaÚter si{e gzaphkcs windo upper!lEft X loc
 *!  RAPHICS_WINDO◊_Y_LOC_UL - QuarteÚ size graphics wind/s utper left Y loc *0  GRAPHICS_WINDOW_X_NOC_UR - Quarter size gRaphic{ winDow upxer right$X lo#J *   GRAPHKCS[WI^DOW_Y_LOC_UR - Qu!2teÚ cize graphics window upper rygËt Y loc
 *$` GRAPLICS_WINDOW_X_DOCLL - Quarter sa~e graphics window lkwer ledt X loc
 *   GRAPHICS_WINDOW_Y_LOC_LL - Quarper saze gr·phics window mower left Y ,oc
 (   GRAPHICS_WINDOW]X_LOC_LR - Quqrter size gr%phics window(lower righ4 X loc
 *   GRQPHICS_WINDOW^Y_LOC_LR - Q5artEr size Graphic{ window lower 2iwht Q loc
 *
 *   GRAQHICS_CEN_X_LOO †     - Cenver oF graphics area X location
 *   GRAPHICS_CEN_Y_LOC       - Ceoter of 'raphiks area Y lokatiof
0*
 *   WINDOW_CEN_X_LOC         - Cender mf area bmnea|h†maio menu X location
 *   W	NDoW_CEN_Y_LO√ †     ,$- Center of erea beneath iain mEnu Y location
 *
(*   MAIN_MMNQ_SITCH_COLS    - ^umber of solu-.s &or m·in$menu switch
 *"(   ENABLE_MAIN_M≈NU_SWITCH  - Hitdef sode`to enable the main$menu switch
$*       $    `       !       0without having to opej a dat!base
 */


M



J


/*  OLD!APPFORMR VARIABLES *****.***
*NEW VARIABLE%NQMES™**(************

 */
/*
`* †At0lication @anels
 */
/*#dediÓe QPP_DBOX_SID 1&85*/


/*
 *  Selection†Fraees
 */

/*
 *  Data Box
 .-

/*
 *  LiÛt(Box
 */

/*
`*  Object Oenu
 */

/*
 *  Option Menuç
 */


/*
 *  Keygorl ·rea
 */


/*
 *  Full Widph Frames
 */J
/*
 *  Switch Frames
 */

/*
 
  Butto.s
 :.

/*
 *  Full Widtx slidebars
 */









ä
*





ä






M




CLASS wSelectiÏg


CLISSWIDE W…FGET seÏfile_form, res_fbame_id, re1^file_id
*
CLARSWIDE “EAL nide_heicit, form_Height


CLASSWI@E WKDGET set_file_dcox






M

FUNCTION inÈt))


REAL file_wilth

/*
 *  Define the heightw for the file smlection f/rm
 "/




file_height = uil_form_sizes.file_hgt( 7 )
form_hdight = uil_fkrm_rizep.foRm_margin( 5 ) + uil_form_sizes.spacino8 12 	 + file_height


file_width = uil_form_cizes.form_wid( 2 ) - uil_fozl_sizes.form_margin( % ) - uil_fÔrm_sizes.spacing( 12 i



'*
    "` *  Create the Selected AÓalysis File Form
       */

sehfine_form = ui_form_create( @
/*Call"ack  */"", @
/+  " 8     *'uil^form_sizes.fobmWx_loc( 6 ),@
/*    y  !  */uil_form_si~es.borl_y_loc( 1 ), ¿
/* position */"UL", @
/*  width!  (/eil_form_sizes.form^wi`( `), @/*  heighv  */form[hehght. @ç
/*  labdl"  */"Select File", @/*†iconname */"" )

/*
   "   *  Cruate t`e fkle$Widget
      !*/


M
res_fraoe_id$=†ui_framecreate* @
/* Pareft $   *oselfile_form, @
* callback   */"", @
/™   x        */uil_foRm_si{es.fmrm_margin( 1 ),@
/*   y        */uil_form_sizes.form^margin( 3 ), @
" width      */file_width, @
/* height     */file_height, @
/* title      */"")




res_file_id = ui_file_create( @
/*      parent     */res_frame_id, @
/*     callback    */"select_file", @
/*        x        */0.0, @
/*        y        */0.0, @
/*      width      */file_width, @
/*     num_rows    */7, @
/*   filter_label  */"Filter", @
/*   filter_mask   */"*.*", @
/*    dirs_label   */"Directories", @
/*   files_label   */"Available Files", @
/* selection_label */"Selected Results File",@
/*    selection    */"", @
/*     ok_label    */"Apply", @
/*   filter_label  */"Filter", @
/*   cancel_label  */"Cancel" )


END FUNCTION/* init */


FUNCTION display(wdbox, filter_mask)
widget wdbox
string filter_mask[]


IF( db_is_open() != TRUE ) THEN
user_message( "ERROR", 100000, "manager POOH", "DB is not opend. Please check it and try again. from POOH :-)" )
RETURN FALSE
END IF
set_file_dbox = wdbox
ui_form_display( "wSelectFile" )
ui_wid_set(res_file_id, "FILTER", filter_mask)
ui_wid_save("wSelectFile")




END FUNCTION/* display */




FUNCTION select_file( file_name, mode)


STRING file_name[], mode[]

/*
       *  Need to set the value of classwide variable
       *  res_file_name so that get_res_file_name() works.
       */






IF (mode == "OPEN" ) THEN


wSelectFile.set_data(file_name)


END IF


ui_form_hide("wSelectFile")
ui_form_delete("wSelectFile")


END FUNCTION/* select_file */


FUNCTION set_data( fname )


string fname[]


ui_wid_set(set_file_dbox, "VALUE", fname)


END FUNCTION


END CLASS/* select_file */
