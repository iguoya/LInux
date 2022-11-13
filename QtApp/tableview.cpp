#include "tableview.h"
#include "ui_tableview.h"

TableView::TableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableView)
{
    ui->setupUi(this);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents); // 表格宽度随内容自动扩展
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 表格宽度自动根据UI进行计算，不可手动调整宽度
    ui->tableView->setAlternatingRowColors(true);  // 开启隔行异色


    model = new QStandardItemModel();  // 4行4列
    model->setHorizontalHeaderLabels({"测试名称", "输入", "结果"});
    ui->tableView->setModel(model);
    //    for (int i = 0; i < 4; ++i)
    //        for (int j = 0; j < 4; ++j)
    //            item_model->setItem(i, j, new QStandardItem(QString("%1").arg(i + j)));  // 向model中添加item


}

TableView::~TableView()
{
    delete ui;
}

void TableView::setModelNames(QStringList names)
{
    for(int i = 0; i< names.size(); ++i) {
        model->setHorizontalHeaderItem(i, new QStandardItem(names.at(i)));
    }
    ui->tableView->setModel(model);
}

void TableView::setData(QList<QVector<QVariant>> sets)
{
    model->clear();
    for(auto record : sets) {
        QList<QStandardItem *> row;
        for(auto item : record) {
            row.append(new QStandardItem(item.toString()));
        }
        model->appendRow(row);
    }
}
