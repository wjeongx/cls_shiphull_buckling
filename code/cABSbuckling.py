# ABS GUIDE FOR BUCKLING AND ULTIMATE STRENGTH ASSESSMENT FOR OFFSHORE STRUCTURE
from math import *

class absBuckling:
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
		self.kappa = 1.0
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

# Pr = proportional linear elastic limit of the structure, which may be taken as 0.6 for steel	
	def proportional_linear_elastic_limit(self):
		Pr = {'STL': 0.6,'ALU': 0.6,'SUS': 0.6}

		return Pr[self.material]

	def epsilon_boundary_factor(self):

		alpha = self.s/self.l
		
		if alpha >= 1:
			epsilon = {'FB':1.0, 'Bulb':1.0, 'Angle': 1.0, 'primary': 1.0 }
        
		elif alpha < 1:
			epsilon = {'FB':1.05, 'Bulb':1.1, 'Angle': 1.21, 'primary': 1.3 }
		else:
			epsilon = {'FB':1.0, 'Bulb':1.0, 'Angle': 1.0, 'primary': 1.0 }
		
		return epsilon[self.stiff_type]

	def Euler_Buckling_Stress(self):
		young = self.ElasticModulus()
		PR = self.PoissonRatio()
		return_value = pow(pi,2) * young / (12 * (1 - PR*PR)) * pow(self.tnet / self.s,2)
		
		return return_value

# 3.1.1  Critical Buckling Stress for Edge Shear 
	def Critical_Buckling_stress_tauc(self):		

		kst = self.Boudary_Dependent_Constant_kst()
		tau_E = kst*self.Euler_Buckling_Stress()
		tau_0 = self.YieldStress()/sqrt(3)
		Pr = self.proportional_linear_elastic_limit()

		if tau_E <= Pr*tau_0:
			tauc = tau_E
		else:
			tauc = tau_0 *(1-Pr*(1-Pr)*(tau_0/tau_E))
		
		return tauc
		 
	def Boudary_Dependent_Constant_kst(self):

		alpha = self.s/self.l
		self.C1 = 1.1

		kst = (4.0*pow(alpha,2)+ 5.34)*self.C1
		
		return kst

#============================================================
# 3.1.2  Critical Buckling Stress for Uniaxial Compression and In-plane Bending	
	def Critical_Buckling_stress_sigmac(self, ks):		

		sigma_E = ks*self.Euler_Buckling_Stress()
		
		Pr = self.proportional_linear_elastic_limit()

		sigma_0 = self.YieldStress()
		
		if sigma_E <= Pr*sigma_0:
			sigma_c = sigma_E
		else:
			sigma_c = sigma_0 *(1-Pr*(1-Pr)*(sigma_0/sigma_E))
		
		return sigma_c

# For loading applied along the short edge of the plating (long plate)
	def Boudary_Dependent_Constant_ksa(self):

		if self.kappa >= 0 and self.kappa <= 1:
			ksa = self.C1*(8.4 /(self.kappa + 1.1))
		elif self.kappa >= -1 and self.kappa < 0:
			ksa = self.C1*(7.6 - 6.4*self.kappa + 10*pow(self.kappa,2))

		return ksa

# For loading applied along the long edge of the plating (wide plate)
	def Boudary_Dependent_Constant_ksb(self):

		alpha = self.l/self.s

		if self.kappa < 1/3 and self.kappa >= 1 and self.kappa <= 2:
			ksb = self.C2 * (1.0875*pow(1+1/pow(alpha,2),2)-18/pow(alpha, 2)*(1+self.kappa)+24/pow(alpha, 3))
		elif self.kappa < 1/3 and alpha > 2:
			ksb = self.C2 * (1.0875*pow(1+1/pow(alpha,2),2)-9/pow(alpha, 2)*(1+self.kappa)+12/pow(alpha, 3))
		elif self.kappa >= 1/3:
			ksb = self.C2 * (pow(1+1/pow(alpha,2),2)*(1.675 - 0.675*self.kappa))
			
		return ksb
	
#	3.1  Buckling State Limit	
	def Checking_Criteria(self):
		ksa = Bk.Boudary_Dependent_Constant_ksa()
		ksb = Bk.Boudary_Dependent_Constant_ksb()
		kst = Bk.Boudary_Dependent_Constant_kst()		
		sigma_cx = self.Critical_Buckling_stress_sigmac(ksa)
		sigma_cy = self.Critical_Buckling_stress_sigmac(ksb)
		tau_c = self.Critical_Buckling_stress_tauc()
		eta = 0.6
		return_value = pow(self.sigma_x/(eta*sigma_cx),2) + pow(self.sigma_y/(eta*sigma_cy),2) + pow(self.tau/(eta*tau_c),2)
		return return_value


Bk = absBuckling()
Bk.material = 'STL'
Bk.matclass = 'MILD'
Bk.stiff_type = 'FB'	# 'FB', 'Bulb','Angle' <=Angle including T-Bar, 'primary'
Bk.l = 2890
Bk.s = 820
Bk.tnet = 10.5
Bk.sigma_x = -2.05
Bk.sigma_y = -0.0
Bk.tau = 86.27
print(Bk.material)
print(Bk.PoissonRatio())
print(Bk.ElasticModulus())
print(Bk.proportional_linear_elastic_limit())
print(Bk.YieldStress())
print(Bk.tnet)
print(Bk.l)
print(Bk.s)
print(Bk.sigma_x)
print(Bk.sigma_y)
print(Bk.tau)
print(Bk.C1)
print(Bk.C2)
print(Bk.eta)
print(Bk.epsilon_boundary_factor())
ksa = Bk.Boudary_Dependent_Constant_ksa()
ksb = Bk.Boudary_Dependent_Constant_ksb()
kst = Bk.Boudary_Dependent_Constant_kst()
print(ksa)
print(ksb)
print(kst)
print(Bk.Critical_Buckling_stress_sigmac(ksa))
print(Bk.Critical_Buckling_stress_sigmac(ksb))
print(Bk.Critical_Buckling_stress_tauc())
print(Bk.Checking_Criteria())



