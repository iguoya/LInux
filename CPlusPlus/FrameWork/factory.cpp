#include "factory.h"

Factory::Factory()
{

}

Product *Factory::create(ProductType e)
{
    switch(e) {
    case kStatic:
    case kConst:
        return new Const;
    case kFunctionPointer:
        return new FunctionPointer;
    }
    return new Const;
}
