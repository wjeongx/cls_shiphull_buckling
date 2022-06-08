import math as mth
from pyBuckling import DNV
from pyBuckling import Basic

########### input #########################
DNV.material = 'STL'
DNV.gm= 1.15             # Material Factor
DNV.thk = 35
DNV.a = 872     # space, s
DNV.b = 1600     #span l
########### input #########################
e = 1.05
psi = 1.0
s0 = 315


if DNV.b/DNV.thk <= 120:
    ci = 1-DNV.a/(120*DNV.thk)
else:
    ci = 0

sxsd = 212.61
sysd = 10.6
tsd = 18.61
print(Basic.ElasticModulus(DNV.material))
print(Basic.PoissonRatio(DNV.material))
print(DNV.thk)
print(DNV.b)
print(DNV.a)
print("sxsd = " + str(sxsd))
print("sysd = " + str(sysd))
print("tsd = " + str(tsd))
print(DNV.kappa(s0))
print(DNV.plate_slenderness_Lp(DNV.material, s0))
print(DNV.slenderness_Lw(DNV.material, s0))
print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++")
print(DNV.coefficient_Cx(DNV.material, s0))
print(DNV.reduction_factor_kp(s0, 1))
print(DNV.reduction_factor_kl())
print(DNV.coefficient_Ct(DNV.material, s0))
print(ci)
print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++")
sxrd = DNV.resistance_sxRd(DNV.material, s0)
syrd = DNV.resistance_syRd(s0, 1)
trd = DNV.resistance_tRd(DNV.material, s0)
print(sxrd)
print(syrd)
print(trd)
r_val = mth.pow(sxsd/sxrd,2)+mth.pow(sysd/syrd,2) - ci*(sxsd/sxrd)*(sysd/syrd)+mth.pow(tsd/trd,2)
print(r_val)
print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++")
# Shear Buckling Check


print(tsd/trd)
print(tsd < trd)

# Longitudinal Buckling Check


print(sxsd/sxrd)
print(sxsd < sxrd)

# Transverse Buckling Check


print(sysd/syrd)
print(sysd < syrd)




