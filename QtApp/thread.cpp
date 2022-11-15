#include "thread.h"
#include "ui_thread.h"

int Thread::index;

Thread::Thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thread)
{
    ui->setupUi(this);
    model = new QStringListModel;
    modelA = new QStringListModel;
    modelB = new QStringListModel;
    modelC = new QStringListModel;

    args[0] = { "线程A", modelA, ui->listView_2};
    args[1] = { "线程B", modelB, ui->listView_3};
    args[2] = { "线程C", modelC, ui->listView_4};

//    connect(this, &Thread::setModel, ui->listView, )

}

Thread::~Thread()
{
    delete ui;
}

void* Thread::printThreadID(void* varg)
{
    ThreadArg* arg =  &((Thread *)varg)->args[index];
    switch(index) {
    case 0:
        arg->view->setModel(arg->model);
        break;
    case 1:
        arg->view->setModel(arg->model);
        break;
    default:
        arg->view->setModel(arg->model);
    }
     ++index;

    QStringList data = {
        arg->name,
        QString("父进程id:%1").arg(getpid()),
        QString("线程id:%1 (%2)")
        .arg(pthread_self())
        .arg(QString::number(pthread_self(), 16).toUpper()),
    };

    for(int i = 1; i < 5; ++i) {
        data<<QString::number(i);
        sleep(rand()%3);
    }

    arg->model->setStringList(data);



    return NULL;
}


void Thread::on_CreateThread_clicked()
{
    QStringList data {
        "父进程",
        QString("父进程id:%1").arg(getpid()),
                QString("线程id:%1 (%2)")
                .arg(pthread_self())
                .arg(QString::number(pthread_self(), 16).toUpper())
    };

    model->setStringList(data);
    ui->listView->setModel(model);


    pthread_t thread;
    arg = new ThreadArg;
    arg->name = "线程A";
    arg->model = modelA;
    arg->view = ui->listView_2;

    pthread_create(&thread, NULL, printThreadID, this);
    sleep(1);

    pthread_create(&thread, NULL, printThreadID, this);
    sleep(1);

    pthread_create(&thread, NULL, printThreadID, this);


}
