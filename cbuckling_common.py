# Buckling Basic Function
import math as mth

class buckling_common:
    E = 206000.
    Nu = 0.3
    fy = 0.0   # in MPa
    thk = 0.0    # in mm
    l = 0.  #  in mm
    s = 0.   #  in mm

    def __init__(self):
        pass

    def Euler_Buckling_Stress(self):
        E = buckling_common.E
        NU = buckling_common.Nu
        thk = buckling_common.thk
        b = buckling_common.s
        
        return_value = pow(mth.pi,2) * E / (12 * (1 - pow(NU,2))) * pow(thk / b,2)
		
        return return_value

