#ifndef PRODUCT_H
#define PRODUCT_H


enum ProductType {
    kConst,
    kStatic,
    kFunctionPointer
};


class Product
{
public:
    Product();
    virtual void run() = 0;
//    virtual ~Product() = 0;
};

#endif // PRODUCT_H
