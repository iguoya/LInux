#ifndef THREAD_H
#define THREAD_H

#include <QWidget>
#include <QStringList>
#include <QStringListModel>
#include <QListView>

#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
namespace Ui {
class Thread;
}

typedef struct {
    const char *name;
    QStringListModel *model;
    QListView *view;
} ThreadArg;



class Thread : public QWidget
{
    Q_OBJECT

public:
    explicit Thread(QWidget *parent = nullptr);
    ~Thread();
    QStringListModel *model;
    QStringListModel *modelA;
    QStringListModel *modelB;
    QStringListModel *modelC;
    ThreadArg *arg;
    ThreadArg *argA;
    ThreadArg *argB;
    ThreadArg *argC;

    static void* printThreadID(void*);
//    typedef void* (*pFUNC)(void *);
//    void* printThreadID(void* arg);


private slots:
    void on_CreateThread_clicked();

private:
    Ui::Thread *ui;
};

#endif // THREAD_H
