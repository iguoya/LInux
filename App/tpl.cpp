#include "tpl.h"
#include "ui_tpl.h"

Tpl::Tpl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tpl)
{
    ui->setupUi(this);
}

Tpl::~Tpl()
{
    delete ui;
}
