#include "rabbita.h"

int RabbitA::typeID = qRegisterMetaType<RabbitA*>("RabbitA");

RabbitA::RabbitA()
{

}

void RabbitA::run()
{
    size_t first = 1;
    size_t second = 1;
    m_series <<QString::number(first)<<QString::number(second);
    for(size_t i = 3; i < 20; ++i) {
        auto sum = first+second;
        m_series <<QString::number(sum);
        first = second;
        second = sum;
    }
    displayList(m_series);
    display("hello world！！");
}
