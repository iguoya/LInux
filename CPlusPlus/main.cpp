#include <gtkmm.h>
#include <iostream>


int main (int argc, char **argv)
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  //Load the GtkBuilder file and instantiate its widgets:
  auto refBuilder = Gtk::Builder::create();
  try
  {
    refBuilder->add_from_file("../CPlusPlus/window.glade");
  }
  catch(const Glib::FileError& ex)
  {
    std::cerr << "FileError: " << ex.what() << std::endl;
    return 1;
  }

  Gtk::Window* window = nullptr;
  //Get the GtkBuilder-instantiated Dialog:
  refBuilder->get_widget("window", window);

  app->run(*window);

  delete window;

  return 0;
}
