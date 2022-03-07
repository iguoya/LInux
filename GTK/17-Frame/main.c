#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	GtkWidget *window;

	gtk_init (&argc, &argv);

//	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
	
	
	GtkBuilder *builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "ui.glade", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);
    
    // get pointers to the two labels
//    g_lbl_hello = GTK_WIDGET(gtk_builder_get_object(builder, "label_hello"));
//    g_lbl_count = GTK_WIDGET(gtk_builder_get_object(builder, "label_name"));
 
    g_object_unref(builder);
	
	
	
	
	
	

	gtk_widget_show (window);

	gtk_main ();

	return 0;
}