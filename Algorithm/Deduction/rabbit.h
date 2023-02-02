#ifndef RABBIT_H
#define RABBIT_H

#include <QObject>
//#include "task.h"

class Rabbit : public QObject
{
    Q_OBJECT
public:
    explicit Rabbit(QObject *parent = nullptr);
    void run();
signals:


};

#endif // RABBIT_H
