#ifndef CONST_H
#define CONST_H
#include "product.h"

class Const : public Product
{
public:
    Const();
    void run() override;
};

REGISTERCLASS(Const);

#endif // CONST_H
