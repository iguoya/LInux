#ifndef AUTO_H
#define AUTO_H

#include <product.h>


class AutoA{
public:
    static int get(void){
        return 100;
    }
};
class AutoB{
public:
    static const char* get(void){
        return "http://c.biancheng.net/cplus/";
    }
};


class Auto : public Product
{
public:
    Auto();


    void run() override;
};

#endif // AUTO_H
