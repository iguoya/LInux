#include <gtk/gtk.h>

int main(int argc, char *argv[])
{


    gtk_init (&argc, &argv);

//	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
//
//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//
//	gtk_widget_show (window);
    
	GtkBuilder* builder = gtk_builder_new_from_file("../control.glade");

	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));

	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	gtk_builder_connect_signals (builder, NULL);//连接响应事件
	g_object_unref(G_OBJECT(builder));

	gtk_widget_show_all(window);

    gtk_main ();

    return 0;
}
