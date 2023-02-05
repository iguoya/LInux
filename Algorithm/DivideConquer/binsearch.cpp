#include "binsearch.h"

size_t BinSearch::typeID = qRegisterMetaType<BinSearch*>("BinSearch");

BinSearch::BinSearch()
{

}

void BinSearch::run(QVector<int> &series)
{
    std::sort(series.begin(), series.end());
    display(QString("数据有序后: ")+vectorToString(series));

    auto it = std::unique(series.begin(), series.end());
    series.erase(it, series.end());
    display(QString("数据去重后: ")+vectorToString(series));
}

void BinSearch::binSearch()
{

}
