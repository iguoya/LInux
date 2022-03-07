#include "thread.h"
#include "ui_thread.h"

#include <unistd.h>
#include <pthread.h>


//void print_thread_info(const char *s) {
//    pid_t p_id = getpid();
//    pthread_t t_id = pthread_self();
//    printf("%s: pid: %d tid:%lu\n", s, p_id, t_id);
//}

//void *thread_new_run(void *arg) {
//    print_thread_info(arg);
//    return NULL;
//}

//int main()
//{
//    printf("Hello World!\n");


//    print_thread_info("我是父进程");
//    sleep(2);
//    return 0;
//}


Thread::Thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thread)
{
    ui->setupUi(this);
}

Thread::~Thread()
{
    delete ui;
}

void Thread::on_pushButton_6_clicked()
{
    emit SignalEntrance("entrance");;
}

void Thread::on_pushButton_clicked()
{
//    pthread_t new_tid;
//    char arg[] = "我是新线程";
//    pthread_create(&new_tid, NULL, thread_new_run, arg);
//    ui->textBrowser->append(QString("新线程id: %1 \n").arg(new_tid));

//    pid_t p_id = getpid();
//    pthread_t t_id = pthread_self();

//    ui->textBrowser->append(QString("%1: pid: %2 tid:%3\n")
//                            .arg("我是父进程")
//                            .arg(p_id)
//                            .arg(t_id));


}
