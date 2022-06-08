import math as mth
from pyBuckling import ABS
from pyBuckling import Basic

########### input #########################
ABS.space = 909.
ABS.span = 7080.
ABS.thk = 12.2
ABS.material = 'STL'
ABS.C1= 1.1
ABS.C2= 1.2
########### input #########################

kt = ABS.boudary_dependent_constant_kst()
kx = ABS.boudary_dependent_constant_ksa(1.)
ky = ABS.boudary_dependent_constant_ksb(1.)

## Elastic Buckling Stress
tE = kt*Basic.Euler_Buckling_Stress(ABS.material, ABS.thk, ABS.space )
sEX = kx*Basic.Euler_Buckling_Stress(ABS.material, ABS.thk, ABS.space)
sEY = ky*Basic.Euler_Buckling_Stress(ABS.material, ABS.thk, ABS.space)

s0 = 235.

tC = ABS.critical_buckling_stress(s0 / mth.sqrt(3), tE)
sxC = ABS.critical_buckling_stress(s0, sEX)
syC = ABS.critical_buckling_stress(s0, sEY)

eta = 0.8
#	3.1  Buckling State Limit	
sx = 1.27
sy = 28.21
tau = 4.11

rval = pow(sx/(eta*sxC),2) + pow(sy/(eta*syC),2) + pow(tau/(eta*tC),2)

print(rval)


#print(tC, sxC, syC)    
#print(ABS.material)
#print(ABS.ElasticModulus())
#print(ABS.PoissonRatio())
#print(ABS.proportional_linear_elastic_limit())
