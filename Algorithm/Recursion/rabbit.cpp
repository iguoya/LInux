#include "rabbit.h"

size_t Rabbit::typeID = qRegisterMetaType<Rabbit*>("Rabbit");

Rabbit::Rabbit()
{

}

void Rabbit::run()
{
    for(size_t i = 1; i < m_number; ++i) {
        series_result<<QString::number(fibonacci(i));
    }
    displayList(series_result);
}

size_t Rabbit::fibonacci(size_t number)
{
    if(number <= 2) return 1;
    return fibonacci(number-1) + fibonacci(number-2);
}
