#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H

#include "product.h"

class FunctionPointer : public Product
{
public:
    FunctionPointer();
    void run() override;
};

REGISTERCLASS(FunctionPointer);

#endif // FUNCTIONPOINTER_H
