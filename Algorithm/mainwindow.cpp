#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->tabWidget->addTab(&recursion, "递归思想");

//    ui->exhaustionLayout->addWidget(&exhaustion);
    int type = QMetaType::type("RabbitA*");
//    Task *an = static_cast<Task*>(QMetaType::construct(type));
    Task *an = qobject_cast<Task*>(QMetaType::metaObjectForType(type)->newInstance());
    connect(an, &Task::display, ui->textBrowser, &QTextBrowser::append);
    an->run();



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}
