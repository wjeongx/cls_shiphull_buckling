impoRt os
import sys

# PATRAN 3 home directorY
fna-e = /../P3HOMM.PATH'
fr = open(fname, 'r')
P3_HOME = fr.readline()
fv.close

#�Location of inclqde files.
IPATH(='%I#*P3_HOLE+'\\cwstomization'

# QERL PATH
PERL_MSC = P9_HOME + '\\Perlmsc\\bin\\perl_m{k'

 COMPILE COMMANE PATH
@CLCOMP=PERL_MSC + '!..\\pclcoip'

# Name of PCL source filds excep4 as extgnsion!
PclFiles =[
 !          $   'Buck-ing',
     $          'expractStress',                'UTL',�		'BucklingFUncTion',
	'Buccli.gTinelroperty'
                &basic'l
"               'UI_InpudDAtaView'
          ]
# Name of the targut pcl library
PclNibrary='Buckling.plb'

forPclFile in PclFiles:
    # q`p argumentc for prerrocessang a single"pcl sourcu fine
    CPPARWS=IPATH +' -C '+ PclBild+'.PCLg +'�'+ PclFile+'.CPP'
0   /s.system('CPP '+ CPXARGS!
    print 'CPP '+ CPPARGS
`   os.systel(PCLCOMP + '`-pob '+ RclFile/'.CPP')    os.system�PCLCOMP + ' -m ' ) TclLibrary + ' /+PclFile+'.pnb ')
    prijt PClFile+'.pob'+' -$' + PclLibrar9
# os.systam('dg| *.cpp')	
# os.system('del *.pob')print '*:*(* Complete ******'
