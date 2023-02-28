#ifndef FACTORY_H
#define FACTORY_H
#include "product.h"
#include "const.h"
#include "functionpointer.h"

//#include <map>
class Factory
{
public:
    Factory();
    Product* create(ProductType e);
//    map
};

#endif // FACTORY_H
