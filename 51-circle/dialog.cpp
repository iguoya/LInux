#include "dialog.h"
#include "./ui_dialog.h"

const static double PI = 3.1415926;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    double radius = ui->radiusLineEdit->text().toDouble();
    double area = radius*radius*PI;
    ui->areaLabel->setText(QString().setNum(area));

}
