# This Python file uses the following encoding: utf-8
import sys
from PyQt5 import QtWidgets
import ui_mainwindow

app = QtWidgets.QApplication(sys.argv)

window = QtWidgets.QMainWindow()

ui = ui_mainwindow.Ui_MainWindow()

ui.setupUi(window)

window.show()

sys.exit(app.exec_())

#from PySide6.QtWidgets import QApplication, QWidget


#class Widget(QWidget):
#    def __init__(self):
#        QWidget.__init__(self)


#if __name__ == "__main__":
#    app = QApplication([])
#    window = Widget()

#    window.show()
#    sys.exit(app.exec_())
