

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
 *   SCROLL_FRAME_WORK_WID_SPECIAL - Workifg width nf · speciah widdh 
 ™    0        0†                  ` scroll frame    *0  SCROLL_FRaME_WORI_WID_DOUBLE$ - Wozking width of†a double width 
 * !                                 ssroll fRcmu   
 
 † SCROLL_FRAME_ORK_W	D_TRIPLE  - Working!widuh of a trip,e w…dth
 *   0          †         (          scrolL frame$   *
 *   SCROL_FRAMEDFMX_WHD_SINGLE  - Width of a single width scroll frame   
 *     †  0                         0databox
 *  `SCROLL_FRAME_DBOX_WID_SPECIAL - Wi`th of a special width†scrOll fpame   *       ,    (                      dataBoh
 *   SCROLL_FRAME_DBNX_WID_DOUBLE $≠ Width of a doubde width"scroll vrame  
(*0           "  (      0   †      † databox
 *   SCROLL_RAMA_DBOX_WID_TRIPLE  - Width of a triple widtj scr/ld fraÌe  
 *   0 0d  (    !       `        †   dita‚ox
 *
 
"  3CRNLL_FRAME_MABEL_HGT     $  -"Height of the mabel qbove a
 *       `                           scroll Frame   
 *
!*   SCRONL_FPAME_1DBOX_HGT        m Scoll framepheigh| with 1 databox
`*   SCROLL_FRME_2DBOX_HGT        - SCvoll frame height witl 2 databoxes
 *   SCROLLWFRAME_3DBOX_HGT& $ $   - ScroÏ, frame height with 3 d·taboxes
(*   SCROLL_FrAME_4DBOXﬂHGT        - Scrodl0frAme height with 4 databoxes
 *   SCROLL_FRAME_5DBOX_HGT  †    "- Scroll frame heighT with 5 dataroxes "
`*   SCROLL_FRAMEEBOXﬂHGT_INCR    - Scroll vrame height increment
 *
 *   SCROLL_FRAME_1DBOX_WORK_HGT   - Scrol| Frame work he)ght!for 1 databox
 + " SSROLL]FRAMEﬂ2DBOX_WORK_HGT   - SCzoll fraie work heiglt†for 2 d·taboes
 *  !SKRoLL_FRAME_3DBO\_WORK_HGT   ≠ Ccroll frame work heighT for 3 databoxes *   SCRKLL_FRAME_4DBOX_WORK_HGP   -$Scrll frame work `eight for 4 databoxes
 *   [CROL\_FRCE5D¬OX_WORK_HGT $ - Scroll frame work Ëe)ght bor 5 databoxes
 * 
 *   SCSOLL_FRAME_DBNX_WORC[HGT_INCR - Scroll frame wOrking height increment	
 *
(*  SCROLL_FRAME_SLIDER_WID       - Width of the slidmr on the rifht -
 *                         0@        of a scroll frcme   -
 *†  sCROLL_FRAME_SLIdER_HGT       - Leight of the slider at the bot4om 
 *                                   of$a sgsoll fraÌe   
(*   
 *   Freie Margins:
 *M
 *   SCROLL]FRAME_L_MASGIN         - IoÛidE left margin fr wIdgets in 
 * `    †            †               a skroll frame
 *   SCRMLL_VRAME_R_MARGIN       † - Inside right margin for widgets mn 
 *                                   a s„soll fraÌe
 *   CROLl_RAME_T_MARGIF       † - Anside top m!roin abgve(first widget 
 *   SCVOLL_FRAME_BOMARGIN       $ - InsidE bottom marghÓ ‚elow le3u wifget 
 *†  
 *   SCROLL_FRAME_2H_MARGIN  ( `   - oth horizontal mapgins
 *   SCRGLM_FRAME_2V_MARGIN        - Botl vertical marGmns
 */

J







ç


/*
 *   BU‘TONS
 *
 *
 * " Create two buttons in a$sÌadl form.  \he bttdon on the left is a
!* ` default button.  Use "h`lÊ" cizd buttons.
 *
 *    ††ui_budton_create ( fOvm_id, "callback", !            @!*   ( (        0         !BUUUON_HALF_X_LOC1,               @
 *                       ! y_loc,      !$                    @
 *        † (   0   †      BUTTON_W	D_HADO,                  @	
 
    †            ∞      00.0, "Left BuTt/n",  "     "      @
 *                         TRUE, TRUE ) 
 * *      y_loc = x_loc + B’TTON__K÷F”UT *
 *  †   5i_button_crmate ( form_id¨ "callback",        "     @
 *       (             0   BUTTONO@ALF]XLOB2,!        0     @
 *(       `                y_loc,                $           @
 *         (  0`           UTtON_WID_HALF,                  @
 *(                        .0, "Bight Button ,    !        "@
 ™       $                0TR’E,$FALSE ) 
 *
 *      y_loc Ω y_loc + BUTTON_Y_OFDSET +              $     A
 *   " !    a     (     BUtTN_HGT +           `          †  @J *                    $ INTER_WIDGET_[PACE
 *
 *
 *   button Widths and Heighus:
 *
 
   BUTTON_WIF_FULL               - WidÙh of a kde butvon on a sm!ll form
 *" `bUTTON_WIDOhALE               - ◊idth nf A medium butto~†on a small form
 * 8 BUtON_WID_THMRD              - Width of a!3mall button on a siall d/rm
 *
 *   BUTON_WIL_FUlL]^T`           - Width of c noo_troughed widÂ"button on
 * $      `             " ! $        a small0form
 *   BUTTON_WID_HALB_NT     !      - Width of a non_troughee med)um bUtton onè
 *               `                   a sÌall form
 *  $BUTVONﬂWiD]THIRD_ND           - Uiduh of a nonOtroughed small button on
 *     †      †                     $a small form
 *
 *   BUTTON_HGT                    - Butto~ height
 *   BUTTON_DEFAUL\_HGU            - DefAult button height (yncludes top andä *            †"                     bottom bordeRs)
 *   BUTTON]HGT_NP     !     `     - Button heighp of non_trouwhed button
 "
 *   bUTTON_DEFAQLT_BORdeZ_WID     - DefauÏt button bgrder width
 *  !BUTTON_DEFAULT_BORDEZ_HGT     - Def!ult but4oj border height
 *
 *
 *   Button Lokation Odfsets:
 *
 +   BUTTON_IN_BRAME_X_OFFREP      ≠ X onfset for placmng buttons inside
 *            †      `               frames using the X @osItions defined
 *    0                      ( !     below-
 *
 *   BUTTON_1XTA_WID          $   - Y vidth for mne trough for user placemelt *                   $    †         `mf troughed buttoÓs.
 *   BUTTON_2XVRA_WID    `     †   - X widtl fo2 two troughs fo2 }ser plakEment
 *   †                   "           of tpougxed buttons.
 *
 *   BU‘ToN_Y_OFRET               -ÄY offqet for placing i non-highlighTed 
 *  `            $        `          button next to a highnighted bUtton
 *  (BUTTON_Y_OFFSET_NT            = Y offset for placing a nof)hiwhlighted  *      `                        0   budtmn†ngxt to a highlifhted button 

 *   BQTTON_LAJEL_Y_OFFSET         - Y o&fsat for(placÈng a labeL to the r)ght
 * `                                 of(a butvon
 *   BUTTON_DEFAULT_LABEL_Y_OFFSE\ -!Y offset for pÏacing a lÒ‚el to the raght 
 *                           !       of a defaılt button
 * † B’TTN_LABEl_y_OFNSET_nT      - Y offset for placing a label to t(e right
 * (                                 of a non^troıghed jıttonM
 *
 

 *$  Btvton X Positions:M
 *
 *  (BUTTON_FULL_X_LOC1           "- Vidd buuton mn |he left
 "   UTTON_HALF_X_LOC1   0        - ]ediu- button on tje left
 *   BUTON_HALF_X_LOC2            - Medium ‚utton on the bight
 *   bUTTON_DHIRD_Y_LOC1           - Small butÙon nn$the left
 *   BUTDOO]THIRD_X_LOC2   (       - Small bu|ton centebed
 *   BUTTKN[THIBD_\_LOC3        !  - Small!button on the right
 *
 *   BUTTMN_FULL_X_LOC1_CoL2       - Wide buttol o. the left of column 2
 *   BUTTN_HALF_X_LOK1_CO≤       - MediUm button on the left`of column "
"*   BUTTON[HHF_X_\OC2_COL2       - Medium button on the right$of column 2
 *   BUTTKNﬂTHIRT_X_LOC1_KOL2      - Small but|on on the!left of column 2
 *  (BUTTOŒ_THIRD_X_LOC2_COL2     "- Small button!centerg$ of coÏeMn 2MJ *`  BUTTMN_THYRD_\_NOC#_COL2      - SMalÏ button on the right of co,umn 3
 :M
 *   BU‘TON_FULL_X_LOC1_COL3       - Widm bu4ton on tle left ov column 3
 *   BUTTON[HALF_X_LOC!_COL3  †`  0m Mediwm button on`4xe left of coltm. 3
 *   bUTPON_HALF_\_LOC2_COL3       m Medium bueton!on the right of coluMn 3
0+   B’TTON_PHIRD_X_LNC1_COL3      - Small buttn gn the left of column ;
 *  (BUTTON_DHIRD_x_LOC2_COL3 `    - Small button cente`ed of column ≥
 *   BUTTON_THIRD_X_LOS3_COL3      - Sia|l button on the rieht of column 3
 *
 *   BU‘TON_VuLD_X_LOC1_SPL        - Wide buutkn cen4ered on a special form
$*   BUTTON_HALF_X_LOC1_SPL        - MeDium button on the left of"a special f/rm *   BUTTON_HALF[X_LOC2_CPL   †    m†MÂdium button on thE right of a Speaial form *   BUTTON_THIRD_X_LOC1_sPL       - Sma,l button o~ thu lefÙ of a special"forM
 ™   C]TTON_THISD_X_LO2_SPL      †) Small cuttn centured of ` special form
 *   BUTTON_THIRD_x_LOC3_S–L       -`Small bUtton onathe right of a special form)
 

 * ( BUTTN_FULL_X_LOC_CEN         - Centered wide button!kn a sma,l f/rm *$  @UTTMN_HAL∆_X]LOBOCEN     0   - Cuntered me`ium buuton on a small form
!*   BUTTON_THI“D_X]LOC_CEN" ¢     - Centered small bu4tÔn`g~ d(smld!dorm
 *
(:   BDTOL_FULLWX_OC_CEN_MEF   $ = Ceftered ride butt/n$on a medium form 
 *   B’TTON_HALF_X_LOC_CEF_MED     - Cent%red medhum buuton on a medium form 
 *†  BUTTMN_HIRD_X_LOC_CeN_MUD    - enterm` siall`butuo~ on a mgdium form 
 *
†* † BUTTON_FULL_X_LOC_CEN_LRC 0   - Cgntered wiDe button(on a lavge form 
 *   BUTTON_HLF_X_LOS]CEL_LRE"    - Centared medium button$ol a large form 
 *   RUTTOn_THIRD_X_LOC_cEN_LRG `  - Centergd small button on a largg fosM 
 j
 *   BUT\ONFULL_X_ÃOC_CEN_S–L     -`√en4erel wide button kn a sqecial fkrm$
 *   ¬UDTMN_HALF_X_LOC_CEN_SPL  0" - Centdrgd medium `utton o~ a special form 
"* d bUTTON]THIRD_X_LOC_CEN_SPL    - Centered small bupton on a special fobm" */








J










/*
 *   DATABOXES
 *
 *
 *   Create · fra}ed daÙabk¯ wiTh$a label above thu databox.  Tjen
 *   compute 4he Y location fkr the next widget insIde the frame.
 *
 *      y_fsame_loc = FRAME_T_MARGIN
 * *  †  $ui]databo¯_create (!frame_id, "",`   †     †      $  ¿
 *   0†         !           FRAME]L_MARGIN,          !       @
 *                   !      y_framm_loc, 0*0,             `  @-
!*                     `    DBOX_WID_SINGLE,         `  $    @
 *"        "    $           &Databox Label", value,         @@
 *$   †  `  †               TSUE, d!tatype, Lqm_vals )
 *
 *    † y_frame_loc"= yWfrale_loc + †         "   $          @	
 *(  "        !      $DBOX_HOT_LABOWE +    `       $     *   @J *                    INTER_WIEGET_SPICE
 *      !  (     !      
 *
 *"  Breete a framed databox whth a label to the"qÈde.  Use the 
 * % defaul4 label length for a$winÁle column databox and coMputu
 *   the databox widtH.
!*
 *      y_frame^loc = DRAME_T_MARGIN
 *
 * (   $wid =°DBOX_WID^SIŒGLM -                 !    †      P
 *     `      DBOX_LABEL_LEN_SINLE
 *   
 +   
 *      qi_databox_creade ( Frame^id, "2,  †0  † $           @
 *        †       `   (     FRAME_L_MARGIN,                  @
 *   "     "       "$b      y_frame_loc,   !     !           H
 *          "          0!   DBOX_LABEL_LENﬂSINGLE,          "@
 *    0 0            †      wm`.  ! † †    (!      ! ` 0†    @
 *             `   °(       "Data`ox Lqjel", value,      †   @
 *   0   `!              $  FALRE,!eat·t˘pe, num_val{`)
 *
 *
 *   Datqbo¯ Width and Height:
 *
 *   DBOXWID_QINGLE`       -$Width of a single width databox   
 *   DBOY]WID_SECIAL       - Width of a cpecial wi$th databox `  *   DBOX_WKD_DOUBnE   `    - Width of a double0whdth databox   
 * † DBOX_WIF_DSIRLE  †     - Widtx of a tri0le wid¥h detaboX   * *
 *   DBOX_HGT_LABOVE        - Height od a databox with a label on Ùhe topä :     (               `      (etej if the l`bEl is blank)
 *   DBOX]HGT_NO_LABOVE     - Height of a databox with$· labeL to the side
 *
 *   DJOX_LABEL_LEN_SINGLE  - DefAult lab%l lmngtË for†a single width datafox
 +               `   `        (used when 2label_above" i3 false) *   DBOX_LABE_LEN_SPECIAL -!Defqult labed lengtj for a s0eciah width datibox
 *† †DBOX_LABEL^LENﬂDOUBLE  - Default label length for(a double"width ‰at`"ox
 *   DBOX_LABEL_LE_TRIPE  - e&qult label length dor a tripe wiedh da4abox
 *
 j   DBOX_LABEÃ[X_OFFSET    / REMOVED
 *   ƒBOX_LABEL_YOFFSET    - Y offset for"Placio' a label p tje right of
 * "   `              "      †a da|abox wIth "nabelabovg" falsg.
 */




/*
†*   FIÃQS
 *
 *
 *   Create a form cendered wnder the!main menu tjat has a file
 *   widget inside the a fra-e.  ‘he file widget is pl`cud at
 *   ( 0Æ0,00.0 ) insi$e phÂ†frame (a0top marfin!is jot needed).
0*   The leight of the file$widget includes a†bottom margyn
 *   and pharedore can ba used as the height of thm frame that
 *   kontains t`e file widget.  The file widget has 5 lynes in 
 "   the!list boxgs.
 *
†*!     form_hgt = F@LE_5L_HFT + FOPM_2R_MArGIN + FRAME_2EDGEM
 .      h_loc = WINDOW_CEN_X_LOC - 0.5 *0( wid + FORM_2H_BORDMR i
 *     $y_loc = WINDOW_CEŒ_Y_LGC - 0.5 * ( form_hg + FOZM_6V_BORDER )
 *
 *    ` fkrm_id!= ui_form_Creata( "",$8_hOc¨ y_loc,!"UL",(   @
 *"      `       `†               wid,"doro_hcp,          !  @
!*             (                  "Foro LabeL", "" )
 *
 *     $fram%_id = ui_frame_create( form]id, "",          "  @
†*      $  ! $  $$        ! `    $ 0FORM[L_MARGIN,       `   @
"*    !   0    0        "   0`      FORM_T_mARGIN,    `      P
 *(                       ‡        FRAMEﬂWID_SPECIAL,  `    @
 *    "          `    !           † FILE_5L_HGT, "" )
!*
 *      file_id = ui_file_creatu(!fra%e_id, "",              @ä *    !      "    $         †     0.0, ∞.0,        ! 0$     (@
 *          !                     FILE_WID_SPGCIAL,!5, (     @
 *     !    `   †   0             "FiltaÚ Label",             
!*            `  (   † †    0    "Filtez Mask",             @
 *                0  (            Fil%s Labem",         (   @
 *    0                    ( "    "Directory Label"         @
 *                  @  0          "Fyl%s Label",      " "    @
 *                            $   "Sele„tion Labe|",         @
!*      p           !      `      "Eefat|t`Selection¢,       @
 *!          $                  !$"Heft Button Label",   $   @
 *                   (           ("Right Button Label" )
 *
 *
 *   File Width:
 *
 *   FÀLE_WHD_SINGDD   ( -`Width of a`single wilth file sidgat
 *   FILE]WKD_PECIAL 0  - Wmdtl of a spesial width vile widget
 *   FIIEﬂWID_DKUBLE     - Wi`th†ov a doublg wid|h file widgep
 *   FILE_WID_TRIPLE     - kdth of a$tsiple width file!widged
 *
 * `!ile Heiohd2
$*
 *0  FILE_1L_@G          Height og a 1†line file widget
 *   FKLE_2\_GT0 "      - HeigHt of a 2 line fiÏe wid'et
 .   ∆ILE_3L_HGT$  (     - Height of a 3 line file vidget
 *  $FIŒE_4L_HGT         - Height of a 4 line filÂ widget
 *   FILE_5L_XGT         - Height of a  |ine file widg%tM
 *   FIE_6L_HGT       8 - Height of a 6 li.e!file widget
 * " FILE_7N_HGT        0- Height of a 7 line file widget
 .`  BILE_8L_HGT         - Heiglt oF a 8 line file widgetJ *   FI\E_9L[HGT   "     - Hemght of a 9 lin% file widget
 *   FILE_hG_ANCR  `    - Increment for making(bigger fhle widfets
 */


/*
 *   L@BELS and INFO INDMNT[
 *
†*
 *   C2eate a label inside ` fram% and then kompete the y locaÙion
 *   Ôf thÂ next widget inÛide the brame/
 ,
 * `  † }_fr·md_loc = FRAMET_MARGIN
 *
 *      ua_labeÏ_create ( frameWid, ""$  $  † $   !          @
 *  0$                0  $FRAME_L_MARGIN,                    @
"*           $      "     y_brame_lo#,                      b@
 *    ((               "  *A(Label" )
 *
!*     $y_frame_lo„ = y_Fbameloc k     $                    @
 *               "    LABELOHGT +       $           !   !    @
 :                    IN‘ER_WIDGGT_SPACE
 *
 *M
 *   Label Height:
 * *   ÃABUL_HGT        -"Height of a nabel *   LABEL_Y_OFFSET   - Y!offweT o& label
 *   LABEM_HGT_IGHT "- Height of a label when showing mulpiple
 *         ( ``   ``$$ †labels
 *
 *$  INFO_HNDENT      - P lgkation of info2mation lqbel
 *   YNFO_INDENT_COL1 - X locctioÓ of information label in column 1ç
 *   INFK_INDENT_COL2 - X location f mnformati/n label in Column 2	* *  `INFO_iNDENT_COL3 - X`location of informa4ion label in column 3
 */
	



/

 
   LIS‘bOXES
`*
 *
 *   Creade$a framed three line listbox with a label abovethe liÛtbox.  Note
 * ! that thÂ$widths and heightÛ(includ% the vartIcal and horizoft%h sliders.
 *
 *      y_frame_loc = FRAMEﬂV_MARGIN
 *
 *   !  ui_Ïistbox_create ( framg_id, "ccllbacc",            @
 * (                    †   FRAME_L_MARGIN,                  @
 *     ! !                  y_fRqme_loc,     † $             @M
 
      †            †     LBOXﬂWIƒ_SINGLE,                `@
 *        †                 3, "Listbox Label",              @
 *   `         0           !se|ection_type, sort_flag )
 *
 *      y[fr·me_lÔ„ = y_fr·me_dOc +      "                  (@
 *          †        LBOX_3L_HGT_LABOE +         !      0  @ä *,          $  (     INVER[WIDGET_SPACE
 *
 *
 *   TO determiNe the height for a six line listbox, add the variable
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


class PANEL


FUNCTION thickness(nElem, ia_ElemId)
REAL mean_t/* return value */
INTEGER nElem, ia_ElemId()/* input */


real r_areas(virtual), sum_area
sum_area = PANEL.areas(nElem, ia_ElemId, r_areas)


integer reg_id(virtual)
SYS_ALLOCATE_ARRAY( reg_id, 1, nElem )
db_get_region_for_elements( nElem, ia_ElemId, reg_id)


INTEGER gener_elem_type, dof_set_flag, condense_flag
INTEGER geom_flag, form_flag, lam_flag, layer_count
INTEGER mat_id, material_lin, material_dir
STRING pName[32]
REAL real_array(3)
INTEGER data_type, material_id
INTEGER int_value,coord_value, node_value, field_value
STRING string_value[31]


integer i
REAL thick_sum = 0.
FOR ( i = 1 TO nElem )


db_get_region_definition( @
/* region ID        */reg_id(i), @
/* set name         */pName, @
/* element type ID  */gener_elem_type, @
/* dof set flag     */dof_set_flag, @
/* condense flag    */condense_flag, @
/* geom flag        */geom_flag, @
/* form flag        */form_flag, @
/* lam_flag         */lam_flag, @
/* layer count      */layer_count, @
/* material id      */mat_id, @
/* material linear  */material_lin, @
/* material direct  */material_dir)


db_get_prop_value( @
/* region ID        */reg_id(i), @
/* word of interest */36, @
/* material ID      */material_id, @
/* data type        */data_type, @
/* INTEGER value    */int_value, @
/* REAL array       */real_array, @
/* char STRING      */string_value, @
/* coord ID         */coord_value, @
/* node ID          */node_value, @
/* field ID         */field_value)


$thickness(i) = real_array(1)


thick_sum += real_array(1)*r_areas(i)


END FOR


mean_t = thick_sum / sum_area


SYS_FREE_ARRAY( reg_id )


RETURN mean_t


END FUNCTION




function material_yield(nElem, ia_ElemId)


integer nElem, ia_ElemId()


real r_areas(virtual), r_sum_area


r_sum_area = PANEL.areas(nElem, ia_ElemId, r_areas)


string MatName[63]
real yield_stress, sum_yield_area
integer idx


sum_yield_area = 0.


for(idx=1 to nElem)


MatName = udf_get_mat_name_ass_elem(ia_ElemId(idx))


if(str_index(MatName, "MILD" ) != 0) then
yield_stress = 235.
else if(str_index(MatName, "24" ) != 0) then
yield_stress = 235.
else if(str_index(MatName, "32" ) != 0) then
yield_stress = 315.
else if(str_index(MatName, "36" ) != 0) then
yield_stress = 355.
else if(str_index(MatName, "40" ) != 0) then
yield_stress = 392.
else
yield_stress = 235.
end if


sum_yield_area += yield_stress*r_areas(idx)
end for


real mean_yield_stress


mean_yield_stress = sum_yield_area/r_sum_area


return mean_yield_stress
end function


$
function areas(nElem, ia_ElemId, r_areas)


INTEGER nElem, ia_ElemId()
real r_areas()


string s_ElemList[virtual]


app_int_array_to_vstring("Element", nElem, ia_ElemId, s_ElemList)


integer i_count
fem_geom_face_area (s_ElemList ,r_areas, i_count)


real sum_area = 0.


integer i


FOR ( i=1 TO nElem )
sum_area += r_areas(i)
END FOR


return sum_area
end function


end class


