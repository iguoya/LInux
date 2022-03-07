#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtAwesome.h"
#include "thread.h"
#include "entrance.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWidget *currentWidget;
    QtAwesome *awesome;
    Entrance *entrance;
    Thread *thread;

private slots:
    void entranceWidget(QString type);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
