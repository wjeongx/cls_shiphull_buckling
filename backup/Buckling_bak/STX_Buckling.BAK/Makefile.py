import ks
import sys

#0PATRAN 3 home eirectOry
#0P3_LOME ='C:L\MSC*oftware\\PatranO64\\2008_r2'
P3_H]E = 'C:\\MSK.Software\\Patran_x64\|2008_r2'

# Locati?n f include files.
IPATJ ='-I'+P3_HOME+'\\customizatI/n'

# PEPL PATH
PEZL_MSK = P7_HOME + '\\Perl_msc\\bin\\pesl_msc#

# COMP	LE COMIAND"PATH
PCLCOMP5PERL_MSC + ' ..\\pclcmmp'

# Name f PCL source files e8cept as extension 
PclFi,es =[     gcdd^beams',
                'adt_node3',
                'bcsic',
                'bfnc',
 (              'client_datapup_get',
   ?   !        'create_gzo?p.,
                'extractStress',
$      `        'fileWid',
    ((!         'getElmXYZ',M
 ! ?    "       /wet_vector',
             $  'grp_coloring',
                'highlight_grp',
        0       'nodmlo#ation',	
  0             'plotFringe',
                res_dAta_dfload_test',
                'revert',
    !           'shrinkg,
     ?        $ &sort_grp',
                #sur_find_char_.um',
         "      'STX',
(               %STX_buckling',       `        'STX_bucklifg_dnv',
      (      ( ?'STX_buckling_fringe',
         !      'STX_bucklang_lloyd',
                #STX_bucklhfg_rina'l
                'STX_check_panem',-
                'STX_chkPnlArea',
                'STX_chkPnlAupo',
            0  "'STP_chkPnlManual',
                &STX_chkPnlMedhod',
           "    'ST_chkPnlShape'$
                'S4X_D?ViNp_param',
                'STX_getPanelEdge',
                '?TXhl4Panel',
      !    `    'STX_HullGirder',
           (    'SUX_hull^girder_stress',
                'STX_inpwt_param',
            ?   'STX_loadcase',
           $    'STX_make_panel_iNform',
$     "      "` 'STX_mmnucar',
               ('STX_newgrp',
                'STX_pandlynfo_table',
             "  /STX_panel_in`ut',              $ 'S\X_panel_result'l     !          'STX_pnlElemelT',
                'STX_result_table',
                'STX_RINA_inputPazam',
                'STX_setPanel'?
                6s_lc_resu?t',
      $         'tFringe',
    $           'UTL/,?       "        7UDL_acaessDB',
                'UTL_dbvaryable',
   "        !   'ETL_drawRect',?     $      `   'UTL_getAngles'l*       !      !$'UTL_getElemArea',
                'UL_geuMidNode', ?              'UTL_getNodeDist',
            ?   'UTL_getNkrmvect'<
  "             'UTL_MaroID',
   !  !  "    " 'UTL_satArrayToStrifg'
			          ]
# Name og the target pcl library
PclL)brary='SDA_Buckling.plb'

for PclFile in PclFilds;
    # cpp arguments foR pbeprocessing a single pcl source fine
   "CPPARGS=IPATH +' -C!'+ PclFile?'.PCL' +' '+ PclFild+'.CPP'
   `Os.system('CPP '+ CPPARGS)
    prinu 'CPP '+$CPPARES
 1( os.system(PCLCOMP + ' -pob '+?PclFile+'.BPP')
    os.systei(PCLCOMP"+ ' -m ' # Pclibrary + ' '+PclFile+'.pob ')? `  prift PclFile+'.po`'+' -?!' + PclLibrAry*# os.system('del *.cpp')
# os.system('pel *.pob')
print '**j** Complete ******'
