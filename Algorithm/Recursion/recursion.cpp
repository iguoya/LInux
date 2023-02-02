#include "recursion.h"
#include "ui_recursion.h"

Recursion::Recursion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recursion)
{
    ui->setupUi(this);
}

Recursion::~Recursion()
{
    delete ui;
}
