# BV NR467 Part-B
from math import *

gamma_m = 1.02
gamma_r = 1.10

class bvBuckling:
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
	
	def PoissonRatio(self):
        	NU = {'STL': 0.3,'ALU': 0.4,'SUS': 0.5}
        	return NU[self.material]

	def ElasticModulus(self):
        	EM = {'STL': 206000, 'ALU': 2.06e7, 'SUS': 2.06e8 }
        	return EM[self.material]  

	def YieldStress(self):
		sigmay = {'MILD': 235, 'HT32':315, 'HT36':355, 'HT40': 390 }
		return sigmay[self.matclass]
	
# 5.4.5 Bi-axial compression, taking account of shear stress
	def Checking_Criteria(self):
		sigma_cx = self.Critical_Buckling_stress_sigca()
		sigma_cy = self.Critical_Buckling_stress_sigcb()
		tau_c = self.Critical_Buckling_stress_tauc()
		return_value = pow(fabs(gamma_m*gamma_r*self.sigma_x/sigma_cx),1.9) + pow(fabs(gamma_m*gamma_r*self.sigma_y/sigma_cy),1.9) + pow(fabs(gamma_m*gamma_r*self.tau/tau_c),1.9)
		return return_value

	def Euler_Buckling_Stress(self):
		young = self.ElasticModulus()
		PR = self.PoissonRatio()
		return_value = pow(pi,2) * young / (12 * (1 - PR*PR)) * pow(self.tnet / self.l,2)*pow(10,-6)
		return return_value

# 5.3.3 Bi-axial compression and shear for plane panel
	def Critical_Buckling_stress_sigca(self):
		sigma_0 = self.YieldStress()
		beta = self.Slenderness_Panel()
		sigma_ca = sigma_0 * (2.25/beta-1.25/pow(beta, 2))
		return sigma_ca

# 5.3.1 Compression and bending for plane panel
	def Critical_Buckling_stress_sigcb(self):
		K1 = self.Buckling_Factor_K1(1.0)
		epsilon = self.epsilon_boundary_factor()
		sigma_E = K1*self.Euler_Buckling_Stress()*epsilon
		sigma_0 = self.YieldStress()
		if sigma_E <= sigma_0/2:
			sigmacb = sigma_E
		else:
			sigmacb = sigma_0 *(1-sigma_0/(4*sigma_E))

		return sigmacb

# 5.3.2 Shear for plane panel
	def Critical_Buckling_stress_tauc(self):		
		K2 = self.Buckling_Factor_K2()
		tau_E = K2*self.Euler_Buckling_Stress()
		tau_0 = self.YieldStress()/sqrt(3)

		if tau_E <= tau_0/2:
			tauc = tau_E
		else:
			tauc = tau_0 *(1-tau_0/(4*tau_E))
		
		return tauc
		
	def Buckling_Factor_K1(self, psi):

		alpha = self.s/self.l

		if psi >= 0 and psi <= 1:
			if alpha >= 1:
				K1 = 8.4 /(psi+1.1)
			else:
				K1 = pow((alpha + 1 / alpha),2) * 2.1 / (psi + 1.1)
		
		return K1

	def Buckling_Factor_K2(self):
		alpha = self.s/self.l

		if alpha > 1:
			K2 = 5.34 + 4 / pow(alpha,2)
		else:
			K2 = 5.34 / pow(alpha,2)+ 4

		return K2

	def epsilon_boundary_factor(self):

		alpha = self.s/self.l
		
		if alpha >= 1:
			epsilon = {'FB':1.0, 'Bulb':1.0, 'Angle': 1.0, 'primary': 1.0 }
        
		elif alpha < 1:
			epsilon = {'FB':1.05, 'Bulb':1.1, 'Angle': 1.21, 'primary': 1.3 }
		else:
			epsilon = {'FB':1.0, 'Bulb':1.0, 'Angle': 1.0, 'primary': 1.0 }
		
		return epsilon[self.stiff_type]
		
	def Slenderness_Panel(self):
		
		ReH = self.YieldStress()
		ELM = self.ElasticModulus()
		Beta = 1e3*(self.s/self.tnet)*sqrt(ReH / ELM)

		return Beta

Bk = bvBuckling()
Bk.material = 'STL'
Bk.matclass = 'MILD'
Bk.stiff_type = 'FB'	# 'FB', 'Bulb','Angle' <=Angle including T-Bar, 'primary'
Bk.l = 1.0
Bk.s = 0.8
Bk.tnet = 8.5
Bk.sigma_x = -32.71
Bk.sigma_y = -40.29
Bk.tau = 7.76
print(Bk.material)
print(Bk.PoissonRatio())
print(Bk.ElasticModulus())
# for Bending
K1 = Bk.Buckling_Factor_K1(1.0)
print("K1 =" + str(K1))

# For Shear
K2 = Bk.Buckling_Factor_K2()
print("K2 =" + str(K2))

epsilon = Bk.epsilon_boundary_factor()
print(K1*Bk.Euler_Buckling_Stress()*epsilon)
print(K2*Bk.Euler_Buckling_Stress())

print(Bk.Slenderness_Panel())

print(Bk.Critical_Buckling_stress_sigca())
print(Bk.Critical_Buckling_stress_sigcb())
print(Bk.Critical_Buckling_stress_tauc())

print(Bk.Checking_Criteria())
