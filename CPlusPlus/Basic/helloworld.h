#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <product.h>

class HelloWorld : public Product
{
public:
    HelloWorld();
    void run() override;
};

#endif // HELLOWORLD_H
