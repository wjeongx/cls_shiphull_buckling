import math

def Euler_Buckling_Stress(ELAS, PoiR, tnet, SPACE, SPAN, FK):

	Euler_Stress = math.pow(math.pi,2) * ELAS / (12*(1-math.pow(PoiR,2))) * math.pow(tnet / SPAN, 2) * FK

	return Euler_Stress



