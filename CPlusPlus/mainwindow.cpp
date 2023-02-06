#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow(Gtk::ApplicationWindow::BaseObjectType *obj, const Glib::RefPtr<Gtk::Builder> &builder)
    : Gtk::ApplicationWindow(obj), builder{builder}
{


//    builder->get_widget("button_copy", button_copy);
//    builder->get_widget("button_datatype", button_datatype);
//    builder->get_widget("button_array", button_array);
//    builder->get_widget("button_virtual", button_virtual);
//    builder->get_widget("button_visit_control", button_visit_control);


//    //    builder->get_widget("textview_copy", textview_copy);


//    textbuffer = Glib::RefPtr<Gtk::TextBuffer>::cast_dynamic(
//                builder->get_object("textbuffer")
//                );
//    liststore = Glib::RefPtr<Gtk::ListStore>::cast_dynamic(
//                builder->get_object("liststore")
//                );


//    //      builder->get_widget("textview_copy", textview_copy);

//    //    button_copy->signal_clicked().connect(sigc::mem_fun(sc, &SampleClass::on_button_copy_clicked));
//    button_copy->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_copy_clicked));
//    button_datatype->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_datatype_clicked));
//    button_array->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_array_clicked));
//    button_virtual->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_virtual_clicked));
//    button_visit_control->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_visit_control_clicked));


}

void MainWindow::on_button_copy_clicked()
{
    //    std::cout<<"hello world!!!!"<<std::endl;
    //    auto textbuffer = textview_copy->get_buffer();
    auto iter = textbuffer->get_iter_at_offset(0);
    iter = textbuffer->insert(iter, "For example, you can have 中国\n");
//    iter = textbuffer->insert(iter, "中国\n");
//    iter = textbuffer->insert(iter, "中国ss三三四四\n");
    //    textbuffer->set_text("hello world");
    //    textview_copy->set_buffer(*textbuffer);


    Point a(35, 38);
    a.show();

    Point b(a);
    b.show();

    b.add_point(a);

    b.show();

    Point c = Point::generate_point();
    c.show();

    Point d;
    d.show();
    d = c;
    d.show();

    Point e(d);

    e.show();


}

void MainWindow::on_button_datatype_clicked()
{
    auto liststore = Glib::RefPtr<Gtk::ListStore>::cast_dynamic(
                builder->get_object("liststore_datatype")
                );
    auto row = *(liststore->append());
    typedef struct {
        ustring name;
        size_t size;
        size_t umax;
        long long min;
        long long max;
    } DataType;

    vector<DataType> items = {
        {"char", sizeof(char), UCHAR_MAX, CHAR_MIN, CHAR_MAX},
        {"short", sizeof(short), USHRT_MAX, SHRT_MIN, SHRT_MAX},
        {"int", sizeof(int), UINT_MAX, INT_MIN, INT_MAX},
        {"long", sizeof(long), ULONG_MAX, LONG_MIN, LONG_MAX},
        {"long long", sizeof(long long), ULLONG_MAX, LLONG_MIN, LLONG_MAX},
        //        {"long int", sizeof(long int)},
        {"float", sizeof(float), 0, -1, -1},
        {"double", sizeof(double), 0, -1, -1},
        {"string", sizeof(string), 0, -1, -1},
        {"vector<int>", sizeof(vector<int>), 0, -1, -1},
        {"list<int>", sizeof(list<int>), 0, -1, -1},
        {"map<int,int>", sizeof(std::map<int,int>), 0, -1, -1},
    };
    size_t index = 1;
    for(auto item : items) {
        row.set_value(0, index);
        row.set_value(1, item.name);
        row.set_value(2, item.size);
        row.set_value(3, item.umax);
        row.set_value(4, item.min);
        row.set_value(5, item.max);
        if(index != items.size()) {
            row = *(liststore->append());
        }
        ++index;
    }

}

void MainWindow::on_button_array_clicked()
{
    cout << "RAND_MAX:" << RAND_MAX<< endl;
    srand((unsigned)time(NULL));

    auto line = *(liststore->append());

    for(auto row = 0; row < 10; ++row) {
        for(auto col = 0; col < 10; ++col) {
            line.set_value(col, rand() % 100);
        }
        line = *(liststore->append());
    }

    //三维数组
    //    int space[10][10][10];
    for(auto x = 0; x < 10; ++x) {
        for(auto y = 0; y < 10; ++y) {
            for(auto z = 0; z < 10; ++z) {
                line.set_value(z, rand() % 100);
                //                space[x][y][z] = rand() % 100;
            }
            line = *(liststore->append());
        }
        //        line = *(liststore->append());
    }

}

void MainWindow::on_button_virtual_clicked()
{
    auto iter = textbuffer->get_iter_at_offset(0);
    iter = textbuffer->insert(iter, "For example, you can have 中国\n");
    iter = textbuffer->insert(iter, "中国\n");
    iter = textbuffer->insert(iter, "中国ss三三四四\n");

    officer *t = new teacher();
    t->work();
    t->salary();


    officer *d = new doctor();
    d->work();
    d->salary();
}

void MainWindow::on_button_visit_control_clicked()
{
    PublicChild cp;
    cout<<cp.parent_public_num<<endl;
    cp.public_method();



    ProtectedChild cr;
    //    cout<<cr.parent_public_num<<endl;//保护继承 改变父类公共变量为 保护成员
    //    cr.parent_protected_num<<endl; ////保护继承 改变父类 保护变量 为 保护成员
    cr.visit_control();


    PrivateChild ci;
    //    cout<< ci.parent_public_num<<endl;// 私有继承 改变父类公共变量为  私有成员
    //    cout<< ci.parent_protected_num<<endl;// 私有继承 改变父类保护变量为  私有成员
    ci.visit_control();

}



