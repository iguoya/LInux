#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include "exhaustion.h"
//#include "recursion.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //    Recursion recursion;



private:
    Ui::MainWindow *ui;

    Exhaustion exhaustion;
};
#endif // MAINWINDOW_H
