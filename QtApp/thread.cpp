#include "thread.h"
#include "ui_thread.h"

Thread::Thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thread)
{
    ui->setupUi(this);
    model = new QStringListModel;
}

Thread::~Thread()
{
    delete ui;
}

void Thread::on_CreateThread_clicked()
{
    QStringList data{"aaa", "bbb", "cccc"};

    model->setStringList(data);
    ui->listView->setModel(model);

}
