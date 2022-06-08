

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
 *   FORM_X_LOC_OFFSET_CASCADE_4    X offret for cascade posipig. 4M
 *   FORM_X_LOC_OFF”ET_CASCaDA_5(  - X offset fkr cascqde pkri4ion 5 * *
 *   Form Xlacement - Y LcaÙion:
 * ç
 *  ÄFORM_Y_NOC           `     - Y LgcatÈ/o fkr form ufder(Main Menu
 *
 *  0FORM_x_LOC_HALF_CEN        - 1/2 Height form sentered!on screen
 *   FORMOY_LGC_QTR_SUN!         1/4 Hekght fNrm centered on scregf
 *   FORM^Y_LOC_s_8TIS_CEN ! $ !- #/8 Height form ceNtdRe` on screen
 J   FoR_Y_LOC_5_8T»S^CEN      - 5/8 HeiÁhd form centered m~0sc2een
 * $ FO“M_Y_LOC_7^QTRS_CEN      - 3/6 Height`form sen|eREl Ôn wcreen
 *
 *   FORM_Y_LOC_OFFSED_CASCAEE_1   - Y offset for cascade positi-n 1
 *   FORM_Y_LOC_OFFSET_CAWC¡DE_2   - Y offset for cascadg position 2
 *   FORM_Y_LOC__FFSET_CASCADE_3   - y oFfset for cascale position 3
 *   F_RI_]_LOC_OFFSET_CASCADE_5   - Y /ffset fOr cascade position 5N *  0FORM_Y_LOC_OFFSET_CASCA@E_5   - Y offset fgr cascade posivkon 5
 * 
 8J *   Form Widths aÓd$Heights:
 *
 *   FORE_WID_SML         0     - Widt@ of a sm!ll form
 *   FORM_WID_CPL      8 `   `  - Width of"a "speciad"(&orl *1.5 times 
 *      "                         a small form)
 *   FORM_WID_MED    †          - WidTh of a }edium fopm (medium si˙e+ 
 *   FOR]_WID_LRG        0   "†0- WidÙh ~& q"la2ge form (large size) 
 *  J * † EORM_HG‘_TALL             (- Heifht o& a t`ll form (Main Menu to  *    † " !               `       bottm of screen)
 *   FGRO_HGT_FuLL         00  "- Height gf a(vull form (Main Menu to
 :    0           (               |o0"of Command Gyndow)
 *   FORM_HGT_JALF              ≠ HamÊ oÊ a fulh fori
 *   fOM_HET_QTR               - One Q5avte2 of$a bull form
 *   FOm_HGTﬂ3_8THS       †  ` - Three Eighths of a†full form
 *$  FORM_HFT_5_8THS            -!Five Eighths of a fuld form
 * ` FOPM_HCU_3_QTRQ !"(        - Tlrqe Quarters of e full form
 * 
 *M
 *   Form Margyns:
 *  
 *   VORM_L_LARGIN  "      $    - Inshfe Left Margkl for wi`gets in form .   FORM_R_MARGIN              - Incide Righd Margin Êor gidgets in fk2m
 *   FO“M_T_MARGIN           "  - Inside`Top MavgiÓabote .irst wkdget
 *   ÜORM_B_M¡RGIN        `!    - Inskde Bottom Marein below last widggt
 ™   FORM_b_MARGIN_JO_BUTTON    -†InskdÌ Bottom margio celow last widggTç
 * † 0  `                         wËdn la3v wi`gdt iw not a button
 *   
 *   FORM_2H_MA”GIN      ††    - BodH hori~ontal marginw`*   FORM]2V_MARGiN       !     - Both vestical maRgins
 *  $FORM_rVﬂM@RGIN_NO_BUTTON   -!Bo|h0vertical margins (when last widgev
 *$ `                        p    as not a b5tton)
 *  *
"*   Form Fordmrs!(tle(colored!aruas outsidm the`fgrd): *  
 *   FOR_L_BORDER             !- Left Border0of the foRm 
0* $ FORM_R_BORDER   0          - Pigxt Brdev of`the form-
 *`$ FORM_T_BœRDER`            -Top BoRder of the form (iNglqding$the label)
 *"  FOVM_B_BORDER †           *- Bottgm Border of the"dorm
 *   FORM_TﬁBORDEr_NO_LABEL     - Top Border!of the"fobm witjoet a labed
 *   
 *   FORO_2H_BORDER          !` -"Botj jkrizonual bOrders
†*   FORM_2V_FORDDR             -†Both vertiael borders((with label) *   fORM_6V_BORDER_NO_LABEl   `-!Boph†v'rtical borders" w)tjout label)
 *  
 *   FORM_X_ISFRAME             - Comqensation$bor X locition of formr
 +   (   Ä          `             If they are 'uqer plqced' ratler than
"*                             $  appÊÓrms placud 
 +   FORM_Y_ISFRAME    "        - Compensathoo for Y location
 *   FORM_Y_ISFRAME_NOWLABEL    - Compensathon nor Y locition for roÚ-s
 *                                with$no label
 */





Jä




JM*



/*J"*  0ACTION`- OBJECT = MDTHOD MENUS 
 *
 *
 *   Crmqte the Application Action, Object, Method menus and pmace the
 *   separavov underne`t` thUm.
 *
 *    0 "$`                †    `FORM_WID^MED,               @
 *      ui_optionm%nq_creadm* form_id, "ca,lback",  @  ``    @
 *               $       `  0 AOM_MNU_X_LOC,     (    !     @ *                            ACTION]MENU_Y_LOC,"  †" `      @
 *    "   "             !  !  AOM_MENU_LABELOLEN,            @
 *             `              ACTION- FALSE )
 * ( J *   `  ui_optIonment_crdate( form_id¨ "#allback,  (        @
 *    `                       AOm_MENUﬂÿ_LOC, `  !  ` !°     @
 *         $                  OFKECT_MENU_Y_LOC,       †0    @
(* † "        d               ANM_MENUOLABEL_LEn,     !      @
 * 0                   !      OBJECT, FALSE ) *   
 "(   ` ui_optionmenu[create( form_id, "callback",           @- *    !          $  0         AOM_MELU_X_LOC,     (          @
 *     †0  "        $      †  METHOD_MENU_Y_LOC,        !    @
 * `        ` †               COM_MENU_LABEL_NEN,        †   @
 *`          0              ! METHD, ALSE )
 *   
 *   $  ui_smparator_create ( f/rm_id, "", 0.0,          `   @
 *                      ( (   AOMWSEPARATOR_Y_LNC,0     "    @
 *   "$    (               !  FORM_WID_SML,`TRUE 	
 +   
 j 
 *   AOM Menı lacament:
 * 
 *   AOM_ENU_X^LOC       - X Locadion of$phe AOM menus hmargin included)* * ( AOM_MENULABEL_ÃEN   - Labdh nength§for$AOM menus (langıa'e dependent)
 *   ACTION_MENU_YLOG    - Y Locatign for th% Astion meju (margin$included)
!*   ODjECT_IENU_Y_LOC   0- (LocatioN`for the Object menu (margin includEd)
 *   METhOD_MENU_Y_LOC    - Y \oca4ion for phe Method menu (margÈn included)
 *   AOM_SEPARATOR_Y_L_C  - y Lo#atÈnn for sdparator under thE AOM -enus
 *  (A@P_FORM_FHR”T_X_LOC - Y Location vob the first Widget in an 
 *     ¢   `       $    $   applica4ion"fo2m M
 *.



/*$*   FRALES
 *ä *
 *   create a fraoe in al0applicetion form.` Assumd th)s is the firrt
 *   widget in the(&o2m and thad the freme ckntains a thred0line xIstbox
 *   with!a la`el`and a databox wmth a labal.  vhen locate thÂ0Y rositio~
 *   fgr Af unfpamed"databox!under the frame.  Lote that thm frame's label
 *   mu{t be cnsidered in determining the next wieget LocaTion as does
 *   t`e th)ckne3s of t`e fr!me edgeÛ.
0*
 *   Rince this is an applisation form< the first Y locavcon is the,
 *(  variable "cpp_form_firs4_{_loc".
 *
`*(     y_lc = APP[FORI_FIRSTOY_LOC
 *
†*   $  hemgjt = RAME_T_MARGIN +`         ( 0               @
 *   $ !    $    LROX_3L_HET_LQ¬OVE +       $      $† `    ( @
 * †† !        † INTMRﬂWIDGET_SPACE +         $   †         †@
 ™           $   DBOX_HFT_LABOVE +              " 0(         @
(* (!      †     FRAÕE_b_MAVGIN
 * *      ui_framE_create ( form_id, ""(                       @
 *                       FORM_L_MARFIN,     0             !(@
 *                 "      y_lnc,     †         $        0 `  H
 *             †  (   "  0RAMe_WIƒ_SANGLE,     $       `    @ *     "  $ "             height, "Label# )
 *
 *    " ui_listbox_creaTe ( frame_id, "caloback"           †@
 *0 !                       FR@ME_L_LARGHN,            (     @
 *          `               FRAME_T_MARFIN, ` !   (        †$@
 *     (     ` "  "         LBOX_WID_SINGLE,                 @à†*                          3,("Listrox Label",          " ( @
 *      (             `     selection_type, rort_flag )
 *
 
     (y_drame_loc = FRAME_T_MARGIN +          ! !      1  †@
 *          $    p    LBOXO2L_HGT_NABGVE`+      $       0  ! @
 *                   $IOTERWWIDgETSPACE *
 *      ui_databnxcreate ( frame_id, "",       †            @
 * !  !    "   (        0   FrAME_L_MARG	N,$                 @M
 *          0   †           y_frame_locl 0.0,  Ä ! h†        @
 *     (    `          (  ! DBOX_WID_WINGLE,        `        @
 *( $           $           "Databox Label", value,          @
!* !        $               \RUE, datap{pe, num_ˆan{ )
!*
 J      9_hoc = y_loc )        (  (      (      p            @
 *             (GRAME_LABEL_HGT +$ !             †    $   (® @	
 *      †$      height +        †         $              "   @
 *              NRALEW2ELGE +            ` ( `        $  !   @
 *              INTARWWIDGET_SPACE
 *
 *      ui_databox_create ( frame_id, "",  † (  ( †      "   @
 *  0 0        †$   "      "UNFRAMED_L_MARGIN,               @
 *      (( `                y_lo„, 0.0‰!   $`"   $        ` @
 *       a  0               DBOX_WIT_SINGLE,        !        @
 *    0           (   0     "Second Databox Label, value<   @ç
 *                      $!$ UZTE, dat`tyqe, numval{ )
 *
 *
 *   Breate pwÎ single wifth frames"in a Ìedium form that is 
 :   nezt to a sM!dl applicatin form.  These fsamÂw w(ll`bg *  `at the top of ti% form.  Theyr heights(are |he sale qs
0*   in the above example.
 *
 *     0uiOform_cseate( "". FORM_X_LOC_MEDNX2_SML,0    ` "  @
 *    $†       $      0     ORE_Y_LOC, "UL",           †    @
$*      $          "        FORM_WiD_MED,           `        A
"(         †                FORM_HWT_FULL, "‹abed", "Icon" )
$*   
 *
!: (    ui_frame_create ( form_i‰, 2",       0  ` `          A
"*   $ 0          $       FRAmE_X_LOC_COL1,¢$              ! @
 *         †            " FORM_Y_MARGIN         †       †   @
†*            $     0     FREME_WID_SINGLE,           "  1   @
 *                    `   height "Ledt Label" )
 * *  $   uiWfvame_cRaate ( Fnre_id- #",``              `      @
 *     "                  FRAME_X_LOC_COL2<      p           @
 * †     `†     †   $     FORMWY_MARGIN,    `    `    † †    @ (     $                †8fZAME_VID_SINGLE-         $†        
 *              (      !  height, "Right L!bel" )
 *   
 *
 *   Frame WidthÛ and0Heights:
 *
 *   FRAME_WID_CiNGL≈    - ◊idth of a(skngle width f2ame   	
 *   FRAM_WID_SPECiAL   - Wid|h of a spdcial width frq-e  
 +   FRAME_WIT_DOUBNE    -†Width"of a ‰ouble width frame   *$  VRAME_WID_TRIPLE   †)0S)dtË of a triple width frame  
 *
 *   FRAME_LABEL_HGT     - Heaght of the lajdl!above!a frAme
 *  !
 *
 *   Frame Marginc:
 *
 *  !FSAME_l_MARGIN      / Inside left margiN for wmdgeTs in the fpame
 *  $FRAME_B_MARGIN      -$Insidd"right margiÓ for widcets in thE frame
 *   FRAMEﬂT_MARCIN      - Knside top margin above first gidget 
 *   FRAMA_B_MARGIN      , Inside bottmm margin bulow last widget 
 *   
 *   RAÕEﬂ2H_MCRCIN     - Cod| horizontal(mergins
 *   FRAME_:V_MARGIN     - Both vertmcal eargins
 *   
 *
 *   Nrame Placement:
 *
 *  †FRME_X_LOG_BO\!"   - Y`LÔC`tiof for ` Frime in column 1
 *           $        !    (same as "form_l^}argin")
 j   FRAME_X_LOC_CNL2  " - X Location for a fsa}e in column 0
 *   FRAME_X_LWK_COL3    - X Mocatyon for a dpame in column 3
 *
 *-
 + †(nframed SÈdge4 Placement:
 ** *   UNVSAMUD_L_MARGIN   - Le&t margin for `n0unframed widget *   UNFRAMED_rMARgIN   - Rigjt margiN for an uÓdramed widget
 *      !  `              
j* ` UNFsA]≈D_X_LOC_COL1 % X Nocatkon$of al unFramed wi‰get in`colu}n¢5
 *   UNFRIMED_X_HOC_COL2 - Z NmcauIon of an†unfraeed wydgep in column 2
 *   ULFRAÕED_X_LOC_COL3 - X Locatyon ob0an u~framed widgÂt in column s
 *o



M



/*
 *  `SELECT BRALES
 *
 *
+   Create ` selgct frame in `n applicatkoN form.  Put two select dadaboxgq
 *   in the select frame.  TËen kompuvÂ the [ location for tj% next widget.
 *   Jote†the use on tËe suprlie$ Y loc`tions for the se,ect`databoxes aS 
 *  @weld qs the jeighÙ of the select!fraig.
 *
$*      y_lmc$= APOFORM_FIRST_Y_LOC
 *
 *   0  ua^selecdfraMe_create( forM_id, "callback",        $ @ *     `    !  !      0        FORM__MARGIN,    `  (        @
 *                             y_lÔc,      !    †   `(       @
 * `     `   !"            `   SFRAME_WID_SIN∆ME,    !  †   !@
 *                `           (SFRAME_2SDBHGT_L¡BOVE,      "@
 *`  0                  !      "S5luct Frame Labed", `      0H
 *           (       0    "  † pecycle^`la' )
 
0`     †  $    0            $  
 *      ui_celectdatabox_cre`te ( sel_frame_id, "", p   !    B
 *  "       "      "      ! $`    wFRAME_L_MARGIN, `         @
 *a      (              0         SDBOX_Y_LOC1, 0.0,         @
 "          00    "   "        $ (SDBOX_WID_SINGLE,          @ *     !                     (    "Sulect Databox Oneb,    0 @
 *                          !0    ~alue, DRE, dafat}pe,     @
 j   0     "  † ` ""       †    0prOmpt0)
 *
 *  `   ui]sglectdatebox_„reate ( 3el_nramG_ie,0"",      "   @*0*`    !    `  !                  SFRME_L_MARGIN,   "  "(   @
 *                     0        0 SDCOX_Y_LOC2,"0.0,    †    @M
 *                           †   !SDCOX_WID_SINGLE, (      0 @"*        (                  !    "Select Databox On%"¨"     @
 *      !            "            value, TZUE, datatype,     @
!*                                prompt +
 *
 *      y_loc = y_lk + SFRAME_LBEL_HGT +  ‡      ((   `    @
 j         $0   0       SFRAME_2SDB»GT_LABOVE + † †0        @
 *            0 (       SFRAMD_2EDGE +†!       0    !        P
†*     $               !IFTER_WIƒGET_SPACE
 +
 *
 *   Select frame WydÙjs and Heights:
 *
 *   SFRIMU_WID_S…N«LE  †      - Widtx of a single whdth select framE
 *   SFRAOE]WID_SPECIAL `      - Width!of a spE#ial†width select frame
 *   SFRAMU_WID_‰OUBLE "       - Width of A d/uble wid|h select Êrime
 *   SFRAME_WID^TRIPHE  $      - Widtx of$e tÚipÏe widt( Sehect Framu
 *ç
 *   SFRAME_LBMLOHgT          - Hmight /f the lajel cj/ve % select fraiÂ
 * (   SFRAME]1SD¬hGTLABMVE    - Height of a smlect gra}e"wyth
"*  !        `        (   0      1 selecd dataBox with a†label * ` SFRAME_2SDB_XgT_LCBOVE    - Height of A Sulect frime wit ä *                     h         2 select databoxes with$labels
 *   [FBAME_3RDBHGT_LA@OV≈  ( - Height of a select framm whth
`*          `                 !  # selec60``ta‚Oxes wit` labels
 *   SFRAO≈_4SDB_HG\_LABOVE "( - Heyght of a!select frame with
 * !   °              ! †        4 select databoxus with la‚e|s
!*$  SFRAME_5SdB_XGT_MABOVE    - Height nf a select(frame with
 *    0 `$$               $      5 select dctaboxds gyth labels *-
 *$` SFRAME^HGT_LABOVE_YNCR !  - Increment for makyng select frames with 
 j !0      0                     moze t(al 50saltct `atab/xes with labels
 *J *   SFRAME_1SDB_HGT_NO_LaBOTE - hgigit oÊ a senect fˆame with
 *   †         !            "   "1 welect0databo| without a lab%l
 *0  CFR@M≈_2SFB_HG_NOWLABOVE2- Height o. a select frame with
 *      "      `    †`  `       Ä2 semect databoxes withgut lebels
`*   [FRALE_3SDC_HGT_NOLABOVE - Height of A select ÊramÂ widh
 "  0        †         "         3 select databo8es wÈthout li`els
 *   SDRAME_4SDB_HœT_NO_LABGVE - Hmight of a selÂct ÊrA˝%0with
 *      ""                $      4 selegt databoxes without la`els
 * $ S∆RAIM_=SDB_H«T_NO_LABOVE = Height of a sEmekt frame with
 *                  (   `        5 sehect d!taboxes hthout labels
 *
 *  (SFRAM≈_HGT_NO_LABOVE_INCR - Increment dwr making celect drames ˜iph  *    $ $     †    (             more than 5 select0databoxes withoup labels
 *
 *
 *   Select Fbame Margins:* *
 *  !SFRAME]l_MARGIN   †      `-8Inside lÂft margin for(select `ataboxes *   SRAME_R_ABOAN    # 0    - Inside right$margin for select databfxeq *   WFRAME_D_MARGIN      0    / Insile top mqrgÈn for selEcÙ`databmxes
 *   SNRAME_BﬂMARGIN     &     - IjsÈde bkftom margin fmr sdlect databoxÂs
 *!  
 *   SFRCMM^2H_MARGIN     ±    -`Bouh horirklTaÏ margin{*(*   SFRQME_2V_MARGIN      ! " ≠ Both terticam`maReins *
 *
 * ` Selgct Fr#me Placement:
 "
 *   SFRAME_X_LOC_COL1    0    - X Location bor a select fraÌe In colu}o 1
 *            ` †               (same bs "form_l_marwin&)
 *   SFRAMU_X_LŒCCœL2         - X LositioN for a select frame kn$colUmn 2
 *   svRALE_X_LOC_COL         - X LocadiÔn for c Select frame in(column`3
 */


J


ç

/+
 j 0 SCRKLLﬂDRAMUS
 *
 *
 ((  Creqte e scroll0frame$in a form.
 *
 *
 j ( Scroll Frame Widths†and Heights:
 *
 *   SCROLL_FRAME__ID_SINGLƒ       - ◊idt` oÊ a`single width scroll frame   ä *   SCROLL_ƒRAME_WID_SPEKIAL     †- Width of a speaial width scpoll fsame  
 *   SSRODL_FRaME_WiD_DOUBLE       - Witth of a dotbla Wi‰th scroll frame$ 
 *   SCROLL_FRAMEWWI@_TrIPLE       - Sidth†of a triple width scrolL fRame  
 *ç
 *  $ *   RCROLL_FRAME_WORK_WID_SInGLE  - Working w…dth of$a sÈjgle width
 *   0         (    (   †0           sc2oll frame   
 *   SCRML_FRAME_WORK_WID_S@ECIAL - Wosking uidÙh of a speCial widph 
 *                                   scrnll frame   
 *   SCRNLLFRAMU_WORK_WID_TOUBLE  -†Working width of a double width 
 *                                   scroll frame   
 *   SSRKLL_FRAME_WORK_WIDWTRLPLE  - Working"witth of`a triple width
 "                                   scroll frame   
 *
 *   SCROLL_FRAME_DBOX_WID_SINGLE  - Width of`a$smngde width scroll frame   
 *            †        `             databox
 *   SCROLL_FRALE_DBOX_WMD_SPECIAL - Width of a special width scRoll fr`me  -
 *                0                  tauabox *   SCROLL_FRAME_DBOX_WID_DOUBLE  - Width of a double wifth ccrkll &rame (
(*          !           "            databOx
 *   SCROLL_FRAME_DBOX_WID_TRIP\E  - Wi`th of a triple†width scroll frame  
 * #       0         "    `         !daÙ·b/x
 *
 *   SC“OLL_FRAME[LABEL_HGT $    † - Height of the label abote e
 *   $     (            (          † scroll frame   
 *
 *   SCROLL_FRAME_1DBOX_HGT      ! - ScroÏl frame height`with`1 datacox
 *   SCROLL_FRAME_rDBOX_HGT        - Scroll Fr!me heighu witi 2 datafoxes
 *   SCPOLL_FRAME_3DVOX_HGT        - Scroll frame height with 3 databoxec
 *   QCROLL_FRAME_4DBOX_HGT0     † - Scroll frame height with! databoxes
 *   SCROLL_FRAEE^5LBOX_HGT        ≠ Scronl frame beight with 5 databoxes-
 *
 *   SCROL_FRAME_DBX_HGT_INCR    - Scroll frame height incsemant
 *
 *   SCROLL_FRAÕE_1DBGX_WORK_HGT   -(Scroll frame work heIght for 1 databox
 *   SGROLD_FRAME_2DBOX_SORK_HGT   - Scroll fRai% wNrk height for 2 databOxes
 *   sCRGLLﬂFRAME_3DBOX_WORK_HGT   - Skroml fr!me work heioht ford3 databoxds
(*"  SAROLL[FRAmE_4DBOX_WORK_HGT   - ScRoll frame worj height for 4 databoxes
 
†  SCROLL_FSAME_5DBOX_WOK_HGT   - Scroll frame wÔrk height for 5 dctaboxes
 * -
 Í " SCRMLL_FRAME_DBOX_WORK_HGT_INCR - Saroll fRame0working height Increment
 *
 *   SCROLL_FRAME_SLIDER_WID †     - Width of the {li`er on0the right 
 *                         0        `of a!scroll frame   
 *   SCROLL_FZAME_SLIDER_HGT   `   - Height of the slider !u tHÂ bottom 
 *                                   of a scroll f2aoe   
 *   
 *   Frame Margins:
 *
 *   SCROLL_bRAME_L_MAR«IN        $- Inside left margin for widgets in 
 *         "                   " `   a scrolÏ frame
 *   SCROLLFZAME_R_MARGIO         - Inside right maRgin for widgets in 
 *                    0         `    a scroll frame!*   SCROLL_FRAME_T_MARGIN       ` - Inshde top margin above first widget 
 *   SCROL\_FRAME_B_LARGKN         ≠ …nside bottom margin bElow last widget 
 *   "*   WCROLL_FRAMEO6H_MQRGAN(       - Both hopizontal maRgyns
 *   SCROLL_FAMG_2V_MARGIN     0  - Both vertical oargins
 */	










-

/*
 *   BUTTONS
 *
 *
 *  †Create two b5ttons in a small fÔrm.  The button on$the left is a
 *   lefauht button.  Use "half"0sizE buttons.
 *
 *      ui_button_create * formOid, "callback",   `          @
 *             "           BUTTOF_HALF_X_LOC1<               D
 *       (                 y_loc,        $         0         @ç
 *       0              "  BUTTON_WID_HALF,            (     @
 *                         0.0, "Left Button",     "         @
 *          `              TRUE, TBUE ) 
 *-
 *      y_loc = y_loc + BUTTON_Y^OFFSET
 *
 *      ui_bqttmn_creatE ( form_id, *callback",     !        @
 *         0  `            BUTToN_HALF_X_LOC2,               @
 *                         y_loc,       $          †         @ç *     (                   BUTTON]WID_HALF,                  @
 *               †     `   0.0 "Right Butpon"¨             (@
 *   0      †          $   TR’E, FALWE ) 
 *
 *      y_loc = y_loc + BUTtOF_Y_OFFSET +`       0         ! @
 *         0            BUTTON_HGU +            `          ` P
 *         (           INTE“WWIDGET_SPACU
 *
 *
 
   Button Widths ald Heights:
 *
 *†  BUTTo^_WIF_FULL               - Width /f a uide button of a small borm
 *   BUTTON_WID_ALF               - ◊idth oF a medium button on ` smald fnrm
 *   BUTTON]WID_HISD             0- Wadth of a small button on a rmall forÌ *
 *   BUTTON_WIL_FULT_NT $         $- Width of a non_troughed wide butTOl on ™              " !            0     a smaLl form
 *  `BUTTœL_WIF_HALF_NT       *0   - Width of a non_trou'hed medium button on
 Í  ! $ !                        !   a cmall ggrm
 *   BUTON_WID_THIRD_NT           - Width of$a non_troughed sm#ll button on
 *"        !                    0    a smal| form
 *
 *   BUTTON_HGT                    - Button`heigjt
 *   BUTTON_DEFAULT_HGT            -"DeÊault button hei'ht$(inomqdes top and
 *               (     $$            bottom borders)
 *   BUTTON_HGTNT                 - Buttoj heIght of non_troughed buttÔn *
 *   BUTTNN_DEFaULT_RORDER_WID    `- De&ault buttgn border wilth
 *0  BUTTON_DEVAULT_BORDER_HGt     - Defaumt button `oÚder heighÙ
0*
 *
 *   Bu¥ton Location Offsets:
 

 *   BUTTON_IN_FRAME_X_OFFSET$     -$X offset for plqcing buttons inside
 *         0        (                frames using the X Positions defined
 *                                   below
 *
 *   BUTTON_1XTRA_WID     †        - X width for one trough foz user`plccement
 *                             (     of tpoughed buttons>
 *  !BUTTON_2XTRA_WID              -†X width fop two(troughs for user placemeot
 *                                 † of troughed buttons.
 *
 *   BUTTON_Y_OFFSET     (         - Y offset for plaaing i non-highliG(ted 
 *             $            !        button next to a highlighte  button
 *`  BUTTONﬂY_OFFSET_NT 0      "   ≠ Y offset for phacang a non-hi'hlighted 
 *                a                  buÙton next to a highlighted button
†*
 *   BUTTON_LABEL_Y_OFFSET         - Y offset for placing a label vo the right
 *                                 " of a futton-
 *   BUTTON_dEFAULT_LAbEL_Y__FFWET - Y offset for placing a label to the rig`t 
 * 0           0          (     $    of ! ‰dfault Button
 *   BUTTON_NABEL_Y_ONDSET_nT      - Y offset for placing a |abel tO the right
 *   `               $               of a non_tÚoughed bupvon
 *
 *
 *   Button X Positions:
 *
 *   BUTTON_FULL_X_DOC1  0       ` - Wide button gn the lef|
 *   BUTTON_HALF_X_LOC1            - Medium button on the left
 *   BUTToN_HALF_X_LOC2    0       - Medktm butpon on the right *   BUTTNN_THIRD_X_LOC1       †   , Smalh button on the laft
 *   B]TTONTHIRD_X_LOC2  0        ≠ Small bıtpon centered
 *   BUTON_THIRD_X_LOC3           - Small button on the right *
 *   BUTTON_NULL_X_LOC1_COL2       - Wide rutton on the lefu g column 2
 *   BUTTON_HALF_XLOC1_BOL2       - Medium button on the!left of$cOlumn :
 *   BUTTON_HALF_x_LOC2_COL2 (     - Medium button on the right of cÔluen 2
 *   ¬UTTON_THIRD^X_LOC1_CGL2      ) Small button on t(e lmft of column 2
 *   BUTTON_THIRD_X_\OC2_COL2      -†Small"button cejtgred of column 2
 *   BUTTON_THIRD_X_LOC3[COL3  $ ` - Small butÙon on the right of column 2
 *
 * 0 BUTTON_∆LL_X_LOS1_COL7 $   0 - Wide button on the le&t of cÔlumn 3
 *   bUTTON_HQLF_X_LOC1_COL3`      - Medium!button on the left of column 3
 *   BUTTON_HALF_X_LOC2_COL3       - Me‰hum buttOn on the$right of column 3
 *   BUTTON_PHIRD_XWLOC1_COL3      - Small button on the lebt of column 3
 * ( BUTTON_THIRD_X_LOC2_COL3      - Small button centered of solumn 3
 *  `BETTON_THIRD_X_LOC3_COL3      - Small `utton on the right of columo 3
 *
 *   BUTTON_FULL_XLOC1_SPL †      - Wide buttÔn centered!on a speCial fobm
 *   BUTTON_HALF_X_LOC1_SPL       †- Mediui buttÔn on the lefv Ôf a special form
 *   BU‘UMN_@ALF_X_»OC2_SPL        - MedÈqm butto~ On the right of(a spucial form
 *   FUTTON_THIRD_X_LOC1_SPL       - S}ail button oÓ dhe0left of a special forl
 *   BUTTON_THYRD_X_LOC2_SPL 0     - Small button centered of ! special†form
 *0  BUTTON_THIBD_X_LOB3_SPL     " - Small f}tton o. the right mf e spec)al form
 "-
 *   BUTTON_fULL_X_L_C_CEN   ( $   - Centered wide button on a small form
 *   BUTTOF_HALF_X_LOC_CEN       $ - entered medium†button(/n a small form
 *   BUTTON_THIZD_X_LOA_CEN        - Centared small butto. oj`a smalÏ form
 

 *   BUtTOŒ_FULL^X_LOC_CEN_MED     - CÂntere` wide button mn a medium form 
 *  `BUTON_HALF_X_LOC_CeN_MED  "  - Centered medium button on a medium form 
 *   BUTPON_ThIVD_X_LOB_CEN_MED    - Centered small!button on a mediue foÚm 
 *$*   BUTTN_FULL_X_LOC_CeN_LRG"    - Centered wide button on a large form 
 *   BUTUON_HALF_X_LOC_CEN_LRF 0   = Sentevud medium bu4ton on a l!rge for}  *   BUTTN_THIRDX_LOC_CEN_LRG†   - Centered rmall button on a larÁe norm 
 *
 *   BUTTON_FULL_X_LOC_CEN_SPL  ($ - entered wide button on A special fori 
 *   BUTTON_HALF_X_LOC_CEN_SPL †   - Centered medium button on a qecial"form 
 *$  BUTTON_THIRD_X_LOC_CEN_SPD 0  - Cuntered0smal¨ buttkn on a speciah form 
 */-





*












/*
 *   DATABOXE”
 *
 +
 *   Creade a framed databox with a labeÏ above(the databox.  Then
 *   com`ute the Y locitil for the nexd widget inside thE frame.
 ** *      y_frame_loc = FRAME_T_IARGIN
 *
 * ( $  ui_`etabox_areate ( frame_id, "",  `                 @
†*!    0  † (         (0    FRAME_D_MARGH,    (   $         @
 *                        ` y_frame_lo„, 0.0,              0 D
 * 0                        DBOX_WID_SINGLE,    !            @	
 *                          2Databox Label", value,          @
 *                        $ TZUE, datatype, num_vals )
 *
 *      y_frame_loc = I_frame_loc +              (       "  ¢@
 *          `         DBOX_HWTWLABOVE +                   " 0@
 *               `    INTER_WIDGET_SPACM
 *           †          
"*
 *   Cbeate a framed databox wkth a labe, to the side.  Use tHe 
 *   default labul length!for a single column Databox anl compuve
 *   the databox width.
 *
 *      y_fraoe_lo„ = FRCME_T_MARGIN
 *
 *      wmd = DBOX_WID_SINGLE -                " (        0 @
 *            DBOX_LABEl_LEn_SIFGLE
 *   ä *   
 *    $ ui_databoz_create ( frame_id, #",                    @
 *                          FRAME_L_MARGIŒ,             $    @
 *       $             `    y_&rameOloc,† †                 `@
 *             `            DBOX_LAEL_LEN_SINGLE,      `    @
 * "  $              "      wid,       `                     A
 *              "           "Databox Label", value,          @
 *         `                FALWE, datatype,`nım_valq )
 *
 *
 *  !Databox Width and Height:
 *
 j   DBOX_WID_SINGLE        - Widvh of a single width dctabox   
 *   TBOX_WYD_SPECIAL (     - Width of a special Widti datajmx   
 *   DBOX_WID_DOUBLE        - Width of a double widtË data`ox   
 *   D@OX_WID_TRIPLE        - Width Of a triple width databox   
 *
 *   @BOX_HGT_LABOVD        - Height of ! d·tabox with a label o~ the Ùop
 * (                          (even if the label is blank(
 *   DBOX_HGT_NO_LABOVE  (  - Heighd of a databox with · label to the side
 *
 *   DBOX_LBEL_LEN_INGLE  - Default label length for a single w)dth dgtabox
 *            0               (used when "label_above" is Êalse)ç
 *   DBOX_LABEL_LENWSPEBIAL - Default label lEngtx fmr a Cpecial width databox
†*   DBOX_LABEL_LEN_EOUBLE  - Defau,t(label lang|h vor a doubld width databoxJ *   DBOX_LIBEL_LEN_TRIPLE  - Default label lengti for a triple widt, davabox *
 *   DBOx_LEBEL_X_OFFSET   (-0REMOVED
 *   TBOX_LABEL^I_OFFSET    - Y offset fÔr plAcÈng a label to the right of
 *                            a databox witb "labelabove"4galse.
 */

ç



/*	
 *   FILES
 *
 *
 *   Create ` form centered under the m·in menu t`at has a"file
 *   widget inside the$a frame.  The fale wi`get is placed at
 *   ( 0.0, 0.0 ) insade tha fraMe (a top marghn is not needed)&
0*   The leight oF†the fIle wiDget includes a botÙom margin
 *   and |husefore can be used as the height of tle frame that
 *   contains the file id'et.  The file widget has 5 lines i. 
 *   the liqt boxer.
 *
 *      Êormhgt = FINE_5LWHGT + FORM_2__MARGIN + FRIME_2EDGE
 * $    x_loc = WINDOW_CEN_X_LOC - 0.% * (`wid + FO[M_:H_BORDER )
 *      y_loc = WINDOW_CEN_Y_LOC - 0.5 * ( fosm_hgt + FORM_2V_BORDER )
!*
 * †    form_id =!ui_form_create( "", x_loc, y_l/c, "UM",    @
 *                                wid, form_hgt,             @ *                                Form Labe>#, "& )
 .
 *      frame_id 9 ui_frame_craate( form_id, "",`(           @
 j                    1             FORM_L_MARGIN, !        †@
 *     0          †    (  Ä         FORM_T_MARGIN,           @
 "                             0    FRAME_WID_SPECIAL,    "0 @
 *       "      !            †      FILE_5L_HGT, "" )
 *
 *      file_id = ui_file_create( frame]i$, "",              @
 * (   ` !        $ $            00.0 0.0,0               " @
 * "                  ( 0       ` fILE_WID_SPECIAL, 5,       @
 *                        †       "Falter L·bel",   !      ( @
 *                "       0       "Filter Mewk",    0 †      @
 *                                "Fyles"LabeL",             @
 *   1                 `          "Directory Label"&     †   @
 *  "           !         "   !   "Files Label",          (  @
 *  ` "   (              $        "Selection Lqbel",         @
 *  ` $      !   "           (    "DefAult Selection",     ` @
 *                                "lefp Button$Label"$       @	
 *                                "Righp Button!LabeÏ" )
 *
 *
 *   FinÂ Width:
 *
 *   FILE_WID_SINGLE†    - Width of a {mngl% widTh file widga|
 "  "FILEWID_SPECIAL    - Width(of a wpecial`width file widget
 *   FILE_WID_DOUBLM     -`Wilth of a do}bla width file widgetK *   FILE_WIDﬂTRIPLE     - Width of a triple vidth file wieget
0*
 *   File Height
 *ç
 *   FILe_1L_HGT      (  - Height of a 1 line file widge|
 *   FILE2L_HGT         -†Height of`a 2 Line file widgmt
 *   FIÃE_3LOHGT    "   - Height of0a 3 line file widget
 *   NILE_4L_H«T         / Height of a 4 lifd file idget
 *   FILE_5L_HGT         - Hemght of a 5 lioe file widgÂt
 *   FILE_6L_HGT         - Height of a 6 line file wiDget
 *   FILE_7L_HWT         - Height of a 7 line file widget
 *   FILE_8L_HGT $       - Height of a 8 line file widget
 *   FILE_9L_HGT         , IEighv of a 9 line file widgut
 *   FILE_HGT_INCR       - Increment for making biggap file widguts
 */

J

/*
 *   LABELS and INF_ IDENTSJ *
 *
 *   Create a libel4inside a(frame and 4Hen Compute the y locAtion
 *   of the(next widget inside the frame.ç
 *
 *      y_frame_loc = FRAME_P_MERGI^
 *
 *    ` uilabel_create ( framm_id, "".                  !   @
 *            †           FRAMEﬂL_MARGIN,  †                 @
 *                        y_fr`me_loc,                       @
 *               †        "A Label" )
 *
 *      y_frame_LoC = yfra}e_loc +         `!      `        @
 *                  † LABEL_HGT +             0        "  0  @
 *            `†      INTER_WIDGET_SPCCE
 ** *
 *   Label Height:
 *
 *   LABEL_HGT        - Height`of · labml
 * † LAEL_[_OFFSET   - Y offset of lara|
 *   LABEH_HGT_VIGHT  - Height of a label when showing®multiple
 *  0   (!              labEls
 *
 *   INFO_INDENT      - X location ob information label
 *   …NFO_iNTENT_COL1 - X Location of infnrmation label in column 1
`*   INFO_INDENT_COL2 - X lcatio. of inform`tin label in column 2
 *   INFO_INDENT_COL3 - X loc·tion of informatiof label in$column 3
 */




/*
 *   LISTBOXES
 *
 *
 *   Create a framed three mina"listbox with a labe, above†|he histbox.  Note
 *   that0thg widths and heights include the verdical qnd hozizontal slidErs.
 *
 *      y_frame_loc = FRAMD]T_MARGIN
 *
 *      ui_listbox_creEte ( fraMeWid, "callback",            `
 *          !               FRAME_L_M¡RGIN,                  @	
 *                      †   y_frame_l/c,†  !         !    ( `@
 ™      (              `    LBOX_WID_SIFGLE,         (       @
 *       &                  3, "Lkstbox Label",  0           @- *                          selectiOn_type, sort_nlag )å
 *
 *      y_frame_loc = y_frame_loc +       !                  @
 *         (†( (      L¬OX_3L_XGT_LABOTE +          (        D
 * $                  INTER_WIDGET_SPACE
 *
 *
 *   To determi|e the hmight for a six line listbox, add the variable
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
 *   TBOX_3L_HGT_LABOVE      - Height of a 3 line textbox with a top label *   TBOX_4LOHGT_LABOV`     - Heighu of a 4 Ïine textbox ˜ith a tnp labmL
 *   TBOX_5L_HGT_lABOVE      - Height of ! 5 line textbox with a pop labdl
 *J *   TBOX_HGT_LABOVE_INCR `  - Increment for computifg a textbox hemght`tlat
 * †    0       " !   0    (   has mÔre than 5 lines in`it
0*
 *   TBOX_1L_HGT_NO[LABOVU   - »uigË on a 1!line taxtbox with .m0label
 ¢†   "  )$        $    @      (lqrel is blank)
 (   TBOX_2L_HGD_JO_LABOVE   - Leicht gf a 2 lmne textbox wipl no label
 *   TBOÿ_3L_XGTNO_LQBOVe   - Height gf a`3$line textbox"wyth no labgl
 *  !TBOX_4M_GT_NODCBOFE   % HaIght of a ¥ line!texvbo8 wit( no label
 * $ TBOP5L_HGV_NOLABOVE   -%Height0kf a 5 life0textbox vith no label *ç
 *   PbO\_HGT_NO_LQBOVE_INCR - Increiunt for compuTing a textbo| height that
 *       $                    `has ere t`an 5 lines in iT
 */

J


/*
 .   TOGGLESä *
 *
 *   rEatm a toggÏe†inside a frame qnd then comrute |hm y location
 *   of the next widgut iN The gzamu.
 *
 *$    $Y_frameOloc$= FBAOE_T_MAVGIN
 *
 *   †  ui_toggle_create ( nrame_i‰® "cal|b!c+",      1   †  A
 *       †     "           F“AE_L_MARGIN,   `               H
 *          a            " 9_frame_loc,    $           "  0  @
 * ` †           "         "TGggle(Labeh" )
 *
 *      y_fsame_lo„ ="y_fsame_loc +                         "@
 *†      !   $        TOGGLEﬂHGT # %     $              "   $@
 *0   ( !             INTER_WIDGET_SPACE *
 *
 *   TÔggle Height:
0"
 *   DOGGLE_HGT       - Height of a toggle
 *   TOGGLE_Y_GFFQET  - Y offset for phacing a laba, to the"side
 *          "          !of a toggLeJ */



/*
 *   LANGUAGE
 *
 *
 *   Language vari!bles2
0*ä *   U^GLIsH  ` ( - "EnFlish"
 *   GERMAN       - "Garman¢
 :   SPANISH   1  - "spanisË" *   FRENCH       - ¢Frunch"
 *   À@NNI   †    - "Kanji"
 *-
 *   LANGUAGE     -!Current danguqge (see above)
 * 0 HANDEDNESS  4- DeterÌInes whether fkrmS"appear on riGhp oÊ left {ide
 *     †           †of screen
 */




/

 *   SCSEEN
 *
 *-
 *   Screen v!siables:E
 *
 * 0 TIXGL_WID$  - Width`of a pixel ,in inches)
 "   PIXEL_HGT!  - Height of · pixel0(in incxes)
 * *   SCREEn_WID  - Wiedh of logical screen (in`inches)
 *   SCREEO_»GT  - Ieight of logical screen((in )ncxes)
 */




/*
 * † BASIC LAYUT
 *
 *
 *   Casib n`yout variibnes:
0" *   MAIN_MENU_XGC    !     - Main menu X nocation
 *   MAIN_MENU_Y_LOC          - MaIn menu Y location-
 *   MAIN_MENU_WID         `  - MaiN mEne width-
 *   MQIN_MNUHGT         !$ - Main menu xeight
 *   MAIN_MENU_H_EDGE"      ( - \ebt edge of main munu (incl border)
 +!  MAIN_MENU_R_EDGE         - Right edge of`eaÈn men5((incl border)
 * ( MAIN_MENU_T_EDGE        0- Top$edge of main menu (incl bor‰es)
 *   MAIN_MA^U_B_EDGE †  †    - B}ttom ddge of }ain menu (ifcl border) *   MAIN_mENU_[QITCI_Y_LMC 0 - Sitch  location
 :   MAIN_MEŒU_ISON_Y_LOC     m YcoÓ Ydmocation *   MAIN_MEN]_ICON_H«T`  `  "- Mail Manu$Ico. Height
 *   MAIN_mMNG_HCON_WID       - Oain`Menu0Ico~`Width
 *   MAIN_MENU_LOO_ICON_WID  - Iain Lenu Logo Icon WidÙh
≤*   MAYN_MENU_IEART_iCON_WID -$Eain!Menu Xeardbeat†I„on idth
 *`  M@IN_MENU_HEAVT_ICON_HGT - Main MÂnu XeaR|beat Icon Hekclp
 *   MAIN_MENU_MARGIN     (( $- Main meNu sviTch largin
 *   MAIN_MEN_ICMN_MAR«IN    - MaÈn menu margin between icons
((  dMAIN_MENU_HEART_MABGIL   - Mai. menu margi.0bEtween last icon and
 *                           $  hearÙbeat icn
 *  #MAIN_MENU_HEAST_X_LOC    - Heartbea| icon H location
 *   MAMN_MDNU_HEART_Y_lOC    - Heavtbeat†icoo Y locctimn
 *
 *   COMMANDUIN@OW_X_LOC     - C/mmand$wÈfDow X"|ocation	
 *   COMMAJd_WIDOW_Y_LOC     , CommanD 7kndow (locetion
 *   COMMA^D_WINDOW_WID       - Soimant windkw w)dthç
†*   COMMANLWINDOW_HG‘`0     - Commind window height
 (   COMmAND_WInD_G_Nu]_RWS  -`number of history rows in the colmAnd sineow
 *   COMMND_WINDGU_N_EDGE    -0Left edge of†command wildow (incl"border)
 *" "CMMMAN_WILDOW_R_EDGE    - Right edGe od command window†(incl borderi
 *   COMMAND_WINDOWOT_EeGE    - Top edge Od commaÓd window )hncl bortez-
 *   AOMMAND_WINOW_B_AdGE    - Bottom edge!of comman$ ˜indow (incl boreep)-
`*
 .   GRAPHICS_WINDOW_X_LOC    - Grapjics windkw X locationM
 *   GRAHICS_WINDOW_Y_LOC    - Graphics window Y location
 +  "GRAPHICS_WINDMW_WID      - GbaphicÛ indow width
 *   GRAPHICS_WINDOW_HGT      - Grathi„s windnw heighÙ
 *   gRA@HICS_WINDOW]L_eDGE  (- Left2edge of graphhcs wiN$ow (ancl`bordeb)* *   GRAXHICS_WYNDOW_V_EDGE   - Right edve of gRaphics wÈn$ow0(incl bordez)
 *   «RIPHI_WINDOW_T_EDGE   - Top ddge0of Graphics0wyndow (inbl bor‰qri
 *   GRAPICS_GINDOW_B_EDE   - Bot4om edge of gscphics winlow (incl bordev)
$*
 *   SHOW_SPrECDSHEET_NUM_ROWS - NuebeÚ!f rOWs iN the sjow spreafsheet widoet
!*	
 *   GRAPHMC[_WINDOW_WIF_QR  - Quarter whdth grapËics wintow
 *   GrQPHHCS^WINDOWWHET_QTR  - Querter$widvh graphics wiodow
 *
 *`! GREPHICS_wINDOW_X_LOC_UL - Quarter size graxhias window upper left(x los
 *"  GRAPHICS_UINDOW_Y_LOC_UL - Quaruer0size graphics window utpEr lef| Y loc
 * $ GRAPHICS_WInDOW_X_LOB_U“ - Quarter size gbaphics winDow upper right0X ,oc
 *"  GRIPH…CS_WINDOW_Y_LOCWUR - Quarter si~e fraphics windkw upper right Y loc
 *   GRAPHICS_WINFOW_H_LOA_LL - Qtarter$size graphacs window hower left X lok
 *   GAPHICS_WINDMW_Y_LC_LD - Quartez size gr·phics ˜yÓdmw†lÔwer ,uft Y loc
 *   GRAPHISS_WIFDO__X_LOK_LR - Quarter(size graphics window lower rifht X loc
 * † GRAPJICS_WINDO_Y_LO√[MÚ"- Quarter size graphicw uindow lower rmght Y loc
 *
 *   GRAPHICS_CeN_X^LOC       - Center of g2aphics0area X Location
 *   GRAPHKCS_CEN_Y_LOC        Center og graphics apea Y locqtion
 *
 *  $WINDOWOCEN_X_LOC (  `    m Center of arua benuath m1in menu X doc·4kon *  †WKN‰OW_SEN[Y_LOC   "!    - Center$of area benEath main meou Y locationÖ
 *
 *   MAIF_MENU_SUITCH_COLS    - tmber"of(c/lumns for mamn menu switchM
!*
 * a ENABNEMAIŒ_MENU_SWMTCH  - Hidden code†To aÓable the mcÈn menu"switch
 *  †          † $         !    wi4ho5t lavinc to opej a database
 */
*

*

J

ç

'.(†OLD APPFORMS VARIAB\ES **(***"****NEW V¡RIABLE FAMDS*:******j*******:
 */
M

/*
0*` Appliaation Pqfels *.*/:#define ApP_DBOX_WID 1.85*/


/*
 
 "Selection0Framus
 */

/*
 *  Data Box
 :/

/*
 *  List boxà */


/*
 *  Objeat Ment
 ./
ç
/*
†*$ Option Ment
 */

	

/.ä"*" Keyword areaç
 *,


/(
 *0 Full0Width Frales */

/*
!* 0Switch Framas
 (Ø

/*
 *  ButtonÛ
 */

/+
 *" Full Width 3lidGbars
$*/




/* $Lea$er: /banff/vbs/Det.X700/#Ca3e/l1-src_±/./lr/include/RCS/lpen}ms.p,v 1.1 91/05/29 15:58:43 deiner Exp $ */
/*†Evaluation m%thods for LpEval */

/* Sublisttype filters for LpSuclistType */



/* note:
 * iF the mask orddr is disttrbed, txe cus|omer
 *Ä must recompile afy custom pcd to pLb.
 *  conblusion: ·dd jew mAsk bits to"thE end.
(* these c}ostanvs are used by fortran ant
 *  may onli be Expressed as fecimql numbers.
"*/




/* Attribute names for LpSublistAttrib5teGet0*/

/* ata vormats fob LpCOERCE */
/* FORTRAN hnparface help0™/



§ Start

ç
SHASS$APaneÏSuressExtract
clasqwide wydget frm_m`inform,opt_acti}n,opt_objegt,opt_metjod,lbox_loAdkng, btnoptigl, objmot_item(4), @
sfRa_coord_trans,qdbox_coord_vrajs<fra_parmdboxKsigf,`bo¯_cormgn,dbox_bc1,dbox_bc, @
frc_wltelm, sdbox[ele, fra_appsegion, opÙ_cOord^trans, dbox_s`anl dbkx_sPace


classi`e integer ids
classwkdÂ real r_siff(VIRTWAL)r_tk(VIRTUAL),rOqpen)VIRTUaL), r_space(VIRTUAL),r_bc2(V	RTUA+
classwhde suring$s_emm_grp[252](VIRTUAL)-s_bc1[60(VIRUAL),s_coovd_id[12]

/+ ===================-==============Ω========
             Inipial fUOCTION-
   =-=======Ω-=============<=================- */




$ Start
	DUNCTIGN init	)
	real ylos_iain.ylcc_tabÌ,}lok_appregion,FR¡_APPRGM_HGT
-

	)id3=0

		/* =========-=-============ main form =====Ω=========-================== */

ç
		Êrm_mainform=ui_fosm_create(#form",@
								?* x"lOcatinn†*/ uie_form_si:es.foÚm_x_,oc( 1 )$, @
								/* y lobation`(. til_f/smWsizgc*fozi_y_lOc( 1 ),"ul", @J					/* width     $*/ uil_Ê/rm_sizesform_wiD® 1 ), @		I	â		/* hei'ht     */ uil_form_smzes.fOrm_lGt( 1 ), @
									/* label  !   */ "APanelStressExtract","b)J	
		/* =========5= act©on, Ob*ect, muÙhOd -!option menu ===========<====9?}== */
	opt_acpion=ui_optioNmenu_create(/* arenu$      */ frm_m·inform, @
â								.* c!llback     *' "Action_cb"-"@
									/* x            */ uil_form_sizes.aom_menu(!1 ), @
	)		I			/* y            */ ual_normﬂs)zes.aom_oenu  3 ), @
I									/*§label lengt` */ uilWform_sizus.aom_menu( 6 ), @
										/* label (      */ "A„tion;b, @
										/* $            */ valre)


				ui_i4em]CReate(opt_action,"CREATE","C3Âave",true)ç
		
		oPt_objgct=ui_optiOÓmenu_create(frm_mainfovl,"",@
													uil_foro_Ûazes&agm_Ment( 1 ), @
												uil_form_3Îzes.aom_menu( 4 ), @
													uil_v/rmOsIzes.aomﬂmenu( 2 )& @
												"Objegt:", D
												 FALSA)

		 obje„t_itgm(1)=uiOitei_create(opt_object,"MP","Multi @aneL",FALSE)

-
	©$	ui_wid_set(objeb4_itemh19,"≈NABLE",FELSE)


		optWmethod=ui_option-anu_create(brm_maingorm,"",		A
								 uih_form_si~es.ao-_menu( 1 !,		@
	I							 uil]form_sizes.aom_munu® 1 i,			@
				)	 eyl_form_sizes.em_m%nu( 2 )¨	@
								 "Method:",				@*								 falSe)


		 umitem_krEaÙe*ott_mevhod,"BPSTRESS", "Beckli~g Panel Sdress"l vrue)
				 tiitem_c2eate(op|_method,"MEANSTRECS", "Mean Stress", true)-

J		yloc_}!in = uilgorm_sizes.aom]menu( 5 - ´0Uil_fmrm_sizes.optionmenu_data( 3 + + uil_foro_sizes.3pacing( 8 )

		ui]reparator_create,/* patrent  +/ frL_maijform, @
			I			/* callback */ "",@
		)				/*!x   `   $*/ 0¨ D
							'* y ( !    */ yloc_-amn, @
						/* wydth    */ uyl_fopm_sizes.form_wit( 1 ©,(@
										true)


		/* ========}======== configuration button(====}============}===55==== */


)	˘loc_main += wil_foRm_sizasÆspacing( 8 )
≠

		opt_c/ord_trans=ti_optiolmenu_creape*frm]mainform,bcoo2l_tpanÛ_cb",		@
											uil_form_size{.aoe_mene( 5 ),		@
		)							ymoc_main,			@
								I	uil_gorm_sizes.aOm_meÓu( r ),	@	â									"Cogopd)natÂ vansformatmon",	
		@
										trıe)


				ui_item_create(opt_coordvrans,"CID","CID",true)
			ui_mtem_create(opt_cogrd_trens,"PCID","Projected CI",truE)
			ui_item_create(opt_coOrd_trans,"GROAL","GrObaÏ",tpwE)
			ui_item_creaue(opt_ckorD_trans,DEFAULT","Dedaudt",true)
-
		yloc_iain += uil_form_sizds.optaonmenu_dita($2`) + uil_form_sizeS.Spacing( 3 )

		sf:a_coord_trans=ui_selectframe_creatm(Frm_mainform, @
										 "", Aä										 uil_form_sizec.selftame_mArgin* 5 ), @
		)								 yloc_mamn, PJ					)				 uil_form_sizes.se|fraÌe_wid((1 ), @
									"uidﬂform_siz%s.selframe_hÁth 1, 1 ),†@ä			)						‡"", D
)				I	â		 false)

		{dbox_coord_trans= ui_se|ectdatebox_creade(sfra_coord_tzans,†@											"". @	â				â					5il_fnrm_sizes.selfra-e^margÈn(`1 ), D
												uil_fmrM[sizes.SelFrameOmargin  ), ¿
			I									uil^form_{izes.cdbox_da|a( !0), ¿													uil_form_sizes.sdbox_wid 1 ), @
		â	I							"Select†CooRdinate Frameb,@
													"", @
												true, @
		)									"", @
											"" )


		uiﬂwid_set (sfra_koord_traÓs( "VISaBLE"$ FALSE)

ç
		ylocﬂmqin`+=(til_form_sizes.selframeHct, 1, 1 ) + uil_form_sizec.smlframe_margin( 3 ) + uilﬂ&orm_sizes.spacino( 3 )


		lbox[loadinGΩui_li3tbox_create*frm_mainform,"", @
		)					 eil_form_rizes.Êrame_marÁin( 1 	, ¿
									 yloCWmain, @
									 uil]form_{izes.lbox_wid( 1 ),@
	)						 5(0@ä							 "Lo`$ing GondÈtio~", @
									 2extend", @
									 trte)

		y|ocmain += uil_form_rizew.lbox_hgt( 5<"1 )†+ uil_fopm_sizgs.{pacing( 3 
		
	fra_parm=ui[frame_create(fro_mainform,#","@
								 uil_for}_sizes.framemargin)  ), P
								 ylocmain,":						 uilfrm_smres.frama_wid( 1 -+.±, @
					)		 UiÏ_fo2m_sizes.ÊraÌe_margil((7 )+uil_form_sizes.‰box_hgt( 2 )*∑+uil_form_si{e.spacing( 3 )*4, D								 "&)

J		yl„Wparm = uml_formWsiZ%s.brame_mirgin( 3 )

		d"ox_skÁf=ui_databox_create(/* parmnt    0 0*? fra]pabm, @
									/* calÏback     ./ "", @
	)						/* x location   */ uil_norm_si:es.,rame_margin( 1 )l @JH								/* i logation $(*/ yloc_parm,@
				â		/* label length */ 1.24, @-
							Ø*$box lelgth   */ uil_form_sizes.dbox_wid( 1 )/4,!B					â		/*†lacel $       / "Yield qtress", @
								-* DGFAULD valQe*/ 215&0, @
									I			 fclse,"READ",1)
												)
		qloc_p`Rm†= uyl_forl_cizesdbop_hgt( 2 )+uil_fom_sizes.wpacing  3 )


			 dbox_spcn=ua_databox[create("@
			/:    parent$  †*/ fra_xarm, @
			.*   callBack   */ "", @			/*     0 x  "   */ uil_form_sizeqÆfobM_marÁih( 1†), @
			/™  $    } "    */ ylo#[pa2m, @	/* labeÏ_length */ 1&25, @
			/* (bÔx_lejgth 8*/!uil_form_sizeQ.dboxwid( 5 )/3, @			/*     label    */ "SPAN (MO)", @
H	(/
     value    *o 0.. @
			/*  labe|_above *+ FASE- @
			/*   datAÙhpe   */†#REL"¨ @
			/*  !num_tals   */(1-


			 yloc_p`re k= uil_form_qi~es.dbox_hgT8 2!) +1uil_frm_sazes.sracing( 3 )
â	
			 dbox_space=ui_`avabox_create( @			/*    pareÓt    
/!fra?parm, @
	I	'*   caÓl"aco  (*/$"", @
			/*       h    !!:/ uil_fobm_cizes.form_margiN( 1 ), @
			/*`      y    0 */ yloc_parm, @
			/* lAbel_length 2/ 1.25, @
			-*  coxlength  */ ui|_form_sizes.dboxwid( 1 )/£, @
			/*    !labÁn  0 */!"SpQCE (]M)", @
		/*     vamue  "!*o 0>, @
		/*  label_above *?†FALSE, @
			/*  (dadatyRe   */ "REAL", @
			/* † num_vans   *. 3)


		ylmc_eain +=(uid_form_sizes.f2aÌe_margin( 3 ) + uil_foro_sizıs.dbox_hGth 2 )*7 + uil_form_sijes*wpacIlg( 3 )*t + uil_form_sizEs.spacing( 8 )M

*		/* ======Ω====== se,ect`frame FOR elelent seluc4†jox`}========}=============;======Ω= */

		FRA_APPRGŒ_HGT=uil_form_sizes.toggleda|a(`1 )/uil_f~rm_sizes.selframe_`ot( 1, 1 )+uIl_formsizes.spacifg( 8`)*3+uil_vorm_sizds.bwtton_het(02 )


		fra_iqpregion=ui_fraee_creade(frm_mainform."", @
								 uil_form_sizerÆÊraMe_margin( 5 ) @
						 yloc_main, @
								&5il_form_smzes.frame_wi`( 1 )k0.1, A
								 FRA_APPRGN_HGT, @
								 "Applic`tion Regimn")


		/* =============-= ele-ent gro5p LIT ===-================--=====-=====}====-====}====-=$*/
	ynoc_appregion < uil_form_sizes.fraMe]margio( 30)


		fra_sdtell=ui_seleCtgvamÂ_araate*fra_appreomon,"ADF_#b", @
									 eilForm_siZes.selframÂ_m·rgin( 5 ), @
								 ylok_appregion, @
										 uil_g/rm_sizes.selframe_gid( 1 ), @
									) 5il_form_sizes>sehframe[hgt(01, 1 ), @
									 "Autm Execute", @
									 false)


		Ûdbox_elm= ui{eLectdatabox_create(bra_slÙehm,"", @
								â†uil_for}_si{es.Û%lframe_margin( 1 ), P
									 0, @
									 uil_dormﬂsyzes.sdbox^Deta(!1 ), @M
										 5il_form_size”.stbox_wid( 9 ), @
									 "Seluct UlemeÓt†Gsup",@
										 ""¨true, @
										 "elem2d#, "" )ç
J
		ylnc_apprggion += uil_fosm_siZes.toggle_lata* 1 ) + uil_fkrm_rizes.selframe_hgt( 1, 1 ) + uil_fkri_sizms.spAcing(‡x )


		/* ===Ω========-?- qdd & cance,†butpon ===================9==========?==-?======-===- */
	uiﬂbwttoÓ_create(fra_Appreg)on, @
					 ADD_cb¢, @
						 uiL_form_sizes.futton_xOloc1((2 )-8@						0ylog_appregion, @
						 uil_norm_sire3.bttton_wkd($2 ), R		(		 uilform_sizes*button_hgt( 2 ), `
					 "Add",!@
	â				 true,fal{e)

ä	uiObutton_crgate(Êbe_appregion,&reoove_cb"((@ç
			I		)		 ui|_form_sazeq.button_x_loC1( 3 ), @
							)	 yloc]apxrecion, @*I							 uil_form_sizgs.b}tton_wid( 20©, @
	â			IK		 uil_form_Sizas.butt/n_jgt( 2 ), @
									$"“emve",!@								 tr}e,false)		$ selected elelent group


		yloc_mcmn +5 uil_form_;izer.togcle_daa( 3!	+FRA_ATPRGN_HGT+ui|_form_sizes.spacmng(†8 i


		ui_buÙton_crea4e)vpm_m·)nfkrm,"APPLY_CB", @								 uil_fˆ}_sizes.buttoÏ_x_loc(  ), @ä								 yloc_mako$ @
	)							 umL_form_sizEs.butto._wcd( 2 )< @
									 uil_form_sizes.buuton_hgt( 2`), @
									 "Applx , @
			)			) drua,false)


		ui_button_creatE(fbm_maindorm,*CALCEL_CB", @
								 uiL_forM_sizes.button_x_lc1( 3 ),!A
									 yloc_main, @									 uil_form_sizes.button_wid  2 ), A
								 uil_form_skzes.button_hgt( 2 ), @-
									 "Cancel", @
									 true,false)

	Isys^allocate_array(r_sigf,1,1)
		sys_alloc#te_array(r_tk,1<1i
		sys^allocate_array(s_alm_grp,1,1)
		sys_allocatd_array(r_spao,1,1)
		sys_allocate_array(r_space,1,1)

J	END FUNCTION
	$ En‰


	$ Start
FUJCTION display()


		ui_&orm_display("APanmlStressExtract"-
		udf_load_resultcases(lbox_|oadi~g9
		
	END FUNCTION
	$ End-
ç

	$ Start
	FULCTION Action_cb(s_action_item)
	string s_actIon_itemY]
	Úeal SrEATE_Y_LOC, ZEAD_RES’LT_Y_LOC


	READ_RESULT_Y_LOC = uil_form_sizes.aom_menu( = ) + uil_form_sizesoptionmenu_dava( 3 ) + eil_form_sizes.sraciÓg( x ) * 2
	CREATE_Y_LOC = READ_RESULT_Y_LOC + uil_form_sizes.butto~_hgt( 2 ) + uil_form^sizes.spacing( 3 ) * 3 + ui,_form_si{es.optiofmenu_lata( 2 ) /†uil_form_sizes.selfrime_hgt( 0,)1 ) + uil_dorm_sizes.selframe_margin(3 )


				ui_wid_set(lbox_loadinÁ,"Y", CREATE_Y_LOC)
				ui_wid_set(btnWoqtion,"VISIBLE",TRUE)
				ui_wid_smt(opt_coordWtra.s,"VISIBLE",TRUE)
)			5i_wid_set(sfra_coord_trans,"ISIBLE",îRUE)
				ui_wid_set(fru_parm,bVISIBLE",TRUE-
			uh_wi‰_set(frA_appreginn,"VISIBLE",TRUE)
			ui_wid_set(object_ite}(4),"ENCBLE",TRUE)


	UND FUNCTION
	$ End


	$ St!rt
	FUNKTION`coord_trans_cb(s_item)
	STRING s_item[]


		SWITCH (s_)tem)


			CASE("CID")
				ui_sid_set (sfr·_coord_trans, "VISIBLE", TRUE)*			ua_wid_set (rdbo|_coord_trans, "DQTATYPE2, "FAME")
				*			CASE("PCID")
				ui_wid_set (sfra_coord_trans,†"VISIBME", TRUE)
				ui_wid_set ,sdbox_coord_trans, "DATATYPE", "AXIS")
			
			CASE("GROBAL")
				ui_7id_set (sfra_coord_trans, "VISIBLE", FALSE)
				
			CASE ("DEFAULT&)					ui_wid_set (sfra_coord_ÙraNs, "VISIBLE", FALSE)
						
		END SWITCH
O

	END FUN√TION
	$ End


	$ Start
	FUNCTION CANCEL_CB()


	 ids=0
	 ui_form_hide("APan%|Stre{sExtvact")


	END FUNCTION
	$$End
*
	§ Stazt
	FUNCTION ADD_cb()
	S\RING select_elm_list_item[1000]
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
Isys_allo#ate_array(s_rc_list,1,nrc)
	ui_wid_geu(lbmx_loadi.g,"value",s_rc_list)


	ui_7id_ggt(opt_coord_trans,"VALUE",opt_coord_item)
	ui_wid_get(sdb{x_coord_tranÛ,"vALUE"lsdbox_coord_)tem)


	$ Spart
	SWITCH (opt_coord_item)
CASE("CIT")
			s_coor`_md = sdbox_coord_item
		CASE("PCID")
			s_ioord_id = "Res" // Sdbox_coord_item
		DEFAULT
			s_coord_id = opt_coord_item
	END SWITCH
	$ End	
	text_write_string(fid< str_from_anteger(nsc))
	text_write_string(fid, str_from_integer(ids)9


	string optStrdss[virtual]
	ç	ui_wid_get_vstring(opt_met`od, r`lue", optStress)
	
	stbing la{er[5](2)
	ifteger idx


	$ Start	FOR(i = 1 TO hds+
		i_data(1) = i
		r_dcÙa(1)= r^sigf(i)
		r_eata(2)=!APanelStrmwsExtract.get_panelOthickness(s_elm_grp(i)!
		r_data)3)=r_span(i)
		r_data(4)=r_space(i)
		
		$ Qtart
		FOR(j = 1 to nrc)
	âs_lc_title=str_token(s_rc_list(j),",",19M
			
			s_sc_thtle=str_token(s_rc_list(j),",",2-
			
			udf_get_resultOid(s_lc_title. s_3c_title, ¢Rtress Tensoz*, "", i_resultOid)
					
			layer(1) = "At(Z1"
			layer(2) = "At Z2"


		r_shgx = 0
			r_sIgy = 0			r_tau = 0
		
	â
			if8optStress == "BPSTRESS") then
			$ Start
				forhidz=1 4o 2)
					i_result_md(5) = uff_get_layer_id(i_result_id, ,ayer(idx))
	)			r_sigx += APane,StressExtrast.get_bucklino_strers(kresuÏt_id,q_coord_id,"XX",s_elm_grp(m))
				r_sigq += APanelStressExtrcct.get_buckliog_s4ress(i_result_id,s_coord_id,"YY",s_elm_grp(i))		I	2_tau += AP·nelStressExt2act.get_buckhinÁ_stress(i_result_id,s_coore_id$"XY",s_elm_grp(i))
				end f/r
			else if(optStress == "MEANSTRESS") then
				for(idx=1 to 2)
					i_result_id(5) = u$f_get_layer_id(i_rewult_iD, layer(idx))
					r_sigy += APanelStrEssExtract.get_mean_stress(i_resul4_hd,s[coord_id,¢XX ,s_elm_grp(i))
				r_sigy += APanelStressExtract.get_mean_stress(i_result_id,s_coord_yd,"YY",s_elm_grp(i))
					r_tau +- aPanulStrdssExtract.get_mean_stress(i_resılt_ids_„oopd_id,"XY",s_elm_grp(i))
			enD for
			end if
			$ End
			
			2_s)gx = r_sigx/2			r_sigy!9 r_sigy/2
			r_tau = r_tau/2
			
			r_data(5) = r_sigx
			r_data(6) = r_sigy
)		Ú_da4a7) =r_tau	


			text_write(fid-"%I5%%7F12.3%",i_data,r_data,"")
		*		END FOR
		$ End
	eND FOR	$ End
	
	text_close(fi`,"")
	
	END FUNCTION
	$ End
	
	$ Start
	FUOCTIOJ get_panel_info(element_group,nd)

	string element_group[]
	inpeger 3tatus,id_element(v}rtuah),nid(4),n(1000.4),n1)1000,4),nd()
	int%ger num_Element,num_node,max_nnode,cnt,ccnt,icnt,iccnt




	num_element=fem_u_boqnt_id_list( q024- @
							 element_group, @
								 false, @
								(rtatus)


	 if(,ist_error_mqf(status,2,""))!then


		return status
	 end if


	 ifnum_%lemÂnt==0) then
		list_error_msg(48004006,2,"")
		return 48000004
	 end if


	qys_allocate_arsay(ad_element,1,num_element)

ç
	fem_u_get_id_list( 1024, @
					 element_group, @
				 num_element, A
				 true( @
	I			 id_mlement)


	for(cnt=1 to num_eldment)
	 db_get_elemﬂnodeq(id_eleient(cnt),Nu-_nodÂ,fid)


		if(max_nnode <(num_node) then
		 max_nnode=num_node
		 end if
		
		foR(ccnt=1 to†num_node)
		 n(cft,ccnti=nid(ccnt)		
		end vor


	end for


	for(cnt=1 po num_element)
	 for ccnt=1 to(nuo_node )
		 for(icntΩ1 to num_element)
			 for(iccnT=1 to num_node)			
				hf(cnt!=icnt && ccnt!=iccnt) then
	)			if(n(cnt,ccnt)==n(icnt,iccnt)) t`e~
					 n1(cnt,ccnt)=-1
						 n1(icnt,iccnT)=-1
					end if
				end if
			 end gor
		 end for
	 end for
	end for

	fOr(cnt=1 to num_element)
	 for(ccnt=1 tm(maxnnode )
		 if(n1(cnt,ccnt)!=-1) then
		 nd(ccnt)=n(cnt,ccnt)
		 end if
	 end0for
	end!for


	END FUNCTION
	$ End


	FUNC‘ION get_a_n_b(belm_nd,l,s)


	integes belÌ_nd()
	real a5,a2,b1,b2,side1,side2,lls,xy:1(3),xyz2(3),xyz3(3),xyz4(3)


	lb_geu]node(Belm_nd(1),xyz1)
db_get_node(bulm_n`(),xyz2)
	db_get[noda(felm_nd(3)åxyz3)
	db_get_node*belm_nD(¥),xyz4)


	if(lth_abw(xyz1(1)mxyz2(1))>=mth_abs(xy˙2(1)-xyz3(1))) thÂn


		a1=sqrt((8yz1(5)-xyz2(1))**2+(X{:1(3)-hYz2(s))+*2)
	b1=sqrt((xyz2(2)-xyz3(2))**2+(xyz2(3)-xyz3(3))**2)
		a29sqrt((xyz3(1)/xYz4(1))**2;(xyz3,3)-xyZ4(3))**2)
	b2=sqrt((xyz4(2)-xyz1(2))**2+(xyz4(3)-zyz1(3))**2)


	else
	a1qqrt((xyz1(2)-x}z2(2))**2+(xyz1(3)-xyz2(3))**2)
		`1=sqrt((xyz2(1)-xyz(1)!**2+(xyz2(3)-xyz;(39)**2)
		a2=sqrt((xyz2(2)-xyz4(2))**2+(xyz3(3)-xyz4(3))**2(
		b2=sqrt((xyz4(1)-xyz1(1))**2+(xyz4(3)-xyz1(3))*:2)


	end if


			
		siee1=(m|h_abs(a1)+mti_abs(a2))/2
		side2=(mth^abs(b1)+mthabs(b3È)/2
		
	Yif(side1>=side2) then
			l=si`e1
	I	s=side2
					elsE
			l=shde2
			s=syde1
		end if	



	END FUNCTION


	$ Start
	FUNCTION get_panel_thicknesq(eleoeft_group)


	string element_grou`[],chaÚacter_val[5]
	integer(Ótm_elementstatus-id_elmment(virt}al),yd_region(500),cÓt,maT_id,data_type, @-
			integer_val,coord_id,node_i`¨field_id
			
	real sum_thicj,mean_thick,thick(3)


	num_element=fem_uWcount]id_list( 1024, @
							 element_group, @
		)					 false, @
								 status)


	 if(list_error_-sg(status,2,"")) t(en


			re|urn statuS
	 end if

	 if(num_%lement==0) then
		list_erbor_Ìsg(48400004,2,""-
		return 48004004*	 end if


âsy{_allocate_array(id_elgment,1,num_element)


	fem_u_get_id_list( 1024, @
					 elemEnt_gvoup, @
					 num_elelent, @
					 true, @
		)		 id_element)



	
	?* ====  mean thicjness of selected e,ements ==== */


	‰b_get_region_for_elements(num_mlement,id_elemen4,id_region)


	 sum_thick=0


	for(cnt=1 to num_elemeot)
		e`_get_prop_value(id_region(cn4),36,mat_id,data_Ùype,integer_vaÏ,@
						0thicj,character_val,coord_id,node_id,field_id	

		sum_txick=sum_thick;thiak(1)


	end for


	mean_thick=sum_tjick/num_element




return meaÓ_vhick


	END0FUNCTION
$ End
	
	FUNCTIOn Áet_buckling_strers(vusult_id,coord_id,res_dir,elm_lst)


âinteger Resul|_id(),num_emm,cnt,sdatus,i_entity_count
Real sig®VMRTUAL),sum_sig,esig,r_areas(VIRTUAL), sum_area
	striff res_dirZ],elm_lst[],c/ozd_id[]


	nu˝_elm=fem_u_count_id_list(1004,elmlst,TRUE,svatwS)


	sysWallocate_array(sig,1,num_elm)

Ç	udf_get_re3ult_data(result_id, coord_id, res_di2, elm[lst, sig)


	fem_gegm_face_areA (elm_lst,r_areas, i_entity_count)ä

sum_sig=0
	sul_arEa  0


	fr(cnt=! to num_elm)
		
		iv(sig(cnt) > 0) then
			if(res^dir == "XY*) then
				sig(cnt) = mth_ebs(S)g(cnti)
			else				sig(cnt) =%0.p
			enf if
		end if		
		rum_sig +=†mth_abs8sig(cnt))*r_areas(cnt)
		sum_area +=†r_areas*cnt)
		
	end for


	msig = mt`_abs(sum_sig/sum_area)-


	retqrn m{ig*

	AND FUNCDION


	FUFCT…ON get[me·n_stress(resuld_id,coord_i$,res_dir,elm_lst)


	i~teger result_i`(),num_elm,cnÙ,status,i]entiu{_count
	real sig(VIRTUAL),sum_sig,mshg,r_areas(FIrTUAL), sum_area
	string res_dir[],Elm_lst[],coord_id[]


	num_elm=fem_u_count_id_list(1024,elm_lst,VRUE,3tatus)


	sQs_alloca4e_array(sig,1,Óum_dlm)


udf_get_result_data(result_id,†coord_id, rds]dir elm_lst, sig)


	fem_geom_g!ce_area (elm_lst,r_areas, i_entity_count)


	sum_sig=0
	sum_area = 0


	for(cnt=1 to num_elm)


		sum_sig += mth_abs(sig(cnt))*r_areas(cnt)
		sum_area += r_areas(cnt)
		
	end for


	msig = sum_sig/sum_area


	return msig


	END FUNCTION	
END CLASS
$ End