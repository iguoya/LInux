#include "tableview.h"
#include "ui_tableview.h"

TableView::TableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableView)
{
    ui->setupUi(this);
}

TableView::~TableView()
{
    delete ui;
}
