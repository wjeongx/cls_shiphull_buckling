

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
 *      ui_selectdatabox_create ( sel_frame_id, ""          @
 *†  `       $               "    SFRAME_L[MARFKN, !         @
 j                                SDBOX_YﬂLOC0, 0.p,         @
 *        0             "         SDBOXWWID_SINGLE,    "     @
 *                  †             &Select Databox One", !    @
 *         20   0 `               valuE, TRUE, datatype,  0   
 *   0          !     "    $      prompt )
 *
 *      y_loc = y_loc ) SFRAME_LAFL_HGV"+                   @
 *                      SFRAME_2SLB_HGT_LABOVE +      `     !@
 *               (`    †SFRAME_2DDGE (       "               @
 *                      INtER_WIDGE‘_SPACE
 *
 *
"*   Seluct ∆rame Widths and Heights: *
 *   SFRAME_WId_SINGLE         - Width on a siÓgle width seluct frame
 * ! ”FRAME_W	D_SPECIAL  ! "   - Wieth of a special wid4h selecp frame
 :  SFRCME_WID_DKUBLE     `   - Width of a double idth select frame *"  SFRAME_WIDﬂTRIPLE         - Width of a triple witth select frame
 *
 *  `SRAmE_\ABEL_HGT          -"Height of the label !bove a select f2ame
 *
 ( § SFRAME_1SDB_HGT_LABOvE    - Heigit od a select fpame0ith
 *`   †    !                     1 select datab/x with a label
 *   SFREME_2SDB_HGD_LABOVE    - Height oÊ a select frame with
 *            (                  2 s%lect databoxes with nabels
 :   SFRAME_3SDB_HGT_LABOVE    - Heiwht of a select brame With
 * (                   "         3 select databo¯es with labels
 *   SFRAME_4SDB_HGT_LABOVE    - Height of a select frame with
 *                   !     !   $ 4 sdlect databoxes with labels
 *   SFRAME_5SDB_HGT_LABOVE    , @eioht of a select frame wIth
 *                               5 select databoxe3 with`labels
 *
 *   SFRAMe_HgT_LABOVE_INCR    - Increment"for making select frames whth 
 *                 $  `          more than(5 select databoxes with labelw
 *
 *   SFRAME_5S@B_HGT_NO_LBOVE - Height of a selecT frame with
 *                   ` (         1 select fatabox without a habel
 *   SFRAME_2SDB_HGT_NO_LBOVE - Height of a selecu fraMe wi5h
 *†  †(           `        "     2 seluct databoxes without l·bels
 *   SFRAME_3SDB_HGT_NO_LABO÷E - Xeight(of a suleat frame0witl
 *        !       !              3 select datajoxes wiuhout(labels
 *   SFRAME_4SDB_HET_NO€LABOVE - Heyght Ôf a semect$frame with
 *  " !d                         4 select databoxes without†labels
 *   SFRALE_7QFB_HGU_NO_LBOE(-(Hemght of a select frame sith
 *   (                      "    5 select dat·boxes withott labelc
 *
 *   SFRAME_HG\NOMABO÷E_IFCR - Kncrement for making se,ecv frames with J * `          ` (   0            more0than 5 relect databoxes ithout labels
`*
0*
 *   Select"Grame Margins:
(*
 * ( SFRAME_L_MARGIN(          - Inside left margÈn for select databoxes
 *   ”FAIE_S_MARFIN           - Inside right margin for select databoxes
 *   SFRAME_T_MARGIN    0    " , Inside top mqrgin fo6 relÂct databkxes
`* $ SFAMEB_EARGIN     (     - Insidw(bottom margin for sehect dctaboxes
 *   
 *   SFRAME_2H_MARGIN        ` - Botj horizontal margins
 *   SF“AME_2V_MARGIN          - Bgtx vertical margins
 *
 *
0*   Select Frame Placement:
 * *   SFRAOE_X_LOC_COL1         - X Location fob ` select frame ij column 0
 *   !          !      `        (same as "form_l_margin")
 *   SFRAME_P_LOC_COL2   "    "- X Locetioj!for a8seldcp frame ij column 2
 *   SFRME_X_LOC_COL3         %0X Location`for a select frame in column 3
 */









/´
 *   SCROLL_FRAMES
 *
 * *   Create a scrolL frame in a form.
 *
 *
 *   Scroll Frame Wi`ths a.d Jeights:
 *
 .   SCROÃL_FRAME_WID_sING\E$      - Width of a single widt( scroll frame   
$*   SCROLL]FRAME_WID_SPECIAL      - W}dth of a special width scroll frame  
 *!  SCROLL_FRIME_WMDDOUBLE       - Width of a double width scpoll frÈme  
 *   SCROLL_FRQME_WI@_TRIPLE       - Width of a tpiphe width s#roll frame ,
 *
 * 0 
 *`  SKROlL_FRAME_ORK_WID_SINGLE  % Working width of q silgle width
 *       `                †          scroll fra}%   
`*   SCROLL_fRAME^WKRK?UMD_SPECIAL -$Working width of a†spebiel widtp 
 *  "                      "  !      scroll f2ame   
 *   SCROLL_FRAME_UORK_WID_DOUBLE  -†orking width of a double!width 
!*               $   0"              scrOll fÚame   
!* † [CROLLFSAEE_WOBK_WID_TRIPLE  -"Working width of a(triple width
 *$   0   †                  !       scroll frame†  
 *
!*"  SCROLL_FRAME_FBOX_WID_SINGLE  - Width of a sangle idth sgrÔ,l frama   
 *          (                 `!     ditabox
 *   SCR_LL_FRAME_DJOX_WID_SPECIaL - Width of a special width sczonl frame  
 *† †             †        d         databoxä *   SCROML_FBAME_DBOX_WID_DOUCLE  - _idth of a $ouble wid¸h sgroll frama  
 *                      "          ( databox
 *   SCROLL_FRAME_DBOXOWID[TRIPLE  - Width /f a |ripld width scroll frame  
 *   (               †               da|abox
 *
 *   SCRœLL_FRAME_LABE_HGT        - Height on the label above e
 *       0     †       †  (         !sgroll frame   
 *
 *   SCROLL[FRALE_1DBOX_HGT        - ScrolL frame height with 1 databox
 *   SCROLL_FRAME_2dBOX_HGT        - Scroll$nrame heigHt 7iuh 2 databoxes
 *   SCROLL]FRAME_3DBOX_HGT        - Scroll frame height with 3 ‰a4aboxes
 *   SCROLL_FRAME_4DBOX_HGT        - Scroll frame†ËEIght with 4 eetaboxeS
†*   SCROLL_FRA_E_5DBOX_HGT   "    - Scroll fraoe ieight with 5 databoxes
"*J *   SCROLL_FRAME_DBOX_HGT_INCR   0- Scroll nrame height iÓcremdnt
 j
 *  `SCROLN_FRAME_1DBOX_WORK_HGT   - Scroll!fr`oe work hgight fmr 1 databoz *   S√ROLL_BRAME_2DBOX_WOSK_HGT   - Scroll frame woˆk heic`t for r databo8es
 *   SCROLL_FRAME_3DBOX_WOZI_HGT   - Scboll frame work height for 3 dat`boxes
 *   SCROLL_FRAME_4DBMY_WNRK_HGT   - scrold grame work heigit for 4 datajoxes
 *  `SCROLL_FRAME_5BOX_WORK_HOT   - Scroll frame work hdight for 5 da5aboxes
 " 
 *   SCROLL_FRAME_DBOX_ORk_hGT_INCR - Scroll frame wozking height increment	
 *
 *   SCROlLUFRAME_SLIDER_WID       - Width of thÂ slider on the right 
 *          (  !!                 0  of a scvlll Frame   
 *   SCRODL_FRAME_SLIDER_HGT       - HeigËt of the sm)der at the bottom 
 j †                         (       of a scr/Ll(&rAme   
 * 0 
 *"  Frame Margins:
 *
 *   SCROLL_FRAME_L_MARGIN         = Inside$left margin for"wiegets in 
 *     "        !                    a scroll frame
 *   SARGLL_FRAME_R_MARGIN0        - Insi$e right margin for widgets in 
 *             0    "                a scroLl frame
 *"  SCROLL_FRAMET_MARGIN     8   - Insa$e top!iargin above first widget 
 
   SCROLL_FRAME_B_IARGKN      $  - Inside bottkm margiÓ below last witgEt 
 *   J *$  SCROLL_∆RAME_2H_MAROIF        - Both0horizontal margins
`*   SCROLL_NRAMe_2V_MARGIN     0  - Both(vertical margins
 */


	










/*
 :0  BUTTONS * j
 * ($CÚea|e two buttons in`a smill form. !The button on the lefv is a
 *   default button.  Uqe)"half" size buttons.
 *
 *      uI_button_creaue ( form_id, "callback",   `          @
 *                         BuTTON_HALF_X_LOC1,(          "   @
 *    "                    y_loc,    0             $  `      @
 *             !         $ BUTTON_ID_HALF,$                "@
 *                         0.0, Left Buttoj",               @
 
(                        TRUE, TRE + 
 *
 *      y_loc = y_loc +$BWTTON_Y_OFFSE *
`*  $  `ui_button_create ( form_idl "callb!ck",            ( @
 *    !"                   BUTTON_HAFX_LOC2,   `           @MJ *                       " y_,ob,                      $     @
 *                         BUTTON_WIDHALF, `                @ *   0       (  !†"        0.0, "Righp Cutton¢,              @
 *             0           TRUE, FALSE ) 
 *
 *      y_lok = q_loc + BUTUON_Y_OFFSET +   (          (     @
 *`    ` `              BUTTON_HGT +           `!       "    @
 *      `        $      INTER_WIDGET_SPACE
 *
 *
 *   Button WiDths and Heightw:-
 *
 *   BUTTON_WID_DULL             ` - Width of"a wide button on a sÌall formJ *   BUDTOJﬂWIƒ_HALF               - W)dth of a medium button on a slall formJ *   BuTTON_WKD_THISD0             - Widt© of°A small Button oj a†small form
 *
 *   BTTTOJWID_FULL_Nt            - Width$of a non_troughed wide†button n
 *      "   0                        a small form
 *   UTTON_WID_HALF_NT `    †     - Width gf a lon_prouGhed medium$button oo
 *        " $ ` !                 "  a small gor}
 *   BUTTON_wID_TIRD_NT $         - Wi‰th of0a nonWtroughed smalh buttnn!on
 *                †                  a smaln fOrm
0*M
"*   BUTTON_HGT                !   - Button(height
 *   BUTTON_DEFTLT_HGT     `      - Dedault bu|ton heigjt (includes top and
 *               !                   bo6toi borders)
 *   BUTTON_HGT_NT                 - Button"hgiÁht(of non_tro5ghed button
 +
 *   BUTTON_DEFAULT_BORDER_SID   ! - Default button border width
 *   BUTTON_DEBAULT_BOPDER_HGT     - Default but|on border height
(*
 *
 *   Button Locadion Offsets:
 *
 *   BUTTON_IN_FRAME_X_OFFSET      - X offse fmr pl!cing buvtons inside
 *$    (       "                     frames using the X Positikj{0defkned
 *                    † (            below
 *
 *   BUTTON_1YTBA_WiD      !       - X width dor one tro}gË for user placemen4
†*       (        (        `!`       of trkughed buutons.
 *   BU\TON_2XTRA_WI@              - X wÈdth for two trouGhs dor user plabeMent
 *    !                   `    0    of trnughed buttons.
 *
 *`  BUTTON_Y_OFFSE‘    "     `    - Y offset for placing q non-highlighted 
 *†    `    "     " 0               "button next tÔ a highhighted betton
 *   BUDTON_Y_OFFSET_NT            - Y offset for placing a non-highlhghted†
 * !  ("                         !  †button next to a jighlighved button
 *ç
 ™`  BUTTON_LA¬EL_Y_NFFSET         - Y offset for plibing e la`el to the right *  `  " ` (     $                   of a butto.
 *   BUTTON_DEFAULT_LABEL__œFFSET†- Y offset for plicing0a mabel to the`right * *                                   of a dafaulp button
"*   BUTTON_LABEL_Y_OFFSEt_NT      - Y offset bor placing a label to the zight
 *    !                             og a jon_troughed buÙton
 *
 "
 *   BufTon X Positions:
 *
 *   BUTTONFULM_X_LOC1      (      Wide button on the left
!*   BUTT_N_HALF_X_LoC1            - Medium fqtto~ nn vhe left
 *   BUTTON_HALF_X_LOC2            - Medium button on the right
 *   BUTTON_THIRT_X_LOC1           - Smqll `utton on the left
 *   BUTTON]THIRD]X_LMC2 $       ( - SmaÏl button centered
 *   RUTTON_THIRD_X_LOC3           - Small button on the rhght
 *
 * " BUTTON_FULL_X_LOC1_COL2       - Wide button on the0l%ft(of column 2
 *†  BUTTON_HALF_XLOC1_COL2   †   - Oedium button on(phe left0of column 3
 *   BUTTONWHALF_X_LOC2_COL2     0 - Mediue buppo. on the0right of cglımn`2
 *   BUTTKN_THIRD_X_LoC1_COL2      - mall button on the lefT of coL}mn†2
 *   BUTTONOTHIRD_X_LOC2_COL2   †  - Small buttmn centered of$column 2
 *   BUTTONTHIRD_X_LOC3_C_L2     "- Cmill button on the right of column 2
 *K *   BUTTONﬂFULL_XﬂLOC1_KOL≥       ≠ Widg button on the left og column 3 *†  BUPTON_HALF_X_LOC1_COL3       - Medium buttoÓ on the lefd of coluin 3
 *   BUTTON_HALF_X_LOC2_CO\3   $   - Medium button on the right of column(3!*   b‘TTON_THIRD_X_LOC1_COL3(   ! - Small button On thd left of cOlumn 3
 *   BUTTGN[THIR@_X_LOC2_COL3      - Small button cenuered of column 3
 *   BWTTOO_THIRD_X_L_C3_COL3      - Smaml bwtton on the right of column 3
 *
 *   BUTTON_FULLOX^ÃOC1_SPL (      - Wide button centered /n a special form
 *   BUTTKN_HALF_X_LOC1_SPL     `  - Medium button on the left of q speci`l"for}
 *   BQTTON_HALF_X_HOC2_SpL  (     - Medium button on the right of a spdcial form
 *   BUTTGN_THIRD_X_LOA1_SPL  `    - Small `utton gn the left of†a special formä * $ BUTTON_THIRD_X_LOC2_SPM      $-†Small button ce~TerEd of a special form
 " " BuDTO_THIRL_X_LOC3_SPL       - Rmall button on the right kb a`special form
 *
 (   BUTTON_FULL_X_LOC_CEN         - Centeret wide button on a sma|l fovm
 *   BUTtON_HALF_X_DOC_CEN         - Centered medium button on ! sma|m form*†*   BUTTON_TiIPD_X[LOC_CEN    !   - CentEred small button o~ a small form
 *
 *   BUTTON_FULL_X_LOC_CEN_MMD   " - Centered wade button oo a mgdium form 
 *   BU‘TONHALF_X_LOC_CEN_MED     - Centered!mediU- buttoN on a mediu- form 
 *   BUTTGN_THIRDX[LOC_CEN_ED    - Centered small button on a medium foÚm"
 * *   BUTTON_FULL_X_LOC_CMN_LRG  !$ - Centerdd wide button on a largÂ f/rm 
 *   JUTT_N_HALF_X_LOC_CEN_LRG     - Cmntered medmum button on a large form 
 *   BUTTON_THiRD_X_LœC_CEN_LRG    - CÂnteree small!buttkn on a labfe form 
 *
 *   BUTTON_FULL_X_LOC_CEN_SPL(    - Centeped wiee button on a special(form 
`* " BUTTON_HALG^X]LMC_CEN_SPL     - Centered medium button on a speciad form 
 *   BUTTON_TH…RD__LOC_CEN_S–L    , CÂntered sm!ll button on a special foRmÄ
 */




















ç
/*
 *   FATACXES
 
ä *
 *   Create a framed databo8 with a label above t`e databox.  Then
 *   cmpute the Y lkcation for the next widfet inqite the fsamm.
 j
 *  !   y_framu_loc = FRAME_T_MARGIN
 *
 *      ui_databox_create ( Frame_id- "",               !    @
 *         (             0  FRAMEOL_MARGIN,               `  @( *      `                   y[frameloc, 8.0,"              †@
 *                          DBOX_WID_SINGLE,"       (    †   @
 * ††     "                 "FaÙabox Label", value,          @
 *        `  "              TRUE, `atavype, nu}_vals )
 *
 *      yframe_loc = y_fzame_loc +        `                 @
 *       (            DBX_HGT_LABOVE +                    ( A
 * 0   "              INTE_WIDGMT_SPACE
 *       0      0       
 *
 *   Create i framed databox wyth a label to the sidÂ.  Use the 
 *  $tefault dabel lEngth for a wingle column da4abox†and comute
 *   the ‰atabx width.
 *
 *      y_frame_loc = FRAME_T_]ARGIN
 *
 *  0   wid = FBOX_WID_SINGLE -     $ "    "                @
 *     0   † (DBOX_LABEL_LEN_SInGLe
 *   
 *   
 *   †  ui_dat`cox_create ( Drame_if, "",                    @
 *              †           FRaÕE_LﬂMARGIN,!  `              @ *  0                 !     y_fr!me_loc, !             " (   @ *                 !        DBOX_@ABEL_LEN_SINGLM,           @
 *   "                 (    7id,            0                @
!*           $              "DataboX Label", ~alue,          @
†*           "             !FALSe, datatype, n5i_vals )
 * *
 *   Databox WÈdth end Height:
 *
 *   DBOXﬂWYD_SINGLE        - Vidth of0a cingle width dauabox   
 *   LBOX_WID_SPDCIAL   "   - Width on a specmal wi$th databox   
 +   DBOX_WID]DOUBLE        - WIdth of a do}ble width da|abox   
 *   DBOX_WI_TRAPLE `       Width of c ÙrIpd% width datebox    *
 j   DBOX_HGT_LQBKVE! "     - Hei'ht ob a d·ta`ox with a label on the tot
 *     0                      (even )f dhe lajel is blank)
 *   DBOX_HGT]NG^LABOVE 0   - Heigjt of a databox with a label to the sIde
 *
 *   DBOX_LABEL_LEN_SINGLE  - Dafaqlt label ,ength foÚ a single width databox
 * (        (  (              (used when "Lafel_above" is false)	
 *   DBOX_LABEL_LENWSPECI@L - Default!La"el length for a sxecial!width data‚o8
 *   DBOÿ_LABEL_LEN_DOUBLE  - Defiult label l%ngth for a doublm width databox
 *  0DBOY_LABEL_LEN_TRIPLE  - Default label length for a trIple widtl databox
 *
 *   DBO_LABELX_OFNSET    = REMOVED
 *   DBOX_LABEL_Y_OFFSET    / Y offcet for placing`a label0to the right of
 *        0                 $ a databNx wi4h "labelabove" faÏse.
 */





/*
 *   FILES
 *
 ** :   Create a form centered under the mcin menu thet h`s a file
 *   widget inside the(a Frimg.  The file widget is placed atç
 *   (  .0, 0.0 )(inside thE ÊraMe (a top Ìargin is not needed).
`.   The height of tle file widget includes a bottom ma2gin
 ™   and therefore can be usal as the (eight of the frame that
 *   contains Ùhe file widget.0 The filÂ widget has 5 lines iN 
 *  `th% last boxes.
 *!*(     form_hgt = FILEﬂuL_HGT + FOM_2V_]aRGIN + FRAME_2EDGE
 *      x_lo#!= WINDOW_CMN^P_LOC - 0.5 * ( wid + FOPM_2HOBORDER )
 *      y_loc = WINDOG_CeN_Y_LOC - 0&5(* ( fori_hgt + FORM_2V_BORDER )
†*
 *  "  form_id = ui_form_create( "", x_loc, y_loc, "UL",    @
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
sel_frame_elem, sel_box_elem, frame_select


classwide widget rules_item(1), object_item(4), method_item(4)


classwide integer elem_count, elem_ids(VIRTUAL), e_loc
classwide real stress(VIRTUAL)
classwide real sum_area, area(VIRTUAL)
classwide real min, max




$ Start
	FUNCTION init()
	real yloc_main, yloc_frame


		yloc_main = 0.0


		form_id=ui_form_create("form",@
									/* x location */ uil_form_sizes.form_x_loc( 1 ) , @
									/* y location */ uil_form_sizes.form_y_loc( 1 ),"ul", @
									/* width      */ uil_form_sizes.form_wid( 1 ), @
									/* height     */ uil_form_sizes.form_hgt( 1 ), @
									/* label      */ "Buckling","")


		opt_rules=ui_optionmenu_create(/* parent       */ form_id, @
										/* callback     */ "Action_cb", @
										/* x            */ uil_form_sizes.aom_menu( 1 ), @
										/* y            */ uil_form_sizes.aom_menu( 3 ), @
										/* label length */ uil_form_sizes.aom_menu( 2 ), @
										/* label        */ "Rules :", @
										/*              */ false)


				rules_item(1) = ui_item_create(opt_rules,"ABS","ABS",true)
		
		opt_object=ui_optionmenu_create(form_id,"",@
													uil_form_sizes.aom_menu( 1 ), @
													uil_form_sizes.aom_menu( 4 ), @
													uil_form_sizes.aom_menu( 2 ), @
													"Object:", @
													 FALSE)


				object_item(1)=ui_item_create(opt_object,"UNSTIFFENED","Unstiffned Panel",FALSE)


		opt_method = ui_optionmenu_create(form_id,"",		@
									 uil_form_sizes.aom_menu( 1 ),		@
									 uil_form_sizes.aom_menu( 5 ),			@
									 uil_form_sizes.aom_menu( 2 ),	@
									 "Method:",				@
									 false)


				 method_item(1) = ui_item_create(opt_method,"CUR_VIEW", "Current View", true)
				 method_item(2) = ui_item_create(opt_method,"CUR_GROUP", "Current Group", true)		
				 method_item(3) = ui_item_create(opt_method,"SEL_ELEM", "Select Element", true)
				 method_item(4) = ui_item_create(opt_method,"SEL_PANEL", "Select Panel", true)


		yloc_main += uil_form_sizes.aom_menu( 5 ) + uil_form_sizes.optionmenu_data( 3 ) + uil_form_sizes.spacing( 8 )


		ui_separator_create(/* patrent  */ form_id, @
							/* callback */ "",@
							/* x        */ 0, @
							/* y        */ yloc_main, @
							/* width    */ uil_form_sizes.form_wid( 1 ), @
											true)


		yloc_main += uil_form_sizes.spacing( 8 )
		
		real frame_width
		
				frame_width = uil_form_sizes.frame_margin( 1 ) + uil_form_sizes.selframe_wid( 1 ) + uil_form_sizes.frame_margin( 2 )
				
				yloc_frame = 0.0
				
				frame_select = ui_frame_create(form_id,"", @
										 uil_form_sizes.frame_margin( 5 ), @
										 yloc_main, @
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
				
				yloc_main += frame_height + uil_form_sizes.spacing( 8 )
		
		ui_separator_create(/* patrent  */ form_id, @
							/* callback */ "",@
							/* x        */ 0, @
							/* y        */ yloc_main, @
							/* width    */ uil_form_sizes.form_wid( 1 ), @
											true)


		yloc_main += uil_form_sizes.spacing( 8 )
		
		lstbox_result_cases = ui_listbox_create(form_id,"", @
									 uil_form_sizes.frame_margin( 1 ), @
									 yloc_main, @
									 uil_form_sizes.lbox_wid( 1 ),@
									 8, @
							)	 "Result Caser", @
									  extend", @
								A tr}e)


		yloc_main += uil_form[sizes.lbop_hgt, 6, 1 ) +†uil_form_sizes.spacing( 8 )	


	ui_button_create(form_id,"apply_cb", A
							)	 uil_form_sizes&button_x_,oc1( 2 ), @
					)			 yloc_-ain, @
								 uih_form_sizes.cutton_wid( 2 ), @
				I				 uilﬂform_sÈzes.button_hgt( 2 ), @
								 "Apply", @
									!tvue,false-


		ui_buteon[create(borm_id,"cancal_#b", @
									 uil_form_sizes.bttton_z_loc18 3 ), @
								 yloc_main, @
									 qil_form_sizes.bqtton_wid( 2 ), @
									 uil_form]3ize{.bıttn_hgu( 2 ), @M
							â	 "cancel2, @
									 tzue,false)
		
	yloc_maaN += uil_form_sizes.sqacinÁ( 8 ) + uil_form_sizes.button_hgu(  )


ui_butt/n_create,form_id,"InputDataView_cb", @
								 uil_fr}_sizes.button^x_loc1( 1 ), H
									 yDoc_mai., @
		)				 uil_form_sizew,jutton_wid( 3 ), @
								 uih_form_sizes.bupton_hgt( 2 ), D
				â	I		 "Buckline Input data", @
									 true¨false)


		yloc_main += uid_form_sizes.spacing, 8 ) + uil^form_sizes.button_hgt((2 !


ui_bupdon_create(fori_k`,"BucklingStrengthAssessment_c`",`@
)							 uil_form_sizÂc.button_X_loc1( 1(),"@
									(yloc_main, @
								 ıil^form_sizes.button_wid( 1 ), @
								 5il_fobm_sizes.button_(gt( 2 ), A
								 "Bucjling Sdrelgth AssessmeNt", `
)							 true,false)
	


	END FUNCTION
	$ End


	$ Start
	FUFCION displaq()

	
		ui_form_display("Buckling")
		udf_load_result_caseslstbox_result_cases)
	©
	END FUNCTION
	$ EfD


	$ Start
IFUNCTION cAncel_cf()


	 ui_form_hide("bwckling")


	END FUNCTIOŒ	
	$ End


+* Ω=======<5=========}==============?===-=============
		apply button callback
	  ==============5============================}========= */
	FUNCTION heckPanel_cb()
		ui_%xek_functioo("chOP~lMethod",bdiSplay")
	END FUNTION
	
	$`Start
	FUNCTION apply_cb()
	integeR status
	strI,f select_/ption[15]
	sprilg s_ElemList[virtual]
	string groux_name[63]
	moteger group[)e, num_elems, ia_elem_id(virtual)
	integer i_count, idx, panel_ids(viptucl)
	strIng sa_ElemList[496}(virtual)
	reAl ra_PanelInfo(virtual)
	
		ui_wid_gÂt(opt_method, "value", {elect_option)
		
		switch (select_option)
			kase("CUR_VIEW");
			
	Icasm("CUR_GROUP");
		
				db_get_current_group_ad('roup_id)
				db_count_elems_in_group ( group_id, num_elems )				syÛ_`llobaud_array(ia_elem_id, 1, num_edems)
		â	db_get_elum_kds_in_grou0   num_elems, g2oup_i`, ia_elem_id )
				app_int_irrayOto_vstrinf®"Ele-ent"( num_elems, ia[elem_yd, s_ElemList)
			
			case("SEL_ELEM");				ui_wid_gdt_6string(sel_box_elem, "value", s_ElemDist)
			
			case("SEL_PANEL");
				ui_wid_get_vstriNg(sel_bo8Oelem, "value", s_EdemHisu)				$`bucklinG.get_panel_stress()
		enl switk`
			
		retPanel.getPaneL(-1, s_ElemList, i_count, panel_ids, sa_ElemLast, ra]PanelInfo	
	
		integer lcases
		M
		ui_wid_oet(dstbox_result_c!ses "NSELECTAD", ncases)		
	string rcList[63](virtual)
		sys_allocate_array(rcLis|, 1, ncases)
		
		ui_wid_get(lstcox_result_cases, "VALUE", rcList)
		
	Buckling.get_anel_qtresq2( rcList,0panel_ids, saWE,emÃist, ra_PanelHnfo )
		
		/*
		for(idx=1 to i_count)
		$ump†va_PanelInfo(idx,1:7)
		end forç
		*/
/* ra_PanelInfo(19: rpan  -!
         * ra_PanelInfo(2): space -b
         * ra^PanedInfo(3): afgle
         . ra_PanelInfo(4): ppojected Coordynate (1 oÚ 2)M
		 . Úa_PanelInfo(5:7) Cooreinate Ôf P`ne, entaÚ) ç
		 */

			
		$ real tsr_inform(11)
	
		$ makeWpanel_inform.buckling_input( load_case, panel_ids, sa_ElemList, ra_PanelInfo, usr_inform )
		
		$fmr(idx=1 to ncases)M
		$	dump rcList(ith)
		$en$ for			*	END FUNCTION	$ End
	
$ START
FUNCTION InputDataView_cb()
/* "  
    	integur f_idl i_Tmp
        real r_tmp    ( 0 stri~g s_tmp[7]
  $     
"   	tgxtﬂopen( "input.d!t , "nr", 0, 0, f_id(
    	
    	integer npcnml, nloadcase
    
        text_read(f_id, "!I%", npajel, r_tmp, s_tmp)
        text_read(fOil, "%I%", nloadcase, r_tmp, s_tmp)
    † " 
   "    integer†cols = 10
  !0    integer"rÔws
    `   
 (      rows = npqnel*Óloadcase
         
        iNteger i_value(rkrtual)
   (    sys_allocate_array(i_value, 1, ross, 1, 2)
        M
  `  0 "real r_valuE(virtual)
        sysOall/cate_abrayhr_ralue, 1, rowr, 1, 8)
        
        stRing ElementDisp[2848](virtual)
  "     sys_allocate_array(EnelentList, 1, rows)ä        
        string row_labels[11](virtqal)
  "     sys_aLLocade_array(ro7ﬂl`bels, 1, 2owq)
    `   
        string col_labels[11](10)
 
        col_labels(1) = "LID"
   0    col_labels(2) = "spaN-n"
 (   (" coL_mabels(3) = "spaBe-s"
        col_labels(4) = "thick."
        coh_labdls(5) = "hole-a"
    !   col_labelr(6) Ω†"holeb"
        col^labels(7) = "sig_xx"  (     col_labels(8) = "sig_yy"
        coÏ_Ïabels)9( = "Ùaq_xy"
        col_label3810) = "SIGMA_H"    (  
    `   
    Iinteger kount = 0
      ! integer(idx¨ idz, striNg_nength
        
        for(idx=1 to npanfl)
            fgr(idz=1 to nloadcase)
!        ` `    coqnt +=1
  p 		Itext_reaD(f_id, "%2I%%9F%", i_valuu(couot,1:2), s_valuecount$1:9), s_tmP)
                row_l‡bels(count) Ω  str_from_integer(i_~al5e(count, 1))
                -
       $  "     text_read_stbing(f_it, ElementList(„ount), striog_lenGth)
    		end for
   !    end gor

  " text_close(f_id, "")    
       !sys_class_set("TI_IlputDataView", "cols", cols)
 ` †    sys_class_set("UI[InputDataView", "rows,`rows)
   !    sys_cla{s_set("UI_IntutDat`View", "col_labehr", col_labels)
        sys_class_set,"UI_InputDataView", "rou_labels", rowlabels)*/

UI_InpuTataView.init()
	 UI_InputDaÙaView.displey()


END FUNCVION$ END
ä
	$ StqrÙ
	FUNCTION cHkPanel_c"()
		
	END FUNCION
	$ END
	
	& Start
	FUNCTION Claar_cb()
		UTL_drawClea2()
		rgpaint_graphics()
	END FUTION
	$ End
	
FUNCTINN!oet_penel_stress2 resultOcase, pnÏ_ids,0elo_list, pnl_inform)
STRING$result_case[M()
IOTEGER pnl_ids()
STRING elm_hist[]()	
REAE pnl_inform()
$ REAL(usr_inform()


INTEGER pnl_c/unt
INTEGER doadsase_sount
INTGGER proJected_cyd_dir
REAL Thickness, angde
REAL pnl_stress(VI“TUAL)
CTRING flime[102]
INTEGER fid
INTEGER ilteger_data(2)
REAL real_data(11(
INTEGER i, j
REAL SIGMa_H


l·d#ase_counta= sys_arpay_xbouNd(result_case, 1)


string loal_case[63](virtual)
string sub_cqse[63](virtual)


sys_allocate_asr·y(loa‰_case, 1, loadcase_count)
sys_amlocade_array(subcase, 1, lo·dcase_coujt)


integer adx
		
for(idx=1 to loadcase_ckunt)
Iload_case(idx) = str_tokÂn(result_„!se(idx), ",", 1)
	sub_case(idx) = strOtokel(result_case(idx), ",", 1)
and for


integErdoadbase_i$s(virtu`l)integer Ûubgases_ids(virtual)

s˘s_allocate_arsay( load#Ese_ids, 9, loadcase_count )
sys_!llocate_array( subcases_ids, 1, loadcare_count )

FOR * i=1 TO loadcace_count)-
db_get_load_case_id(load_eawu(i), loadcase_ids(i))
EFD NOR

pol_aount = sy{_asray_(bound( pnl^ids, 1 )
J
Êile_bui|d_fname("./","input","dat ,"L",ffamei
textﬂOpen(fname- "NOW",,0,fid)J
/*
 teht_˜rit$_stzing(fid,"#User Lata*/" : DNV, "//s}s_date()//". "//sys_time())
 texÙ_write(fidbYield sprength       ( "    : %f%", 0( usr_)nform(1), "")
 text_write(bid,"Modulus nf"elasticipy       z %F-", 0, usr_inform(2), "")
 text_write(fid,"Plate boundary stiffeni~g   : %F%", 0, usr_infkrm*39, "")
 text_writehfid,"Cut out edge stiFfening    $: %F%", 0, usr_inform(4), "")
 texp_write(fid,"Eta sigm!            †      : %F%", 0$ u{r_inform(5), "") texp_wride(fid,"Eta tau      `         †    : %F%", 0, us2_infovm(7), "")
0text_write(fid,"Eta xy      `               : 'F-"`0, usrOinform(), "")
 text_write(fid, Plate part of doubld bkttom$: %F%", 0, usr^indorm((), "")
 texÙO7rite(fid,"Allowable elasTic buckling  : %D%", 0, usr_inforÌ(9), "")
 text_writu(fi`,CorrosiÔNmargin            : %F%", 0, usr[inform(10), "")
 text_vrite(fId,"Sifety factor TO be         : %F%, 0,0usr_inform(11). "")
j/


tÂxt_write(di`-"!I%", qnl_count, 1.,""")
text_write(fid,"%I%", loadbase_count, 1Æl""")

extractStress.doiv)loadcaÛe_ids, u|mli{t, elEm_count, elem_ids, streÛs)


ilteger status, e_couÓt, e_mds(VIRTUAL+
rÂal ˘ieldOf, corrosion_afdition


FOR ( i=1`TO pnl#ount )


ui_writdc( "P!nAl Checking Status : %d/%d", È, pnl_count)


$get_ids_fr/m_entityOlist( elm_list(i), #ELEMENT", e_cou~d, e_ids πç	
	 e_count = fem_u_count_id_list(	1024, elm_list(h), falQe,$status)
	 sys_alloaate_arra9(g_ids, 1= e_cgunt)
	†fem_u_gÂt_id_list(		1024, elm_list(h), e_count, TRUE, e_ids)
	
d Buaklinc.get_pn,_area8e_count, $_ids)

Buckling.get_tËyckness(e^counp, e_ids, thickness )


yield_f = Bucklhng.ged_material_property(e_count, e_idw)


corrosion_addition = 0.0


FOR ( n=1 TO(loadcasÂ_soun| )


Btckling.get_pnl_stress( e_c/unt, j, pnl_stress )ç


angle = p~l_inform(i,3)


IF ( ·ngle > 0. ) THEN
BUckling>qtress_|ransform( pnl[stress, angle )
END I∆


Buckling.consider›compres{ion( pnl_stresr )H

$ calculatign Htll girder stress
SIGMA_H = p.0


$ write inp}t data TO file
integer_data(1) = pnl_ids(i)
integer_data(2) = loadc`se_ids(j)


reel_data(1) = Pnl_inform(i,1)/* span†- l */
realdata(2) = pnl_inform(i,2)/* space - s */
real_data(3) = yield_f/* yielf stresr */
reql_data(4) = thickness/* thicknass *-
realWd!ta(5) = corrosioÓ_addition/* corrosimn additions (/
real_data(6) =!0./* Hole -a 
/
real_data(7)(< 4./* hole -b†*/
raal_daÙa(8) = SIGMA_H/* hull girder streqs xx */
real_d!Ùa(9) = pnlstsess(1)/* stress xx */
realﬂdatA(10) = pnlﬂ{tress(2)/™ stress yy */
realﬂdata(11)!= pnl_stresÛ(;)/* shear svresÛ xy */




text_write(fid,*%2,!I4% )%%7(%F8.1% )%•4(%F15.3% )%", yfTeger_data, reah_dada, "")
text_writeWstring(nid, dlm_list(i))


SYS_FREE_ARREY(pÓl_stress)


END FOR

e_cO5nt  0
SYS_FREE_ARRAY(e_ids)


FD FOR


text_close(fid,"")


re‰urn 0


END FUNCTI_N


FUNCTION bonsiler]comprepsion( pnl_stress )
REaL pnl_stress()InTEER i


FLR ( i=1 TO 2 !


IF ( pn|ﬂqtress(i+ > 0 ) DHEN
pnl_3tress(i) = 0.
ELSEpnl_stress(i) = mth_abw( Pnl_stress(i) )
END IF


END FOR
*
RETUBN 0


≈ND FUNCTION


FUNCTINF get_pnl_sÙress( e_count, lc_idx, pnl_stress ©
-

INTEGER e_count, lc_idx
RDAL pnl_stress()
INTEGGR i
REAL swm_strgss_xx, sum_strerc_yy,$sum_stress_xy


SYS_ALLOCATE_ARRAY( tnl_stress, 1, 3 )


sum_stress[xx = 0.
sum_s4rgrs_yy = 0.
sue_Ûtresr_xy = 0.


FO ( i=1 TO e_count()e]loc0=0mth_array_search( elem_ids, e]ids(i), FALSE )
sum_strdss_xx + strers(lc_idx$ 3*e_,oc2)*ap%a(i)
sum_stress_yy += stpers(lcOidx, 3*e_|oc-1)*area(i)
{um_s4rgSs_xy += stresS(lc_idx, 3*e_loc )*a2ea(h9
END FOR


pol_stress(1) = sum_stress_xx/sum_area
pnl[stress(2) = sum_stress_yy/sum_arEa
pnl_stress(3) =!sum_stresÛ_xy/sum_area


RETUPN 0
END FUNCTION


FULCTION gep_pnl_area(nElem, ia_ElemId)
INTAGER i, nElem, ia_ElemId8)
/* real area(viRtual), sum_are!(*/

-

SYS_ALLOCADE_ARRAY(aree, 1, nElem)
sum_area = ∞*


FOR ( i1 TO nElem (
get_element_area( ha_ElemId(i	, azea(i) )
sum_area += abea(i)
END FORJ

RETURN∞sım_arga
END FUnCTiON




BUNCTION stress_transvorm( qNl_stresr, ancle )
REAL pol_stresw(©
RE!L angle
REAL xx, yy, xy



xx = pnl_stress(1) *"(mth_cÔsd(angle))**2. + pnl_stress(2)$* (mth_sind(anole))**2.`+ @
2*pnd_stress(3)*mth_{hnd,angle)*m4h_cosd(a.gle)


Yy = pnl_stress(1) * (mth_sind(angle+)**2."+ p*l_strecs(") * (oth_cosd(angle))**2. ≠ @
2*pnd_stress(3)*mth_sind(angle)*mth_cosd(angle)


xyd= -1.*pnl_s0ress(1) * mth_cosd(angle)*mtl_qind(angle) +†pn|_stress(2)*mth_cgsd(angle)*Ìth_sind(angle) + @
pnl_stsess(3) * (((mth_cowd(angLe)9**1. - (mth_sild(angle))**2. )


`nl_stess(1) = xp
pNl_stress(2) = yy
tnl_svressh3) = xy


RETURN 0


END FUNCTION

/*
FUNCTION get_pnlarea()
 ILTAGES  i

 SYS_ALLOCATEOARRAY(areq, 1, e_count)
 sum_area$= 0.

†FOR ( i=1"TO e]count )*      get_element_area( e_kds(i), area(i) )
      sum_araa += area(i)
 EJD FOR

 RUTURN 0
END FUŒCTIONM
*/


ç
NUNcTION get_thickness( nElem, ia_EmemId,0t )J

REAL t
ILDEGER nElam, ia_UleMId()


REAL thiak_sum =`0.
INTEGER il!rids(VIRTUA\)
INTEGER gener_ele-_|ype, dof_set_flag, condense_flag
IOTEGER geom_flag, form_flakl lam_fmag, mayer_count
INTEGER mat_id, material_lin, material_dir
STRING pName[32]
REAL Real_arriy(3)
INtEGER data_typm, material_id
INTEEER int_value,c/ord_value, node_value, Fkeld_value
SPRING string_value[3]


$ SYS~ALLOS¡tE_ARRAY( 4(ickne3s. 1, elem_count )
[YS_ALLOCATE_CRRAY( ries, 1, nElem )


db_get_region_for_elements ( nElam, Ia_ElemId, rids)


FOR†( i0= 1 TO nElem )


Db_gev_region_defmnitiof( @
+* region ID        */rids(i), @
/* set namE         */pName, @
/* elmment type ID  */geneb_glem_type, @
/*0dof sEt flag     */lof_seT_fn·g, @
-* condensg blag    */condence_flag, @
/* geom flag   (    */geom_flag, @
/* form flag        */form_flag, @
/* lam]flag (       */lim_flaw, @
/* layer count      */layer_count, @
/*†oatgraal id      *-mau_id, @
/* mateRmal linear  */material_lin, P
/* materia| eirect  */materiam_lir)


dbﬂgev_proq_vadue( @	
/* region ID 0    ( */rids(i), @
/* word of intere3t */36, @
/* material"ID "    */=atdrial_id, @*/* data type        */date_type, @
+* INTEGER vadue    */int_v·lug, @
/* REAL arrcy       */real_array, @
?* char STRING      *.ctring_value, @
/* coord ID         */coord_velue- @
/* node ID(    0    */node_value,$@
/* fidld ID         */field_value	


$thiccness(i) = real_array()
thick_sum += real_arpiy 1)*area(i)

END FOR


t†= thick_Sum / sum_qrea


SYS_FREE_ARRAY( rids )


RETURN 0

END$FUNCTION


FUNCTION get[mater)al_propervy(nElem, ia_ElemId)
integer nElem, ia_ElemId()
integer idX
string M!tName[63]J

seal yield_stress, sum_yield_area, r_arear, r_sumWarea
integer i_cotnt


sum_yield_are` =(0.
r^su-ﬂarea = 0.


fr(ilx=1 do nElem)

MatName05 udf_get_mat_name_ass_elem(ia_ElemId(idx))


kf(sTr_index(MatName, "MILD" ) != 0) thEf
yield_stress = 235.
elsÂ if(str_index(MatName,$"32" ) != 0) then
yield_stbess = 315.
else if,str_index(MatName, "36" ) != 0)$then
yieldOstress = 345.
ense if(str_index(MatName, "40" ) != 0) then
yiel‰_ctres3 = 392.
else
yield_stre{s = 2≥5.
end if


fem_ceom_facE_area ("Eleoent " // str_from_ynt%ger(ia_ElemId(ydx)) ,r_areis, i_count)


sum_qield_area += yielg_stress*r_areas	
r_sum_area +=!rWareis


Ând fmr


real mean_yield_stress

ç
}ean_yiuld_Ûtress = sum[yield_area/sum_ar'aä

return me`n_)ield_stress
END FUNCTION

END CLASS
$ End


FUNCTION Áed_elemenp_area( eid, area )
INTEGER eid, numnode
REAL area
ä
INTEGER nid(4)
REAL n1(3)< n2(3), n3(3), n483), qrea1, area2


$SYS_REALLOCATE_ARrAY( nmd, 1, numnode )
db_get_e|em_nodes( Eid, numnode, nid )


SWITCH ( numnode )
CARM ( 3 )
db_get^node(nid(1), n1)
db_get_node(jid(3), n2-
db_get_node(nid(3), n3)
g%Ù_tviangLe_area( n1, n2, n2, are! )
KASE ( 4 )
`b_get_node(nh`h3), n1)db_get_ngde(oid(6),"f2)
db_get_fode(nid(3), n3)db_get_node®.id(¥), n4)
get_triangle_area( n1, n2, n3, area1 )
get_triangle_area( n3, n4,"n1, area2 )äarea = area1 + area2
E^D SWITH


$ SIS_FRUE[ArRAY nid)

RETURN 0

MND FUN√TION


¬uNCTION get_vriangleOerea( n0, n1. n2, arma )


REAL n4(), n1(), n2()
RE@L area
-

EAL a,b,c,s


a 9 mth_sqrt( ( n0(1) -!j11) )**3. + ( n0(2) - n!(") )**". + ( f0(3) - n1(3) )**2. )
b - mth_sqÚt( ( n1(1) - n6(!) )**2. + ( n1(2)0- n2(2) )**3. ´ ( n1(3) - n2(3) )*.2. )
c = mthWcqÚt( ((n2(9) - n(1) 9**2. ´ ( n(2) -"n0)29 )
*2. + ( n:(3) - n0 1) )**2. )
s = (a+b+c)/6.


area = mth_sqrt( s*(s-a)*(s-b)*(s-c) !


RETURN 0

	
END GNCTIOn