import math

############################### BV ###########################################

def factor_k1(psi, alpha):

	if psi >= 0 and psi <= 1:
		if alpha >= 1:
			k1 = 8.4 / (psi + 1.1)
        
        elif alpha < 1:
            
            k1 = (alpha + 1 / alpha) ^ 2 * 2.1 / (psi + 1.1)
	
	return k1

def factor_k2(alpha):

	if alpha > 1:
		k2 = 5.34 + 4 / alpha ^ 2
        
    elif alpha <= 1:
    	k2 = 5.34 / alpha ^ 2 + 4
        
    return k2

def Slenderness_Panel(ELAS, ReH, t, SPACE):
	
	slenderness = SPACE / t * mth.sqrt(ReH / ELAS)

def Coefficient_Epsilon(STIFF, alpha):
	if alpha >= 1:
		epsilon = 1.0
	elif alpha < 1:
        if STIFF = "Flat Bar":
            epsilon = 1.05
        elif STIFF = "Bulb":
            epsilon = 1.1
        elif STIFF = "Angle":
            epsilon = 1.21
        elif STIFF = "Primary":
            epsilon = 1.3

    return epsilon
    
def Euler_Buckling_Stress(ELAS, PoiR, tnet, SPACE, SPAN, FK):

	Euler_Stress = math.pow(math.pi,2) * ELAS / (12*(1-math.pow(PoiR,2))) * math.pow(tnet / SPAN, 2) * FK

	return Euler_Stress

def Critical_Buckling_Stress(ReH, Pr, Euler_Buckling_Stress):
	EBS = Euler_Buckling_Stress

	if EBS <= Pr * ReH :
		CBS = EBS
	
	elif EBS > Pr * ReH :
    
    	CBS = ReH * (1 - Pr * (1 - Pr) * ReH / EBS)

	Critical_Buckling_Stress = CBS

def Critical_Shear_Buckling_Stress(ReH, Pr, Euler_Buckling_Stress):

	EBS = Euler_Buckling_Stress

	if EBS <= Pr * ReH :
    
    	CBS = EBS

	elif EBS > Pr * ReH:
    
    	CBS = ReH * (1 - Pr * (1 - Pr) * ReH / EBS)

	Critical_Shear_Buckling_Stress = CBS


####################################### ABS ###################################
def stress_reduction(sigxy , sigyx ):

	stress_reduction = (sigxy - 0.3 * sigyx) / 0.91



def Buckling_Factor_ksx(C1 , kapa ):

	if kapa <= 1 and kapa >= 0:
    	ks = 8.4 / (kapa + 1.1)
	elif kapa < 0 and kapa > -1:
    	ks = 7.63 - 6.4 * kapa + 10 * math.pow(kapa,2)

	Buckling_Factor_ksx = C1 * ks

def Buckling_Factor_ksy(SPAN , SPACE , C2 , kapa ):

	alpha = SPAN / SPACE

 	If kapa < 1 / 3 and alpha >= 1 and alpha <= 2 :
    	ks = (1.0875 * math.pow((1 + 1 / math.pow(alpha,2)), 2) - 18 / math.pow(alpha,2)) * (1 + kapa) + 24 / math.pow(alpha,2)
	elif kapa < 1 / 3 and alpha > 2 :
    	ks = (1.0875 * math.pow((1 + 1 / math.pow(alpha,2)), 2) - 9 / math.pow(alpha,2)) * (1 + kapa) + 12 / math.pow(alpha,2)
	elif kapa >= 1 / 3:
    	ks = math.pow((1 + 1 / math.pow(alpha,2)), 2) * (1.675 - 0.675 * kapa)
    
	Buckling_Factor_ksy = ks * C2

def Buckling_Factor_kst(SPAN , SPACE , C1 ):

    ks = (4 * math.pow((SPACE / SPAN), 2) + 5.34)

	Buckling_Factor_kst = C1 * ks



def  Elastic_Buckling_Stress(ELAS , PoiR , ks , tnet , SPACE ):

    Elastic_Buckling_Stress = ks * (((PI ^ 2 * ELAS) / (12 * (1 - math.pow(PoiR,2)))) * math.pow((tnet / SPACE),2))


def  Buckling_Factor_ksbL(C1 ):
    
    Buckling_Factor_ksbL = 24 * C1


def  Buckling_Factor_ksbT(SPAN , SPACE , C2 ):
    
    alpha = SPACE / SPAN
    
    if SPAN / SPACE >= 1.0 And SPAN / SPACE <= 2.0 :
        ks = 24 * math.pow(alpha, 2) * C2
    elif SPAN / SPACE > 2.0 :
        ks = 12 * alpha * C2
    
    Buckling_Factor_ksbT = ks

##################### Common ###########################################
def Critical_Buckling_Stress(ReH, Pr, EBS):

    if EBS <= Pr * ReH :
        CBS = EBS
    elif EBS > Pr * ReH :
        CBS = ReH * (1 - Pr * (1 - Pr) * ReH / EBS)
    
    Critical_Buckling_Stress = CBS





