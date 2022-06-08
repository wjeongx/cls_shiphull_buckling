using System
using System.Collections.Generic
using System.Linq
using System.Text
using System.Threading.Tasks
using System.Windows.Forms

namespace COLBUCK

    class SectionProperty
    
        private int SecType
        public int SectionType
        
            set
            
                SecType = value
            
        

        private H
        def SectionalHeight
        
            set
            
                H = value
            
        

        private B
        def SectionalBreadth
        
            set
            
                B = value
            
        

        private t1
        def WebThick
        
            set
            
                t1 = value
            
        

        private t2
        def FlangeThick
        
            set
            
                t2 = value
            
        

        def Sectional_Area()
        
            SA = 0

            switch (SecType)
            
                elif == 1:
                    ID = H - 2 * B
                    OD = H
                    SA = math.Pow(OD, 2) * math.PI / 4 - math.Pow(ID, 2) * math.PI / 4
                    
                elif == 2:
                    SA = H * B - (H - 2 * t2) * (B - 2 * t1)
                    
                elif == 3:
                    SA = (H - 2 * t2) * t1 + 2 * B * t2
                    
                elif == 4:
                    SA = H
                    
            

            return SA / 100
        

        def INERTIA_IXX():
            if SecType = 1:
                ID = H - 2 * B
                OD = H
                IXX = math.PI * math.Pow(OD, 4) / 64 - math.PI * math.Pow(ID, 4) / 64
            elif SecType = 2:
                IXX = B * math.Pow(H, 3) / 12 - (B - 2 * t1) * math.Pow(H - 2 * t2, 3) / 12
            
            elif SecType = 3:
                IXX = B * math.Pow(H, 3) / 12 - 2 * (((B - t1) / 2) * math.Pow(H - 2 * t2, 3)) / 12

            elif SecType = 4:
                IXX = B

            return IXX * math.Pow(10, -4)


        def INERTIA_IYY():

            if SecType == 1:
                ID = H - 2 * B
                OD = H
                IYY = math.PI * math.Pow(OD, 4) / 64 - math.PI * math.Pow(ID, 4) / 64
            
            elif SecType == 2:
                IYY = (math.Pow(B, 3) * H - math.Pow(B - 2 * t1, 3) * (H - 2 * t2)) / 12

            elif SecType == 3:
                IYY = (2 * math.Pow(B, 3) * t2 + (H - 2 * t2) * math.Pow(t1, 3)) / 12
            
            elif SecType == 4:
                IYY = t1

            return IYY * math.Pow(10, -4)


        def Venants_inertia_moment():
            
            Isv = 0
            
            if SecType == 1:
                t = B
                R = (H - 2 * t) / 2
                Isv = 2 * math.PI * math.Pow(R, 3) * t
            
            elif SecType == 2:
                dw = H - t2
                bf = B - t1
                Isv = 4 * math.Pow(dw, 2) * math.Pow(bf, 2) / (2 * dw / t1 + 2 * bf / t2)
                    
            elif SecType == 3:
                dwt = H - t2
                Isv = (2 * B * math.Pow(t2, 3) + dwt * math.Pow(t1, 3))/3
                    
            elif SecType == 4:
                    

            return Isv * math.Pow(10, -4)

        def Sectorial_inertia_moment():
        
            Cwarp = 0
            if SecType == 1: Cwarp = 0 
            elif SecType == 2: Cwarp = 0 
            elif SecType == 3:
                dwt = H - t2
                Cwarp = math.Pow(dwt, 2) * math.Pow(B, 3) * t2 / 24
                    
            elif SecType == 4: 
            

            return Cwarp * math.Pow(10, -6)
        

        def INERTIA_POLAR(x0, y0):
        
            SA = Sectional_Area() 
            IXX = INERTIA_IXX()
            IYY = INERTIA_IYY()
 
            IPOL = IXX + IYY + SA * ( math.Pow(x0,2) + math.Pow(y0,2))

            return IPOL
        

        def gyration_radius(string Axis):
        

            SA = Sectional_Area()
            IXX = INERTIA_IXX()
            IYY = INERTIA_IYY()
            K = 0

            if (Axis == "X")
            
                K = math.Sqrt(IXX / SA)
            
            else if(Axis == "Y")
            
                K = math.Sqrt(IYY / SA)
            

            return K
        
    





using System
using System.Collections.Generic
using System.Linq
using System.Text
using System.Threading.Tasks
using System.Windows.Forms

namespace COLBUCK

    class ColumnBuckling
    
        private E
        def ElasticModulus
        
            set
            
                E = value
            
        

        private G
        def ShearModulus
        
            set
            
                G = value
            
        

        private ReH
        def YieldStress
        
            set
            
                ReH = value
            
        

        private Le
        def UneffectiveLength
        
            set
            
                Le = value
            
        

        private Leff_K
        def EffectiveLengthFactor
        
            set
            
                Leff_K = value
            
        

        # ACP = Axial Compressive Force, in kN
        # SA = Sectional Area, in cm^2
        def CompressiveAxialStress(ACP, SA) 
        
            # Axial Compressive Load
            value = ACP*10 / SA
            return value
        

        def CritcalBucklingStress(s_EC) # s_CR
        
            value = 0

            if (s_EC <= 0.5 * ReH)
            
                value = s_EC
            
            else if (s_EC > 0.5 * ReH)
            
                value = (1 - ReH / (4 * s_EC)) * ReH
            

            return value
        

        # INA = Inertia Moment in cm^4
        def EulerBucklingStress(INA, SA)  # s_EC
        
            
            value = math.Pow(math.PI, 2) * E * INA / (SA * math.Pow(Leff_K * Le, 2))

            return value * math.Pow(10, -4)
        

        def TorsionalBucklingStress(Ip, Isv, Cwarp)  # s_ET
        

            value = (G * Isv / Ip) + (math.Pow(math.PI, 2) * E * Cwarp* math.Pow(10, -4) / (Ip * math.Pow(Leff_K * Le, 2)))

            return value
        

        def TorionalColumnBucklingStress(INA, SA, Zeta, Ip, Isv, Cwarp)  # s_ETF
        
            s_EC = EulerBucklingStress(INA, SA)
            s_ET = TorsionalBucklingStress(Ip, Isv, Cwarp)

            s_ETF = (1 / (2 * Zeta)) * ((s_EC + s_ET) - math.Sqrt(math.Pow(s_EC + s_ET, 2) - 4 * Zeta * s_EC * s_ET))

            return s_ETF
        


namespace COLBUCK

        private void btnDNVCalc_Click(object sender, EventArgs e)
        
            Excel.Application xApp = this.Application

            SectionProperty Prop = new SectionProperty()

            Prop.SectionType = Convert.ToInt16(xApp.Cells[9, 4].value)
            Prop.SectionalHeight = xApp.Cells[8, 7].value
            Prop.SectionalBreadth = xApp.Cells[9, 7].value

            if (xApp.Cells[10, 7].value != null)
            
                Prop.WebThick = xApp.Cells[10, 7].value
            

            if (xApp.Cells[11, 7].value != null)
            
                Prop.FlangeThick = xApp.Cells[11, 7].value
            

            int iRow = 21
            int iCol1 = 5
            int iCol2 = 9
            SA = Prop.Sectional_Area()
            xApp.Cells[iRow, iCol1] = SA
            NAX = xApp.Cells[iRow+1, iCol1].value
            NAY = xApp.Cells[iRow + 2, iCol1].value
            SCX = xApp.Cells[iRow + 3, iCol1].value
            SCY = xApp.Cells[iRow + 4, iCol1].value

            IXX = Prop.INERTIA_IXX()
            IYY = Prop.INERTIA_IYY()
            xApp.Cells[iRow, iCol2] = IXX
            xApp.Cells[iRow + 1, iCol2] = IYY
            KXX = Prop.gyration_radius("X")
            KYY = Prop.gyration_radius("Y")
            xApp.Cells[iRow + 2, iCol2] = KXX
            xApp.Cells[iRow + 3, iCol2] = KYY

            X0 = math.Abs(NAX - SCX)/10
            Y0 = math.Abs(NAY - SCY)/10
            Ip = Prop.INERTIA_POLAR(X0, Y0)
            xApp.Cells[iRow + 4, iCol2] = Ip
            Isv = Prop.Venants_inertia_moment()     # Isv, in cm^4
            xApp.Cells[iRow + 5, iCol2] = Isv
            Cwarp = Prop.Sectorial_inertia_moment()  # Cwarp, in cm^6
            xApp.Cells[iRow + 6, iCol2] = Cwarp

            Lpil = xApp.Cells[10, 4].value
            E = xApp.Cells[12, 4].value
            G = xApp.Cells[14, 4].value
            ReH = xApp.Cells[15, 4].value
            VF = xApp.Cells[16, 4].value
            Leff_k = xApp.Cells[17, 4].value
            string load_scenario = xApp.Cells[18, 4].value
            
            Zeta = 1 - (math.Pow(X0,2) + math.Pow(Y0,2) * SA) / Ip 

            # Result
            ColumnBuckling cb = new ColumnBuckling()
            UFa = 0
            int idx = 29
            int j = 6
            xApp.Cells[idx + 1, j] = Leff_k
            xApp.Cells[idx + 2, j] = Zeta

            if load_scenario == "static": UFa = 0.65 
                elif load_scenario == "static+dyna.": UFa = 0.75 
                elif load_scenario == "accidental": UFa = 0.75 
                elif load_scenario == "tank test": UFa = 0.75 
            

            xApp.Cells[idx + 3, j] = UFa
            s_AV = cb.CompressiveAxialStress(VF, SA)
            xApp.Cells[idx + 4, j] = s_AV
                        
            cb.UneffectiveLength = Lpil
            cb.ElasticModulus = E
            cb.ShearModulus = G
            cb.EffectiveLengthFactor = Leff_k
            cb.YieldStress = ReH

            # Elastic Compressive Buckling Stress
            s_ECxx = cb.EulerBucklingStress(IXX, SA)
            s_ECyy = cb.EulerBucklingStress(IYY, SA)
            # Critical Compressive Buckling Stress 
            s_ECRxx = cb.CritcalBucklingStress(s_ECxx)
            s_ECRyy = cb.CritcalBucklingStress(s_ECyy)

            # Torsional Buckling Stress
            s_ETxx = cb.TorsionalBucklingStress(Ip, Isv, Cwarp)
            s_ETyy = cb.TorsionalBucklingStress(Ip, Isv, Cwarp)
            # Critical torsional Buckling Stress
            s_ETRxx = cb.CritcalBucklingStress(s_ETxx)
            s_ETRyy = cb.CritcalBucklingStress(s_ETyy)

            # Torsional column Buckling Stress
            s_ETFxx = cb.TorionalColumnBucklingStress(IXX, SA, Zeta, Ip, Isv, Cwarp)
            s_ETFyy = cb.TorionalColumnBucklingStress(IYY, SA, Zeta, Ip, Isv, Cwarp)
            # Crical torsional column Buckling Stress
            s_ETFRxx = cb.CritcalBucklingStress(s_ETFxx)
            s_ETFRyy = cb.CritcalBucklingStress(s_ETFyy)

            xApp.Cells[idx + 6, 6] = s_ECxx            xApp.Cells[idx + 6, 8] = s_ECyy
            xApp.Cells[idx + 7, 6] = s_ECRxx           xApp.Cells[idx + 7, 8] = s_ECRyy
            UF1X = s_AV / s_ECRxx
            UF1Y = s_AV / s_ECRyy
            xApp.Cells[idx + 8, 6] = UF1X
            xApp.Cells[idx + 8, 8] = UF1Y

            xApp.Cells[idx + 9, 6] = s_ETxx            xApp.Cells[idx + 9, 8] = s_ETyy
            xApp.Cells[idx + 10, 6] = s_ETRxx          xApp.Cells[idx + 10, 8] = s_ETRyy
            UF2X = s_AV / s_ETRxx
            UF2Y = s_AV / s_ETRyy
            xApp.Cells[idx + 11, 6] = UF2X
            xApp.Cells[idx + 11, 8] = UF2Y

            xApp.Cells[idx + 12, 6] = s_ETFxx           xApp.Cells[idx + 12, 8] = s_ETFyy
            xApp.Cells[idx + 13, 6] = s_ETFRxx          xApp.Cells[idx + 13, 8] = s_ETFRyy
            UF3X = s_AV / s_ETFRxx
            UF3Y = s_AV / s_ETFRyy
            xApp.Cells[idx + 14, 6] = UF3X
            xApp.Cells[idx + 14, 8] = UF3Y

            if(UF1X <= UFa & UF2X <= UFa & UF3X <= UFa)
            
                xApp.Cells[idx + 15, 6] = "OK"
            
            else
            
                xApp.Cells[idx + 15, 6] = "N.A"
            

            if (UF1Y <= UFa & UF2Y <= UFa & UF3Y <= UFa)
            
                xApp.Cells[idx + 15, 8] = "OK"
            
            else
            
                xApp.Cells[idx + 15, 8] = "N.A"
            

            # Compressive Buckling Evaluation
            # xApp.Cells[idx + 8, 7] = "=G32/G35"
            # xApp.Cells[idx + 8, 9] = "=G32/I35"

            # xApp.Cells[idx + 9, 7] = "=IF(G36 < 1,\"OK\", \"N.A\")"
            # xApp.Cells[idx + 9, 9] = "=IF(I36 < 1,\"OK\", \"N.A\")"

        

        private void Sheet4_Print_Area_Change_1(Excel.Range Target)
        

        

        private void Sheet4_Print_Area_Change_2(Excel.Range Target)
        

        
    

