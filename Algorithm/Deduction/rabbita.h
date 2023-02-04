#ifndef RABBITA_H
#define RABBITA_H

#include "task.h"


class RabbitA : public Task
{
    Q_OBJECT
public:
    static size_t typeID;
    Q_INVOKABLE RabbitA();
    void run(size_t number = 100) override;

private:

};

//Q_DECLARE_METATYPE(RabbitA*)

#endif // RABBITA_H
