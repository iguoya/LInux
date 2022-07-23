import sys
from PyQt5 import QtCore, QtGui, QtWidgets

app = QtWidgets.QApplication(sys.argv)

window = QtWidgets.QWidget()

window.resize(800, 600)
window.setWindowTitle("Hello")


label = QtWidgets.QLabel(window)
label.setText("Hello, World, PyQt5, 郭雅")

font = QtGui.QFont()
font.setPointSize(24)

label.setFont(font)

window.show()

sys.exit(app.exec_())
