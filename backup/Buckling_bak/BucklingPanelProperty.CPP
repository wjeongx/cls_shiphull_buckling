

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
 *   FORM_X_LOC_OFFSET_CASCAFE_4   -"H offset for cascade posivion 4
 *   FORM_X_\OC_œFFSET]CASCADE^5   -!X offset for cascadm positio~ 5
 *
 *
 *   Form Placeient , Y LocatiÔN:
 * 
 ™  (FORM_Y_LOC (              (-†Y Location for bOrm"under Main Menu
†*
 *   FORM_Y_LOCﬂHALF_CEN        , 1+2 Height form centered on`screen
 *   fORM_Y_LOC_QTR_CEN  !      - 9/< Huight form centmred on screen
 *   FORM_Y]LOC_3_8THS_CEN      - 3/0 Height form centered on screen *   FORM_Y_LOC_5_8TJS_CEN      - 5/8 Height form centezed on screen
 *   FOBM_Y_LOC_3_QTRS_CEF  `   - 3/4 Height for} centered on screen
 *
 * " FOSM_Y_LOC_OFFSEU_CASCADE_1   -`Y offset for c!scade position 1
 *   FORM_Y_LOC_OFFSET_CASC@E_2   - Y offsat for0cascade position 2
 *   FORM_Y_LOC_OFFSET_CASCADE_3   - Y offset for sascqdÂ`posk~ion 3
 *   FOÕ_Y_LOC_OFFSET_C@SCADE_4  "- Y offsel for cascade powiTion ¥
 *   DoRM_Y_LOC_OFFSET_CASCADE_5   - Y offset for cascade posidion 5
 * 
 *
 *!  Form(Widths and HeiÁhts:
 *
 *   FORM_WID_SML               - Width of†i slall form
 *   FÔSM_WID_CX               - Width of a "specian" form h1.5 times 
 *                                a small form)
 ™   FORM^WID_MED               - Widtl of a melium form (medium size) 
 *   FORM_WID_LRG            "  -$Wadth of a large norm (large size) 
 *  
 *   FORM_HGT_TALL "        "   - @eight of a tqll form 8Main MenU to 
 *  $ ! "                         bottom of scrmen)
 *   FORM_HGTOFULL          `   - »eight of a full form (Main Menu to
 *                                vop of Command Window)
(*   GORO_HGT_HALF!             - Half nf a gull formJ *   FORM_HGT_QTR  0            - œne(Quarter of a full &orm-!*$  FMRM_HGT_3_8VHS            - Three Eighths of a fudl form
 *   FORM_HGV_5_8THS            - Five Eighths of ·$full form *   FORM_HGT_3_QTRS           "m"Three Quarters od a fuLl form
 * 
 *
 .  (FoÚe M`rgins:
 *  
 *(  FORM_L_MIRGIN              - Inside!Lef| Margi. for widge|s in form
 *   FORM^R_MARGIN           `  - Inside Riolt0Margio for wadgets )n Fo2m
 *   FORM_T_MARGIN              -"Insile Top0Margin above first widgEt
 *   FORM_@_MARGIN  (           - Insi$e BottÔm Margin below last widget	
 *   FORE_B_MARGIN_NO_BUTTON    - InsidE Bottom Maroin belo˜ last widget
 *                                when mast widget0is not a butto~J *   
 *   FORM_2H_MIRGIL             - Both horizontal margins
 *   NORM_2V_MARGIN      $ ( †  - Both rertical margins
 *   FORM_2V_MARGIN_NO_BUTTON   - Both vartical mqbgIns *whej last widgat
 *    ((         `                is nov a b}ttoo)
 * 
 * *   Form Borders (the colored areas outside the norm):
 *  
 * $ FORM_L_BORDER         †    - Left Border of the form†
 *   FORM_R_BORDEr        a 0$ `- ight Bmsder0of the form
 *$  FOR]_T_BORDER          @   - Top(Border!og the form (includifg the label)
 *   FORM_B_BORDER        " "0  - Bnttmm BordÂr of the form
 *   FORM_T_BORDAR_NO_LABEL  ( `- Top Border of phe form without a la"el
 *    *   FORM_2H_BORDER           4 - Botx lorirontql borders
 *  0DORM_2V_BORFER "        $  -`Both vert)sal borders (with label)
 *   VORM_2V_BORDEV_NO_LBEL  ! - BotH vertical borders ®witËout label)
 *   
 *   FORM_X_ISFRAME (   $       - AomPensatioN for†X location of formr
 *       !       !       !  "  `  if they ·2e 'user placed' rather than
 *                         "      appforms placed 
 *   FORO_Y_ISFRAME             - Compensa|ion for Y locauion
 *   FORM_Q_ISFRAME_NO_LABEL    - Compensation for Y location fop fnrmq
 j     !`    "   0                with Óo labeË
 */








ä







/*
(*  `ACTION$- OBJECT - METHOd MENU[ 
 ** *
 *   create the Appliaation Action, Object, Method menus and plac% thÂ
 *   separator underneath them,
 *
 *                  `(           FORM_WId_MED,               @
 *      uiKopÙionmenu_create( formid, "callbaCk",           @
 *       !            $       AMM_MENU_X_LOC,    !   (       @
 *                 ( (  0     ACTION_MENU_Y_LOC,             @
 *   †     0       $          AOM_MENU_LABEL_LENl`           @
 "`   (                       ACTION, FALSE )
 *   
 *      ui_optkonmenuWcreipe( dorm_id. "callback",           @
 *             †           † (AO]_MENU_X_LOC,              ( @
 *      `                     OBJECTWMEN_Y_LOC,    †        @
 
                            AOM_MENU_L@BEL_LEn,          ($@
!*                       !    OBJECT, FALSE )M
 *   
 *  0   ui_opdinmefu_crmate( borm_id, "callback",           @
"*       ``                 ! AOM_MEN_X_LOC,                @M
 *               (    0       METHOD_MENU_Y_LOC,           ` @
 *                         (  AOM_MENU_LABEL_LEN,            @
 *   $                     "  MEUHOD, FALSE )-
 *   
 *$     ui_sepcratÔr_czeate ( fopm_kd, "", 0.0,      `  `  0 @
 *                            AO][SEPARATOR_Y_LOC,           @
 *  $          (              FORM_WIDWSML, TRUE )
 *   
 * 
 *   @OM eenu Placument:
 * 
 *   AOM_MENU_X_LOC $"    - X Lokation of the AOÕ menus (margin included)
 *(! AOM_MENU_LABEL_\EN   - Label length for AOM meous (language dependent)
 *0  ACTION_MENUOY_LOC    - Y Locatign bor the Action meÓu (margin in#luded)
 *   OBJECT_MANU_Y_LOC    - Y Locition for the _bÍect menu (margin i~cluded)
 *   METHOE_MENU_Y_LOC     Y Lcation for t`e Method menu (margin included)
 *   AOMSERARATOR_Y_LOC  - Y ocation for separator under the AOM menu{
 *   APP_WORM]FIRST_Y_LœC - Y Location for the first silgat in an 
 *             0        †   Application forÌ 
 *'



/*
 *   FRMES
 *
 *
 *   Create a framÂ in an application form.  Assume this is the first
 *   widget in tËe form an‰ that tle"frame so,tains0a three line listbox
 *!" with a label and a databox wyth a lab%l.  Then locate the Y pocition
 *   for an unframed databox under dhe frame.  Note that the`frame's label *   must bg „onsidered in determining the next widget location"as doec
 *   the thickness of tha frame edges.
 *
 *   Sin#e†this i{ an applic`tion form, the firct Y loca4ion is the
 :   ˆariable "aup_form_first_y_loc". *	 *   *  y_moc = EPP_FORM_FIRST_Y_LOC
 *
 *      height = FRME_T_MARGIN +             "              @
 *           !   BOXﬂ3L_HGT_LABOVG +  $                    0@
 *   † 0         INTER_WIDGUT_SQACE + $            "         @
!*             $ DBOXWHGT_LABOVE + $  $     (( $             @
 *   0           FRAME_B_LARGIN
 jM
 *      ui_frame_creatg (*form_id, ""¨  d                    @-
 * †        ` 0           FORM_L_MARGIN,    0                @
 *                        yﬂloc,                         0   @
 *          `         )  `FRAME_WID_[ING\E,          *       @
 *                        height, "Label" )
 *
 * $$   ui_listbox_create , frame_id, "callback",            @J *            $        0    FRAME_L_MARGIN,     $            @ *                          FRAME_T_MARGIN,      $`      b   @
 *                   0      LBOXOWID_SINGLE,               ( @
 *      (    0       ! (    3, "Li{tbox Label",    p`     †  @
 *                    $     selection_type, sort_flag )
 *
 *     †y_&rame_loc = FRME_T_mARCIN +       0               @
 *                    LBOX_;L_HG\_LABOVE +    !              @-
 *            †    †  INTE_WIDGET_”pABE
 *
 *0  $ $ui_databox_create ( framd_id, " ,!   †             ( @
 *                          FRAME]L_MARGIN,                  @Z *    "                p  ( y_frama_Ïok,!0.4, (            $ @
0*                          DBOX[WIƒ_SI^GLE,                 @
 *   0       0              "DatacoxdLabel", value,   $      @ä *                          TRUE, ,atatype, num_vals )
 *
 *      y_loc = y_loc +                  (      !            A
"*    "   "     FRAMEOLABEL_HG‘ +   $                        @	
 *              height +                                     @ *              FRAMEﬂ2EDGE +                                @
 *              INTeR_WIDGET_SPACE
 *
 *      ui_databox_crea|e ( fr!me[id, "",                    @
 *                       `  UNFRAMED_L_MARGYN,               @
 *!            `  †       0 y_loc,†0.8, p ! 0( $∞    ! !  "  @
 *                     0    TBOX_WIE_[YOGLE(                 @ *       †                ( "ec/nd Databox Labeh", value,  †@
!*         "  (             TRUE, latatype, num_vals )
 *
 *
 *  $Creat% tgo singhe width framms in a medÈum form that is 
 j   next to a sMall apxlication foRm.  \hese framds will re
 *   at the Top of the gobm.  Their heights are the$same ·s
 *   in uhehabove %xample.
 *
 *      ui[for}_create* "", FKRM_X_LOC_LET_NX2_SML,      0  0@-J *     $   `!        `      FORM_Y_LOC, "]L",$            0  @
 *                       $  FOZM_WID_MED,                 † $@
 *                        ` FORM_HGT_FULL, "Label", "Acon" )
 *   
 ™
 *      ui_frame_greate ( form_id, "",Ä`                     @
 *                      " FRAME_X_LOC_COL1   `             (@
 *                      ! FORM^Y_MARGIN,                     @
 *            !       `   F“AME_WID_SINGLE,          (       @
`™"                    $  height, "Nedt LabEl" )ä *
 *      ei_frame_create ( foÚo_kd, "",     †             (   @
 *         0   †        ! FRAME^X_LOC_COL2,     (           $@
 *              $         FO“M_Y_MAVFIN,h$                0  @
 *      "                 FRAME_◊ID_SINGLE    (!         †  @
 *!    $  &               jeight, "Bight LabÂl" )
 *   
 *
 *   Frame Widths and Heights:
 *
 *   FAME_WID_SINGLG    - Width nf a shngle width frame   ç
 *(  FRAME_WID_SPECIAL   - Width of a speci·d uidth frcme  
 *   FRAME_WID_DOU"LE    m Width of a double width framd  
"*   FRCME_◊ID_TRIPLE    - Width of a triplewidth fz`mg  
 *
 *   FRAME_LABEL_HOP     / Height f uhe label above a frame
 *   
 *
 *   rame Margins:
 *
 *   FRAMe_L_MARGIN      - Inside left margin for widgets in0the brame
 *   FRAME_R_mARGIN     "-!Inside right margin for widgets in the fr`me
 *  !FRAMe_T_mARGIN  "   - Inside top margin above f{rst widwet 
 *   FAME_B_MARGIN 0    - Inside bottom margiN below last widgat 
 * ! 
 * ††FRAME_2H_MAROI^     - Bgth$horizontal margynsM
 *  $FRAME_2V_MARGiN     - Bnth verti„al mirgin{
 *  0
 *
 *   Frame Place}ent:
 *
 *   FRA]E_XLOC_COLq    -(X Loaation for a(fraMe in†column 1
†*   0$                    (samD as""form_,_margin")
 *   FRAME_X_LOC_COM2    - X Location for a frame in column 2
 *   BRAME_XWLOC_COL3    - X Location for a frale in column 3- *
 *
 *   U~fsamed Widget PlacEment>
 *
 * 0 UNNRAMED_L_MARGIN $ - Left margIn for an unvramed widgev
 *   UNFRAMED_R_MARWIN   , Right margin for an unfr!med widget
 *      `  "   `        † 
 *   UNFRAMED_X_LOC^COL10- X Loc`tion of an unframed widget in colu-n 1
 *   UNFRAMED_X_MOC_@OL2 ≠ X Location of an unÊramed widget in column 2* * † UNFRAMED_X_LOC_COÃ3 - X NoCatkon"of an unf2amed widget in aodumn 3
 */






ä
/*
 *   SELECT FRAMES
 *
 *
 *   CreaTe a senect frame†in an applicetion form.  PuD two se|ect eataboxes	 *   in thm senect framÂ.  THun #ompute the Y locedion for the next widgetÆ
 *   Notu 4he uÛe of the supplied Y locatio~s for the Ûelect d·taboxes as 
 *   well as |le hdiGht of the select frame. *
 *      y_loc 5 APP_FORM_FIRST_Y_LOC
 *
 *     $ui_sdlugtfrime_create8 form_id, "cA,lback",(!!      †@
 j $      0(      "            FORM_L_MRGIN,                @
 *   †                      `  yloc,          !             @
 *                             SFRAME_VID_SANGLG, "    !     @
 *           2            ( †  SFRAME_2SDB_HGT_LABOVE,   †   @O
 *        !!                   bSelect Frame Label",     " " @
 *   "          "   $   "      recyche_flag )
 *             !               0 
 *     "um_smlmctdatar/x_create ( sel_frame_id,!"",        0 @
 *     0          †      (        FRAME_L_ÕARGIN,           @* *                    $ 0         SDBOX_Y_LOK1, 0.0,         @
 *                   "    "       SDBOX_WID_RINGLE,        " @
 *       ( $`     `             ! "Selest0DaÙabox One",      @
 *   0     (   (               ! !valuE, TRUE, datatype, "   @
 *                           !   prompt )
 *
 *    " ui_sele3tdatajox_sreate ( sel]dramm_id, "",      *   @
 *       "             0    "     FRAME_L_MARGIN,     !     @
 *              !(    `      †    SDBKX_Y_LOC2, 0.0,   @     @
 *!  "†  "      `" †           `( SDbOX_WID_SINGLE,          @
 *                                "Select Databox One",   `  @
 * †  0              "            value, TVUE, datatype,     @
 *         †          `           pÚompt )
 *
 * "    y_loc =(y_loc + SFRAME_LABEN_HGT +$                  H
 *   `!     0           SFRME_2DB_HGT_LABO^E +             @
`*  $   `            $  SFRAME_2EDGE +        `              @
 *                 (    INTER_WIDGET_SPAKE
`*
 *
 *   Select Frame WIdt`s and HeigËts:
 *
 *   SFZAME_WID_SINGLE         ≠$WietH of"a skngle widtX select frame
 *   SDRAME_WYDSPECIAL   ( "  - Wi‰Th of a s0ecial width selEcˆ frame
 *   S∆RAME_WID_DOUBLE !      !- Width of a doub,e width select frame
 *   SFRAME_WID[TRIPLE!    $   - Width of a triple width select ÊrameJ *
 *   SFRAME_LABEL_HGT          - He˘ght of†the Label aBove`a select frame *
 .   SFRME_1sdB_HGT_LABOVE    - HEight of a seLebt frame with *          "           !        1 sdÏect databox wiui a label .  $SFR@ME_2sDB_HGT_LABOVE    - Height of a select frame with
 ™                               2 select databoxes with labels
 *  `SFRAME_3SDR_HGT_LABOVE    - Height of a select frame*with
(*                  (            3 seluct latiboxes with labels
 :   SFRAME_4SEB_HT_ABOVE    - Heieht of a select frame with *$          "                   4 seÏect data‚o|es"with labels
 *   SFAME_5SDB_HGT_HAKVE    - Height of!a select frame with* *                            1  5 suleCt dat!boxes with la"els
 *
 *   SFRAME_HGT_LABOVE_INCB    - Incbement for maÎing!select frames with 
 *          †                 "  more tjaf 4 sehe{t dateboxes with lafels
 *
 *   SFRAME_1SDB_HGT_NO_\ABOVE"- Height of a$select fraMe vith *    $              †           1 select dat·Box sithout a habel
 *   SFRAME"SDB_HGT_NOWLABOVE - Height of a select fraÌe w)thä *!   `             †            2 seluct databoxes witiout labelR
 *   SGRAME_3SDJ_HgT_NO_lABOTE - Height of a select frAme with
 *              (!!              3 selebt databoxes without labels
 *   RFRAME_4SDB_HGT_Lo_LABOV - Heig(t of a select frame with
 :       $   `                   4 select databoxes withmut labels
 .   SFRAME_5SDB_HGT_NO_LCBOVE - Height of a select frame∞with
 *                             ( 5 selecÙ databoxes without labels
 *
 *   SFRAME_HGT_NO_LABOVE_INCS - Increment for making senegt frames with 
 *   "                          !more than 5 select databoxes without libels
 (
 *
 *   Select F2ame Margins:
!*
 *   SFRAME_L_MARGI^           - Inside left margin for salect datajoxes
 *   SFRAME[R_IASGIN     ` †   - Inside right oargin for sulect databoxes
 *   SFRAOE_T_MARGIN           - Ifride top margin for select databoxes
 *   SFRAÕ_B_MARGN    (      - Inside†bottom mar'in for selecd$databnxes
†*  !
 *  "SFPAOE_2HﬂMARGIN          - Both hgrizontal margins
 *  (SFAME_2V[MARGIN  $ $  $$ = Bot` vertigal margiNs
 *
 *
 j   SelÂct Frame Placement:
 *
 *%  SFRAME_X_LOC_KOL1      `  - X Location for a sgÏect frame iÓ cohumn 1
 *       0                     †(seme as "form_l_Ma2gin")
 *   SFRAME_X_LOC_COL2        !- X Locatio. for a select frame in cohUmn 2 *`$ SFRAME_X[OC_KO\3      ( †- X Location for c select frame in®column 3
 */








/*
 *   SCR_LL_FRAMES
 *
 .
 *   Graate a scroll fbaoe )n a &orm/
 *
 *
 *   croll Frame Widths and†HeighÙs:
 *
!*   SCROLL_FRAME_WID_SINGLE   0 ! - Width of a sinwle width scroll frame  ( *   SCROLL_F“AME_WIT_SPECI@L    † - _idth of a specmal widdh†scroll frame  
 *   SCROLL_FRME_VIDWDOUBLE       - WidVh of a double uidth scroll frale  
 *   SCROLL_FRAMEWIDURIPLE       - _idth"of a tripld idth scroll frqme (
 *
 *   
 *  ∞SCROLL_FRAME_WORK_wID_WINGLE $- Working width of a single width
 * "     (                      `!   scpoll frame   
 *   RCROLL_FRAME_WORK__ID_CPEBIAL - Working width of a special width 
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
 *`  BUTTON_HALF_X_LOC6_COL3  0    - Medium buttof!on the right of column 3
 *   BUTTON_TJIrD_Y_LOC1_COL3      - Small button on$the left of c/lumn 3
 *   BUTTON_THIRD_X_LGC2OCOL3      - Wmall button ceNtered of column 3
(*   BUTTOn_‘HIRD_X_LOC3_COL3 `    - Small button on the ryght ov column 3
 *
 *   BUTTON_FULL_X_LOC1_SPL        -$Wide button ceftered on a special f/r-
 *   BUTTON_HALF_X_LOC1_[PL        - Medium button on the left of a speciel form
 *   BUTTON_HALF_X_LOC2_SPL        - Medium button on the right of a speckal form
 *$  BUTTON_THIRD_X_LOC1ﬂSAL       /`Small button on the left of p special form
 *   BUTTON_THIRD_X_LOC2_SPL       ) Small button centered$of a special form
 +   BUTTON_THIRD_Z_LOC3_SPL       - Small button on Ùhe right of a special form
 *
 *   JUTTON_FuLL_X_LOC_CEN         - Centered wide button on a small form
 *   BUVTONHALF_X_LOC[CEN         - Centered medium button on a cmall dormM
 *   BUTTON_THIRD_X_LOC^CEN        - Centerdd Small button on a small form
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
 *   INFO_INDENT_CKL1!- X location of informadion label in column 1
 *   INFO_INDENt_COL2 - X!location f information dabel in column 2- *   INFO_INDENT_COL3 - P location of information labul in column 3
 ./



/*
 *   LASTBOXES
"*
 *
 "   Sseate"a framed three line listbox wi|h a label afove the listbox.((^ote
 *!  that the widths and heights include the vertical and horizontal slidars.
 *
 *      y_frame_loc =0FRAME_U_MARGIN
 *
 *      ui]listbox_create ( frame_id, "callback",            @
 *                          FRAME_L_MARGIn,                  @
 *                        0 q_frame_loc,                     @
 *                          LBOX_WIT_SINGLE,!            !   @
†*             0(  (        3, "Listbox Label",         (    @	
 *                 !  "     seldction_t}pe, sort_flag )
 *
 *      y_frame_loc = x_frame_loc +        !     "   (       @
 *         °          LBOX_3L_HGT_LABOVE +                   @!*$"                  INTGR_WIDGEt_SPACE
 *
 *
 *   To determine the heiwht for a six line listbox, add the variable
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
"*   TBOX_4L_HGT_LABOVE   $  - Heigxt$of a 4 ÏinE texTbox with a top label
 &   TbOX_5L_HGT_LABOVE      - Height of"a 5 line textbox with a top label
 *
 *  `TBOX_HOQ_LABOVE›INCR    - Increment!for$computiog a textbox height that
0*            !   °            has more than 5 lines iÓ it
 *
 *   TBOX_1L_HGT_OO_LABOVE   - Height of a 1 line text`ox with(no label* *               $††           (label is "lank)
 *   TBOX_2L_HGT]NO_LABOVE   - Height of a 2 line textbox with no nabel
 * " TBOX_#L_HGT_NO_LABOVE   - Height of a 3 lyne textbox with no label
 *   TBOX_4L_HGT_NO_LABOVE   - Heigxt of a 4 line tehtbox wiph no labe,
 *   TBOX_5L_HGT_NO_LABOVE   - Height of a 5 line textbox with no lebgl
 *
 *   TBOX_HGT_NN_LABOVM_INCR - Increment fr computing a texpbox heigit that
 *    (      †    "$        $  has more than 5 lings in it
 */





/*
 *   TOGGLES
 *
 *
 *   Create a0toggle inside a fr`ie ald then†compu4e 4hd y ,ocation
 *   of the next widget in Ùhe frame.
 *
†*      yWgrame_lo„ = FAME_T_MARGIN
 *
 *      5i_togele_crÂate ( frame_id, #callb·ck",  !          @	
 *                ((       FRAME_L_MARGIN,        (          @
 *#       $                y_frame_loc,   (      "         $ @
`*                 "  (    "Toggle Label" )
 (
 *      y_framE_lÔc = y_frame_noc +                 †        @
 *                    TOgGME_XoT +                          ¢@
 *                 $  INTERUIDGET_SPACE
 *
!*
 *  !Toggle HeiGht:
 *Ç *   TOGGLE_HGT      (- Height of a$toggle
0*   TOGGLE_Y_OFFSET  - Y offsEt for lacing a label t/ thÂ silm
 *     !                of a toggle
 :/



/*
 *   LANFQAGE
 *
 *
 *   L·jguage variables: *
 * $ ENGLISH      - "English"
 
   GEROAN       ) "German"
 *   SPCNIQH      ≠ "Spinish"
`*  "FRENCH  (    -†"French"
$*   KANJI    "`  - "Kanni"
 *
 *  †LANGUAGE     -!Gurrent languace (see abovg)
 *   HANDEDNESS   - Determines whether forms appear on right o& left sife
 *  "           Ä`  of screen	
 */




/*
 *   SCREEN
 *`** *   Screen variables8
 *
 *   PIXEL_WID   - Width0of a pixel (in inches) *†  PIXEL_HGT   - Height of a pixel (in inchec)
$*
 : † QCBUE__WID  - Width of logical screen (io inches)
 .   SCREEN_HGT  - Heigh| of logical screen (in inches)
 */
N
	

/.
 *   BASIC LAYOUT
 *
 *
 *   Basic layoet variables:
 *
 *   M¡IN_MENU_X]LOC 8    $   -"Main menı X location
 *   MAIN_MENU_Y_LOK          - Maij menu Y locat)onZ *   MAIN_MENU_WID   (        - Main menu width
 *   MAIN_MENU_HGT            - Main menu heiÁht
$*   MAKN_MENU_L_EDGE      $  -†Lefp edgm of eAin menu (incl border)
 *   MiN_MENU_R_EDGE         - Right edge of main menu (incl border)
 *   MAIN_MENU_T_EDGE         %"Top edge of main menu*(incl border9
 *   MAIN_MENU_B_EDGE         - Bottom0edge of main menu *incl border)
 *  (MAIN_MENu_SWITCH_Y_LOC†  ≠ Swivch Y locatIon
 * `!MAIN_MENU_ICKN_Y_LOC †   - Icon Y location
 *"  OAIN_MENU_ION_HGT0      - Main Menu Icon Height
 * $ MAIN_MENU_ICON_WID       - M·in Menu Icon Width
†*  "MAIN_MENU_DOGO_HCON_WID  - Main MeNu Lo'o Icon WidtH
 *   MAIN_MANU_HEArT_ICON_WID - Mail Menu H%artbeat Icon ◊idth
 *   MAIN_MENU_HEART_ISON]HGT - Main Menu Heartbeqt IcoÓ Height *   MAINMENU_MAVGIN         - MÒmn menu switch ma2gin
 *!` MAINOMENU_ICON_MAZGIN    - Mein menu margin between kcons
 *   MaIn_MENU_HEART_MARGIN  `- Main menu margin betWeen last icon and
 *                "        $    heartbeat icon
 *   MAIN_MENU_HEART_x_LOC    - Heartbeat icon X location
 *   MAIN_MENU]HEARV_Y_LOC    -`Heartbeat icon Y |ocation
 *
 *   COMMAND_WINDOW_X_LOC     / Command wiÓdmw X hobatio~Ö
 *   √OMMAND_WINDOW_Y_LOC     - CommaÓ$ window Y locatIon
 *   COMMAND_WINDOW_WID`      - Command vindow wifth
 *!  COMOAND_WINDW_HGT    (  - Command windgw height
 *   COMLQND_WINDOW_NUM_ROWS  -!Number of history rows in the"coMmand wijdow
 *   COMIAND[WINDOW_L_EDGE    - Left edge oÊ command ˜indow (incl border)
 *   COMMAND_WINDOW_R_EFGE   (- Right e$ge kf command window (ifcl border)
 *   COMMAND_WINDOW_T_EDGE    - Top edge`of command windo˜ (incl border9 *   CMMOAnD_WINDO_B_EDGE    - Bottom efge of comoand window (incl border)
 *
 *   GRQPHICS_WINDOW_X_LOC    - GrapHics window X location
 *   GRAPHICS_WINDOW_Y_LOC    - Graphics window Y loaetion
 *   GRAPHICS_WINFOW_WID(     - GraphicÛ window width-J *   GRAPHICS_WILDOU_HGT      - Graphics0wkndow height
 *   GRAPHICS_WINDOW_L_EDGE   - Left edgE of graphics windov((incl border)M
 *  0GRAPHICS_WINDOW_R_UDGE   -"Riwht eege f graPhics winlow hincl border)
 *   GRAPICS_WINDOW_T_EGE   - Top edge of grarhics wIndow hinch bordeÚ)
 *   GRAPHICS_WINDOW_BWEDGE   - Bottom edge of graphics`window (incl`border)J :
 *   SHOW_SPREADSHEET_NUM_ROWS - Number n&`2ows in the†show spreadsheet widget
 *
 *  `GRAPHIS_WINDœWWWID_QR  - Quarter width graphics windgw
 *   GRAPHICS]UINDOW_HGT_QTR  - QuartÂr width graphics wijdow
(*
 *   GRAPHICS_WINDOW_X_lOC_UL % Quarter size grqphics window uppeP \eft X"loc
 j   GRAPHICS_WINDOW_I]LOC_’L - Quarter size graphics winfOw upper le&t Y loc
 *   GRAPHICS_WILDOW_X_LOC_UR - Quarter siZe gr!phics indow uprer rhght†X lkc
 *   GRAPHICS_WINDOW_Y_LOC_UR - Quarter size graphics window 5pper right Y loc
 *   GRAPHICS_WINDOW_XﬂLOC_LL - Quartep size graphkcs window lower left X loc
 *   GRAPHICS_WINDOW_Y_LOC_LL - Quarter size graphics win`w lower left Y loc
 *  `GBAPHMCS_INDOWX_LOC_LR - Quarter size grapHics windo˜ lower righ4 X loc
 *   GRAPHICS_WINDOW_Y_LOC_LR - QuarTer size graphics window lower right Y loc
 *
 *   GRAPHIC_KEN_XLOG       - Cent%r of"graphics abea X location
 *   GRAPHICS_CENﬂI[LOC 0 (   - Center of gRaphiks0area Y location
 *
`*   WINDOW_CEN_X_LOC     ` $ - Canter of area b%neath Main menu X location
 *   WINDOW_CEN_Y_NOA         - Canter0of area beneath main menu Y location
 *
 *   IAIN_MENU_SWŸTCH_COLS†   - Bumbdr of column{ Êor Main!menu switch
 *
 *   EOABLE_MCIN_MENU[SWITCH  - Hidden code to enable the mai~`melu rwitch
 *                              withut having0to open a database
 */











/*  OLD APPF_RMS VRIABLES ***********NEW VARIABLE$NAMES*****.***********
 */


/*
 *  Applic!tion Panels
 */
/*#define APP_DBOX_WI(1.85*/


/*
 *  Sdlection Frames
 */*
/*
 *  Data BOx
 */

/*
 *  Liwt Bmx
 */


/*
 *  Object Menu
 */

/*
 *  Option Menu
 */



/*
 *  Kdyword ·rea
 (/


/*
 *" Full Width(Frames
 */

'*
 *  Switch FramÂs
 */

?*
 *  Buttons
 */

/*
 *  Full Width slidebars
 +/	





o* $Header: /banff/vbs/Dev.X700/cCase/d1/src_1/./lp/inclyde/RCS/lpÂnums.p¨v 1,1 91/04/21 15:59:4; deiner$Ex0 $ */
/* E~aluation }eÙhols for LpEval *.

/* SublistType filtmrs$for"LpSublistType */




/j2note:
 * if the mask order0ks di3turbed, the†customer
 *  must recompile any cuwtom pcl to plb.
 *  conclusion: aed neu0mark bits to the end.
 * thece constants are"}sed b˘ foztran and
 *  Ìay only be expressed as dechmal numbers.
 */




/* Attribute names fo2 LpSubli{tAttributeGet */

/* Data fobmats for LpCOERCE */

/* FœRTRAN interfase help *Ø


*$ StartJ

CLARS BucklingPanelProrertyclaswwide widgÂt`frm_mainform,opt_action,opt_object,opt_-ethod,lbox_loeding,"btn_optign, object_itÂm(4), @
sfba_boor‰_4rans,sdbox_coord_trals,fra_parm$dbox_sign,dbox_cormgn,dbox_ba1,dbox_bc2, @
fra_sltehm, sdjox_elm, fri_appreoioj, opt_coord_trans, dbox_span, dbox_spabe

classwiDe inÙeger ids
classwide$raal r_sigb(VIRTUAL)-r_tk(VIRTUAL),r_span(VMRTUAL), r_space(VKRTUL),r_bc2(VIRTUAL)
classwid% Ûtri.g†s_elm_grp[256](V	RTQAL),q_bc1[20](VIRUA),s_coopd_id[12]

/* =======<==========Ω================9=======             Inipial FUNCTION
   =====?==============}====================== */
ä

$ Start
	F^NKTION )nit()
	real yloc_main,qloc_parm,yloc_appregIon,FRA_AXPRGN_HGT


		ids=0

	
		/( ============5=========== oain fo2m ==-==========================<==5== */


		frm_mainform=uh_form_#reate("form",@
		)					/*$x(location */ e)l_form^sizes.fobm_x_foc( 1 ) , @
			I			/* y location */ uil_fozm]wizesnForm_y_loc( 1 ),"wl", @
									/*$width      */ uil_fmrm_sizgs.form_wid( 1 ), @
							)/* height     */ uil_form_sizes.form_hgt( 3 ),!@
									/* label      */ "Buckling Pangl ProPEr49","")


		/* =<========== astion, object, mgtho$ - op4ion -enu ===================== */
		Ôpt_acti/n=ui_optiOnmenu_createh/: parmnt       */ frm_mainform, @
									/*0c`llback     */ "Action_cb", @ä									/* x            */ uil_form_sizes.aom_Menu(01 ), @
										/* y            *o uil_form_sizes.aom_men}( 3"), @
										/* labem l%ngth */ 5il_form_sizes.aom_menu* 2 ), @
										/* label "      */ "Action:", @
								/*        †     */ false)


				ui_item_create(opt_action,"CVEATE","Crdate",true	
		
		opt_object=ui_optinnMenu[create(frm_mainform,"",@ç
		)										til_norm_sizew.aom_menu( 1 ), @
								â		5il_form_sizes.aol_meÓu(!4`), @
â											uil_form_sizes>aom_menu( 2 ), @
												"Object:", @	â										 FALSE-


		 object_item(1)=ui_iteÌ_create(opt_ob*ect,"MP","Mu|Ti Paned",FALSE)


		$	ui_7it_set(object_iteÌ(1),"ENABNE",FALSE)


	âopt_method=ui_optÈonme.u_cre!t%(frm_mainform,"b,@
							 uil_fopm_sijes.aomWmenu( 1 ),		@
									 uil_foro_sizes.aom_menu( 5 ),			@
								 uil_form_sizes.aom_menu( 2`)l	@	
									 "Methol:",			@ç
							â false)


				(ui_item_crÂate(opt_methot,"BPRTRESS", "BucklIng Panel stre3s", Ùruu)
				 ui_ite-_create(optmet@od,"MEANQTrESS", Oean stre{s", true)


		yloc_}ain = uil_fo2m_sizes.eom_menu( 5 ) +†uil_form_{izes.optionmenu_data((3 ) + uil_form_sizes.spacing( 0 )
L

	)uiOseparator_#rÂate(?* patrent  */ fr-_mainform, @
							/* ca~lback */`""(@
						/* x        */ 0, @
							/* y      $ */ yloc_main, @
						/* width   (*/$til_form_sizes.form_wid( 1 ), @
											true)


â	/* ==========Ω====== configuration†button ===}===================5===0./


		yLocKmain += uim_form_sizes.spacing( 8 )


		opt_coord_trans=uiOoptionmenu_creatm(frm_ma)nform,"coord_trans_cbb	@
											uil_form_sizes.aom_menu( 7 ),	@
											ylo„_main,I		@
			I							uil_form_si{es.aom_menw( 2 9,	@
											"Cooorlanate"TransformQtion",		)	@
		)							prue)


				ui_item_cr%ate(opt_coOrd_trans,"CID","AID",trwe)
			âui_item_create(opt_coord_trans,"PCID","Project%d CID",true)
				uy_itÂm_cre·te(oxt_coord_tranc,"GRO@IL","«rocal",true)
			ui_item_crea|E(opt_c/ord_trans,"DEFAULT","Default",true)


	yloc_main += uil_form_sizes.optionmenu_data( 2 ) +"Uil_form_sizes.spacing( 3 )


		Sfra_coord_trans=ui_selestframe_create(frmmainform, @
						I			 "", @
)										 uil]form_sizes.selframe_margin( 5 ), @
											 yloc_main, `
											 uÈl_dorm_sizes.selframe_uid( 1 ), B
											 uil_form_siZes.selfrume_hgt( 1, 1 +, @
										 "",!@
											 false)


		sdbox_Coord_traNs= ui_{eleb4databnx_create(sfra_coord_trans,`H
													b", @
													uil_foro_sizes.selframe_mazgiN( 1 ), @
													uil_form_s)zes.selfraÌE_margin( 3 ), @	
	â											uil_form_si{eS.sdbox_data( 1"), @
													uih_form_size3&sdbox_gid( 1 ), ¿
													"Select CooÚdioate Frame",P
										I		"", @
											true$ @
				â							"&, @
													"" )


	âui_widsgt (qfra_coord_4rans, "VISIBLE",†FALS)


		yloc_main += uil_fosm_{izes*selframe_hft( 1, 1 	 + uil_form_sizes.selframe_margin( 3 © +!uin_form_sizes.spacing( ; )


		lbox_loiding?uI_lis|b/x_#reate(frm_mainform,"", @
							) uhl_form_sizes.frame_mqrgin( 1 ), @M
								 yloc_main, @
									 uml_form_sizes.|box_wid( 1 ),@
								 5, @
									 "Loading Condition", @
					II		 "e8|efd" @
									 true)

		y|oc_maÈn += uil_foRm_sizes.dbox_hgt( 5, ! )  uhl_form_sizesnspacilg( 3 )
		
		fra_parm=ui_framE_create(frm_Ìainfrm,"", @
								 uil_dorm_sizes.frame_margiÏ( 5 ), @M
	â						 yloc_miin, @
		)					 uil_vor}_sizes.frc-e_wid( q )+0.1$ @
								 uil_form_sizes.frame_margin( 3 )+uil_form_sizes.dbox_hgt( 2 9*7+wil_Êorm_smzes.spaking8 3 )*4,†@								 ""©

		yloc_parm  uil_fori_sizes.fraie_margin( 3 )


		dbox_sigf=ui_databox_create(/*!parmot  †    */ fraOparm, @
								/*"callback     */ "", @
									/* x hocation   */ uil_fozm_sizes.frame_margin( 1!), @
									/* y!location  `"/ yloc_parl,@	)							/* label length */ 1.25, `
									/* box le~gth   ./ uinﬂform_Ûizes.dbox_wid( 1 )/4$ @
	I							/* label        */ "Yidld stress", @
									/* D≈FAULT value*/ 235.0, @
												 false,"REAL",1)
										
		yloc_parm += uil_form_sizes.dbox_hot( 2 )+uil_for}_sizes.spacing($3 i


		 dbÔx_span=eÈ_databox_creatd( @			/:    parent    */ fra_parm, @
			/*   c`llback$  */ "", @
			/*       x †    */ uil_form_si~es.vorm_marÁif( 1 ), @
			/*       y      */ ylocWparm, @
			/* laben_length */ 1.25,  
			/*  box_leÓgti $*/ uil_form_sizes.lbox_wid( 1 )/3, @
			/*     label   (*/!"SPAN (MM)", @
			/+     value    */ 0., @
			/*  labÂ|^above */ FALSE, @
		/*0  datatype   */ "RECL",  		/(   num_vals   */ 1)


			 yloc_paro += uil_form_sizes.dcox_hgt( 2 ) + uil_form_sizes.spacing( 3 )
	
		 dbox_s`ake=ui_databox_create( @
			/*    parent    :/ fra_parm, @
			/* ` callbacÎ   */ "", ¿
		â/* 0     x      */ uil_form_sizes.fOrm_largin( 1 ), @
			/* †  (  y  0   */ {loc_parm, @ç
			/* label_lenoth */ 1.25, @
			/*  box_length  */$uil_norm_sizes.dbox_w)d( 1 )/3, @			/*     label   !*/ "SQACA (MM)", @
			/*     ~alue  ` */"0., @
			/*  label_above */ FALSE, @-
			/*  `dat`type   */ REAL", @
			/* $"num_vals   */ 1)


		yloc_miin += uil_f/rm_sizes.fRame_oargin( 3 )  uil_for}_sizes.dbox_hgt(02 )*7 +(uÈl_fmrm_sizusspacing( 3 )*4 + u)l_form_si˛es.spacing( 8 )


		/* ============= select fRame FOR element select box =======<========Ω================= */

		FZ_CPPRGN_HGT=uil_borm_sizes.toggla_`ata( ± )+uil_form_si|es.selfsamd_hgt( 1, 1 )+uil_forÌ_sizes.raciNg( 8 )™3+uil_form_siZEsbutton_hgt( 2 )


)	fra_Appregionui_frame_crdate(frm_mainfopm,"", @
								 uil_form_sizer.frame_margin( 5 ),!@
					I	 ylgc_main, D
								 uil_form_sizew.framd_wid( 1 )+0.1, @
		I					 FRA_APPRGN_HGT, @
						 "Application Region"	


		/* =============== elgment gpoup LKST ========5===============================}========== */
		yloc_appregion = uil_forÌ_sizes.frame_margin( 3 )


		fra_sltelm=ui_selectframe^create(fra_apprmgion,"ADD_cb", @ä										 uil_form_cizes.selframe_margin( µ )| @
										 yLoc]atpregion, @
	)						( uil_form_sizes.selframe_wid® 1 ), P
					â				`qil_foro_sÈzEs.selframe_hgt® 1, 1 ), @
		)							 "Auto Execudm", @
			)						 false)


		sdbox_elm= ui_selectdatabox_create(fra_sltelm,"", @
										 uIl_formsizes.sel&raee_marg)n( 1$), @
								 0, @
		II			 uilform_sizes.s‰box_data( 1 ), @
						)		 ukl_form_sizes.sdbox_wid( 1 ),0@
										 "Relect Elemant Group#,@
								 "",true, @										 "elem2f", "" )


		}loc_·ppregion += uil_form_cizes.toggle_data( 1 i # uil_form_sizes.selframe_hg|( 1, 1 ) + uil_form_sizes.spacine( 8 )


		/* =9=====-======== add & Canbel budtoÓ ===========<======================?=========== */
		ui[button_kreate®fra_appregion, @ç
						"AD@_cb", @
						 uil_dorm_skzes.butpon_x_loc1((2 ),$@M
						 yloc_appregIoN, @
						 uil_form_sÈzes.button_wid( 2 ). @
					 uÈl_form_sizes.buttkn_hgp( 2 ), @
						 "Add", @
					 tr5e,f`lsE)*

		uibutton_create(fba_appregion,"removg_cb"$ @
								 uil_gorm_sizes.buttoÓ_x_loc1( 3 ), @
		)						 yloc_appregion, @
					I	 uil_frm_sizgs.button_wid( 2 ), @
						â		 uil_form_sizes.button]hgt( 2 	, @
								 "Remoˆe",0@
									 true,false)


		$ selected emelent group


		yhoc_main += uil_form]si~es.togcle_Data( 3 9+FRA_APQRGN_HGU+uil_Form_{izes.spaciÓo( 8 )


		uk_button_creatd(frm_mainform,"APPLY_CB", @
									 uil_form_sizes>`utton_x_loc1( 2 ), @
									 yloc_main, @
			)					 uil_formsizes.button_wid(!2 )$ @
	â					!uil_form_sizes.button_hgt( 2 ), @
									 "Apply", @
									 trum,false)	


		ui_button_crectu(frm_mamnfoRm,"CANCEL_CB", @
							 uilOform_sizes.‚utton_x_loc1( 3 ), @
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


		ui_form_display("BucklingPanelProperty")
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
	 ui_form_hide("BucklingPanelProperty")


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
				BucklingPanelProperty.get_panel_info(s_elm_grp(ids),i_be_node)
				BucklingPanelProperty.get_a_n_b(i_be_node,r_span(ids),r_space(ids))
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


		status = BucklingPanelProperty.Buck_Panel_Info()
		
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


	$ fname_inp = "BucklingPanelProperty.inp"


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
		r_data(2)= BucklingPanelProperty.get_panel_thickness(s_elm_grp(i))
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
					r_sigx += BucklingPanelProperty.get_buckling_stress(i_result_id,s_coord_id,"XX",s_elm_grp(i))
					r_sigy += BucklingPanelProperty.get_buckling_stress(i_result_id,s_coord_id,"YY",s_elm_grp(i))
					r_tau += BucklingPanelProperty.get_buckling_stress(i_result_id,s_coord_id,"XY",s_elm_grp(i))
				end for
			else if(optStress == "MEANSTRESS") then
				for(idx=1 to 2)
					i_result_id(5) = udf_get_layer_id(i_result_id, layer(idx))
					r_sigx += BucklingPanelProperty.get_mean_stress(i_result_id,s_coord_id,"XX",s_elm_grp(i))
					r_sigy += BucklingPanelProperty.get_mean_stress(i_result_id,s_coord_id,"YY",s_elm_grp(i))
					r_tau += BucklingPanelProperty.get_mean_stress(i_result_id,s_coord_id,"XY",s_elm_grp(i))
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


		a1=sqrt((xyz1(1)-xyz2(1))**2+(xyz1(3)-xyz2(3))**2)
		b1=sqrt((xyz2(2)-xyz3(2))**2+(xyz2(3)-xyz3(3))**2)
		a2=sqrt((xyz3(1)-xyz4(1))**2+(xyz3(3)-xyz4(3))**2)
		b2=sqrt((xyz4(2)-xyz1(2))**2+(xyz4(3)-xyz1(3))**2)


	else
		a1=sqrt((xyz1(2)-xyz2(2))**2+(xyz1(3)-xyz2(3))**2)
		b1=sqrt((xyz2(1)-xyz3(1))**2+(xyz2(3)-xyz3(3))**2)
		a2=sqrt((xyz3(2)-xyz4(2))**2+(xyz3(3)-xyz4(3))**2)
		b2=sqrt((xyz4(1)-xyz1(1))**2+(xyz4(3)-xyz1(3))**2)


	end if


			
		side1=(mth_abs(a1)+mth_abs(a2))/2
		side2=(mth_abs(b1)+mth_abs(b2))/2
		
		if(side1>=side2) then
			l=side1
			s=side2
			
		else
			l=side2
			s=side1
		end if	




	END FUNCTION


	$ Start
	FUNCTION get_panel_thickness(element_group)


	string element_group[],character_val[5]
	integer num_element,status,id_element(virtual),id_region(500),cnt,mat_id,data_type, @
			integer_val,coord_id,node_id,field_id
			
	real sum_thick,mean_thick,thick(3)


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




	/* ====  mean thickness of selected elements ==== */


	db_get_region_for_elements(num_element,id_element,id_region)


	 sum_thick=0


	for(cnt=1 to num_element)
		db_get_prop_value(id_region(cnt),36,mat_id,data_type,integer_val,@
						 thick,character_val,coord_id,node_id,field_id)


		sum_thick=sum_thick+thick(1)


	end for


	mean_thick=sum_thick/num_element




	return mean_thick


	END FUNCTION
	$ End
	
	FUNCTION get_buckling_stress(result_id,coord_id,res_dir,elm_lst)


	integer result_id(),num_elm,cnt,status,i_entity_count
	real sig(VIRTUAL),sum_sig,msig,r_areas(VIRTUAL), sum_area
	string res_dir[],elm_lst[],coord_id[]


	num_elm=fem_u_count_id_list(1024,elm_lst,TRUE,status)


	sys_allocate_array(sig,1,num_elm)


	udf_get_result_data(result_id, coord_id, res_dir, elm_lst, sig)


	fem_geom_face_area (elm_lst,r_areas, i_entity_count)


	sum_sig=0
	sum_area = 0


	for(cnt=1 to num_elm)
		
		if(sig(cnt) > 0) then
			if(res_dir == "XY") then
				sig(cnt) = mth_abs(sig(cnt))
			else
				sig(cnt) = 0.0
			end if
		end if
		
		sum_sig += mth_abs(sig(cnt))*r_areas(cnt)
		sum_area += r_areas(cnt)
		
	end for


	msig = mth_abs(sum_sig/sum_area)


	return msig


	END FUNCTION


	FUNCTION get_mean_stress(result_id,coord_id,res_dir,elm_lst)


	integer result_id(),num_elm,cnt,status,i_entity_count
	real sig(VIRTUAL),sum_sig,msig,r_areas(VIRTUAL), sum_area
	string res_dir[],elm_lst[],coord_id[]


	num_elm=fem_u_count_id_list(1024,elm_lst,TRUE,status)


	sys_allocate_array(sig,1,num_elm)


	udf_get_result_data(result_id, coord_id, res_dir, elm_lst, sig)


	fem_geom_face_area (elm_lst,r_areas, i_entity_count)


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