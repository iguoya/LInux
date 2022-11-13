#include "system.h"
#include "ui_system.h"

System::System(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::System)
{
    ui->setupUi(this);
}

System::~System()
{
    delete ui;
}

void System::on_Char_clicked()
{

}
