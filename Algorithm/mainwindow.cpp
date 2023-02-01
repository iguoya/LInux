#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->tabWidget->addTab(&recursion, "递归思想");

    ui->exhaustionLayout->addWidget(&exhaustion);


//    QFile file(":/style.css");
//    if (!file.open(QIODevice::ReadOnly))
//        exit(0);
//    QTextStream in(&file);
//    qApp->setStyleSheet(in.readAll());

}

MainWindow::~MainWindow()
{
    delete ui;
}

