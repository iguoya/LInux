#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <gtkmm/application.h>
#include "sampleclass.h"


#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "doctor.h"
#include "officer.h"
#include "teacher.h"

#include "child.h"
#include "parent.h"

#include "point.h"

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

    MenuColumn()
    { add(item); }

    //      TreeModelColumn<int> m_col_id;
    TreeModelColumn<Glib::ustring> item;
};

//Tree model columns:
class ModelColumns : public Gtk::TreeModel::ColumnRecord
{
public:

    ModelColumns()
    { add(m_col_id); add(m_col_name); }

    Gtk::TreeModelColumn<int> m_col_id;
    Gtk::TreeModelColumn<Glib::ustring> m_col_name;
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

    void on_treeview_row_activated(const Gtk::TreeModel::Path& path, Gtk::TreeViewColumn* column);
    void on_selection_changed();


private:
    void set_menu();
private:

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


    ScrolledWindow scrolledWindow;

    Label label;
    TreeView result;
    RefPtr<TreeStore> resultModel;
    ModelColumns m_Columns;
    //    RefPtr<TreeSelection> menuSelection;


    TextView message;
    RefPtr<TextBuffer> buffer;
};

#endif // MAINWINDOW_H
