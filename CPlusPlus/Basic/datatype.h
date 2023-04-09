#ifndef DATATYPE_H
#define DATATYPE_H

#include <product.h>
class DataType : public Product
{
public:
    DataType();
    void run() override;
};

#endif // DATATYPE_H
