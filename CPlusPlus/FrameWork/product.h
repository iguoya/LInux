#ifndef PRODUCT_H
#define PRODUCT_H
#include <sigc++/sigc++.h>

#include <iostream>
#include <string>
#include <boost/format.hpp>
#include "factory.h"

using namespace std;

enum ProductType {
    kHelloWorld,
    kAuto,
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
//    type_signal_notice signal_notice();
//    void notice(const string& msg);

    using type_signal_display = sigc::signal<void(const vector<Row>&)>;
//    type_signal_display signal_display();
//    void display(const vector<Row>& result);

    using type_signal_display_table = sigc::signal<void(const vector<vector<string>>&)>;
    type_signal_display_table signal_display_table();
//    void display_table(const vector<vector<string>>& result);


    using type_signal_set_columns = sigc::signal<void(const vector<string>&)>;
//    type_signal_set_columns signal_set_columns();
//    void set_columns(const vector<Row>& result);


    type_signal_notice s_notice;
    type_signal_display s_display;
    type_signal_set_columns s_set_columns;
    type_signal_display_table s_display_table;

protected:
    vector<Row> result;
};

#endif // PRODUCT_H
