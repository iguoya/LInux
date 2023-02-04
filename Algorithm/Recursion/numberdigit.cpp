#include "numberdigit.h"

size_t NumberDigit::typeID = qRegisterMetaType<NumberDigit*>("NumberDigit");
NumberDigit::NumberDigit()
{

}

void NumberDigit::run(size_t number)
{
    digit(number);

    while(!result.isEmpty()) {
        content<<QString::number(result.pop());
    }
    displayList(content);
}

size_t NumberDigit::digit(size_t number)
{
    result.push(number % 10);
    if(number / 10 == 0) {
        return number;
    } else {
        return digit(number / 10);
    }
}
