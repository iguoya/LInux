#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helloworld.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    HelloWorld *h = new HelloWorld;
    connect(ui->pushButton_2, &QPushButton::clicked, this,  &MainWindow::close);
    connect(ui->pushButton_3, &QPushButton::clicked, h,  &HelloWorld::hello);
    connect(ui->pushButton_4, &QPushButton::clicked, h,  &HelloWorld::say);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
}
