import math as mth
class cBuckling:
    lcf = 1.0  # loading condition factor 0.6 for Operatinh, 0.8 for extreme, 1.0 for anything else
    E = 206000. # in N, mm
    PR = 0.6
    v = 0.3
    fy = 355   # in N, mm
    thk = 0.0
    l = 0.  #  in mm
    s = 0.   #  in mm
    C1 = 1.0
    # C1 =  1.1 for plate panels between angles or tee stiffeners; 
    #       1.0 for plate panels between flat bars or bulb plates; 
    #       1.0 for plate elements, web plate of stiffeners and local plate of corrugated panels 
    C2 = 1.0
    # C2 =  1.2 for plate panels between angles or tee stiffeners; 
    #       1.1 for plate panels between flat bars or bulb plates; 
    #       1.0 for plate elements and web plates
    
    def __init__(self, sx, sy, txy):
        self.sx = sx
        self.sy = sy
        self.txy = txy
    
    def basic_elastic_buckling_stress(self):
        E = self.E
        v = self.v
        thk = self.thk
        b = self.s
        result = pow(mth.pi,2) * E/(12 * (1 - pow(v,2))) * pow(thk / b, 2)
    
        return result
    
    def ksx(self, kapa):
        if 0 <= kapa <= 1:
            ks = 8.4 / (kapa + 1.1)
        elif -1 < kapa < 0:
            ks = 7.63 - 6.4 * kapa + 10 * pow(kapa,2)

        return ks * self.C1

    def ksy(self, kapa):
        
        alpha = self.l / self.s

        if kapa < 1/3 and 1 <= alpha <= 2:
            ks = 1.0875 * pow(1 + 1 / pow(alpha,2), 2) - 18 / pow(alpha,2) * (1 + kapa) + 24 / pow(alpha, 2)
        elif kapa < 1/3 and alpha > 2:
            ks = pow(1.0875 * (1 + 1 / pow(alpha,2)),2) - 9 / pow(alpha,2) * (1 + kapa) + 12 / pow(alpha ,2)
        elif kapa >= 1 / 3:
            ks = pow(1 + 1 / pow(alpha,2),2) * (1.675 - 0.675 * kapa)
    
        return ks * self.C2

    def kst(self):
        ks = (4 * pow(self.s / self.l, 2) + 5.34)

        C1 = self.C1
        
        return C1 * ks
    
    def elastic_buckling_stress(self, component, kapa):
        
        if component == "xx":
            ks = self.ksx(kapa)
        elif component == "yy":
            ks = self.ksy(kapa)
        elif component == "xy":
            ks = self.kst()

        sEi = ks*self.basic_elastic_buckling_stress()

        return sEi
    
    def critical_buckling_stress(self, component, kapa):

        PR = self.PR

        if component == "xy":
            fy = self.fy/mth.sqrt(3)
        else:
            fy = self.fy

        sEi = self.elastic_buckling_stress(component, kapa)
        
        if sEi < PR*fy:
            sCi = sEi
        else:
            sCi = fy*(1-PR*(1-PR)*(fy/sEi))
        
        return sCi

    def buckling_limit_state(self):

        sx = self.sx
        sy = self.sy
        st = self.txy
        
        scx = self.critical_buckling_stress("xx", 1)
        scy = self.critical_buckling_stress("yy", 1)
        sct = self.critical_buckling_stress("xy", 1)
        
        h = self.lcf
        bus = mth.pow(sx/(h*scx),2)+mth.pow(sy/(h*scy),2)+mth.pow(st/(h*sct),2)
        
        return bus

a = cBuckling(42.2,42.3,29.8)
a.lcf = 0.8
a.thk = 14.25
a.l =2280
a.s = 900
a.C1 = 1.1
a.C2 = 1.0
ksx = a.ksx(1.0)
ksy = a.ksy(1.0)
kst = a.kst()
print(ksx)
print(ksy)
print("kst =", kst)
print(a.basic_elastic_buckling_stress())
sEx = a.elastic_buckling_stress("xx", 1.0)
sEy = a.elastic_buckling_stress("yy", 1.0)
sEt = a.elastic_buckling_stress("xy", 1.0)
print(sEx)
print(sEy)
print(sEt)
sCx = a.critical_buckling_stress("xx", 1.0)
sCy = a.critical_buckling_stress("yy", 1.0)
sCt = a.critical_buckling_stress("xy", 1.0)
print(sCx)
print(sCy)
print("sct =", sCt)
print("bus", a.buckling_limit_state())





# Pr = proportional linear elastic limit of the structure, which may be taken as 0.6 for steel
	

	
    



def critical_buckling_stress(s0, sE):		
	PR = abs_buckling.PR
	
	if sE <= PR*s0:
		sC = sE
	else:
		sC = s0 *(1-PR*(1-PR)*(s0/sE))
		
	return sC










