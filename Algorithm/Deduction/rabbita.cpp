#include "rabbita.h"

size_t RabbitA::typeID = qRegisterMetaType<RabbitA*>("RabbitA");

RabbitA::RabbitA()
{

}

void RabbitA::run()
{
    size_t first = 1;
    size_t second = 1;
    series_result <<QString::number(first)<<QString::number(second);
    for(size_t i = 3; i < m_number; ++i) {
        auto sum = first+second;
        series_result <<QString::number(sum);
        first = second;
        second = sum;
    }
    displayList(series_result);
    display("hello world！！");
}
