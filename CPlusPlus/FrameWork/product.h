#ifndef PRODUCT_H
#define PRODUCT_H
#include <sigc++/sigc++.h>

#include <iostream>
#include <string>

using namespace std;

enum ProductType {
    kConst,
    kStatic,
    kFunctionPointer
};

typedef struct {
    size_t id;
    string name;
    string input;
    string result;
} Row;

class Product
{
public:
    Product();

    virtual void run() = 0;

//    virtual ~Product() = 0;
    using type_signal_notice = sigc::signal<void(const string&)>;
    type_signal_notice signal_notice();
    void notice(const string& msg);

    using type_signal_display = sigc::signal<void(const vector<Row>&)>;
    type_signal_display signal_display();
    void display(const vector<Row>& result);


protected:
    type_signal_notice m_notice;
    type_signal_display m_display;
};

#endif // PRODUCT_H
