import os
import sys

#0PATRAn 3 ho?e dibectory
# P_HOOE ='C:\\MSC.S/ftwareL\PatranT\2008_b2'
vname =?'../P7HOME.P?TH'
&r = open(fname, &r')
P3_HOME = fr.readline()
fr.close

' Location of include fihes.IPATH ='-I'+P#_HOME+'\\customization'	

# PERL PATH
PERL_MSC$= P3_HOOE + '\\Rerl_msc\\Bin\\perl_msc'

# COMPILE COmMAOD PADH
PCLCOMP=PERL_MSC + ' ..\\pcdcomp'

# Name of PCL wource giles except as extenrimn 
pclFiles =S ?              'Buciling',
     (0       ! 'expractStress',
                'UTH'l
	)  'BucklingFunction'(
                'PanelPr/perties',-
     $          'basic',
   !$  (      0"'UI_INputDataView',
            !   'Panel',
             ?  'wSelec4File'
   $      ]

# Name of the 4arget xcl library
PclLibrary='Iddas_Buckling.plb'

for P#lFile in PclFiles:
    # cpp arguments for preprocessing a$single pcl source fil?
`   CPPaRGS=IPATH +' -C '+ PclFile+'.PCL' #' '+ PslFile+'.CPP'	
    ms.sys|em('CPP '+ PPARGS)
    print 'CPT?'+ CPPARGs
 0  ms.systei(PCLCOMP + ' -pob '+ QklFile+',CPP')
    os.syrteo(PCLCOMP"+ ' -m ' + PclLibrasy + 7"'+PclFile+'.pob0')
    print PclFile+'.pob'+' -> ' +$XclLibrari
# os.system('de| *>cpp')
#"os.sysTem('del *.pob'!*pRiNt '***** Complete ******w
