#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->LeftLayout->addWidget(&system);
    ui->RightLayout->addWidget(&table_view);


    //    ui->System->setIcon(QIcon(":/images/systemcall.svg"));
    //    ui->System->setIconSize(QSize(128,128));
    //    ui->Thread->setIcon(QIcon(":/images/thread.svg"));
    //    ui->Process->setIcon(QIcon(":/images/process.svg"));
    //    ui->Network->setIcon(QIcon(":/images/network.svg"));
    //    ui->IPC->setIcon(QIcon(":/images/ipc.svg"));
    //    ui->Driver->setIcon(QIcon(":/images/driver.svg"));
    //    ui->Kernel->setIcon(QIcon(":/images/kernel.svg"));
    //      ui->System->setIcon(QIcon(":/images/systemcall.svg"));
    //       ui->System->setIcon(QIcon(":/images/systemcall.svg"));


}

MainWindow::~MainWindow()
{
    delete ui;
}

