#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/qdarkstyle/dark/style.qss");

    if(qss.open(QFile::ReadOnly)){
        QString style = qss.readAll();
        a.setStyleSheet(style);
        qss.close();
    }
    MainWindow w;
    w.show();
    return a.exec();
}
