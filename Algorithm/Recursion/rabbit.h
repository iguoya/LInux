#ifndef RABBIT_H
#define RABBIT_H

//#include <QObject>
#include "task.h"

class Rabbit : public Task
{
    Q_OBJECT
public:
    static size_t typeID;
    Q_INVOKABLE explicit Rabbit();
    void run(size_t number) override;

    size_t fibonacci(size_t number);

signals:

private:
    QStringList result;
};

#endif // RABBIT_H
