#include "mainwindow.h"


MainWindow::MainWindow():
    basicPanel(Orientation::VERTICAL),
    classPanel(Orientation::VERTICAL),
    rightLayout(Orientation::VERTICAL),
    label("hello")
{
    set_title("C++ 程序设计实践");
    set_default_size(1200, 1600);

    set_child(container);

    container.set_start_child(leftFrame);
    container.set_end_child(rightFrame);
    //    container.set_

    leftFrame.set_child(treeView);

    rightFrame.set_child(rightLayout);

    rightLayout.append(label);
    rightLayout.append(view);
    //    scrolledWindow.set_child(view);
    rightLayout.append(text);

    //scrolledWindow.set_child(view)


    notebook.append_page(basicPanel, "基本功能");
    notebook.append_page(classPanel, "类与对象");

    vector<string> basicNames {
        "功能A",
        "功能A",
        "功能A",
    };

    for(auto m : basicNames) {
        basicPanel.append(*(new Button(m)));
    }

    vector<string> classNames {
        "功能BBB",
        "功能BBB",
        "功能BBB",
    };

    for(auto m : classNames) {
        classPanel.append(*(new Button(m)));
    }


    // static Glib::RefPtr<TreeStore> create(const TreeModelColumnRecord& columns);
    //Create the Tree model:
    //treeModel = TreeStore::create(m_Columns);


    set_menu();



    //Connect signal:
    treeView.signal_row_activated().connect(sigc::mem_fun(*this,
                                                          &MainWindow::on_treeview_row_activated) );
    //    panel.add(scrolledWindow);
    //    panel.add(button3);
    ////    add(scrolledWindow);
    //      scrolledWindow.add(fixed);

    //      button1.set_label("button1");
    //      button1.signal_button_release_event().connect([&](GdkEventButton*) {
    //        label1.set_text(ustring::compose("button1 clicked %1 times", ++button1Clicked));
    //        return true;
    //      });
    //      fixed.add(button1);
    //      fixed.move(button1, 50, 50);

    //      button2.set_label("button2");
    //      button2.set_size_request(200, 75);
    //      button2.signal_button_release_event().connect([&](GdkEventButton*) {
    //        label2.set_text(ustring::compose("button2 clicked %1 times", ++button2Clicked));
    //        return true;
    //      });
    //      fixed.add(button2);
    //      fixed.move(button2, 50, 100);

    //      label1.set_text(ustring::compose("button1 clicked %1 times", button1Clicked));
    //      fixed.add(label1);
    //      fixed.move(label1, 50, 200);

    //      label2.set_text(ustring::compose("button2 clicked %1 times", button2Clicked));
    //      fixed.add(label2);
    //      fixed.move(label2, 50, 230);




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

void MainWindow::on_treeview_row_activated(const Gtk::TreeModel::Path& path,
                                           Gtk::TreeViewColumn* /* column */)
{
    const auto iter = treeModel->get_iter(path);
    //  if(iter)
    //  {
    //    const auto row = *iter;
    //    std::cout << "Row activated: ID=" << row[m_Columns.m_col_id] << ", Name="
    //        << row[m_Columns.item] << std::endl;
    //  }
}

void MainWindow::set_menu()
{
    treeModel = TreeStore::create(m_Columns);
    treeView.set_model(treeModel);
    //    treeView.set_reorderable();

    vector<pair<string, vector<string>>> catalogue {
        {"程序设计基础", {"const", "函数指针"}},
        {"标准模板库", {"const", "函数指针"}},
        {"算法与迭代器", {"const", "函数指针"}},
        {"类和对象", {"const", "函数指针"}},
        {"继承和派生", {"const", "函数指针"}},
        {"模板与泛型", {"const", "函数指针"}},
        {"智能指针", {"const", "函数指针"}},
        {"并发与多线程", {"const", "函数指针"}},
        {"内存管理", {"const", "函数指针"}},
        {"高级话题/新标准", {"const", "函数指针"}},
    };

    for(auto chapter : catalogue) {
        auto row = *(treeModel->append());
        row[m_Columns.item] = chapter.first;
        for(auto item : chapter.second) {
            auto childrow = *(treeModel->append(row.children()));
            childrow[m_Columns.item] = item;
        }
    }


    //Add the TreeView's view columns:
    //    treeView.append_column("ID", m_Columns.m_col_id);
    treeView.append_column("Name", m_Columns.item);

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
    //    auto liststore = Glib::RefPtr<Gtk::ListStore>::cast_dynamic(
    //                builder->get_object("liststore_datatype")
    //                );
    //    auto row = *(liststore->append());
    //    typedef struct {
    //        ustring name;
    //        size_t size;
    //        size_t umax;
    //        long long min;
    //        long long max;
    //    } DataType;

    //    vector<DataType> items = {
    //        {"char", sizeof(char), UCHAR_MAX, CHAR_MIN, CHAR_MAX},
    //        {"short", sizeof(short), USHRT_MAX, SHRT_MIN, SHRT_MAX},
    //        {"int", sizeof(int), UINT_MAX, INT_MIN, INT_MAX},
    //        {"long", sizeof(long), ULONG_MAX, LONG_MIN, LONG_MAX},
    //        {"long long", sizeof(long long), ULLONG_MAX, LLONG_MIN, LLONG_MAX},
    //        //        {"long int", sizeof(long int)},
    //        {"float", sizeof(float), 0, -1, -1},
    //        {"double", sizeof(double), 0, -1, -1},
    //        {"string", sizeof(string), 0, -1, -1},
    //        {"vector<int>", sizeof(vector<int>), 0, -1, -1},
    //        {"list<int>", sizeof(list<int>), 0, -1, -1},
    //        {"map<int,int>", sizeof(std::map<int,int>), 0, -1, -1},
    //    };
    //    size_t index = 1;
    //    for(auto item : items) {
    //        row.set_value(0, index);
    //        row.set_value(1, item.name);
    //        row.set_value(2, item.size);
    //        row.set_value(3, item.umax);
    //        row.set_value(4, item.min);
    //        row.set_value(5, item.max);
    //        if(index != items.size()) {
    //            row = *(liststore->append());
    //        }
    //        ++index;
    //    }

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



