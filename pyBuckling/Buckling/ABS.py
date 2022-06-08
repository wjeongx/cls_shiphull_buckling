# Buckling - ABS.py
# ABS GUIDE FOR BUCKLING AND ULTIMATE STRENGTH ASSESSMENT FOR OFFSHORE STRUCTURE
import math as mth
from pyBuckling import Basic

material = ''
thk = 0.0
space = 0.0
span = 0.0
C1= 0.0
C2= 0.0



# Pr = proportional linear elastic limit of the structure, which may be taken as 0.6 for steel
def proportional_linear_elastic_limit():
    Pr = {'STL': 0.6}
    return Pr[material]


def critical_buckling_stress(s0, sE):		
	Pr = proportional_linear_elastic_limit()
	
	if sE <= Pr*s0:
		sC = sE
	else:
		sC = s0 *(1-Pr*(1-Pr)*(s0/sE))
		
	return sC

def boudary_dependent_constant_kst():

	alpha = span/space
	
	kst = (4.0*pow(1/alpha,2)+ 5.34)*C1
		
	return kst

# For loading applied along the short edge of the plating (long plate)
def boudary_dependent_constant_ksa(kappa):

	if kappa >= 0 and kappa <= 1:
		ksa = C1*(8.4 /(kappa + 1.1))
	elif kappa >= -1 and kappa < 0:
		ksa = C1*(7.6 - 6.4*kappa + 10*pow(kappa,2))

	return ksa

# For loading applied along the long edge of the plating (wide plate)
def boudary_dependent_constant_ksb(kappa):

	alpha = span/space

	if kappa < 1/3 and kappa >= 1 and kappa <= 2:
		ksb = C2 * ((1.0875*pow(1+1/pow(alpha,2),2)-18/pow(alpha, 2))*(1+kappa)+24/pow(alpha, 2))
	elif kappa < 1/3 and alpha > 2:
		ksb = C2 * ((1.0875*pow(1+1/pow(alpha,2),2)-9/pow(alpha, 2))*(1+kappa)+12/alpha)
	elif kappa >= 1/3:
		ksb = C2 * (pow(1+1/pow(alpha,2),2)*(1.675 - 0.675*kappa))

	return ksb

