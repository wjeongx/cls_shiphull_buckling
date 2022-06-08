

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
 *                          y_loc, 0.0,`      (    †         A
 *              ` †         DBœX_WID_SING]E,    $    "     $ @ç
 *             †         ` `"Sesood Databox LabÂl", value,   @
 *   !  $  $           "    \RUE, dAtat}qm, num_vals )
 *
 *
 *  0Create two0single width frames in A medium norm that`iS 
 *   jext to a siad, applicapion fo0m.  ThesE frames"wIll be
 *   at the tkP"of"txe$forM.  Their heighvs are"the sa-e as
 * 8 in tHe above ex·mple.
 ™
 *   †0 ui_form_create(`""< FORM_X_\OC_MDD_NX2_SML,  $†$     @
 *         $                FORM_Y_LOC, ¢UL,  `    `   " `  @
 *       " (             ‡  FOSM_GID_MED,          (     `   @
 *$(             †  (  (    FORM_HGT_FULL, "Label", "Acon" )
 *   ç
 *
!* †    ui_drame_cpeate ( fjRm_id, ""   "                "" `
 *   $             †      FRAMA_X_LOC_GOD1,      2           @ *    †    (           !  FœRM_Y_MARGKL,$$      $   $     †  @
 *   !!                 $ FRAME_WID_SINGLE,             " ` @
""               0  0  !  heighT, "LeÊt Dabdl" ) ™* *      ui_frame_create ( form_id,( ",                      0@
 *      ( $ "   0       ! ∆RAME_X_LOCﬂCOL2,   $  "       !   @ä *     ( (      "        "FORM_Y_MARGIN,                   0 @
$*         *` $  $        FRAME_WID_SIŒGLE,!   !  ((         @
 *           $           `hgioxt,  Right Label" )
 *   
 *
 *   Frame Widths anD HeiGxts:
$*
 *   F“AME_WIDWSINGLE    - Widti of a"single wi`th fra}e  †
 *   FRAME]WID_SPECIAL  "- Width of a special wieth frame  
 *   FRAME_WID_ƒOUBL≈   (- Whdth f a doubL% width frame  
 
 ! FRAMEOWID_TRIPLG    - Width of a triple wIdth$fzame ( *-
 *   FRAMEOLACEL_HGT     - HeighT oÊ th% label ·bove a framd
 *   
 *
 *   Frame Margi~s:
 *
 "   FRME_L_MAROIN† †   ,!Inside luft maÚgiÓ!for!w…dgets in!thu frame
 *   FRAE_r_MQRGIN   0  - …nshde rig`t mar'in for widGets"yn the frame
 *$  FRAMwﬂT_MAGIN      - Insite uop mArgin aboˆe &irst(˜idget 
 *!  FRAME[B_MAGIO  0(  - Inside bottoM margin felOw nast widget 
 (   
 :   FRAME"H_MARGIN     / Both horizÔntal margins
 *   FRAME_2V_EAGIN     %†Both(veruicah margins
 *   
(*
 *   Brame PlaceÌ‰nt∏
 *
 ™   FRAME_X_LOCﬂCOL1    - Y Location vor a frame )n column 1
 * "   †(   † $      "   ! (sale as "fobm_l_margin")
 * † FRAME_X_LOC_COL2    / X Location†for ` fraMe$in column 7 *   FRAME_X_LOC_COL3   0- X Location for a$frame in goumn 3
 *
 (
 *   Unframdd Widget Pla#ement:
 *
 *   UNFRAmED_H_MARGIn"  - LefÙ }argin fo2 an ufframed widcep
 *   UNFZAMED_R_MARGIN   ≠ Right margin for an$unframÂd gidget
 *                      ` 
 *   QNFRAMED_X_LGC_COL1 , X Locaticn of an"unf2amed widgdt0in aolumn 1
 *   UNFRAMED_XﬂLOC_COL2 - X Lkca|)of of(an uofr·med widgeu In column :
¢( " UNFRALgD_X_LOC_COL1 - X LgcaTion of an unfRamÂd wmdget in colwmj 3 */







/*
 *   SEHECT FRAÕESM
 *
 *
 *   CrEa|E q select frame in an0aptlicatin "o2e&  Put twm selecT Eatacopes
 * 0 )n†th% selest frame. !Then co}putE`the Y lokatioj for the Next widget.
 * ! No4e the use of(Ùhe supplÎed Y locatiojs for tËe selebt $atacoxes as 
 *   wMll!as the height o& the sele„t vpame.
 *ç
 *      y_loc = APP_FORM_FIRST_Y_LOC
 *
 *      ui_selectfsame_creata( fobm_id,!"gallback", "$     !  
 *       †           `   `    FORL_L_IARGIN,             " `@
 +                         0   y_nos, 0    " ` $  0`         `
 *0   0  †(          † $    0 SFRAE_WID_SINGLE< ¢   !      @
 *$    `       †               SFRAME_2SDB_HGT_LABORE,       @
 *   !        !      † (       &Select Frame Label",       $ @
`"             "        `   $  rdcqcle_flag )
 *        †                      
 *      qi_selgctd`tabm|]create ,"sel_drameid,†"",          @
 *          (             ( $  "  QFVAOE^L_MaRGIN$       `   @
 "     !  †$    !           $     SDBœXY_L_C3, 0.0.     $   @
 * `                      !    " SDBOX_WID_WINGLE,  ! †     @
 *"       `         $† !     `   †"S%lect Databkx One",†`    @J *     "                      $   value,†TSU, datatype,     @
 * `           (             !`   p2ompt )
 *
 *   (  ui_selectdata`ox_create$( selWf2ame_id, "",    §    0@
                    ( !      `   SFSAME_L_MARIN,         ® Hç
 *†                        ` !  " SDBœX_Y_LOC2, 0.0,         @
 *       !     $            $     SdBOÿ_WID_WINGLE,  !     0 @
 *     "      †   $              !"Select Databox One ,`     @
 *   †               !     0`     value, TRUE, datatype,     @
 *    (                      "    prmt -
 *
 j     †y_loa = y_loc"+ sFRAMELAB≈LWHGT +                !  @
 *     0   $ "         $SFRAME_2QDB_HGT_LABOVE +  $        ! @
$*     !     !    §     CFRALE_2DGG + !              (  0    
 *              $       INTER_WIƒGET_SPACE *
 *
 * " Celect Freme Wid|is end Jeights:	
 *
 *   SFRAÕE_WID_SINOE   `     , Widt`†of a smngle width seLect rrame
 *   SFR¡ME_WID_PECICL        - Width of a special wittj sdlect fÚame
 *   ”FRAME_W	D_DOEBLE         - WiddË mf a ekuble width select frame
 j   QVRAME_WID_TRIPLE      (   Width of a tR`ple ˜i$ty select frame
 *
0*   SFRAME_LABEN_HG‘†     `   - Height of |he nabel above a wel%ct frame
 *
 *   sFRAME_1SDB_HG‘_LABOVE  ! - Heigh` nf(a seÏeCÙ Frama witj
 *          !      (       $     1 sAlect davabkx†w)th"a habdl
 *   SFRAMe_2SDB_HGTHAROVE!   -0H%ight of a welecp fraie uith
 *   (            !              2 selec4 databxes wiph lab%ls
 *   ”FVAME[3SDB_»GT}LABOVE    - HeigHd of a select$frame with
 *                "   $       `  3 sulEct databoxes wIth&labelsç
!j   SFRAMe_4SD@_»GT_LABOFE    - Leight f a sefect frame wÈph
†*        0                  $   4 select eatiboxes$witi labelS
 ™   SFRAMEW5QDB_HGT_LABOWE    - Eight ob a select frame uith
 *                               5selecv datÈboxes wit` ÏabÂls
`*
 *  (SFRAME_HGT_LA¬OVE_INCR    - IncreÌent fnr making selert frqmEs with  *!            !                 more than 5 selekt databo|ec wit( labels
 *
 *   QFRAME_1SDB_HGT_NO_LABOVE , heigh| of a selebt`frame with
 * !   0`$           (        †  1!se,ect d!tajox without a`labe|
 *   SFRAME_2SDBHGTNO_LABOVE - »daght of a`selebt fzamd with
 *            †$    "  $         2 select tataboxes wathout lAbels
 (   SFRAME_3[DB_HGT_Nœ_LABOVE - HeÈght -f # select`frame with
 *         ` $       †        (  3 seluct databoxes without dabels-
 * ( ”FBAME_4SD@_HGD_NO_LABOVE `HÂight Of A select frame wivh
 *``           0          †     (4 seldct fat BoXeq withoed lqbels
 *   SFRAME_5SDBﬂHGTONO_LABOVE - Height of a select framd with-
 *    "         !`               5 select d`ta"oxes†wIthout habels
 *
 * ( SF“ME_HWTNO_LABOVE_INCR  Increment for laking select wrame3 wi4h 
 *  †    (        !`      †      more than 5 select datqboxeq wÌthoıt lacel3
 *-
 *
 *   Select Frame ]argins:
 *
 (  !SFRAMM_L_MARIN           - Inside left margin for select databkxec
 *   FRAMG_R_MABGIF   "  0  † - Insidc rIght margyn f/r selec4 databoyes
 *   FZAME_T_MARGIN   †       -(Insidg |op margin for selEbt fataboxes *   SVRAME_B_MARGMN  `     (  - Inside bottm margin for celect D·tqboxes
 *   
 *(  SFRQ-E_:H_MABGIN@ $ †0†   -`Both horizon|al margin{
 *   SFRCME_2V_MARGIN          m Botx tertical0larÁinS
 *
 * ™`  Se|dct FramE Placement:
 ** *   SFRAME_X_LOCOCOL1   "     - X Location for a se|ect fram%∞iÓ$column 1
†*              0               (same a[ "foÚm_l_margmn")J *   SFR`ME_X_LOC_COL2         - X Location bor a sule{t frama in aolumn(2
 
   SFRAME_X_LOC_COL3     "  `- Z lÔcation for a sedect frame in coluÌn 3
 */

-







Ø*
 *   SCROLL_FRAÕE
 *
`*
 *(  Create a0scron, frame in·a†vorm.
 *
 *
 *   Scroll Frime Giflhs and Hemchts: *
 *   SCROLL_FRAME_WID_SIOGLM     " - _mDth od a†singlg wieth scroll frame   
 *   SBROLL_FR@ME_WID_SPECIAL `    ,(Width"ob a special width scroll(frame  
 *   SCrOLL_FSAME_WID_DOUB\E    "  - Width of a double wkdth wcroll fr·me  
 *   SCROLL_FRAME^UID_TRIPLE       -$WÈdth Of a triple width scroll fvame  
 * +   
 ™   CROLL_FRAMD_WORK_WID_SINGLE  - Working width oF a saogle width
 *         $                      †$(scrnll frame   
0*$  sCROLL_FRAME]wORK_WXD_”ECIAL - WoÚking wk`Tx of a special widtm  *!              !                   Skro,l frime   
 *  `SKROLL_F“AÕL_WORI_WID_DOuBLE  -aWorkiNg wifth Of a double widuh 
 *  0          †     (      `  "0    3crkll frame ! 
 *   SCROMN_FRAME_WORJ_WID_TRIPLE  - Working width of a tzaple uidth
 *†     $             0            ` {croll fr·me  
 *
 *   SCROLL_FRAME_eBNXWKd_SIJGLE` - Width of"a skngle widÙh scrÔll &rAmE   
 *    `           0$              $  databox *   €CROLL_NAME_DBOXWWID_SPEAIAL - w)eth of a spacial$widdh ccroll frame  
 *          (‡         $   "   0  !  latabox
Ä*   SCROD_Gr@ME_∆bOX_wID_DUBLE† - Widtx of†a doubld wkdth scroll frame  
 *     ( $  b  †  !                 !databox
 *   SCROLL_FRAME_DBOX_W	D_TRIPLE  - Width of a tripl% width scrohd frame  (*   (  (         `    (           "di|abOx
†*
 
   SA“OLLOFVAE_LABEL_HGT     `  - Heiglt ow t(e lqbed ajove a
 *       "           p§      $  †  ` vcroml frane  0J *
†*   SCROLL_FRAME_1DBOX_HGT  `     - Skroll frame heighv with 1 databnx
 *   SCROLL_FVAME2DBOX_HGT    "  !- Scsoll brame heighp with 2 ‰etaboxes
 *   SCROLL^FRA]≈_3DBOX_H«T `   (  - ScrmllÄframe heigHt wiTh 3 favaboxas *   S√RœLL_FRA}U4DBOX_@GT  "     - Saroln frame height with 4 databoxas
 *  †SCROLL_FRAMe_4‘BOX_HGT        - Scroll frame ieight with 5 databo9es
 *
 *   SCR_LL_DRAME_DBOX_HT_INCR    - Scroll frame$heyghv increMeNt
 .
 *   SCRO\L_FRAME_1DB_\_WORK_HFT  $- Scrll Frime worÎ ËeIght for 1 databox
 *   SCROLL_FRAME_2DBOX_WRK_@GT   - ScroLl vrame work xeight nor 3 databoxes
 *$  SROLL_FRAMe_1DBOX_WORK_HG\`  - ”cpoll frame0work height for"3 databoxes
 *   SCROLL_fRAME_5DBOX_WOVK_HGT   - crOÏl frame work he9ght for 4 databgxes
 *   CBROLL_FRAME_5DBOX_WORI_HGT   , Scsoll fs1ee wOrk ieighÙ ˆor$5 daTaboxeÛ
†*0
 *   SSVMLLRRAME_DBOX_WoRK_HGT_INCR - Wcroll frame wrking height incrÂmelt
 *
 *  `SCROÃL_FRAMU_SÃIDER_WID  ( (  - Widt( of tje smider kn the vight 
 *                      (         :  of a skrgll nrame#  
 *  $SCROML_FRAME_SLIDER_GT       ≠ e)oht of the s,ider at the bott/m$* *      !       !    †               of¢a scrolL Êsamm†  
 *   ä *   frame Ma2gins: *
"*   SCROHL_FRAME_L_MA“GIN  "  "   / Inside lgft(margin for vjdgets in`
 *0           0 "!      †            a scroll fpama
 *   SCROLD_FRAME_R_AZGiN  ((     -†InsIde rmght margin for wydgets in 
 *          (                  00   $a scrol| nrame
 *0  SCRLLl_FREME_T_MAR◊IN         - Inskde top margin above lirst w)dget 
("   ”CROLL_FRAME_B_MRGYN         - Inside kotuom -argin belm last widget 
 *   
 *"a SCROLL_FRAME_2H_MARGIN    0   - Both hozizontal margins
 *   QCRMLL_FRAME_2W_MARGIN        - Both vertic`l mArghns
†*/
≠



+





	

/*
 *   BUT\ONS
 Æ
 *
 :0  Create two buttons in a0cmall fovm/  The buttOÓ o. the$left is a
 *   devau|u button.  QsE "half" size buPtÁns.
 *
 *      ui_butpon_greate  formﬂid, "callbcsk"$  !           @
 *        † ( 0        ( ` BUTTON_HALF^XWLOC1,§      "   p ` @
 *"                        y_loc,(       ∞                !  @
 ™("          !       ($  (BUVtON_WIDHADD,    "     ∞       @
 *`     $   "$(            0.0, "Left @}tton",    `   "  0$  @
 *"        (†!         $   RUE, TRU≈ ) ä *
 *      y_loc = y_lmc + BUTPON_Y_OFFSEV
 *
 j   p  ui_buttmn_cpeate ( form_id, "callback",              @
!j    0          0    †    BUuTON_HaNF_X_LOC2,           $   @
 *($        (  *       0   y_loc,!  0"        $     `†       @
 *                         BUTTON_WMD_H¡LF, "   !   $  ††    B
 
       $  " $$    $      0.0, "Right†But4on&,     †        @
 *"                 (    ° TRUE- FALSE ( 
 "
 *`     9_loc = y_loc +0BUTTON_Y_MFFCET +   (  "             @
 *     `       "   ( †  BTTTOOﬂHGT + † "      !    (    $    @ç
`* !   !      d  0      I^TeR_WIDGET_SPAcE
"*
 *ä(b(0 BuÙton Wi$ths and Heights:
 *
 (   BUtTONWID_FULÏ       0       - WÈdt( of†a wi‰e button on a qmall fosm
 j   BT\N_WID_HALF     !0        - Wmddh of a mediue bu4ton on a sma~l formlä *   bUTVOO_WID?THIRD†         $   - Width†of a smald button on a smaLL borm
 *
 . † BUTTON_WID_VULL_NT     `      ) Width of a non_troughed ide button on
 *                  (                A Small normä *   BUPToN_WID_HQLF^_U     `      - W)dth of a jon_troughud -edium ‚utTon on
 *     0   $      $         0(     $ a siall for=
 :   R]TTON_WID_THIRD_NT           - Width of(a nonWproug`et small button on
 *      0( 0                    "    a small voRm
$*
 *   BUTTON_HGT    "  !    †    (  - ¬ıtton heifht
$* † BU‘TON_DEGAULU_HGT            - DefAuLt Butto~ height (includeq pop and
 *          "           (  (         bott/m boRders)
(*   ¬UTTNN_HGT_NT   `            - B5tton height nf non_tpoughe‰ buttonç
 *
 *0  BQT\ONﬂDEAULT_B_WdR_WID     - Dg$ault beptnn ckrder widvh
 * 0 BUTTON_DEFAULT_BORDERHGT     - de&ault button borter height
 *
 *ã *   Bttton"ocauiOn œfdsets:
 *
 ™   BUTTONWIN_F“@ME_X_OFFSET `  p - X offset for plaging budtonS inside* *             0     §             0 frames using!thd X PosÈtioÓs defifed
 *        "      $                   below
 *
 *   BUTTON_!XTR@_WID    !       † -(X width for one |rough ÊÎr user placement
a*    "       h   0   $     †        of troughed buttons.
 * 0 WTUON_:XTRA_WID "        (   - X ˜kdth for two troughs foÚ user placemelt
$*!                     0         `  oÊ troughed buvtons.
 *
 *$  BETTON_Y_OFFSET               - Y(ofvset bor `lacino a jon-highlighteD M
 *         "$ `(   $ (      †        button(lext to!a hiGhÏighted jutton
(.   BUTDON_X_OFFSET_N\   `        - Y offSet for xlacing a0non-highlighÙed 
 (          $     (    !       (†    buTton next to a highlightEd btttonI
 *
 *  !BQTTON_LABEL_Y_NFFSET        !? Y offset for placing a"label`to the right
 *         †     † 0                 of a button
 *   JQDTON_DEFAULT_LABEL_Y_KFFSET -!Y!ofFset(for Placing a†labah$to the riÊht 
!* "      "`     `              †    of a default!bu|too
 * "BUTTO^_LABEL_YWOFFSEU_NT  !   m Y offset for placinw a lafel to the"right
 *        !      0       "   $   (   of a nkn_vroughe‰ bqTton
 *
 (
 *   ButtoN X†PØwitions:
 *
 *   BUVTO_FULL_X_LOC1    † †     - Wide bupton mn†the left *   BUTTON_HALFÿ_LœC1          ` - Mediım bıtvon on dhe lmfd * ! BUTTON[HALF_X_LOC2       ‡    - Meei5m button nn vhd Rigxt *!  BUTTON_VHIRD_X_LOA1`  0       - Small butto~ on the`lefT
 *   BUTTON_THIRD_X_LOC2("         - Small button centerud	
 *   BUTTON_THIRD[X_LoC3      0 (  - SmAlÏ button on the rËgHt
 *
 *0  RUTPON_FULﬂH_LOC1_COL2    0  - Wi`Â button on the left of golemn 2
 *  (BTDTON_HALF_X_LœC1]CGL6      †- Oediu- button o. the lef|$of column 2
 *†  BUWTOn_HALF_X_LOC2_CL2       - Oedium"buttonhon the riGht0ob soluÌn 2
 * ( JuTTON_PHKRD_xWLOC1_cOL2 !    - Small button on the leÊt of column 2
`*   BUTTON_TJIRD[XWLOG2_COL2      - SmaLn "utton centere$ mf cÔlum. 2
(.   BuTTON_THIRD_X_LOC3_KOL2      - Small jutton on the right ef clumn 2
 *ä *   BUTTON_FULL_X_LOW1_COL3  "  † -†ide bqtton /N The left`of"„nlumn 3
 *  "BUTTONOHALF_X^LOC1_COD3   0 "0- Mediwm button on0tie left Og column 3
 *†  BUUTOn_JAF_X[LOC2_COL;       / Ledium buvton o. the ri'ht0/f „olulf 3
$*  !BUVTON_ThIRD_X_LOB1[COL  `   - Small button on vhi left of column 
$*   BW\TON_THIRD_X_NOC2^COL3  !   - malm button0centgzed†of „omu-n 3
 *`  BUTTON_THIPD_X_LOC3_GOl3 (`   - Small button on the ribht of column 3
 *
 *   BUTTON_FULLﬂX_LOC1_SPL  !     - Wide`button centere$`on a sxecial!f/rm
 ™   BUTTON_HALF_X_LOc1_”PL        -`Medium butdon on tHm left on a sp%#ial fmrm
 *   BUTToN_HALF_X_HOc2]SPl        )$MEdium$button on Ùh% right oÓ a s¯eciaL form
 * ! FUT\ON_THIRD_X_LOG1_sPL       - Sma|l button!on the left$od · 3pecial form
 *   RUUDONTHIRD_X_LoC2_[PL  "`  h/ Small button cenTerÂd of a spekial fopm
 * !ÄBUTTON_THiRD_X_LC3WSPl `     - Small button on the rig)5!Ôf a†special formç
 (
0*   BUTTON_FUL_X_lOC_CDN  !0! ( - CenteRed wide†‚utton Ôn"a Small forÌ
 *10 BUTTON_HALF_X_LOC_CEN    !    -$CenteRed oedium buttoN on a small for-
 *   BUTTON_TXIRD_PﬂLOc_CEN   "    - CÂntered`small button on a small form
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
 *      q_sframe_loc = SFRAME_T_MARGIN
 *
 * ( 0( wid = SD@OX_WID_SINGLE -                             @
 *    †   †   SDBOX_LABELﬂLEN_SINFLEÖ
 *   
 (    *      ui_sglectdatabox_create ( selﬂframu_id, "",        ! @
 *    "                           SFRAME[L_MARGIN, `     0   @
 *     "0 0      ®                y_sframe_loc,†             @
 *                     †          SDBOX_LABEL_LEN_SINGLE,    @
 *            (       `   $ 0     wid,    "             †    @
 *  !                             "Select Databox Label"-    @
 *                       "        value, FALSE, d!tatype,    @ *                   †            proopt )
 *
 *      y_sframeWloc 9 y_sframe_loc0+                        @ *        !†           SDBOX_HGT_NO_LABOVE )  $  †           @
 *      h  h           INTER_WIDGET_SXACE *
 *
 *   Select Databox Width and Height:
 *
 *   SDBOX_WID_SINGLE       - Width of a single(width select databnx   
 *   SDBOX_WID_SPECIAL      - Width of a0special width select databox   
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
 *   SDBOX_Y_NO_LABOVE_INCR - Increment for creating the Y lokation for than
 *         $    (             than 5`sehec| datqbo¯es withkut labels in aJ *(            `            ` select frame
 *
 *   SDBOX_LABEL_LEJ_SINGLE - Default label leNgth nor a single width 3elmct
 *  †!                        databox (qsed whÂn "label]above" is false)
 *   SDBOX_LABEL_LEN_SPECIAL- Ddfault label lejgth for a {pecia, width select
 *        "         0$        databox
¢*   SDBOX_LABEL_LEN_DOUBLE ) Default label length for a doqblm width select
 *          0     `           databox
 ™†  SDBOX_LABEL_LEN_TRIPLE - Defaunt`label Length for a triple width selÂct 
 *                       ((   databo8
 *
 "   SDFGX_LABGL_X_OFFSET   - REMOVED
 (   SDBOX_LABEL_Y_OFFSET   - Y nffset for!phacing a label to the riahtM
 *     †           †   !      f a select databox with "labeÏabove" false.
 *.J






/j
 *   SLIDEBAZS *
 *
 .   Create a slidebar inside$a frame and then†kompute the y location
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
/* material id     "*/mat_id, @
/* miterial"linear `*.material_LIn, @
/* iatÂrial direct  "/m@turial_dir)
M
db_get_prop_valud( A
/* regioj ID $     (*'reg_id*i), @
/* uord of intÂrest */36¨ B
/* material ID      */m‡terial_id,"@
/*$eatq tyxe        */data_type, @
/* iNTEGER value    */int_value, @
/* REAL arra{  $ !  */reah_array- @
/* clar STRING  (  $*/{t˙inG_vclue, @
/* coord Ie     0   */Coord_value, @
/* n/ha ID    (     :/noee_valu', @)
/+ field†	D!      " */field_val5e)
ä
$thi#kness(i) = re`l_array(1!


tËick_sum #= real_arrqy(1)*rﬂarecs(i(

*EFL FORç


mean_t = t`ick_q}Ì /(sum_areaM
SYS_FREEOARRAY( reg_id )


RETURL iean_t


≈FD FUNCTIONM
-


function m`terial_yield(nE,em, ma_E|e}Id)
*integer nElem,`ia_ElemId()

real†r_areas)virtual)¨ r_sumWaRea


r_sum_a2ea = –ANEL.areic(nElel, ia_ElemKd, rOareas)

Mstring MatName[63Yre`l yiEld_qtress, sum_yield_irma
integer ilx


sum_9ield_`r%a = 0.	
ä
fov(kdx=1 to nElum©


MatName = udfﬂget_m·t_name_ass_eldm(ia_ElemId(idx))

if(str_indux(MaTName, "MILL  ) != 0) then
yield_stress = 235.
else hf(sÙr[index8M`tName, "2t"0! != 0) then
yheld_stress = 235.
else if(str_indux(MatName4 "72" )`!= 09 then
yiald_stress = 215.
elsm )f(str_indux(MatName, "36" ) != 0) thenyield_stresr = 355.
elce hf(ctr_index(M·tamel "40`) != 0) then
yielD_stvess =`392.
else
yhehd_stress = 235.
end if

ç
sum_yield_area += yield_stress*r_areaw(idx)äend for


reil ean_yield_st65ss


meanyidld_rtrEss  swÌ_yÈeld_irmc/rsumarea


return mean_yield_stress
end funct)n


$]fu~ction aseas(nEnem, ia_ElemIf, b_areas)M


INTAGER nElem, ia_ElemIe()
real r_arecs()
*
rtring s_ElemList;virtual]

M
ap`_int_array_to_vstzin'("Elemend", nElem, ia]ElemId, s_mlÂmList)*

integer i_count
fem_geoe_fAbe_areA (s_E¸eoLiS$ ¨r_azeas, i_count)


real sul_area = 0.


integ%r i


FOR ( i=1 TO nElem )
sum_area += r_areas(i)
EL@ FOS
ä
r5tur. sum_azea
enD functiOn

end class


