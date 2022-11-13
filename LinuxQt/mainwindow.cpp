#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->LeftLayout->addWidget(&system);
    ui->RightLayout->addWidget(&table_view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

