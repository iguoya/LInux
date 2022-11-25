#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	GtkWidget *window;

	gtk_init (&argc, &argv);

	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
    
//    GtkEntry *entry_main = gtk_entry_new();
//    gtk_widget_show(entry_main);
//     gtk_container_add(window, entry_main);
     
     
//    GtkButton *btn = gtk_button_new();
//    gtk_button_set_label("btn", "执行");
//    gtk_widget_show(btn);
//    gtk_container_add(window, btn);


    GtkLabel *label = gtk_label_new("说明");
    gtk_container_add(window, label);
    gtk_widget_show(label);

    
    
	gtk_widget_show (window);

	gtk_main ();

	return 0;
}