import sys
from PyQt5 import QtWidgets
#import ui_mainwindow

app = QtWidgets.QApplication(sys.argv)

window = QtWidgets.QMainWindow()

#ui = ui_mainwindow.Ui_MainWindow()

#ui.setupUi(window)

window.show()

sys.exit(app.exec_())
