#ifndef BINSEARCH_H
#define BINSEARCH_H

#include <task.h>
#include <algorithm>

class BinSearch : public Task
{
    Q_OBJECT
public:
    Q_INVOKABLE BinSearch();

    void run(QVector<int>& series) override;



private:

    void binSearch();
    int key;

    static size_t typeID;
};

#endif // BINSEARCH_H
