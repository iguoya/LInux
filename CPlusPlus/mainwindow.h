#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <gtkmm/application.h>
//class MainWindow : public Gtk::Window
//{
//public:
//    MainWindow();
//};


//#include <gtkmm/button.h>
//#include <gtkmm/window.h>

//class MainWindow : public Gtk::Window
//{

//public:
//  MainWindow();
//  virtual ~MainWindow();

//protected:
//  //Signal handlers:
//  void on_button_clicked();

//  //Member widgets:
//  Gtk::Button m_button;
//};



class MainWindow : public Gtk::ApplicationWindow {
public:
    MainWindow(BaseObjectType* obj, Glib::RefPtr<Gtk::Builder> const& builder)
        : Gtk::ApplicationWindow(obj)
        , builder{builder}
    {
    }

    virtual ~MainWindow() = default;

private:
    Glib::RefPtr<Gtk::Builder> builder;
};

#endif // MAINWINDOW_H
