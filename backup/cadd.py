import math

class bvBuckling:
	def __init__(self):
		self.material = ''                
		self.l = 0.
		self.s = 0.
		self.tnet = 0.


	def PoissonRatio(self):
            NU = {'STL': 0.3,'ALU': 0.4,'SUS': 0.5}
            return NU[self.material]

	def ElasticModulus(self):
                EM = {'STL': 2.06e6, 'ALU': 2.06e7, 'SUS': 2.06e8}
                return EM[self.material]            
	
	def YieldStress(self, MAT):
		sigmay = {'MILD': 235, 'HT32':315, 'HT36':355, 'HT40': 390 }
		return sigmay[MAT]

Bk = bvBuckling()
Bk.material = 'ALU'
print(Bk.PoissonRatio())
print(Bk.ElasticModulus())
print(Bk.YieldStress('MILD'))
