#include "mainwindow.h"


MainWindow::MainWindow()
{
    set_title("C++ 程序设计实践");
    set_default_size(1600, 1000);
    //    set_position(WIN_POS_CENTER);
    set_child(container);
    //    container.set_hexpand(false);
    container.set_start_child(leftFrame);
    leftFrame.set_margin(10);
    container.set_resize_start_child(false);


    container.set_end_child(rightFrame);
    rightFrame.set_margin(10);

    leftFrame.set_child(menu);

    rightFrame.set_child(rightLayout);
    rightLayout.set_margin(10);

    rightLayout.set_row_homogeneous(true);
    rightLayout.set_column_homogeneous(true);
    rightLayout.attach(scrolledTextView, 0, 0, 1, 1);

    scrolledTextView.set_margin(10);
    scrolledTextView.set_policy(Gtk::PolicyType::AUTOMATIC, Gtk::PolicyType::ALWAYS);
    scrolledTextView.set_expand();
    scrolledTextView.set_child(textView);

    textBuffer = TextBuffer::create();
    textView.set_buffer(textBuffer);
    m_endMark = textView.get_buffer()->create_mark(textView.get_buffer()->end(), false);



    rightLayout.attach(scrolledTreeView, 0, 1, 1, 5);
    scrolledTreeView.set_margin(10);
    scrolledTreeView.set_policy(Gtk::PolicyType::AUTOMATIC, Gtk::PolicyType::ALWAYS);
    scrolledTreeView.set_expand();
    scrolledTreeView.set_child(treeView);


    set_menu();



    //Connect signal:
    menu.signal_row_activated().connect(sigc::mem_fun(*this,
                                                      &MainWindow::on_treeview_row_activated) );



    //Create the Tree model:
    resultModel = TreeStore::create(m_Columns);
    treeView.set_model(resultModel);

    //All the items to be reordered with drag-and-drop:
//    treeView.set_reorderable();

    //      //Fill the TreeView's model
    //      auto row = *(resultModel->append());
    //      row[m_Columns.id] = 1;
    //      row[m_Columns.name] = "Billy Bob";

    //      auto childrow = *(resultModel->append(row.children()));
    //      childrow[m_Columns.id] = 11;
    //      childrow[m_Columns.name] = "Billy Bob Junior";

    //      childrow = *(resultModel->append(row.children()));
    //      childrow[m_Columns.id] = 12;
    //      childrow[m_Columns.name] = "Sue Bob";

    //      row = *(resultModel->append());
    //      row[m_Columns.id] = 2;
    //      row[m_Columns.name] = "Joey Jojo";


    //      row = *(resultModel->append());
    //      row[m_Columns.id] = 3;
    //      row[m_Columns.name] = "Rob McRoberts";

    //      childrow = *(resultModel->append(row.children()));
    //      childrow[m_Columns.id] = 31;
    //      childrow[m_Columns.name] = "Xavier McRoberts";

    //Add the TreeView's view columns:
    treeView.append_column("序号", m_Columns.id);
    treeView.append_column("名称", m_Columns.name);
    treeView.append_column("输入", m_Columns.input);
    treeView.append_column("结果", m_Columns.result);


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


    //    textbuffer = Glib::RefPtr<TextBuffer>::cast_dynamic(
    //                builder->get_object("textbuffer")
    //                );
    //    liststore = Glib::RefPtr<ListStore>::cast_dynamic(
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

void MainWindow::on_treeview_row_activated(const TreeModel::Path& path, TreeViewColumn* /* column */)
{
    //    const auto iter = menuModel->get_iter(path);
    //    if(iter)
    //    {
    //        const auto row = *iter;
    //        buffer->set_text(row[m_menuColumns.item]);
    //        std::cout << "Row activated: ID= none, AAAA Name="
    //            << row[m_menuColumns.item] << std::endl;
    //    }
}

void MainWindow::on_selection_changed()
{
    auto iter = menuSelection->get_selected();
    if(iter) //If anything is selected
    {
        auto row = *iter;
        std::cout << "Row activated: ID= none, Name="
          << row[m_menuColumns.name] << std::endl;
        //Do something with the row.
        Factory factory;
        Product* product = factory.create(row[m_menuColumns.type]);

        product->signal_notice().connect(sigc::mem_fun(*this, &MainWindow::notice));
        product->signal_display().connect(sigc::mem_fun(*this, &MainWindow::display) );

        product->run();
    }
}

void MainWindow::display(vector<Row> result)
{
    for(const auto &m : result) {
        auto row = *(resultModel->append());
        row[m_Columns.id] = m.id;
        row[m_Columns.name] = m.name;
        row[m_Columns.input] = m.input;
        row[m_Columns.result] = m.result;
    }
    //      //Fill the TreeView's model
    //      auto row = *(resultModel->append());
    //      row[m_Columns.id] = 1;
    //      row[m_Columns.name] = "Billy Bob";
}

void MainWindow::notice(string msg)
{
//    auto iter_end = textBuffer->get_iter_at_offset(textBuffer->get_char_count());
//    textBuffer->insert(iter_end, ustring(msg+"\n"));
    textBuffer->insert_at_cursor(ustring(msg+"\n"));
    textView.scroll_to(m_endMark);
//    buffer->set_text(ustring(msg));
}

void MainWindow::set_menu()
{
    menuModel = TreeStore::create(m_menuColumns);
    menu.set_model(menuModel);
    //    treeView.set_reorderable();

    vector<pair<string, vector<pair<ProductType, string>>>> catalogue {
        {
            "语言特性", {
                {kConst, "const"},  {kFunctionPointer, "函数指针"}
            }
        }
        //        {"标准模板库", {"const", "函数指针"}},
        //        {"算法与迭代器", {"const", "函数指针"}},
        //        {"类和对象", {"const", "函数指针"}},
        //        {"继承和派生", {"const", "函数指针"}},
        //        {"模板与泛型", {"const", "函数指针"}},
        //        {"智能指针", {"const", "函数指针"}},
        //        {"并发与多线程", {"const", "函数指针"}},
        //        {"内存管理", {"const", "函数指针"}},
        //        {"高级话题/新标准", {"const", "函数指针"}},
    };

    for(auto chapter : catalogue) {
        auto row = *(menuModel->append());
        row[m_menuColumns.name] = chapter.first;
        for(auto item : chapter.second) {
            auto childrow = *(menuModel->append(row.children()));
            childrow[m_menuColumns.type] = item.first;
            childrow[m_menuColumns.name] = item.second;
        }
    }


    //Add the TreeView's view columns:
    //    treeView.append_column("ID", m_Columns.m_col_id);
    menu.append_column("Name", m_menuColumns.name);

    menuSelection = menu.get_selection();

    menuSelection->signal_changed().connect(
                sigc::mem_fun(*this, &MainWindow::on_selection_changed)
                );

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
    //    auto liststore = Glib::RefPtr<ListStore>::cast_dynamic(
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



