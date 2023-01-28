#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPushButton * btn = new QPushButton;
//    btn->show();
    btn->setParent(this);
    btn->setText("第一个 btn");

    QPushButton *btn2 = new QPushButton("第 2 个 btn", this);
    btn2->move(300, 200);

//    btn2->setParent(this);
//    this->resize(800, 1000);
    setWindowTitle("自定义窗口标题");
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

