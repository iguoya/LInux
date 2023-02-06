#include <gtkmm.h>
#include <iostream>
#include "mainwindow.h"

using namespace std;

//static void on_button_clicked()
//{
//    cout<<"hello"<<endl;
////  if(pDialog)
////    pDialog->hide(); //hide() will cause main::run() to end.
//}
int main (int argc, char **argv)
{

    auto app = Gtk::Application::create(argc, argv, "de.engelmarkus.example");

    auto builder = Gtk::Builder::create_from_file("../CPlusPlus/mainwindow.glade");
    MainWindow* window = nullptr;

    builder->get_widget_derived("window", window);

    auto r = app->run(*window);

    delete window;

    return r;



    //    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    //    MainWindow mainwindow;

    //    //Shows the window and returns when it is closed.
    //    return app->run(mainwindow);

    //  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    //  //Load the GtkBuilder file and instantiate its widgets:
    //  auto refBuilder = Gtk::Builder::create();
    //  try
    //  {
    //    refBuilder->add_from_file("../CPlusPlus/window.glade");
    //  }
    //  catch(const Glib::FileError& ex)
    //  {
    //    std::cerr << "FileError: " << ex.what() << std::endl;
    //    return 1;
    //  }

    //  Gtk::Window* window = nullptr;
    //  //Get the GtkBuilder-instantiated Dialog:
    //  refBuilder->get_widget("window", window);
    //  Gtk::Button* pButton = nullptr;
    //  refBuilder->get_widget("button_copy", pButton);
    //  pButton->signal_clicked().connect(sigc::ptr_fun(on_button_clicked));

    //  app->run(*window);

    //  delete window;

    //    return 0;
}
