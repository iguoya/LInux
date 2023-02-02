#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
//#include "rabbita.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QFile file(":/qdarkstyle/dark/darkstyle.qss");
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    qApp->setStyleSheet(in.readAll());

//    qRegisterMetaType<RabbitA>();

    MainWindow w;
    w.show();
    return a.exec();
}
