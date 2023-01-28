#include "widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn = new QPushButton;
//    btn->show();
    btn->setParent(this);
    btn->setText("第一个按钮");
    QPushButton *btn2 = new QPushButton("第二个按钮", this);
    resize(800, 500);
    btn2->move(700, 300);
    setWindowTitle("雪虎的窗口");
    setFixedSize(800, 800);

}

Widget::~Widget()
{
}

