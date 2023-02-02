#include "rabbita.h"

int RabbitA::typeID = qRegisterMetaType<RabbitA*>("RabbitA");

RabbitA::RabbitA()
{

}

void RabbitA::run()
{
    display("hello world");
}
