#include "const.h"

Const::Const()
{

}

void Const::run()
{
    std::cout<<"hello world"<<std::endl;
    notice("你好 中文!!!");

    vector<Row> s {
        {100, "ak", "123", "world"},
        {111, "akm", "453", "woreeld"},
        {123, "ak74", "789", "中文"},
    };
    display(s);
}
