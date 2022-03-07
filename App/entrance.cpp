#include "entrance.h"
#include "ui_entrance.h"

Entrance::Entrance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Entrance)
{
    ui->setupUi(this);
}

Entrance::~Entrance()
{
    delete ui;
}

void Entrance::on_pushButton_4_clicked()
{
    emit SignalEntrance("thread");
}
