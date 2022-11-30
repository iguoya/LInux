#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	GtkWidget *window;

	gtk_init (&argc, &argv);

	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    
    GtkBuilder * builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "../ui.glade", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "main"));
    gtk_builder_connect_signals(builder, NULL);
    
    

	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	gtk_widget_show (window);

	gtk_main ();

	return 0;
}