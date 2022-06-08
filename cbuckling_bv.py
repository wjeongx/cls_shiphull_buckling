# BV NR467 Part-B
import math as mth
from .cbuckling_common import buckling_common

class bv(buckling_common):
	E = 206000  # N/mm^2
	NU = 0.3 # Poisson Ratio
	gm = 1.02
	gr = 1.1
	thk = 0.0
	a = 0.0
	b = 0.0

	def __init__(self):
		pass

	def K1F(psi):
		alpha = bv.a / bv.b
		if psi >= 0 and psi <= 1:
			if alpha >= 1:
				K1 = 8.4 /(psi+1.1)
			else:
				K1 = mth.pow(alpha + 1/alpha, 2)*2.1/(psi+1.1)
				
		elif psi > -1 and psi < 0:
			Ki = buckling_factor_K1(0)
			print(Ki)
			Kii = buckling_factor_K1(-1)
			print(Ki)
			K1 = (1 + psi)*Ki - psi * Kii  + 10*psi*( 1 + psi) 
			print(K1)
		elif psi <= -1:
			k1f = (1-psi)/2
			if alpha*k1f >= 2/3:
				K1 = 23.9*mth.pow(k1f, 2)
			elif alpha*k1f < 2/3:
				K1 = (15.87 + 1.87/mth.pow(alpha*k1f, 2) + 8.6*mth.pow(alpha*k1f,2))*mth.pow(k1f,2)

		return K1

	def K2F():
		
		alpha = bv.a / bv.b

		if alpha > 1:
			K2 = 5.34 + 4 / pow(alpha,2)
		else:
			K2 = 5.34 / pow(alpha,2)+ 4

		return K2

	def K3F(radius):
		
		NU = bv.NU
		thk = bv.thk

		K3 = 2*(1+mth.sqrt(1+12(1-NU*NU)*mth.pow(bv.b, 4)*1e+6/(mth.pow(mth.pi,4)*radius*radius*thk*thk)))

		return K3

	def K4F(radius):

		NU = bv.NU

		K4 = 12(1-NU*NU)/(mth.pow(mth.pi,2)) * (5 + mth.pow(b, 2)*1e+2/(radius* thk))
		
		return K4

	def K5F(tf, tw, V1, V2):

		K5 = (1+tw/tf)*(3+0.5*(V2/V1) - 0.33*mth.pow(V2/V1,2))
		
		return K5

	def panel_slenderness(s0):
			
		E = bv.E
		
		beta = 1000*(bv.a/bv.thk)*mth.sqrt(s0 / E)

		return_value = max(1.25, beta)
		return return_value

	# 5.3.3 Bi-axial compression and shear for plane panel
	def critical_buckling_stress_saC(s0):
		
		print(s0)
		beta = panel_slenderness(s0)
		print(beta)
		return_value = s0 * (2.25/beta-1.25/pow(beta, 2))
		return return_value

	# 5.3.2 Shear for plane panel
	# 5.3.1 Compression and bending for plane panel
	def critical_buckling_stress(s0, sE):

		if sE <= s0/2:
			return_value = sE
		else:
			return_value = s0 *(1-s0/(4*sE))

		return return_value
