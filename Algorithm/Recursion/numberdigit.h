#ifndef NUMBERDIGIT_H
#define NUMBERDIGIT_H

#include <task.h>
#include <QStack>
class NumberDigit : public Task
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit NumberDigit();
    void run(size_t number) override;
    static size_t typeID;


private:
    size_t digit(size_t number);

    QStack<size_t> result;
    QStringList content;
};

#endif // NUMBERDIGIT_H
