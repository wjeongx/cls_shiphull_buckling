

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
 *                            AOM_MENQ_LABELOLEN,$    0      @
 *                         $  ACTION, FALSE )
 * ( 
 *      ui_optionmenu_sreate( form_id, "call"ack",       "   @
 *                            AOM_MENU^ZLOC,  `      `      @
 *        !     !   $!        OBJECT_MENU_Ÿ_LOC,             @
 *   " `                †     AOM^ME^ULABEL_\EN,   "     `` @
 .   !   (  †0           (    OBjECT!FALSE )
 *"` 
 j      ui_optionmenu_creaue( form_i`l "cal,back",0          @
 *` †!a                       AOMOMEN]_X_LOC        0    (  @
 *                            METHOD_MENU_Y_LOC,             @
"*            0 `          $ $AOM_MEN_L¡BEM_LEN,          † @
`*     0                      METHOD,!FALSE i
"*  `
 *  !   ui_sepabator_create ( form_id, "", 0.p,              @
 *(                         $(AOM_SEPARATKR_Y_LOC$           @
 *                      0     GGRL_WIDSMLl TRUE )ç
 *   
 * J *   ANM†Eenu Placement:	
 * 
 *   AOM_MENU_XﬂLOC      (- X Locatinn"of the AOM menus (margin†inclUded)
 *(  AKM_MENU_LA@EL_LEN   - Lacel dength for AO] menus (languqge deende.t)
 * ! ACTION_MENU_Y_LOC    - Y Locati/n for the Action menu (marGi. incÏuded)
 *   OBZECV_OENU_Y_LOC    -(Y Locapion for the Object0menq (masgin inclueed)
 *   METHOD_MeNU_Y^LMC    - Y Locition vop the Me|hod menu (margil lncluded+
 *  0AOM_SEPARaTOR_Y_LOC  - Y Location for separator un$%r tha ¿OM menus
 *$  AP_FORM_BIRST_Y_LOC - Y Location for the first widget in an 
 *                        $ apqlÈcavion for} 
 */



/*
 *  †FRAMES
(*
 *
 *(  Create a frame in an applicqtion fo2m.  Ass5me this iq†the$first
 *   widget in the f/r} ald th·t thd fBame contains0a three line Lictbox
 *   with a lebel and a databox With a label.  Then Locade tHe Y positao.
 *   for an unframed tatabox under 4he frame.! Note that the frame's label
 *   must be considered in datermining tHe next widget locatkkn ·s does
 *   th% t(ickness of the frame edges. *
 * † Since this 	s(an application form,!the first Y location is vhe
 *   variable "app_vorm_gizst_˘_loc".
 *
 *      y_loc = AP_FOBE_FIRST_[_LCM
 *
 *  `   height = FRAME_T_MAR«IN +              $ †           @
 (          $    L¬OX_3L_HGT_LABOVE +                  "    $@
 *       $       INTER_WIEGET_SPACG +       (                D
 j     $         EBOX_HGT_LAROVE"k$       0        †       (@
$* `           ` FRAME_B_MAROIN *
 *      ui_frame_create ( form_id, "",      `      (   "     @
 *         0      "     !!FORM_L_MARGIN,        †    !      ¿
 *         0 $ †          y_loc,         †                   ¿ä *                     !  FRAMEﬂWID^SINGLM, 0    ! (         @
 *      $    †        !   height, "Label" )
 +
 *      uy_listbox^crecte (`frame]hd, "callback", $          @
 *   0                  8   FRAME_L_MCRIN,                  @
 *    (                 "   FRAME[T_MARGIN,                  @
 *        (               ! LBœX_WID_SINGLE,                 @
(*$        !                3, "Listbox Lajel",  0      (    @
(*                     !    selection^type, sort_flag ©
 *
 *      y_frame_loc = FRAME_V_MARGIN +  †                    @
 *    "   †       !   LBOX_3L_HGT_LABOVE ;             "     @
 *    `    ! 0       !IPER_WIDGET_SPACE
 *
 *   "  Ti_dat`box^„reate ( Frame_id, "",                    @
 *      "00  !              FRAME_L_MARGIN(                  @
0*                          y_fram%_loc, 0.0,        "       @ *                 (        DBOX_WID_SINGLE,                 @* *               ! `!    !  "Databox Label", value,         $@
 * !0                    8  TRUE, $atatype, num_vals )
 *
 *      y_,mc = y_log +  `          1        `  `            @
 . (            FRAME_lABEL_HGT +  !      $                 †@
 *            ! height +                                     @
 *              FRAME_6EDGE k            "                  $@
 *              I^TER_WIDGET_SPACEM
 * *      ui_dat!box_create!( frame_Èd, "",                    @
 *           †      !   $   UNFRAMED_L_MARGIN,!             $@
 *    ( †                   y_loc, 0.0,                      @
 *$   0                     ƒBOX_WID_SINOME,                 @
)"` (     0            (    "second Tatabox Label2, valuu, $ @
 *    !   $ †               PRUE, datatype, n}mvals )
 j
 *
 *   Create dwo!single widph fsa}es in a medium form that is 
 *  (next to a small application form.  Thesu frames gill be
 *   aT the top of the fore.  Their heigxts `re the same as *  (iÓ the above example.
 *
 (   ‡  ui_form_crgate( "", FORM_X_LOC_MED]NX2ﬂSML, "        @
 *               `          FORM_Y_LOC$0"UL"¨                @ *                          FORM_GID_MED,      †             ¿
 *                          FORM_HGT_FULL, #Label"- "Icgn" )
 *   
 *
 *      ua_fra-e_creqte ( form_id, "",†           "     `!   @
 *                      " FRAME_X_LOC_COl1,  ∞              0@
 *     `      0        (  FORM_Y_MARGIN,††    (    "         @
 *                        FRAME_WID_[InGLE      †           @
 *                   !    height, #Heft Label" )
 *
 *   !  uiWframe_create ( form_id, "",          0            @ *                   !    FBAME_XLOC_COL2¨                 @ *               ‡   "    FORM_Y_M¡RGIN,           (       ( @ *         !              FRAME_WAD_SMNgE,                  @
 *       †  †         †0  huigxt, "Right Label" )
 ™   
 *
 *   Fram` Wkdthw`cnd$Heights:
 *
 *   FRAME_UIDOsIFGLE    /`Width of a"single width frame   
 *   FRAÕE_WID_SPECIAL   -"WIdth of e spe„ial$s)dth fraie  
 *   FRAME_WID_DOUBLE    - Width of · double!widti frame  
 *   FRAME_WID_TRIPLE   "-$WiDuh of a trixle width frame  
 *
 *   FRAME_LABEL_HGT  (  ≠ Heigxt†o& thÂ labEl a`ovm"a frame
(*   
 *
 *  `Frame Margins:
 *ä *   F¡ME_L[MARGIN      - Inside lefÙ margin`for widgets Èn the fremu
 * 0 FRAME_R_MARGIN †    , Inside rmg(t margi~ fop wkdgets in the fÚame
 *   FRAME_T_MARG	N$     = Inrite top mabgin above firsd wifget0
 .   FRIME_B_MARGIN      - Inside bottom m·roin below last widget 
 *  "
 *   FRAME_2H_MARGIN     - Bouh xÔrizontal margins
 *  )FRAME_2V_LARGIN     - Bth vertical margins
 *   
!*
 *†  FramE Pnabement:
 (
 *   FRAME_X_LOC_COL1    -0X Location for a frame in column 1
 *    $ a        (         (s!mm as "form_l_margin")
 *(  FRAME_X_OC_COL2  ( - x LoCatioj for a fÚamg in columj 2
 *   fRAME_X_LOC^COL2    ) H LOcation gr a frame in column 3
 *
"*
 *   Unframed WedgEt PlacemÂnt:
 *
 *   UNFRAMEDWL_MIRGIN   - Left }argin for an unframed sidgeuM
 * $ UNFAMED_R_MARGIN   - Right mazgin for an unfraMed widget
 *                        
 *  °UNFRAMED_X_LOC_COL1 - X Location Ôf an unframed widget in$co|umn 9 * 0 UNFRAMED_X_LOC_COL2†- X Location of an qnfbaMed widget in coluÌn "
 *   UNF“AMED_X_LOC_SNL3 - X Location of an unframed widwet in column 3
 */








/*
 *   SELECT FRAMES
 *
 *
 *   Breate a select frame in an aPplication form.$ Put to select d!tacoxes
 *  †in tha se|ecu frame.  TheN ckmputm the Y locatyon for thE nuxt widget.
 *$  Note the wsg of thg sqpplied Y locations bor the select databoxes ac 
 *   well as the height of the select frame.
 *
 *      y_loc  APP_FORM_FIRsT_Y_LOC
 *
$*  `   ui_selecufrage_cReate( for}_id,("cal}back",          @
 *                !        $   FORM_L_MaRGIF,                @
 *                     0       y_loc,         $              @
 *         0 "                 SFRAME_WID_SINGLE,        !   @
 *                      "  `   SFRAME_2SLB_HGT_LABOVE,       @
 *                         $   "Select Frame Label",         @
 .    $`               0       recycne_flag )
 *            !                  
 * "    uiOselect&atabox_crMate ( sel_frame]id, "¢,      !   @
 *0         0          $      !   SFRAME_L_MERGIN,           `
 *    !                           SDNX_Y_LOC1, 0.0,         @ ."            `    " $†          SDFOX_WYD_SINGLE,       "  @
 *         "  ``       "          "SelecÙ Davabo| Ooe",     † 
 * $                   (  !     $ value, TRUE, datat˘pe,  "  @
 *    ( 0                         prompt )
 *
 *  †   ui_welect$aÙcbox_kr'qte ) s%lframe_id, "",        † @
 *   "           !           !    SFREE_^_MARGIN,           @
 *          0  ! 0     `          SƒBOX_Y_LOC0, 0.0<   (  !  @ *   b                         "  SDBOX_WID_SINGLE,  $       @
 *                                &S≈Lecd Dctafmx One ,      @
 *        (                       value, TRUE, datatye,     @* *  †  †     $  "                 0rompt )
 *
 *   $  y_loc =$y_loa + SFsAME_LABEL_HGT +   !  "        `   @
 *                      SFRAMEﬂ2SDB_HGT_LABO÷E       0      @
 *                      SFRAME_2EDFE +    "    "      "      @
 *                     $INTER_SIDGET_SPACE
 *
 *
 *  "Select Fvame Widths and Heights:
 *
 *   SFRAME_WIDSINGLE         - Width$of a single width select frame	 *   SFRAME_ID_SPECIAL       †- Widdh of a special width select f3ame
 *   SFRAOE_WID_DOUBLE      "  - Uidth"kf a double width selecu frame
†*  $SFRAME_WID_TR…PLE         - Widt( of a triple width selekt frame * *  $SFRAME_MABEL_HGT`         - Heigit of the labe| above a select frame
 *
 *  `SFRAME_1SDB_HGT_LABOVE    - Height of a sele#t frAme wit( *   !       $" `   "  !   0     1 select d`tabox with a Label
 *   SFRAME^2SDB_HGT^ÃABVE    - Heigit of a se|ect frame with
 *    (`           †    (   !    2 selekt fata`oxes widh labelsM
 *   SFZAEE_3SDB_HGT_LABOvE    - Hdight of a select fÚame 7yth
 *                               3 sdlEct dapacoxes with labels
 *   SFRAME_4SDB_HGT_LABMWE    - Height f a select fraim wÈth
 *   §       $  ‡                4 welect databoxes with label3
 * !"SFRAME_5SDB_HGT_LABOVE    - HeiOht of a select frame"with
 *             `           (    5$select da|aboxer with lafals *
 *   SFRAME_HGT_LABOVE_INCR "" - Ancrement foÚ making select frames with 
 *   $               (  (        more than 5 seleCt d·taboxes wiTi labElq
 *
 *   SFSAME_5SDB_HGT_NO_LABOVE - Height"of a selact framu with
 *         0     (!   †          1 select databox withouT a label
 *   SFRAM_2SDB_HGT_NO^LABOVE - Jeight of a sulect®frame wmth
 *           !                   2 select!databgxes without labels
 *  $SFRAME_3SDB_HGT_NO_LABOVE , Huiwht$nf a sedect frame with
 * (            (           (   @3 sElekt databoxes without labels
 *0  SVRAME_4SDB_HGT_NO_LABOVE - Height of a select frame with
 *                       !       4 select tataboxes witxout labels
 "   ”FRAME_5SDB_HGT_NO_LABOVE - Heiwht /f a select frame wit(
 *      $(           `           5 sulect tataboxes without Labels
 .
 *   SFRIME_HGT_NO_LABOVE_INCR - Increment!for miking selecv frames with 
 *  (                  $       ( more ÙhAn 5 select databoxes withouÙ habels *
 *
 * † Select Frame Margins:
 **†*   SFRAME_H_MARGHN   †! 0    - Insid« left maRgyn for select databoxesç
 *   SFRAME_R_MARGIN   †  $  ((- Ajside right mabgin for select databoxes
 *   SFRAME_T_MARGYN  " "      - Inside top margil for seÏect datafoxes
 *   SVRAME_B_MARGIN          (- Inside bottoi margin for select databoxes
 *   
 +`  SFRA]E_2H_MABGIN          - Both horizontam margins
 *   SFrAME_2V_MRGINb         - Bouh vrtical margins
 *
 *
 *( †Select Frame Placeme~t2
 *M
 * $ SFRAME_X[LC_COM1    (    - X Locatiof for a sulect frame in column 1
!*        $          0         (same as "dorm_l_oargin")
 *   SFRAMEX_LOC_COL2†        - X Location bor a seÏÂct Êrame an column 2
 *   FRAME_XHOC_COL3 `       - X LOcation†for a seluct framd mn Column 3* */


J


*

/*
 *   SCROLL_FRAMES
 *ç
 *
 *"  Create a scroll grame in a form.
 *
 *
 *   Scsoll Frame Widths and Hemght3:
 *
 *   SKROLL_FRAME_WID_RINGLE       - Width of a single width scroll frame   
 * $ S√ROLL_FRAMD_WIDWSPECIAL!     - Width of a special width scroll fvame  
 *   SCROLL_FRAME_WID[TOUBLE       - Width of a double wi‰th"ccsonl frame  
 *   SCROLL_FZIME_WID_TRIPL    $  - Width f a tr)ple width scroll vramg  
 *
 *`  
 * " SCROLL_∆RAMG_WORK^WID_SINGLE  - Working width of†a singlm widvh  *              $            "       scroll frame  (
0*   SCROLL_FRAME_WORKﬂGID_SPECIAL - Wnrking width of a special width 
 *                                   scroll framm   
 *(  SCROLL_F“AME_WORK_WID_DOU@LE  -$Workmng wieth og a dou"le‡width  *    !                8     !       scrkll frame   
 *  SCROLL_FRAMG_WORK_WID_\RIPlE  - Working width of`a `riplm0widt(
 *             "  0                  qcÚoll frame   
 *
 * 0 SCROLL_FRAME_DBOXWID_SINOLE  - Width of"a siNgle width scroll frame   J *                      "            da4abox *   SCROLL_FRAME_DBOX_WID_SPECIAL - Wadth of a special widvh ssroll fÛame (
 *               (!       †          databox	
 *   QCROL_FRAME_DBOZ_WID_DOuBLE  - Width of a double width scrll frame  
 *                "    $  `          databox
 *   SCROLL_FRAME_DBOX_WID_TRIPLE  - Width of a triple width rcroll frame  
 *      (              " †(       (0 d·vaboz *
 *   SCROLL_F“AME_LACEL_HGT        - @eighd of the(label above a
 *        †     0  1,               †scroll frile   
 * *   SBROLL_FVaME_1DBOXﬂJGT        - Scboll fRame heigmt with ± databox
 j   SCROLL_FRAE_2DBOX_HGT        ) Scrolm frale height wiTi 2 da4abox%s *   SCVKLl_FRAME_3DBOX^JGT        - Scrol| frame height with 3 databoxes
 *   SCrOLL_FRAME_4DBOX^HGT        -0scroll frame `eight with 4 databoxes
 *  !SCROLL_FRAME_5TBOR_HGT        - Scroll frame hei'ht`with 5 databoxes
 *
 *   S√ROLL_FRAME_DBOX_GT_INCR     scrgll framu heif`t incremEnt
 *
 *!( SCrOLL_FRAME_1BOX_WORK_HGT   -0Scroll frame work hgight for 1 databox
 *   SCROLL_FRAME_rDBGXWORK_HGT   = Scroll frame work h≈ight for`2 databoxes	
 :   SCRLLL_FRAM≈_3B_X_WORK_HGT   - Scroll nrame work height for 3 $ataboxes
 :†  SCROLL^FAOE_4DBOX_WORK_HGT   . Scrolm frame work (eiglt fo2!4 dati‚oxes
 *   SCROLL_FRALE_5DBO_WORK_HGT   - Scrold frame work height for u databoxes
 * 
 *   SCROLL_GRAME_DBOX_WORK_HGT_I^CR - Scrnll frame Wor{yng height increment
 *
 *   SCROLL_FRAME_SLIDUR_WID       - WidÙh of the sli`er on`4he right 
 *                      !    0      `of a scro|l frame   
 *   SCROLL_FRAME_SLIDEP_HGP    (  - Height of(the slider0at(the bottom 
 * !    †  `      `           †      of a scrol| frame  `
 *    *   Fram% Margins:
 *ç
 *   QCROLL_fRAME_L_mABGIN         - Ifside heft m`rgin for widgets in 
 *$             "          "         a scroll frame
 *   SCROLL_FRAME_R_MARGIN         m Inside right mabgin dor uidgets in 
 *  (     `           `           "  a scrOll fraee
 *   SCROLL_fRAME_T_MARGIN  & !    - Inside top margin a`ove first widget†
 *   SCROlL_FRAME_B_MAROIN       $ -"Inside bottoM ma2gin bedow laÛt†widget 
 *   
 *!  SCRKLL_FRAME_2H_MA“EIJ(    `  - Both horizonTal mArgins
0*   WCROLL_FRAME_2V_MARG…N        -`Rodh vartical margins
`*/







ç




*/*
 *0  BETTONS
 *	
 *ç
 *   Create two buÙtÔns in a small form.  The bıtton on`the leÊt ir a
0*   de&ault buVton.  Use "half" size buttgns.
 *
 *      ui_Butvon_crea4e ( fnrm_id$ "callback"l              @
 *    †                    BU\TON_JALF_X_LOCq,               @ *        0      !$        y_loc,            (              "@
 *   $                     BUTTON_WID_HALF,             " †  @
 +                  $   !  0.0l "\eft Button",               @
 "  0                      TRUE, TR]E ) 
 *
 (      y_loc = y_-oc + BUTTON_Y_OFFSET
 *
 *      ui_buttkn_#reate ( vo2m_id,("callback",      † "     @
 *    "               Ä    BUTTON]HELF_X_ÃOC2, 0  (       `  @
 *          (          "   y_loc,            "    †         "@
0*   (            "   (    BUTDON_WId_HALF,       0  (†0   ( @
 
    !           "   "    0.0, "Right†Fudton"<       !      @
 *                       ( TR’E, FALsE ) 
 *
 j      y[loc = y_loc + BUTTON_Ÿ_OFFSET +       "(            
 *(      `           †  BUTTO^_HGT )       `           "     @
 *            `  ! "    INTER_WIDGET_[XACA
 *
 :M
 	   ¬uutnn"Widths and »Âights:-
 *
 *   BUTTON_WIT_fULL               - Width of a wid% butuoj†on0a Úmall form
0*0  BuTTONWWID_HALF(  h        "   Width†nf a medium bu4ton on a small form
 *   BUPTOF_WID_THIBD              - Width of a small button on a small form
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
 *   COMMAND_WINDoW_T_EDGE    - Uop etge of command wInfow (inch border)-
 *   GOMMAND_WiNDOW_¬_EDGE    - Bottom edge ov(command gindow (iocl bord%r+-
 * *   GRAPHIC_WINDOW_X_LOC    , GraphÈc3 window X location
 *   GRAPHICS_WINDNW_Y_LOC    - Graphicw windo Y!location
 
   GRAPHICS_WINDOW_WID      - Graphygs wi.dow wad’h
 .   GRAPHICS^WINFOW_@GT      - GRaphics winpow heiGht
 *   GRAPHICS_WINDOWﬂL_EDGE   - Left edge of graphics window (incm border)
 * 0 GRAPHICS_WINDOW_R_EDGE   % RighT Edge og graphics window  incl bordEr)
 *   GR@PHICS_WANDOW_T_≈¿GE   - Top edge of grapiics window (incl border)
 *   GRAPHICS_WINDOW_B_EDG≈   - Bottom edgm oF graphics windw0(incm bob$er)
 *
 * ! SHOW_SPREAƒSHEET_NUM]RœWS - Nu}ber of rowÛ Èn the show spreelsheet uidget
 *
 *   RAPHICS_WMNDOWOWIDOQTR  % Quirtur"wIDvh grahics window
 *   GRAPHICS]WINDOW_HCTQUR  - Quarter width graphiC3 windo
 
 *   ORAPHIS_WINDOW_X_LœC_UL - Quirter Skze grcphics window upper left X loc
 *  `GRAPHIBS_WINDOW_Y_LOC_UL - Qu!rter qize grathics window!upper left Y loc
"*   GSAP»ICS_WINDOS_X_LOC_UR  Quarter sIzm graphics window uppez right X |oc
 *   GRAPhICS_¡ND_W_Y_LOC_US$- Quqrter skre graphics window uxper rieht Y Lo„
 * 0 G“APHICS__…NDOWﬂX_LOC_LL -$Quarter siz-"graphics†uindow$lower0ledt X0loc
 *   GRAPHICS_WINDOWWY_LOC_LL - Quavter size graphicc windov lower lEft`Y loc
 *   GRAPHICS_WINDOW_X_LOC_LR - Quarter s)ze craphics windÔw lower rÈght X`loc
 *   GRAXHICS_WINDOW_Y_LOC[LR - Quqrter sire graxhicÛ window ,ower right Y loc *
 *  0GRAPHICS_CEN_X_LOC (     - CenteÚ of graph)cs area"X locatio. *   GRAPHICS_CEN_X_LOC       - Center of graphicw`azea Y location
 *
 *   WiNDOW_CEN_X_LOK         - Center of area beneath main menu X ,kcatioÍ
 *  `WINDOW_CEn_Y_LOS   "     - Cen4Er kf area,beÓeath lain meju Y Location
 *
  † MAIN_MENU_SWITCH_COLS    - NumbeR of c/lu}ns &or main mene switch
$*
 *( !ENABDE_LAIN_MENU_SWITCL" - Hydden co`e to enable the mayN menu Switch* *    0`                        wmthout having to opEn a databese
 */











/*  OLd APTFORES VARIABLE ***********NEW VARIE¬lE NAMES************(**"*
 */


/*
 *  Application Panels
 */
/+#defije APP_EBOX_WID 1.85*/

/*ä *  Sglectikn Framds
†*

Ø*
 +  Data BoxJ */
/*
 *  List Jox "/


+*
 *  bje¡t Menu-
 (/

/*
 *  Opvion Menu
 */
*

/*
 *  Keyword area
 */

J*
 *" Vull «adth Frames
 */

/*
 *  S˜itch Frames */

/*
 *  Buttmns
 */

/*
 *† Bull Widt` qlidebar{
 */





CLASS STX_DNViÓp_param
/* Classwide Variables */


CLASSIDE WIDgET fore_id, dabel_01, opt-enu_01, itei_01, item_02
CLAWSWIDE WIDGET iÙem_43, item^04, item_05((sep_01¨ laben_02
CLASSW	DE WIDGET optMenu_0r, item_06, item_07$ sep_0≤¨ l!bed_03
CLASSWIDE WIDGET optmenu_03, item_08, item_09, itÂm1p, item_±1, sep_03
CLASSWIDM WKDGET label_04, optoÂnu_04, item_1, ivem_13, item_1
CLSSWIDM WIDGET i4em_15, iuei_16, 3ep_04, frame_01, switcj_01, i4em_17
CLASSWIDE WIDGET )tem_18, item_19, swith_02, item_20, item_r1
CLESSWIDE WIDGET Swmtch_03, item_22, sep_05, toggla_01, toggle_02
CLASSWIDE WIDGET sep_06, button_01, button_02 , d`4box_01,0datbox_0,!sep_17, Ûep_08
CLASSWHDE REAL rq_userInfo(11)




FUNCTION init(-
REAL§yloc_main
REAL yloc_vrame_81=0Æ
REAL box_length=0,


form_id=ui_form_greatu( @/* callback */"", @/*     x    */uil_form_sizes.form_x_loc( 1 ), @
/*   ` y    */uil_form_sizes.form_y_loc( 1 ), @
/* pjsition!*/"UL", @
/*   width  *?uil_form_sizesforM]wiÙ( 1 	, A
/* (height  */uil_form_sizes.form_hgt( 1 ), @J/*  †Ïabel  ./"Inpud Parametez", @/*  unused  */"")

yloc_-aio < u)l_form_sizes.form_Margin( 3 )

M
label_01=ua_labal_creata( @
/*  parent  */form_id, @
/* callbicc */"", @
/*     x    */uil_fori[qizes.form_mavgin( 1†), @
/* (  0y    */ylOc_main, @
/*0  la"el  */"Yield Qtress [Mpa]b)


ylmc_mqin += uil_form_sizes.Ùoggle_data( 3 ) + @
uil_f/rm_s)zes.spacing( ∏ )

äoptmenu_1=ui_option}enu_creatm( @/*"   paren4    *Øform_id, @ä/*   callback   */"cb_sigmay", @
/*       x      */ui,_Form^sizes.form_margkn( 1 ) * 3.0, @
/*       y     !*/ymoc_maIh, @
/* habel_le~gth *'0.6, @
/*  (  mabel    */"Sigma_y =", @
/*  hcbel^above 
/FALSE)

yloc_main†+= uil_form_sizes.optionmenu‰ata( 3 ) + @
uil_form_siz%w.wpaging( 8 )

iÙem_01=uiWIteM_„reate( @
/*   pqrent$  */optoenu_01, @/*    name    */"23=", @
/*   (lcbel0  */"2312, @
/*(toÁglea`le */TRUE	


item_02=ui_item_create( B
/*   parelt   */o`tmenu_01,$@
/* †† name    ™/"2652, `
/*    label   */"265", @
/* toggleable */TRUE)


ite}_03=ui_itei_cre!tE( @
/*   parent   */mptmeNu_01, @
/*   †name    */"315", @
/*    label   */"315", @
/* towgleabÏe */TRQE)


itdm_04=ui_i`em_create( @
/*   parent   */optmenu_0±,0@/*   $ncme    */ 355, @
/*    habel   */"355", @
?* voggleable */TRUE)


item_05=ui_item_create( @
/*   parent   */optmenu_01, @M
/*    name    */39∞", @
/*   `la`el   */"3;0", @
/* tgogleable */TRUE)



*

sep_01=uÈ_se0araTor_creata( @*/*   parent   */form_yd, @
/*    name    */""("@
/*      x     */0.0, P
/*      y1 (  */yloc_main, @
/*   LenÁth   */uil_form_sizes.form_wid( 1 ), @/* horizontal */TRUA!


yloc_main += 5*uiÏ_form_sizes.pixel_size( 2 )"- @
0.5*uil_form^sizes.spacing( 8 ) + @
uÈl_forl_sizds.spacing( 8$)
	
l!bel_0r=ui_label_create( @
/*  pare~t  */for-_id,$@
/* callback */"",`@
/: $   x    */ual_form_sizes.form_margin( 1 ), @
/*     y    */yloc_main, @
/*   labeh  */"Young's Modulus [Opa]")
ç

yloc_main /= uÈÏ_form_sizes.toggle^data( 3†) + @
uil_fÔrm_sizes.spccing( 8 )


optmenu_∞2=ui_opvionmenu_c2eate( @
/*0   p·rent"   */form_id, @
/*   callback " ™/"cb_e", @
/*       x      
/uil_form_sizEs.form_mcrgin( ! ) * 3.1, @
/*       y     `*/{lok_mainl @
/* lAbel_length */0.4, @
/*     l·bed$   *+"E  =", @
/* `label_above */FALSE)Ö


yloc_maiN +="uil_for-_cizes.oppionmenu_datq( 3 ) + @
uil_form_sizes.spacing(∞8 )-
*
itei_06=ui_item_create( @
/*   parent   */oxtmenu_02, @
'* `  name    
/"r16000", @
/*    l!bel   */"206000" @
/*`toggleable`j/TSUE)


mtem_47=ui_item_create((@
/*   parejt¢  *//ptmenu_0≤, @
/"  $(name    
/"69000", @J/*$   label   */"69000", @
/* toggleable */TVE)


sep_02-vi_separ!tor]create( @
-*   parent (†*/form_id, @
/*    ncme  ` *-"", @
/*      x     */0.0, @
*    0 y     */ylocOmain, @
/*   leng4h   */ıil_form_sizes.form_wid( 10), P
/* horizontal */TRUE)ä

yloc_main += 5*Uin_form_sizeÛ*pixel_sIzÂ 2()(- @
05*uil_form_sizes.spacing( 8 ) / ¿Juih_form_rizds.spacing( 8 )*
dabel_03=ui_label_create( @
/*  p·rent  */fOro_id, @
/* callback */""- @
/*     x    */uil_form_sIzes.form_margin( p0), D
/*     y    ./ylkc_main, @
/* 0 label  *o"Plape boundary stif&enilg")


ylocmain += ukl_form_siZesÆtowgle_eata* 3 ) + @
}hlﬂform_sizec.1pacing( 8 )


optmenu_03=ui_optionmenu_create( @
/*    parent    */form_id, @
/*   call"ack   */"cb_stiff", @
/*     $ x      */uil_f/rm_sizes.fOrm_margin( 1 ) * 3.0, @ç
/* " †  "yd     *Øyloc_main, @
/* label_length */0., @
/*     ¨abel    
/"",†@
/*  labem_above */FASE9


yloc_maiÓ += uil_form_sizes.oXtionmenu_data( 3 ) + @
uil_fosm_sizes.spacinw( 8 -


item_08}ui_item_create( @
/*   paren4  `*/optmenu_03, @
/*    name    */"1"," 
/
    label   */"Flat bar",  
/* toggleabl% */TRU)

item_09=ui_item_create( @/*`  parent   */mptmeou_03,!@
/*   !name   !*/"2", @
/:    label   */"Bulb profile", H
/* toggleablE */TRUE)

*item_10=ui_item_creat%( @
/*   parent   */optment_03, »çä/*   0name    */"3", @
/(    label  †*/"T-L profilD"< @
/* toggleable */tRUE)


it%m_11=ui_item_create( @
/*  †parent   */optmenu_∞3, @
/*    name †  *Ø¢4", @
/*    label   */Girder/Vmokr", @
/* toggleable */REM)


sep_03=ui_separator_cre!te( @ä/*0  pasent   *oformOid, A
/* 0  name   !*/"", @
/*   $  x`    */0.0, @
'*      y     :i|oc_mgyn, @
/*   length   */uil_dorm_3kzes.form_wid  1 ), @
/* horizontcm */TPUE)


Iloc_mai. += 5*uil_for|_size{.p`xml_size( ≤ ) - @
0/5*uklWform_Sizes.spacing( 8 ) + @
Qil_form_sixes.spaCing( 9 )

ä<ibed_40=ui_ÏabEl_cr%ate( @/*  pavent  *Øfore_id, H* calhback */"", @
o*  $  x    */uilform_sizes.form_m!rgin( 1 !, `
.*     y    *?yloC_main- @
/*   label  */"Cut gut edga stiffdnin/*)


yloc_main += uil_form_size3.togele_leta((3 9 + @
uilform_smzes.spacifgh 8 )


ptmenu_04=ui_opvionmenu_creadu( @
/:   $pcrent    */norm_id, @
-*   callbcck!  *?"cb_edge", @
/*       x      */uil_form_s)zes.foRm_margiÓ(01!) *¢3.0, @
/*       y     "
/yhoc_mqin, @
/* label_length */0.¨ @
.*     lab%l    */"", @
/* (labEl_above */BALS≈)


ylgc_,ain += uilform_sizEs.o0tignmenuﬂdata) 3 ) +†@
ual_form_sizes.spacing( 9 )-


itei_12=ui_itemWcreate( @
/*   p`rent   :/ptmenu_04, @
*!   name   $*/"1", @
/*    label   */*None", @
/* tocgleable */TRUE)


item_13=ui_item_crÂate( @
/*   parent   */optmenu_04, @ä/*    name    */"2, @
/*    laben   */"Ping stiffening"- @
/* toggneablg */TRUG)


ite-_14=ui_item_create( @
/*   parent   */optmene_04, @
/*    name    *."3", @ç
/*  ! label   */"Bucklino2stifg or bOth siles", @
/* tgggleable */TRQE)


item_15=ui_item_create( @
/*   rarÂnt   */optmenu_04, @
/+(   lame    */"4", @
/"  $ label   */"Stiffeners along longer edge", @
/* toggleable */TRUE)-

*iÙem_1=ui_item[create( @ç
/*!  pirenT   */optmenu_04$@
/*! 0 Ôame    *?5", @
/*    label   */"Stiffenarc alonf shorter edge, @
/* togglEajlÂ */TRUE)


sep04=ui_separatoz_create( @
/*   pare~t  †*oform_id, @
/*  ` name    *."", B
/* 0    x 0   *Æ0.0,"@/*@  (  y 0   */ylog_oain, @
/*   length   */uil_form_sizgs.form_wie(!1 ), @
/*!horizontal */TRUA)M
*
yloc_main`)< 5*uil_form_sizes.pixel_size( 2 ( - @0.5*uil_form_sizes.spacing® 8 ) + @*uil_fo2m_sizes.spacing( 8)


frame_01=ui_frame_cpeatu( @
/*!parent */form_id, @
/*  .amÂ  "/"",†@
/*    x  †™/uil_form_sizes.frame_margin( 5 ), @/*    y   */yloc_main, @
/*  width */uilform_qizes.frame_wid(  ), H
/* height */1.0, @
/  label */"SaÊety Factors")


yloc_fr`me_01`= uil_form_sizes.frame_margiÓ( 3 )


switah_01=ui_swaT#h_create( @
/*   pare~t   +/fraÌe_01, @
/*  Callback  */"cb_ethasig", @
/* $   (x     */uil_form_sizes.form_ma2gin® 1 ) * 3.0,!@
/*      y     *ylgc_fr·lu_01, @
/*  num_cols  */1,$@
/* 0  labeL   */"Etha_Ûig",`@
/* alwaxs_one */F@LSE)


yloc_frame_01 += uil_form_sizes.switch_hgt( 3, 1 ) + ¿uil_dorm_sizes.spacing( 8 )


ite-_17=ui_item_create( D
/*   parent   */switch_01, @*/*    name    +/"1", ¿
/*    label   */"1.0", @
/* tOggleable *TRUM)


hteÌ_18=ui_item_create( D
/*   parent   */switch_01, @
/*    name`   */"2", @
/*0   labeL   */"2.9", @
/* tocgleable */TRUE)	
-

iue-_19=ui^item_CreAtE( @
Ø"   pArent † */3witch_01, @
/*    name    */"3", @
/*    label   .-"0.8", @
/* togglearle */TBUE)


$ 5i_wid_set*fraie]!1,"@EIGHT".yloc_frame_01)
$
$ }loc_main += uil_form_s)zes.spacilg( 12 ) + @
$ uIl_form_size3.frame_wid( 5 ) + @
$ uil_borm_shzec.sPacing( 8†) + ¿
$ yloc^frame_∞1

M
cwitch_02=ui_switcx_crecte*(@	
/*  $parent   */vrame_01, D
/*  callrack  */"cb_ethatau", ¿
o*      x     */uil_form_sizes.form_ma2gin( q"	 * 3.0, @
/*   !  y  !  ™/yloc_Êrame_01,`@
/*  num_cols  */1,$
/*    labe,   */"Et`a_tau", @
/* always_one */FALSE)

M
yloc_Frame_01 += uil_form_Sizes.switch_hgt( 2, 1 ) + @
uil_form_sizes.specing*"8 )


itEm_20=ui_itum_cReAte( @
/* ! parent   */switch_02, @/*    naoe    */"1", @
/*    laBel   */"0.9", @
/* toggle`ble */TRUE	


item_21=ui_item_cRe·Te( @
/*   xarent   */{witch_02, @
/*    nAle $  */":", @
/*    label   */"0.85¢, @
/* toggleable */TRUE)

$ ui_wid_set(frame_01,"HEIGIT",yloc_frame_01)

 yloc_main += ıil_form_sizes.spacÈng( 12 ) + ¿
$ ui|_form_sizes/frame_wid( 5 ) + @J$ uil_form_sizes.3pacing( x ) + @M
$ yloc_frame_01


switch_0#=ui_switch_creatÂ( @
/.   parmnu  `*/fÚame_01, @M
/* 0calnbac{  */"cb_ethaxy". @
/*      x     
/uil_d/rm_sizesform_margin( 1 ) * 3.0, @
/*      y     j/yloc_fr!me_01, @
/*  num_cols$ */1, @
/*    Ïabel   */"Etha_xy", B
/* always_one ™/FALSE©

ylOc_frame_01 += uil_form_sizes.switch_hgt( 1, 1 )(+ @
uml_form_sizes.s`a#kng( 8 )


item_22=ui_iteMOcreate((@
/*0  paranT  !
/switch_ 3, @
/*    name    (/"1", @Ø*    label 0 */"1/0", @
/* tgegleablÂ */TrUE)

ui_wif_set(fbame_01,"HEaGHT",yloc_frame_0)


yloc_lain += uil_form_sizes.specing( 12 ) + @
uil_form_sizes.fpame_wid( 5 )"+ @
uilWfozm_sizes.spaing( 8`) + @
yloc_frame_01*

sep_05=ui_separator_cruate( @
/* ! parent" `™fob}_id, @
/*  $ name    */"",(@
/*      p     */0.0, @
/*      y     :/yloc_main, @/*   length   */5Èl_form_sizes.norm_wid( 1 ), @
/* horizontal */TRUE)ä

y,oc_main += 3*uil_form_sires.pmxem_size( 2 ) - @
0.5*uil_fOrm^qizer.spscing( 8 ) + @
uil_fore_sizes.spac)ng( 8†)


togcle_01}ui_toggle_create( P*/*  perent0 */form_id, P
/* callback */"", @
/*   $ z    */uilﬂform_sizes.foz}_margin( 1 ), @
*     y    */yloc_main, @
/*   label  */"Plate part Nf doubÏe bottom)


yloc_main += uil_form_sizds&toggle_data( 5 ) +"@
til[gorm_3izes.spacing(`8 )

toÁgle_02=ui_toggle_create( @
/*  parenT  *Øform_id- @
/* callback */", @
/*     x    */uil_bÔrm_sizes.form_margin( 1 )<(@
/*  0  y  † +/yloc_oain, @
/*   dabel  */"Allovable elasTic buck,ing")


ynoc_maiÓ(+= uyl_fÔrm_sizes.togÁle_dcta( 1 ) + @
uil_f.rm_sizes.spacing( 8 i


sep_06=ui_separat/r_create( @
/*  !parent   */fgrmid, @
/*    naoe    */"", @
/*     0x     */0.0, `
/*      y     */yl/c_}ain, @
/*   lengvh   */uim_forÌ_sizesÊorm_wit( 1 ), @
/* hnrizontal ™/TBUE)


yloc_main += 5*uil_form_sizes.pixel_siza( 2`) = @
0.5*uilfopm_sizes.spacing( 8 ) + @
uilﬂform_sizes.spacing( 8 )


box_length(= uil_form^sizes.dbox_wid( 1 ) - @
8.7

ädatbox_03=ti_databox_cbea4g( @
/*    ravenp  0 */foRm_id, @-
/*   cAlLb·ck   */"",@/*       x      */uih_form_sizds.form_Margin( 1 ) * "Óp, B
*       y     !*/yhoc_mqin< D/* label_leNgth */0.7, @
/*  Box_length  */box_length, @
/+` `  nabel    */"Corrosion Marghn :< @
/*$    value    */0., @
/*" label_·bove */FALS, @
.*   latav9pe   */*REAL", @
/*   num_vals  `*/1i

ymoc_main += uil_form_sizes.dbox_`gt(`2 ) + @	uIl_form_sizes.sxacing 8 )


se_07=uiseparatorcreade( @
/* !*parent   */form_id, @
/*    name    */"", @
/* †    x  †  */0.0, @
/*      y     *-yhoc_main, @/*   lelgth   */qil_Form_sizes.form]wi$( 1 ), @
/* horizÔntal */TRUE9


ilob_mahl +< 5*eil_fori_sizes.pihel_size( 2 ) - @
0.5*u+l_fkrm_Ûizes.spacing( 8 ) + @
uil_form_sizes.wpacing( 8 )


`ox_length = uil_form_sizes.dbox_wid( 1 ) - @
0.6


eatbox_06=ua_dat`box_create( @
/*    parent   †*/form_id, @
/*   call`acc   */"", @
/*       p      */}il_form_sizes.form_margin( 1 ) * 2.4. @
/*       y      *Øyloc_main,†@
/* label_nength */0.6- @
/*  box]length  */box_lengthL @
/* ( 0 label    */"Safety Factor :", @
/*     vaLue    "/q.0, @
/*  laBel_above */FALSE, @
/*   datatyp‰   */"RUAL", @/*   num_vals " */1)


yloc_main += uil_form_sizes.‰box_hmt( 2 ) + @ıil_fosm_sizes.spacing( 8 )


sep_08=ui_separatÔr_create( @
?*   parent   */form_id, @
/+    Name(   */"", @
/™ $    x  `  */0.0, @
/*      y"    */yloc_main, @
/*$$ length  "*/uil_form_qizes.form_wid( 1 ) @
/* horyzontal */VRE)

ylog_main +=(%*5il_form_sixes.Pi8el_size( 2 ) - H
0.5*uklfosm_si~eq.spacing((8 ) + @
uil_forÌ_sizes.spacing( 8!)



button_0!=ui_buvton_create( @
/*   pirejt  "/form_id, @
/*  callb!ck ./&cb_aqp,y", @
o*   " x     */uilfozm_skzes.button_x_loc1( 2 ), @-ä/* !   y     *Øyloc_main, @
/*   width   */uil_form_cizew.buttol_wid( 2 ), @
/*   height  */u)l_fozm_sizes.bqtton_hgt( 20)l @
/* ` label   */"Apply", @
/*    TRUE   */TRUE, @
/* hiohdight ™/FAlSE)


button_02=ui_button_„reate( @
/j   parent  */foro_id, @
/"  callback */"cb_cancel", @
/*     x     */uil_&orm_sizes.button_x_loc1( 3 ), @
/*     y     */yloc_main, @
/* ! widrh   
/uil_form_sixes.button_uid  2 ), @
-*   height  */uil_form_sizes.button_hgt( 2 ), @	
/*   label   */"Cincel", @
/*   $TRUE  "*/TRUE, @
/™ higjhighu */FALSE)
+M
yloc_Ìain†+9 uil_fnrm_qize3.Button_hgt( 20) + @M
uyl_form_sizes.spacing( 8 )


ui_wid_set(switch_01,"VALUE","1")
ui_wid_set(switch_02,"VALUE","1")
ui_wid_set(switch_03,"VALUE","1")	
ui_wid_set(form_id,"HEIGHT",yloc_main)


END FUNCTION/* init */


FUNCTION display()
ui_form_display("STX_DNVinp_param")
END FUNCTION/* display */


FUNCTION cb_sigmay(name)
/*
 * This is a callback FOR the optionmenu named optmenu_01
 */

STRING name[]


END FUNCTION/* cb_sigmay */


FUNCTION cb_e(name)
/*
 * This is a callback FOR the optionmenu named optmenu_02
 */

STRING name[]


END FUNCTION/* cb_e */


FUNCTION cb_stiff(name)
/*
 * This is a callback FOR the optionmenu named optmenu_03
 */

STRING name[]


END FUNCTION/* cb_stiff */


FUNCTION cb_edge(name)
/*
 * This is a callback FOR the optionmenu named optmenu_04
 */

STRING name[]


END FUNCTION/* cb_edge */


FUNCTION cb_ethasig(name,event)
/*
 * This is a callback FOR the SWITCH named switch_01
 */

STRING name[],event[]


END FUNCTION/* cb_ethasig */


FUNCTION cb_ethatau(name,event)
/*
 * This is a callback FOR the SWITCH named switch_02
 */

STRING name[],event[]


END FUNCTION/* cb_ethatau */


FUNCTION cb_ethaxy(name,event)
/*
 * This is a callback FOR the SWITCH named switch_03
 */

STRING name[],event[]


END FUNCTION/* cb_ethaxy */


FUNCTION cb_apply()
/*
 * This is a callback FOR the button named button_01
 */

STRING s_buff[32]
LOGICAL l_chk
INTEGER i_chk


ui_wid_get(optmenu_01,"value", s_buff)
ra_userInfo(1) = str_to_real(s_buff)
ui_wid_get(optmenu_02,"value", s_buff)
ra_userInfo(2) = str_to_real(s_buff)
ui_wid_get(optmenu_03,"value", s_buff)
ra_userInfo(3) = str_to_real(s_buff)
ui_wid_get(optmenu_04,"value", s_buff)
ra_userInfo(4) = str_to_real(s_buff)


ui_wid_get(switch_01,"value", s_buff)
ra_userInfo(5) = str_to_real(s_buff)
ui_wid_get(switch_02,"value", s_buff)
ra_userInfo(6) = str_to_real(s_buff)
ui_wid_get(switch_03,"value", s_buff)
ra_userInfo(7) = str_to_real(s_buff)


ui_wid_get(toggle_01,"value", l_chk)
i_chk = l_chk
ra_userInfo(8) = i_chk


ui_wid_get(toggle_02,"value", l_chk)
i_chk = l_chk
ra_userInfo(9) = i_chk


ui_wid_get(datbox_01 ,"value", ra_userInfo(10))
ui_wid_get(datbox_02 ,"value", ra_userInfo(11))	


ui_form_hide("STX_DNVinp_param")
	
END FUNCTION/* cb_apply */


FUNCTION cb_cancel()


ui_wid_restore( "STX_DNVinp_param" )
ui_form_hide("STX_DNVinp_param")


END FUNCTION/* cb_cancel */


FUNCTION getUsrInfo()
return ra_userInfo
END FUNCTION


END CLASS/* STX_DNVinp_param */
