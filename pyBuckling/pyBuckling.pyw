import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        grid = QGridLayout()
        self.setLayout(grid)

        lbl = QLabel()
        lbl.setPixmap(QPixmap("PlateBuckling.png"))

        grid.addWidget(lbl, 0,0)

        self.tbl = QTableWidget()
        self.tbl.setRowCount(12)
        self.tbl.setColumnCount(1)
        hlbl = ['Pannel ID', 'Conditions', 'Material','Yield Stress(σ0)', 'Thickness', 'Span-l', 'Space-s','Boundary1','Boundary2','σx','σy','τ']

        self.tbl.setVerticalHeaderLabels(hlbl)
        self.tbl.setHorizontalHeaderLabels(['Value'])

        cbCondition = QComboBox()
        cbCondition.addItems(["Operating", "Extream"])
        cbCondition.currentTextChanged.connect(self._cbCon_text_changed)
        
        cbMaterial = QComboBox()
        cbMaterial.addItems(['STL', 'ALU', 'STS'])
        cbMaterial.currentTextChanged.connect(self._cbMat_text_changed)

        self.tbl.setCellWidget(1,0, cbCondition)
        self.tbl.setCellWidget(2,0, cbMaterial)

        grid.addWidget(self.tbl, 0,1)

        self.tbl.cellClicked.connect(self.__cell_click)

        self.setWindowTitle('My First Application')
        self.setGeometry(300,300,500,500)

        self.show()

    @pyqtSlot(int, int)
    def __cell_click(self, row, col):
        
        cell = self.tbl.item(row, col)
        print("row:{0}, col:{1} ==> {2}".format(row, col, cell.text()))
#        return
        
        
    @pyqtSlot(str)
    def _cbCon_text_changed(self, txt):
        msg = QMessageBox.information(self, 'combobox changed...', txt)        
        self.tbl.setItem(1,0, txt)
        # print(self.tbl.item(1, 0))
        # cbCondition.setHidden(True)
        

        return

    @pyqtSlot(str)
    def _cbMat_text_changed(self, txt):
        self.tbl.setItem(2,0, txt)
        cbMaterial.setHidden(True)
        return
        
#        tbl.cellClicked.connect(self, self.current_cell)        

#    def current_cell(self, row, col):
#        msg = QMessageBox.information("{0} {1}", row, col)


#        tbl.clicked.connect(self.current_sheet())        
    
#        lbl = QLabel()
#        lbl.setPixmap(QPixmap("PlateBuckling.png"))

#        grid.addWidget(lbl, 0,0)
#        grid.addWidget(tbl, 0,1)
        


#    def current_cell(self, row, col):
#        msg = QMessageBox.information("{0} {1}", row, col)

#    def current_sheet(self):
#        print(self.objectName)



if __name__ == '__main__':
   app = QApplication(sys.argv)
   ex = MyApp()
   sys.exit(app.exec_())
