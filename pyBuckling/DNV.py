# DNV.py
# DNVGL-RP-C201 (2010)
import math as mth
from pyBuckling import Basic

material = ''
gm = 0.0
thk = 0.0
a = 0.0
b = 0.0

# CH6.4, Eq 6.14
def resistance_tRd(material, fy):

	t0 = fy/mth.sqrt(3)
	Ct = coefficient_Ct(material, fy)

	tRd = Ct/gm * t0
		
	return tRd

# 6.4  Buckling of unstiffened plate with shear
# eq 6.15
def coefficient_Ct(material, fy):
	Lw = slenderness_Lw(material, fy)
	if Lw <= 0.8:
		Ct = 1.0
	elif Lw > 0.8 and Lw <= 1.2:
		Ct = 1.0-0.625*(Lw - 0.8)
	else:
		Ct = 0.9/Lw

	return Ct

# eq 6.16
def slenderness_Lw(material, fy):
		EM = Basic.ElasticModulus(material)

		kl = reduction_factor_kl()

		Lw = 0.795 * (a / thk) * mth.sqrt(fy / (EM*kl))

		return Lw

# eq 6.17
def reduction_factor_kl():

	if b > a:
		kl = 5.34 + 4 *pow(a/b,2)
	else:
		kl = 5.34*pow(a/b,2) + 4

	return kl

# 6.2  Buckling of unstiffened plates under longitudinally uniform compression
# eq.(6.1)
def resistance_sxRd(material, fy):
	Cx = coefficient_Cx(material, fy)
	print("Cx = " + str(Cx))	
	sxRd = Cx*fy/gm

	return sxRd

# eq.(6.2)
def coefficient_Cx(material, fy):
	Lp = plate_slenderness_Lp(material, fy)
	if Lp <= 0.673:
		Cx = 1
	else:
		Cx = (Lp-0.22)/mth.pow(Lp, 2)

	return Cx

def plate_slenderness_Lp(material, fy):
	EM = Basic.ElasticModulus(material)

	Lp = 0.525 * (a / thk) * mth.sqrt(fy / EM)

	return Lp	

# 	6.3  Buckling of unstiffened plates with transverse compression 	
# eq.(6.5)
def resistance_syRd(psd):
	syR = resistance_syR(fy)
	syRd = syR/gm
	return syRd

# eq.(6.6)
def resistance_syR(fy):
		EM = Basic.ElasticModulus(material)
		kp = reduction_factor_kp(1)
		k = kappa()

		syR = ((1.3 * thk) / b * mth.sqrt(EM / fy) + k * (1 - (1.3 * thk / b) * mth.sqrt(EM / fy))) * fy * kp

		return syR

# eq.(6.7)
def kappa(fy):
	EM = Basic.ElasticModulus(material)
	Lc = 1.1 * (a / thk) * mth.sqrt(fy / EM)	# eq.(6.8)
	mu = 0.21*(Lc-0.2)	# eq.(6.9)
	
	if Lc <= 0.2:
		k = 1.0
	elif Lc > 0.2 and Lc < 2.0:
		k = 1 / (2 * mth.pow(Lc,2)) * (1 + mu + mth.pow(Lc,2) - mth.sqrt(pow(1 + mu + pow(Lc,2), 2) - 4 * pow(Lc,2)))
	else:
		k = 1 / (2 * pow(Lc,2)) + 0.07
		
	return k

def reduction_factor_kp(Psd, fy):

	print(2*mth.pow(thk/a,2)*fy)
	if Psd <= 2*mth.pow(thk/a,2)*fy:
		kp = 1.0
	else:
		ha = 0.05*self.s/self.tnet - 0.75
		if ha < 0:
			ha = 0
			kp = 1.0 - ha*(Psd/fy - 2*pow(thk/a,2))
		
	return kp

	





	




# 6.5  Buckling of unstiffened biaxially loaded plates with shear

	def Checking_Criteria(self):
		psd = 0
		sigmax_Rd = self.resistance_sigmax_Rd()
		sigmay_Rd = self.resistance_sigmay_Rd(psd)
		tau_Rd = self.resistance_tau_Rd()
		ci = self.coefficient_Ci()

		unity_check = pow(self.sigma_x/sigmax_Rd,2)+pow(self.sigma_y/sigmay_Rd,2) - ci*(self.sigma_x/sigmax_Rd)*(self.sigma_y/sigmay_Rd)+pow(self.tau/tau_Rd,2)

		return unity_check

	def coefficient_Ci(self):
		if (self.s/self.tnet) <= 120:
			ci = 1- self.s/(120*self.tnet)
		else:
			ci = 0
			
	#		If either of σx,Sd and σy,Sd or both is in tension (positive), then ci = 1.0.
		if self.sigma_x > 0 and self.sigma_y > 0:
			ci = 1.0

		return ci

