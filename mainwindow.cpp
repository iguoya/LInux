#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Strategy/StrategyContext.h"
#include "Facade/Facade.h"
#include "Facade/Rocket.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    render = new QSvgRenderer;

    ui->frame->autoFillBackground();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->clear();
    ui->frame->setStyleSheet("QFrame{border-image:url(:/strategy.svg)}" );
    StrategyContext sc;

    for(auto &m: sc.run()) {
        ui->textEdit->append(QString::fromStdString(m));
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    ui->frame->setStyleSheet("QFrame{border-image:url(:/facade.svg)}" );

    Facade fc;
    for(auto &m: fc.operation()) {
        ui->textEdit->append(QString::fromStdString(m));
    }
    Rocket rk;
    for(auto &m: rk.lanuch()) {
        ui->textEdit->append(QString::fromStdString(m));
    }
}

