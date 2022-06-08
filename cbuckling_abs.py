# Buckling - class abs.py
# ABS GUIDE FOR BUCKLING AND ULTIMATE STRENGTH ASSESSMENT FOR OFFSHORE STRUCTURE
from logging import critical
import math as mth

from .cbuckling_common import buckling_common

class abs(buckling_common):
	lcf = 1.0  # loading condition factor 0.6 for Operatinh, 0.8 for extreme, 1.0 for anything else
	PR = 0.6
	C1= 1.0
	C2= 1.0

	def __init__(self, sx, sy, sxy, kapax, kapay):
		self.sx = sx
		self.sy = sy
		self. sxy = sxy
		self.kapax = kapax
		self.kapay = kapay

# For loading applied along the short edge of the plating (long plate)
	def ksx(self):

		kapa = self.kapax
		
		if 0 <= kapa <= 1:
			ks = 8.4 / (kapa + 1.1)
		
		elif -1 < kapa < 0:
			ks = 7.63 - 6.4 * kapa + 10 * pow(kapa,2)
			
		return ks * abs.C1

# For loading applied along the long edge of the plating (wide plate)
	def ksy(self):
		
		alpha = abs.l / abs.s
		kapa = self.kapay

		if kapa < 1/3 and 1 <= alpha <= 2:
			ks = 1.0875 * pow(1 + 1 / pow(alpha,2), 2) - 18 / pow(alpha,2) * (1 + kapa) + 24 / pow(alpha, 2)
		elif kapa < 1/3 and alpha > 2:
			ks = pow(1.0875 * (1 + 1 / pow(alpha,2)),2) - 9 / pow(alpha,2) * (1 + kapa) + 12 / pow(alpha ,2)
		elif kapa >= 1 / 3:
			ks = pow(1 + 1 / pow(alpha,2),2) * (1.675 - 0.675 * kapa)
    
		return ks * abs.C2

	def kst(self):

		ks = (4 * pow(abs.s / abs.l, 2) + 5.34)
		
		return abs.C1 * ks

	def sex(self):
		return abs.ksx() * abs.Euler_Buckling_Stress()
	
	def sey(self):
		return abs.ksy() * abs.Euler_Buckling_Stress()

	def sexy(self):
		return abs.kst() * abs.Euler_Buckling_Stress()


	def critical_buckling_stress(fy, se):		
		PR = abs.PR
	
		if se <= PR*fy:
			result = se
		else:
			result = fy *(1-PR*(1-PR)*(fy/se))
		
		return result

	def scx(self):
		
		fy = abs.fy
		sex = abs.sex()
		result = abs.critical_buckling_stress(fy, sex)

		return result
	
	def scy(self):
		
		fy = abs.fy
		sey = abs.sey()
		result = abs.critical_buckling_stress(fy, sey)

		return result

	def sct(self):

		fy = abs.fy/mth.sqrt(3)

		sexy = abs.sexy()
		result = abs.critical_buckling_stress(fy, sexy)
		
		return result


	def assessment(self):

		sx = self.sx
		sy = self.sy
		sxy = self.sxy

		scx = abs.scx()
		scy = abs.scy()
		sct = abs.sct()

		h = abs.lcf # eta

		result = pow(sx/(h*scx),2) + pow(sy/(h*scy),2) + pow(sxy/(h*sct),2)      		

		return result
