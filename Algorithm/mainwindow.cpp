#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(&tableModel);
    ui->listView->setModel(&listModel);



    QMap<QPushButton*, QString> items = {
        {ui->rabbit, "RabbitA*"}
    };

    for(auto it = items.begin(); it != items.end(); ++it) {
        signalMapper.setMapping(it.key(), it.value());
    }

    connect(ui->rabbit, SIGNAL(clicked()), &signalMapper, SLOT(map()));
    //    connect(ui->rabbit, &QAbstractButton::clicked, signalMapper, &QSignalMapper::map);
    connect(&signalMapper, SIGNAL(mapped(QString)),this, SLOT(run(QString)));
    //    connect(signalMapper, &QSignalMapper::mapped, this, &MainWindow::run);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::run(QString name)
{
    int type = QMetaType::type(name.toLocal8Bit().data());
    Task *task = qobject_cast<Task*>(QMetaType::metaObjectForType(type)->newInstance());
    connect(task, &Task::display, ui->textBrowser, &QTextBrowser::append);
    connect(task, &Task::displayList, &listModel, &QStringListModel::setStringList);
    task->run(ui->spinBox->value());
}


void MainWindow::displayTable(const QVector<QStringList>& data)
{
    for(auto row = 1; row <= data.size(); ++row) {
        tableModel.setItem(row, 0, new QStandardItem(QString::number(row)));
         for(auto column = 1; column <= data[row-1].size(); ++column) {

            tableModel.item(row, column)->setTextAlignment(Qt::AlignCenter);
            tableModel.setItem(row, column,new QStandardItem(data[row-1][column-1]));
        }
    }
}
