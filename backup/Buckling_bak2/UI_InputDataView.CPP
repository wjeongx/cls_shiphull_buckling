

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
 *      ui_selectdatabox_create (0{el_frAme_id, "",      $   @
 *          !                     SFRAM_L_MARGIN,   †       @
 *                    `   "       SDBOX_y_LOC2, 0.0,         @
 *                         &  † " SDBMH_WID_SIGLE,   0      @
 *        `               !  † !  "Select Databox0One",   $  @
 * "       "   0  !               value, TRUE, datatype,     @
":    $     (                     rrompt )
 *-
 *  0 °$y_loc"? y_loc + SFR¡ME_LQBEL_HGT +  0                @
 *        !           $"SFRAME_2SDB_HGT_LABOVE +   "         P
 +      !0(         "   SFRAME_2EDGE ;   !       !           @
 *      † †          "  INTE_WKDGMT_SPACE
 *
 * .   Sedect Frame _idths `nd HeighTs
 j
 *   SFRAMM_WID_SING\E         - Gidth of a si.gle$vhdth(select frime
 *   WFRAÕE_WID_SPECICL      0 -"Width of a specaal width selebt framg
 * ! SFRAME^WIDWDOUBHE `       - Widtj of e double width select brame
 .   SFAME_WID_‘RIPD        0≠ Width of a triple width select frame
 *
 "†  SFRAME_LABEL_HGT$ "   "   - HeIght of the lafel abÎve a {eleCt frame
 
≠
 *(  SFR@ME_1SDB_HGT_LABOVE    - Height f a se|ect frame {ith
 *  $             †           `  1 seleCt dat`box with`a†label
 *   SFRAMA_2SDB_HG‘_LABOVe $  -!Height of a select frame witË
 *  `       $                    2 select dAtaboxes"7ath labels
0*   SFRAE_3SDBWHGT_LABOVE !  - Height of a sdlect fra}% with
$.                               3 select databoxgs†wit` labelsM
 *   SFrAME_4SDB_HGT_LABOVE   †- Height of a!selecT frame with
"*           " † (    $       !  4 selmcd databoxes with labels *   SFRAMI_5SDB_HFT_LABOVE    % Hehght of a sÂlect frame with
 *           `  `  `             5 select databoxes with labels
 *
 *$  CFWAME[HGT_LaBO‘E_InCR    -0Increment for making Seldct fzames with 
 *     (             (  $ 0(     more†than 5 semgct datajohes w)th labels
 *
 *   SFRAME_1sDB_HGT_NOLAB_VE - Hdight of a seldcp framd withç
 *       (           !       `   1 sÂldcp datebox without s |abel
 *   SFRAE_0SD¬_HGT_NO_LCBGVE"-`Height of a sedect frame with
!*!  †  †   0           †       †2 select databmxes without l·bels
 *   SFRAME_3SDB_HGT_NN]NABOVE - Height of a select frame$with
 *                             † 3 select dav·boxes withowt labelsç
 *   SFBAME_4QDBOHGT_NO_LAFOVE - Height od a select framE wivh
 *       †            0(`        4 select databo¯es without"la"ÂlsJ *!  SFRAME_5SDBWHGT_NO_LABOVE - Height of ! select frale with
 *         `                     1 stlect databoxes ˜Ètlout LabelsM
 *
 *   ”FRAME_HGT_NO_LABœV_KNKR†-`Ilcrement`for makilg select frames with 
 *  $         !                  more than 1 selEct databoxes without labels
 *
 *
 *  "Select Frame$Margins8
 *
 *   SFRAME_L_MARGIN `         - Ilside$l%bt margin for select ditaboxes
 *   SBRAME_R_mARGIN          )m Inside righÙ mapgin Êor selEct databoxes
 *   SFRAME_T_MARGIN  00       - Inside top margin for Select daTaboxes-
 * $ SFRAME_b_MQRGIN           - InsmDe"bo|tom†margin for sele„t"davaboxes
 *    :   SBRAME_2H_MRGI^ "        - Both horizontal marginqM
!*   SNRAmE_2T_MARGHN     (    - Both v%rtical margins * ¢
 *   select Fr!me Placement:
 *
 *   SFPAME_XOlOC_COL1(0    "  - X LocAt)oo for a select frame in column 1
 *$             (¢ `            ®same as "form_lmargh~"!
 *  "SfRAMM_X_LOC_COL2   0     - X LocatÈon fob$a$select frqme in clumn 2
 *0  SFZAME_X_LOG_GOLc         - X Hocavion for a selecu fr`me in column 3 */







ä
/.
 *   SCR_LL_FRAMES
 *
 * *   Creatu a scroll frame in"a$forM.
 *
 "
 *!  Scroll Frame Wkdths and Hekwhts:
 *
 *   SCROLL_FRAMEWWIL_S	NGL≈       -`Witth of a single widvh scroll frama   -
 *   SCROLL_FRAME_WIT_SPECI@L  !   - Width of a special width scroll framg0 
 *   SCRODLFRAME_WID_DOUBL (     -!Width`f a dnuble 7idth scrÔl| frame∞ 
 *   SCROLL]VRAMEOWID_TRI–LE  "    - Width of a triple wi‰th scroll vrame  
 *
 *   
 *  0CCROLL_FRAMG]WORK_WID_SINGLe "- Working width mf a wingle width
 *          †                 0     $scroll frame   ç
$*  `SCROLH_FRAME_WORK_WID_SPECIAL - Working width oÊ a specIql width 
 *      †               0       `    scRol| vrame   
 "$ †SCROLL_FRAOE_WORk_wID_DOUBLE  - Wo"kinf widvË of a duble width 
 *                (    !             scroll frame   
 *  $SBROLL_FRME_WOPK_WID_TRIPLE  - Working width of a triple widtH
 *                     $ 0   (  $    scroll frame   
 *
 *  $SCROLL_FRAME_DBOX_WID_SINGLE  - Width of a single wadth saroll fr·me   
 *                ""   `   !     $   databox
 *  $SCBOlL_FRAME_DBOx_WID_SPECIEÃ -!Width of i special(w)dtH scvole frame  
 *     "    $             "(        0databox
 *   SCROLL_F”AÕEﬂDBOXWID_@OUBLE  - Wadth of a double width(scroll frame $
 *                                  "d·tabox
 *   SCR[LH_FRAEe]DBOX_GID_TRMPLE  - Width`of a triple†˜idth scroll`frame 0
 *   ††                              databnx
 * * ( SCROƒL[FRAME_LABEL]HGT        - Height of thm label above a* *    0    "        (                scsoll frame    *
 *   RCVLL_FRAMM_1DBOX_HG\       `m SÛroll nrame height with 1 eatabOyä *   SCROLL_FRAME_2DBOX_JGT        - WcrÔll fr·me height witH(20tatabopes
 *   SCROLL_FrAME_3DBOX_HGT    (   - Scroll f2ame hdight with 3 databÔxes
 *   SCROLL_FRALE_4DBOX_HGT        - S„roll frame heig(t with 4 ditaboxes
 *   SROLN_FrAME_5DBOX_HgT  !     ) Scroh| frame hdigjtwyth 5 datkboxes
 *
 *   ”cROLD_FRAME_DBOX_HGT_INCR   †- Scrkll frame heioht ilcrement
 *
 *   SCOLL_NRAMEO1DBMX_WORK_HGT   - Scro|L frame wosk height For 1 databoz
 +   SCROLL_FRAME_2DB_X_WORK_HGT  (- Qcroll frÈm! work height for 2 dataBoxes
 *   SCROML_FV¡ME_3DBOX_WORK_LGT   - Scroll frame wozk heaght dor 3 d!ta"oxes
 *   SCROLL_FRAME_4DBO_WORK_HGU   - Scrmll frame work heig`t for 4 daTaboxes (+   [CRKL\_FREME_5DBOX_WORKO»GT 0 - Scro,l frame0work heigh4 f-r 5 databoxes
 * 
 *   SCROLL_FRAME_DBOX_WORK_HGT_INCR - Scroll frame wozking heighv incremunt
 *
 *   CSROLL_FRAME_ZLiDER_WID (     - WÈdth on`th% sli‰ep oÓ the right 
 *      "       "         (        " of a scr/ll!frA-e  !
 *   SCROLL_FRAME_SLIDER_HGT   $   - HeiGht Ôf the slider aT Ùhe bm|tom 
 *                    0              of a scroln frame   
 *   	 *   ∆rame MarÁins:ç
 *
 *   SCROLLﬂFRAME_L_MARGIN        †- Inside lmft margin0fÔr widgets io 
!*    (                             "a scrgll vrame
 +   SCROLLWFRQME_R_MARGMN  0      -"Inside right margin for widgets in 
 *              `0           $   $   a s„roll fpame
 j   SCROLL_FRAMM]T_MARGIN        `- Inside top margin above firsu(widget4
 *00 SSBKlL_FRAME_B_MARGIN       $ -`InsiDe bot‘oe margin below last widget 
 *   
 *   SCROLL_FRAME_2I_MARGiN         Bot` hmrizoltal eaRg)ns
 *   SCROLL_FRAME_2V_OARGIN    !   - Both verti!al mrgins
 */











/*J *  $@UTTONS
 *
 *
 *   Create two buttons0iÓ a sm`ll form.  The bwTton o. phe luft is a
 *   def`ult button.  Use "Ëadf" size vuttons. *
 *      ui_button_create ( form_id, "calÏbacÎ"L  0    $ (    @
 *                       † BUTTON»ALF_H_LOC1,             ( @* *    !      !             ydoa,                  †  † †    @
 *§(              †        ButTON_UIƒ_HALF,                  @
 *      (                 00.0, "Levt Butpon",               @
(*                         TRUE, TRUE ) 
 *
†*      y_loc = y]loc + BUTTON_Y_GFF[ET
 *
 *      ui_button_create * form_id, "ballback".              ¿
 *                      (  BUTTON_HALF_X_LOC2,               @
 *    !           "     ∞  y_loc,     d   !      †     0     @
 *           $             BUTTON_CID_HAÃF, 0                B *(     0           0    !$0.0$ "Right B5tton",    !         @
 *         `         †     TRUE, FALSE ) 
 *
 *   $ "y_loc = {_loc + BUTTON_Y_OFFSET +            "       @
 *  `                   BUTTON_HGT {       $      0        " @
`*            "        !INTER_WIDGET_SPACE
 *ç
 *
 *   Button Widths$and Heights*
 *
 *   BUTTON_WID_FTLL!       "      - Width of a whde butÙon on a wmall form
 *   BUTON_WID_HALF             ( - Width`of a medium0button oÓ ! smal, frm
 *   BUTTO^_WID_THIRD           † - Widvx†of a sMqll button†on a small form
 *
 ™ 0 BUTTON[UID_FıLL_NT      `  )  - Width of a nof_troughe$ wide Button oN
 *    "            † `         $(    q small form
 *   BUTT_N_WIDﬂHALF_T     †0     - Width of a ˛on_troughe` mudium button on
 *         (                        "a small form
 *   BUTTON_ID_THIR_NT         ! - Width Of a non_troughe$0wmall betton on
 *    #(          `     `0      ®   a ÛmaLl form
`*
 *   BUTTON_HgT            † `     - Butto. heigËt
 *  †BUTTON_DEGAUNT_HGT   $"       - DefatÏt bu|tof height$(includas top end
 *            `           (          boÙtom borders)
 *   BUTTON_HGT_NT  (              - Button height of Nnn_troughed buTtonä *
 *   BETTON_DAFAULT_BORDER]wID     - Default Button boreer wi`th
 +   BUTTœn_DEFAULT_BORDER_HGT     - Dgfault button border heigit
 *M
 *
 *   Button Locat{on Offsets:
 *
 * " BUVTON_IN_FRAME_X_OFFSET $    - X†offset for placing buttons insideä *                 `!           0 #  fr·mes!usino tje X Positionw defined
 *     $     `         †  0          below
 *
 *   BUTTON[±X‘RA_WID            " - X width,for one troqgh for†user plajement
$*   † (                "            of trough%d buttonS.
 * " BUTTON_2P‘RA_WKD        0   $ -`⁄ width`foR two troughs for user(placement
 *           "                 ( !   of trou'hed†buttons.
†*
 *   BUTTON_Y_OFFSET!    †        (- Y offse\`f/r pnacilg"a no~mhigËliGhted"
 *       !                           "utton lext to a highliwhted butto~
 *!  ¬UTTON_M_OFFSET_NT       †   (- Y of&set for placiog`a non-highliGhted 
 *     †   `                       " buuton!nExt to a highlightel button
 *
 *  "bUTTON_LABEN[Q_OFFSET         / Y offset for placing q label to the rightå
 *                                   og a`butuon
 *   BUTtNN_DEFALT_LABEL_Ÿ_O∆FSET - Y offset fgr placing a label to the right * *                  0       $        of a default buÙton
 .   BUTTON_LABEL_Y_OFFSE‘_NT   `  - ]"oÊfset for placing a label to the right
 
   $                  "      $  "  of a nontrougËe` betton
 *
 *
 *   uutkn X Positikns:
 *
 *(  BuTTOL_FU\L_X_LOC1    `      $- Wif5 button on(tËe ldft
 j`( BUTTONOHALF_X_LOC1     `      - Mudiım button!o. thm |eft
 *!  BUTTONﬂHALF_H_LGC2            - MedÈum rutton oj tha right
 * ( BUTTOL_THIRD_X_LOC1"          - Small button"on thg left
0*   BUTTON_THIZD_X_LO2           - Smanl b}tton cejtered
 *$  BUTTONﬂTHIRD_X_LOC30          - Small budton on the rIght
 *
 *   RUTTONFULL_X_LOC1WCOL2       - Wiee butuon on dhe left$gf!column 2ä *   BUTToN_H¡LF_XLOC1_C_L2   `   ) Medium but4oN on the lefu of Column 2
 *   BUTTœN_HAlF_X_LOC2_COL20 (    - Mediuo cutdon ol0the right of cohumn 2
 *   BUTTON_PHIRD_X_LOC1_COL2      - Small button0on tpe left of cnlumn 2
 * " BUTTKN_THID_X_LKC2_COL2      - Small "uttnn cuntered gb column 2
0*   BUTTON_THIRD_X_LOC3_C_L2    `0≠ SMall buttoj On the ryght of column 2* *
 *   BUTTOn_FWLLWX_LOC1_CO3(      - W)de bu|ton on the left ob column 3
 *   BUTTON_HALF]X_LOC1_COL3 0     - Medium bUtton on0the left of colımn 3 * † BUtTON_HALFOX_LOC2^COL3       - Medmum button o~ the r˘fxt of coÏumn 3
 *   BUTTON_THIRD_X_LOC1_COL3      - Small butuon on thE left of Column 3
 *   RUTPON_THIRD_X_LO√6_COL3      -†S-aÏl buttol centerud of!column 2
"*   BUTTON_THIBD_X_LOC3_COL3      - Small button on tje right f columl 3
 "	
 *!  BUTTON_FULL_X_ÃOK1_S–L        /`Wide button ceotered on a specaal fnre
 *   BUTTON_HALFOX_LOC1_SPL    (   - Eedium button on thd0left of a special form
 *   BUTTOW_HALF_X_LOC2_STL   †    - MedÈum button oÓ the right of a special form
 *   BUTTON_THIRD_X_NOG1SPL  `    -†S˝all button on tle left of(a speci·l foRm
 *   RUT‘ON_THIRD_XOLOB_SPL       - Small button(centesed of a†3pecial borm
`*   BUTPON_THIRD_X_LoC3_SPL       - Small§butpon kn the rigit of a sxecial form
 *
 *!  BUTTON_FWLL_X_LOC_CEN    $    - Centergd uide button on a s-all"form
 * ( BUTTON_HAÃF_XOLOC[CEN "       ≠ Centered medium buÙton on a small form
 *   BUTDOL_THIRDﬂX_LOC_CEN     $  - Ce~teved slall button on a Ûmall forl
 Í
0*   @UTTON_FULlI_LœC_CENOMED     - Cen|er%d wide butTon on a medium fosm  *  0BUTTON_HAF_X_LOCWCEN_MED†    - Celtered medaum button o.0a medium fnrm  *   BUTTON_THIRFX_LOC_CUN_MED  ( - CenteÚed small buttn oN a meditm form 
 *
 *   BUTTON_FULL_X_LOS_CEN[LRG     - CanTered wi‰e butto~ oN a large fozm 
 *   BVT\ON_HALF_X_NOC_CEN_lRW   0 - √entered me`ium button`on s large form 
$*   BETTON_THIRD_X_LoC_C≈N]LRG    - CenÙesed small butto. mn a large forl 
 "
"
  0BUT‘ON_FULL_Z_O√_CGN_SP     - Centdred wide button on a special &orm  j   BUTTOŒ_HALF_X_LOC_CENﬂSPL     - CenDer%d!medium buttoj on a special!form M
 *0 $BUTTON_THIRD_X_LOC_CEN_SPL0   - Fentered smalÏ butvon on a spmcial form 
 */

	










ç







o*J (   DA‘¡BOXES
 *
 *
 *  (Create a framed databox with a!label qbove the dada"ox.  Then
 *   compute the Y locathon for Ùhe Next widget inside vhe freme.
 *ç
 ™      y[Êrame_loc =!FRAME_TMARGIN
 *$*  0   ui_databox]cruate ( fvame_id, "#, †           $ (  0 @ç
 *            †     b       FRAME_Ã_OARGI^,     0           $@†*                          y_frame_loc, 0n0, `    `         @
 ™    $ !        !          DBGX_W	D_SINGLE,                 @
 *            0             "Databox Label", value,          @
 *                      0   TRUE, datatype, lum_vams$)
 "
 *` !   yWvrame_loc = y_fba-g_loc +              "      !0   @
 *      †             DB_X_»GT[LA@OBE +    0 `               @
 *    `     0 "       INTER_WIDGET_SPACE
$*`          † b        
 *-
 * ! Create a0framed ditabox with a labem to the sie%.  Use the 
 *   fefault label length for a singLe column datab/x and coMptte
 *   the databox gidt`.
 * :      y_brame_moc = FRAME_T_MSRGIN
$** *      wid = DBOX_WID_SINGLE -         !                    @
 *         `  DBOX_ÃABEL_LEN_SINGLE
 j †0
 *    *  `   ui_databox_create ( frame_id, "",    "               @-
 *        $  †  †      !    FRaME_L_MARGIN,          "       @
 *                         y_fraÌe_loc,                 †   @
 *                          DBOX_LABEL_LEN_SINGHE, $         @
 *      "   †            †  uid,$         †     0            @
 ,0 (                  $    "Databox L·bel", value¨          @
 *                          FALSE daÙatyte, numvals")
 *
 *
 j  `Datcbo| Width and Hgioht:
 *J *   LBOZ_WID_SKNGLE  ‡     / Sidth gf a single width databox   
 *   DCOX_WID_SPECIAL  0    -(Wydth of a special width databox   M
 
   TBOX_WID_DOUBLE        - Wilth(of A doujle width databoX   
 *   DFOX_WID_TRIPLE  (     - Width of a triple width data`oy   
 * *$  DBOY_HGT_LABOVE        - H%ight of a datacox witH†a labal"on the top
 j 0       `   `   `          )even if†the labe| is blcnk)
 *   DBOX_HGT_LO_LABOVE     - HeiÁh4 Ôf ! fataboY wkth a laBel to the side
 +
 *   DBOX_LABEL_EN_SINGLE  - Default†l!bml lenctx for a single width databox
 *           "        †     ( (uqed whmn "labed_above" is false	
 *   DBOX^LABEL_LeN_WPEIAL - ƒe&ault label lengtx for a special gidth databox
 *   DBOX_LABELOL≈N_DOUBLE  - Lefault lcbel lengtx for a doublt"width da4ab/x
 *   DBOX_LJED_LEN_TRIXLE  - Default label |ength for a trile umlth d·tabox
 *
 *   DBOX_LABEÃ_X_OFFSET    - EOVGD
 *0  DBOX_LABEL_YﬂOFFSET    - Y offset for placing†a labml 4o the richt of
 *   "      !     (           q databÔx with "labelabove" faÏse.
 *-
ä




/* *0  FILEs
 *
 *
 ™(  Create a formce~tered$ulder the eail menu that has a dile
 *(  widgetinsÈde txe"a nrame.  The file widoet is placeD ct
 *   ( 0.0, 0&0 - insmde the nrame"(a top m`rgiÓ is0not needed).
 *   The`heighv!of the fhde widget includeS a boptom0mavgin
 *   and 4hErefnre c`n be uced as$thu height of the frame th#p
 *"  contains the file widget.$ The file widget has05†lines in!
 *   vhe list boyes.* *
†*      form_hgt = FILE_5LﬂHGT + FORM_2V_MARGIN + fRAME_2EDGE
 *  $   x_loc = WINDOW_CEn_X_LOC -†0.5 * ( ˜Id + BORM_2H_BORDER†)
 *      y_loc0= WANDOW_CEN_Y_LOCa- 0.50j ( gorm_hgt +àFOM_2R_BORDER )
 * *      form_id = ui_form_create( "", x_loc, y_loc, "UL",    @
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
string fname[64]


widget dbox
dbox = sys_class_get("Buckling","dbox_file")
ui_wid_get(dbox, "VALUE", fname)
	text_open( fname, "or", 0, 0, f_id)
	
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


string col_labels[11](13)


col_labels(1) = "LID"
col_labels(2) = "span-l"
col_labels(3) = "space-s"
col_labels(4) = "yield"
col_labels(5) = "thick."
col_labels(6) = "t_cor."
col_labels(7) = "hole-a"
col_labels(8) = "hole-b"
col_labels(9) = "sig_xx"
col_labels(10) = "sig_yy"
col_labels(11) = "tau_xy"
col_labels(12) = "SIGMA_H"
col_labels(13) = "Elements"


	integer count = 0
integer idx, idz, string_length


string BucklingInput[2048](virtual)
sys_allocate_array(BucklingInput,1,13,1,rows)


for(idx=1 to npanel)
for(idz=1 to nloadcase)
count +=1
			text_read(f_id, "%2I%%11F%", i_value(count,1:2), r_value(count,1:11), s_tmp)
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
BucklingInput(11,count) = str_from_real(r_value(count,10))
BucklingInput(12,count) = str_from_real(r_value(count,11))
BucklingInput(13,count) = ElementList(count)
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
					/* selectio~_type"*/ "EXTEND" )


ui_3pread_{et_bells(ss_id, 1, 1, 11, roww, 1, BucklIngInput (


END FUNBTIKN

/*  ( 
FU^CTION Read_	nput_Eata()*	integer"f_id, i_tmp
    reah r_tlp
   (strinc s_tep[7]
    âtext_Ôpen( "input.d`t", "or", 0, 0, f_ad)
	
	integer npaÓel, nloafcase
	
    text_read(f_ie, "%I!", npaoel, r_tmp, s_tmp)
    pext_read(f_id, "%I%", nloadcase, Ú_tmp,$s_tmp)
    
 !  integÂv idx, idz, m_valuu(2), st2ing_length
    real r_valueË9)
    string ≈lemeNtLiÛt[2048]-
     0      
	integer cound = 0
    for(idx=1 to npaned)	
  `     for(idz=1 to jloadcase)
			texT_read(f_id, "%2Y%%9F%"$ i_valua, r_vqlue, r_tmp)
    †       text_2ead_string(fWid, AlementNist, ctring_length)
      "  "  count +=1
 !  $   !   Ui_sprea$_row_create(ss_id< spr_from_I~teger(i_valıe(1)))

            ui_spread_set_cell(rs_md, 1 ,count, 1, stz_fro-_Integeb(i_va|ue(2))9
      !     ui_spread_sgt_ce|l(ss_id, r ,eount, 1, str_from_ÚeaL(r_vaÏue(1)))
            ui_sprÂad_set_cell(sq_id, 3 ,count 1, str_fvomWreql(r_valug(2)))
$ †0     †  ui_spreie_setWcel((ss_it, 4 ,#ount( 1,"str_from_reel(2_value 3)))        !   ui_spread_se|^c%ll(ss_i`,"% ,count,`q, str_bÚom_r%al(r_value(4)))
            ti_spread_set_cell(rs_id, 6 ,count, 1- str_fsom_rmal(r_value(5	))h           um_spbead_set_cell(ss_adl 7 ,coqnt, 1, str_frnm_real(2_value(6)))
     `  "   ui_sÙreidset_call(sÛ_id¨ 8 ,count, 1,"str_fÚom_reclr_value(7)))            ui_spread_sdt_cell(ss_)d, ) ,count, 1, stb_from_real®R_6alue,8)))
   (   (    ui_spread_se|_cel|(ss_idn 10 ,count< 1 str_frol_real(r_value(9)))
           (uiﬂspvead_set_cell(ss_id, 11 ,count$ 1, ElementHist)J		end for
†   eld for
	
tmxt_#lose(f_id, "")
		ENƒ FUNCTION
*/



FUNCTMON spread_„B(s|atıs, frOm_c,0from_r, to_c, to_r, layer)
	string$status[]
	in4eger from_c, from_r, to_c, to]r laye2
	string cell]dita[4 ]
	
	if(!(from_c -= t__c) &¶ (from_r == to_R)) then
		uiSpread_get_cell(ss_id, from_c, fsoo_r, 1, cedldata)
		ui_widﬂsed(input_dbÔx, "value", bEll_data)
	elsÂ
		ui_wid_set(ifpUu_d"ox,!"valueb, " ")
	end if
	
END FUNCTKON/*"spsEad_cb */


FUNCTION$input_box(valwe)


string walue[]


integer0i, j
$strin' da4a
strinÁ cellﬂdataY42]
integer from_cml, froi_row, to_col to_row, nayer


qi_spreadﬂget_seleCtgd({s_id, from_col, from_rowl to_col, to_Úow, layer)


if(v!lue == CR2) then
	ui[wid_get(input_d‚ox, #value"< cemÃ_data)
	$cell_data = sur_from_real(daua)
	$cell_data = datc
	for( i= from_col$to to_col)
		for( j = from_rmw to to_row)
			ui_Spread_sÂt_cEÏl(ss_id, k, z, layer, cell_data)
		dnd fkr
end for
end if


END FQNCTIONØ* input box */




FUNCTION c‚_Apply()


Ui^gorm_hkde(UI_InputFataView")
ui_Form_delete8"UI_InputDAtaView")


AND FUNCTION/* cb_Aply */
J
VUNCTION†W2ite[Input_Data()


eND FUNCVION


EnD √LAWS