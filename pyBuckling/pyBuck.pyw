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

        self.table = QTableWidget()
        self.table.setColumnCount(5)
        self.table.setRowCount(8)

        self.table.setHorizontalHeaderLabels(["코드", "종목명"])
        self.table.horizontalHeaderItem(0).setToolTip("코드...")

        self.table.setItem(0, 0, QTableWidgetItem("000020"))
        self.table.setItem(0, 1, QTableWidgetItem("삼성전자"))

        self.table.cellClicked.connect(self.__mycell_clicked)
        grid.addWidget(self.table, 0, 0)

        mycom = QComboBox()
        mycom.addItems(["aa", "dd", "kk"])
        mycom.addItem("cc")
        mycom.addItem("bb")
        self.table.setCellWidget(2, 2, mycom)
        
        mycom.currentTextChanged.connect(self.__mycom_text_changed)

        
        self.setWindowTitle('My First Application')
        self.setGeometry(300,300,500,500)

        self.show()
        
    @pyqtSlot(int, int)
    def __mycell_clicked(self, row, col):
        cell = self.table.item(row, col)
        # print(cell)

        if cell is not None:
            txt = "clicked cell = ({0},{1}) ==>{2}<==".format(row, col, cell.text())
        else:
            txt = "clicked cell = ({0},{1}) ==>None type<==".format(row, col)

        msg = QMessageBox.information(self, 'clicked cell...', txt)
        print(txt)
        self._mainwin.statusbar.showMessage(txt)
        return

    @pyqtSlot(str)
    def __mycom_text_changed(self, txt):
        msg = QMessageBox.information(self, 'combobox changed...', txt)
        return

#        self._mainwin = parent

#    self.__make_layout()
#    self.__make_table()

class MyMain(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        table = MyApp(self)
        # table.setStyle(QStyleFactory.create('Fusion'))
        self.setCentralWidget(table)

        self.statusbar = self.statusBar()

        
if __name__ == '__main__':
   app = QApplication(sys.argv)
   ex = MyApp()
   sys.exit(app.exec_())
