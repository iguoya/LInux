#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QSignalMapper>
#include "task.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void run(QString name);
    void displayTable(const QVector<QStringList>& data);
private:

    Ui::MainWindow *ui;
    QSignalMapper signalMapper;
    QStringListModel listModel;
    QStandardItemModel tableModel;

};
#endif // MAINWINDOW_H
