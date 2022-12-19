#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <gtkmm/application.h>
#include "class/sampleclass.h"
#include <iostream>
using namespace std;
using namespace Gtk;
using namespace Glib;

//class Cols: public Gtk::TreeModel::ColumnRecord {
//    public:
//        Cols() {
//            // This order must match the column order in the .glade file
//            this->add(this->id);
//            this->add(this->name);
//            this->add(this->size);
//        }

//        // These types must match those for the model in the .glade file
//        Gtk::TreeModelColumn<int> id;
//        Gtk::TreeModelColumn<ustring> name;
//        Gtk::TreeModelColumn<int> size;
//};


class MainWindow : public ApplicationWindow {
public:
    MainWindow(BaseObjectType* obj, RefPtr<Builder> const& builder);

    virtual ~MainWindow() = default;
protected:
    void on_button_copy_clicked();
    void on_button_datatype_clicked();
    void on_button_array_clicked();

private:
    RefPtr<Builder> builder;

    Button* button_copy;
    Button* button_datatype;
    Button* button_array;

//    TextBuffer* textbuffer;
    RefPtr<const TextBuffer> textbuffer;
    TextView* textview_copy;
    RefPtr<ListStore> liststore;

    SampleClass sc;
};

#endif // MAINWINDOW_H
