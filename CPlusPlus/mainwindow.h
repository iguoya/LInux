#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <gtkmm/application.h>
#include "sampleclass.h"
#include <iostream>

#include "doctor.h"
#include "officer.h"
#include "teacher.h"

#include "child.h"
#include "parent.h"

#include "point.h"

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
    MainWindow();

    virtual ~MainWindow() = default;
protected:
    void on_button_copy_clicked();
    void on_button_datatype_clicked();
    void on_button_array_clicked();
    void on_button_virtual_clicked();
    void on_button_visit_control_clicked();

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
    Notebook notebook;
    Frame leftFrame;
    Frame rightFrame;

    Fixed fixed;
    ScrolledWindow scrolledWindow;
    Button button1;
    Button button2;
    Button button3;
    Label label1;
    Label label2;
    int button1Clicked = 0;
    int button2Clicked = 0;
};

#endif // MAINWINDOW_H
