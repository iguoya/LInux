#include "tableview.h"
#include "ui_tableview.h"

TableView::TableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableView)
{
    ui->setupUi(this);
    auto item_model = new QStandardItemModel(4,4);  // 4行4列
    ui->tableView->setModel(item_model);          // 关联view与model

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            item_model->setItem(i, j, new QStandardItem(QString("%1").arg(i + j)));  // 向model中添加item
}

TableView::~TableView()
{
    delete ui;
}
