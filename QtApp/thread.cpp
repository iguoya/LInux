#include "thread.h"
#include "ui_thread.h"

Thread::Thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thread)
{
    ui->setupUi(this);
    model = new QStringListModel;
    modelA = new QStringListModel;
    modelB = new QStringListModel;
    modelC = new QStringListModel;
    //    ui->listView
}

Thread::~Thread()
{
    delete ui;
}

void* Thread::printThreadID(void* varg)
{
    ThreadArg* arg =  ((Thread *)varg)->arg;


    QStringList data = {
        arg->name,
        QString("父进程id:%1").arg(getpid()),
        QString("线程id:%1 (%2)")
        .arg(pthread_self())
        .arg(QString::number(pthread_self(), 16).toUpper()),
    };

    //    for(int i = 1; i < 10; ++i) {
    //        data<<QString::number(1);
    //        sleep(rand()%3);
    //    }

    arg->model->setStringList(data);
    arg->view->setModel(arg->model);
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
    sleep(2);

    //    argA = new ThreadArg {
    //            "线程B",
    //            modelB,
    //            ui->listView_3
    //};
    arg->name = "线程B";
    arg->model = modelB;
    arg->view = ui->listView_3;
    pthread_create(&thread, NULL, printThreadID, this);
    sleep(2);

    arg->name = "线程C";
    arg->model = modelC;
    arg->view = ui->listView_4;
    pthread_create(&thread, NULL, printThreadID, this);


}
