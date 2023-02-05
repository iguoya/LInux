#include "task.h"

Task::Task(QObject *parent) : QObject(parent)
{

}

QString Task::vectorToString(QVector<int> &series)
{
    QString result;
    for(auto m : series) {
        result.append(QString::number(m)+" ");
    }
    return result;
}


void Task::run()
{

}

void Task::run(size_t number)
{

}

void Task::run(QVector<int> &series)
{

}
