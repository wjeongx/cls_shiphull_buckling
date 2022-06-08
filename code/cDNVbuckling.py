# DNVGL-RP-C201
from math import *

class dnvBuckling:
	def __init__(self):
		self.material = ''  
		self.matclass = ''
		self.stiff_type = ''
		self.l = 0.
		self.s = 0.
		self.tnet = 0.
		self.sigma_x = 0.
		self.sigma_y = 0.
		self.tau = 0.
		self.gamma_M = 0.

		self.eta = 0.6
		self.C1 = 1.1
		self.C2 = 1.2

	def PoissonRatio(self):
        	NU = {'STL': 0.3,'ALU': 0.4,'SUS': 0.5}
        	return NU[self.material]

	def ElasticModulus(self):
        	EM = {'STL': 206000, 'ALU': 2.06e7, 'SUS': 2.06e8 }
        	return EM[self.material]  

	def YieldStress(self):
		sigmay = {'MILD': 235, 'HT32':315, 'HT36':355, 'HT40': 390 }
		return sigmay[self.matclass]

# 6.2  Buckling of unstiffened plates under longitudinally uniform compression
	def coefficient_Cx(self):
		lambda_p = self.plate_slenderness_lambda_p()
		if lambda_p <= 0.673:
			Cx = 1
		else:
			Cx = (lambda_p-0.22)/pow(lambda_p, 2)

		return Cx

	def plate_slenderness_lambda_p(self):
		EM = self.ElasticModulus()
		fy = self.YieldStress()
		lambda_p = 0.525 * (self.s / self.tnet) * sqrt(fy / EM)

		return lambda_p	

	def resistance_sigmax_Rd(self):
		fy = self.YieldStress()
		Cx = self.coefficient_Cx()
		sigmax_Rd = Cx*fy/(self.gamma_M)
		
		return sigmax_Rd

# 	6.3  Buckling of unstiffened plates with transverse compression 	
	def kappa(self):
		lambda_c = self.slenderness_lambda_c()
		mu = 0.21*(lambda_c-0.2)
		if lambda_c <= 0.2:
			k = 1.0
		elif lambda_c > 0.2 and lambda_c < 2.0:
			k = 1 / (2 * pow(lambda_c,2)) * (1 + mu + pow(lambda_c,2) - sqrt(pow(1 + mu + pow(lambda_c,2), 2) - 4 * pow(lambda_c,2)))
		else:
			k = 1 / (2 * pow(lambda_c,2)) + 0.07
		
		return k

	def slenderness_lambda_c(self):
		EM = self.ElasticModulus()
		fy = self.YieldStress()
		lambda_c = 1.1 * (self.s / self.tnet) * sqrt(fy / EM)

		return lambda_c

	def reduction_factor_kp(self,psd):
		fy = self.YieldStress()
		if psd <= 2*pow(self.tnet/self.s,2)*fy:
			kp = 1.0
		else:
			ha = 0.05*self.s/self.tnet - 0.75
			if ha < 0:
				ha = 0
			
			kp = 1.0 - ha*(psd/fy - 2*pow(self.tnet/self.s,2))
		
		return kp

	def resistance_sigmaR(self, psd):
		EM = self.ElasticModulus()
		fy = self.YieldStress()
		kp = self.reduction_factor_kp(psd)
		kappa = self.kappa()

		sigmaR = ((1.3 * self.tnet) / self.l * sqrt(EM / fy) + kappa * (1 - (1.3 * self.tnet / self.l) * sqrt(EM / fy))) * fy * kp

		return sigmaR

	def resistance_sigmay_Rd(self,psd):
		sigmaR = self.resistance_sigmaR(psd)
		sigmay_Rd = sigmaR/(self.gamma_M)
		return sigmay_Rd

# 6.4  Buckling of unstiffened plate with shear

	def coefficient_Ct(self):
		lambda_w = self.slenderness_lambda_w()
		if lambda_w <= 0.8:
			Ct = 1
		elif lambda_w > 0.8 and lambda_w <= 1.2:
			1.0-0.625*(lambda_w - 0.8)
			Ct = (lambda_p-0.22)/pow(lambda_p, 2)
		
		else:
			Ct = 0.9/lambda_w

		return Ct

	def slenderness_lambda_w(self):
		EM = self.ElasticModulus()
		fy = self.YieldStress()
		kl = self.reduction_factor_kl()
		lambda_w = 0.795 * (self.s / self.tnet) * sqrt(fy / (EM*kl))

		return lambda_w

	def reduction_factor_kl(self):

		if self.l > self.s:
			kl = 5.34 + 4 *pow(self.s/self.l,2)
		else:
			kl = 5.34*pow(self.s/self.l,2) + 4

		return kl

	def resistance_tau_Rd(self):
		fy = self.YieldStress()
		Ct = self.coefficient_Ct()
		tau_Rd = Ct*fy/((self.gamma_M)*sqrt(3))
		
		return tau_Rd

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

# 111
Bk = dnvBuckling()
Bk.material = 'STL'
Bk.matclass = 'HT32'
Bk.stiff_type = 'FB'	# 'FB', 'Bulb','Angle' <=Angle including T-Bar, 'primary'
Bk.l = 3000.0
Bk.s = 500.0
Bk.tnet = 13.9
Bk.sigma_x = -212.61
Bk.sigma_y = -10.6
Bk.tau = 18.61
Bk.gamma_M = 1.15
print(Bk.material)
print(Bk.PoissonRatio())
print(Bk.ElasticModulus())
print(Bk.YieldStress())
print(Bk.tnet)
print(Bk.l)
print(Bk.s)
print(Bk.sigma_x)
print(Bk.sigma_y)
print(Bk.tau)
print(Bk.gamma_M)
print(Bk.plate_slenderness_lambda_p())
print(Bk.kappa())
print(Bk.slenderness_lambda_c())
print(Bk.reduction_factor_kp(0))
print("sigmaR")
print(Bk.resistance_sigmaR(0))
# print(Bk.Checking_Criteria())
print(Bk.reduction_factor_kp(0))
print(Bk.reduction_factor_kl())
print(Bk.coefficient_Ct())
print(Bk.coefficient_Ci())
print(Bk.coefficient_Cx())
print(Bk.resistance_sigmax_Rd())
print(Bk.resistance_sigmay_Rd(0))
print(Bk.resistance_tau_Rd())
print(Bk.Checking_Criteria())