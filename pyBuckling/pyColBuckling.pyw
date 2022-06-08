from msilib.schema import ComboBox
import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QIcon, QColor, QPixmap
from PyQt5.QtCore import *

# QApplication, QWidget, QLabel, QTextEdit, QLineEdit, QComboBox


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle('My Application')
        self.move(300, 300)
        self.resize(800, 400)

        lblID = QLabel('Identification', self)
        lblLength = QLabel('Column Length  %52s (m)'%'', self)
        lblSectionalType = QLabel('Sectional Type', self)
        lblBuckledShape = QLabel('Buckled Shape', self)
        lblELF = QLabel('Effective Length Factor', self)
        lblElasticModulus = QLabel('Elastic Modulus  %50s (N/mm\u00b2)'%'', self)
        lblPoissonRatio = QLabel('Poisson Ratio', self)
        lblShearModulus = QLabel('Shear Modulus %52s (N/mm\u00b2)'%'', self)
        lblYieldStress = QLabel('Yield Stress %58s(N/mm\u00b2)'%'', self)
        lblCompressForce = QLabel('Compress Force %50s (kN)'%' ', self)
        lblLoadScenario = QLabel('Load Scenario', self)
        txtID = QLineEdit(self)
        cobSectionType = QComboBox(self)
        txtLength = QLineEdit(self)
        txtBuckledShape = QLineEdit(self)
        txtELF = QLineEdit(self)
        txtElasticModulus = QLineEdit(self)
        txtPoissonRatio = QLineEdit(self)
        txtShearModulus = QLineEdit(self)
        txtYieldStress = QLineEdit(self)
        txtCompressForce = QLineEdit(self)
        cobLoadScenario = QComboBox(self)
        cobLoadScenario.addItem('Static', self)
        cobLoadScenario.addItem('Static+Dynamic', self)
        cobLoadScenario.addItem('Accidental', self)
        cobLoadScenario.addItem('Tank Test', self)               

        yloc = 20
        xloc = 20
        xadd = 150
        lblID.move(xloc, yloc)
        txtID.move(xloc+xadd, yloc)
        yloc += 20
        lblSectionalType.move(xloc, yloc)
        cobSectionType.move(xloc+xadd, yloc)
        SectionItems = ['Tubular', 'Box', 'Welded Box',
                        'W-Shape', 'Channel', 'T-Bar', 'Double Angle']
        
        cobSectionType.addItems(SectionItems)
        # cobSectionType.addItem(QIcon('D:\PyProject\pyBuckling\img\Tubular.png'), 'Tubular')
        cobSectionType.resize(150,20)
        yloc += 20
        lblLength.move(xloc, yloc)
        txtLength.move(xloc+xadd, yloc), txtLength.resize(150, 20)
        yloc += 20
        lblBuckledShape.move(xloc, yloc)
        txtBuckledShape.move(xloc+xadd, yloc)
        yloc += 20
        lblELF.move(xloc, yloc)
        txtELF.move(xloc+xadd, yloc)
        yloc += 20
        lblElasticModulus.move(xloc, yloc)
        txtElasticModulus.move(xloc+xadd, yloc)
        yloc += 20
        lblPoissonRatio.move(xloc, yloc)
        txtPoissonRatio.move(xloc+xadd, yloc)
        yloc += 20
        lblShearModulus.move(xloc, yloc)
        txtShearModulus.move(xloc+xadd, yloc)
        yloc += 20
        lblYieldStress.move(xloc, yloc)
        txtYieldStress.move(xloc+xadd, yloc)
        yloc += 20
        lblCompressForce.move(xloc, yloc)
        txtCompressForce.move(xloc+xadd, yloc)
        yloc += 20
        lblLoadScenario.move(xloc, yloc)
        cobLoadScenario.move(xloc+xadd, yloc)
        cobLoadScenario.resize(150,20)

#        splitter2 = QSplitter(Qt.Vertical)

#        splitter2.move(150,20)
        #midright = QFrame(self)
        #midright.move(200,20)
        #midright.resize(100,100)
        # col = QColor(0, 0, 0)
        self.frm = QFrame(self)
        # self.frm.setStyleSheet('QWidget { background-color: %s }' % col.name())
        self.frm.setGeometry(450, 20, 250, 300)

        pixmap = QPixmap('./img/Box.png')
        pixmap.scaled(100,100)

        lbl_img = QLabel(self.frm)
        lbl_img.setPixmap(pixmap)
        lbl_img.resize(200,300)
        

        #lblPoissonRatio1 = QLabel('Poisson Ratio', self.frm)
        #lblPoissonRatio1.move(30,30)

#        self.setWindowTitle('Color Dialog')
#        self.setGeometry(300, 300, 250, 180)

        self.show()



if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec())
