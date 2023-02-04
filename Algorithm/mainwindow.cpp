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
        {ui->rabbit, "RabbitA*"},
        {ui->fibonacci, "Rabbit*"},
        {ui->number, "NumberDigit*"},
    };

    for(auto it = items.begin(); it != items.end(); ++it) {
        signalMapper.setMapping(it.key(), it.value());
        connect(it.key(), &QPushButton::clicked, &signalMapper,static_cast<void(QSignalMapper::*)()>(&QSignalMapper::map));
    }

    connect(&signalMapper, &QSignalMapper::mappedString, this, &MainWindow::run);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::run(const QString& name)
{
    int type = QMetaType::type(name.toLocal8Bit().data());
    Task *task = qobject_cast<Task*>(QMetaType::metaObjectForType(type)->newInstance());
//    connect(task, &Task::display, ui->tabWidget, &QTabWidget::setCurrentIndex(2));
    connect(task, &Task::display, ui->textBrowser, &QTextBrowser::append);
    connect(task, &Task::displayList, this, &MainWindow::displayList);
    task->run();
    task->run(ui->spinBox->value());
    //    task->run(ui->spinBox->value());
}

void MainWindow::displayList(const QStringList &data)
{
    ui->tabWidget->setCurrentIndex(0);
    listModel.setStringList(data);
}


void MainWindow::displayTable(const QVector<QStringList>& data)
{
    ui->tabWidget->setCurrentIndex(1);
    for(auto row = 1; row <= data.size(); ++row) {
        tableModel.setItem(row, 0, new QStandardItem(QString::number(row)));
        for(auto column = 1; column <= data[row-1].size(); ++column) {

            tableModel.item(row, column)->setTextAlignment(Qt::AlignCenter);
            tableModel.setItem(row, column,new QStandardItem(data[row-1][column-1]));
        }
    }
}

void MainWindow::on_random_clicked()
{
    QStringList numbers;
    for(int i = 0; i < ui->spinBox_random->value(); ++i) {
        auto number = QRandomGenerator::global()->bounded(100);
        numbers<<QString::number(number);
        seriesNumber.append(number);
    }
    ui->lineEdit->setText(numbers.join(", "));
}
