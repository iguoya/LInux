#include <gtkmm.h>
#include "mainwindow.h"


int main (int argc, char **argv)
{

    auto app = Application::create("cn.yatiger.gtkmm");

    return app->make_window_and_run<MainWindow>(argc, argv);
}
