import os
import sys

# PATRAN 3 home directory
# P3_HOME ='C:\\MSC.Software\\Patran\\2008_r2'
fname = '../P3HOME.PATH'
fr = open(fname, 'r')
P3_HOME = fr.readline()
fr.close

# Location of include files.
IPATH ='-I'+P3_HOME+'\\customization'

# PERL PATH
PERL_MSC = P3_HOME + '\\Perl_msc\\bin\\perl_msc'

# COMPILE COMMAND PATH
PCLCOMP=PERL_MSC + ' ..\\pclcomp'

# Name of PCL source files except as extension 
PclFiles =[
                'Buckling',
                'extractStress',
                'UTL',
		  'BucklingFunction',
                'PanelProperties',
                'basic',
                'UI_InputDataView',
                'Panel',
                'wSelectFile'
          ]

# Name of the target pcl library
PclLibrary='Ideas_Buckling.plb'

for PclFile in PclFiles:
    # cpp arguments for preprocessing a single pcl source file
    CPPARGS=IPATH +' -C '+ PclFile+'.PCL' +' '+ PclFile+'.CPP'
    os.system('CPP '+ CPPARGS)
    print 'CPP '+ CPPARGS
    os.system(PCLCOMP + ' -pob '+ PclFile+'.CPP')
    os.system(PCLCOMP + ' -m ' + PclLibrary + ' '+PclFile+'.pob ')
    print PclFile+'.pob'+' -> ' + PclLibrary
# os.system('del *.cpp')
# os.system('del *.pob')
print '***** Complete ******'
