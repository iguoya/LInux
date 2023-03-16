#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <gtkmm/application.h>

#include <boost/type_index.hpp>

#include <iostream>
#include <string>
#include <vector>
#include <map>


#include "sampleclass.h"
#include "doctor.h"
#include "officer.h"
#include "teacher.h"

#include "child.h"
#include "parent.h"

#include "point.h"

//#include "product.h"

#include "helloworld.h"
#include "auto.h"
#include "const.h"
#include "functionpointer.h"

#include "factory.h"

using namespace std;
using namespace Gtk;
using namespace Glib;

//class Cols: public TreeModel::ColumnRecord {
//    public:
//        Cols() {
//            // This order must match the column order in the .glade file
//            this->add(this->id);
//            this->add(this->name);
//            this->add(this->size);
//        }

//        // These types must match those for the model in the .glade file
//        TreeModelColumn<int> id;
//        TreeModelColumn<ustring> name;
//        TreeModelColumn<int> size;
//};
//Tree model columns:
class MenuColumn : public TreeModel::ColumnRecord
{
public:

    MenuColumn() {
        add(name); add(className);
    }

    //      TreeModelColumn<int> m_col_id;
    TreeModelColumn<Glib::ustring> name;
    TreeModelColumn<string> className;
};

//Tree model columns:
class ContentColumns : public TreeModel::ColumnRecord
{
public:

    ContentColumns() {
        add(id); add(name); add(input); add(result);
    }

    TreeModelColumn<size_t> id;
    TreeModelColumn<Glib::ustring> name;
    TreeModelColumn<Glib::ustring> input;
    TreeModelColumn<Glib::ustring> result;
};


class MainWindow : public ApplicationWindow {
public:
    MainWindow();

    virtual ~MainWindow() = default;
protected:
    void on_button_copy_clicked();
    void on_button_datatype_clicked();
    void on_button_array_clicked();
    void on_button_virtual_clicked();
    void on_button_visit_control_clicked();

    void on_treeview_row_activated(const TreeModel::Path& path, TreeViewColumn* column);
    void on_selection_changed();

    void notice(string msg);
    void display(vector<Row> result);

private:
    void set_menu();


    RefPtr<Builder> builder;

    Button* button_copy;
    Button* button_datatype;
    Button* button_array;
    Button* button_virtual;
    Button* button_visit_control;

    //    TextBuffer* textbuffer;
    RefPtr<TextBuffer> textbuffer;
    TextView* textview_copy;
    RefPtr<ListStore> liststore;

    SampleClass sc;


private:
    Paned container;
    Frame leftFrame;
    Frame rightFrame;


    Grid rightLayout;

    Notebook notebook;
    TreeView menu;
    RefPtr<TreeStore> menuModel;
    RefPtr<TreeSelection> menuSelection;

    MenuColumn m_menuColumns;


    ScrolledWindow scrolledTextView;
    ScrolledWindow scrolledTreeView;

    Label label;
    TreeView treeView;
    RefPtr<TreeStore> resultModel;
    ContentColumns m_Columns;
    //    RefPtr<TreeSelection> menuSelection;


    TextView textView;
    RefPtr<TextBuffer> textBuffer;
    RefPtr<TextBuffer::Mark> m_endMark;
};

#endif // MAINWINDOW_H
