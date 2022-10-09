// Simple Hello World program
#include <gtk/gtk.h>


static void
print_hello (GtkWidget *widget, gpointer data)
{
	g_print ("Hello ssss World\n");
}


static void
quit_cb (GtkWindow *window)
{
	gtk_window_close (window);
}


static void
activate (GtkApplication *app, gpointer user_data)
{
	/* Construct a GtkBuilder instance and load our UI description */
	GtkBuilder *builder = gtk_builder_new ();
	gtk_builder_add_from_file (builder, "simple.glade", NULL);
//ggguoya
	/* Connect signal handlers to the constructed widgets. */
	GObject *window = gtk_builder_get_object (builder, "window");
	gtk_window_set_application (GTK_WINDOW (window), app);
//
//	GObject *button = gtk_builder_get_object (builder, "button1");
//	g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
//
//	button = gtk_builder_get_object (builder, "button2");
//	g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
//
//	button = gtk_builder_get_object (builder, "quit");
//	g_signal_connect_swapped (button, "clicked", G_CALLBACK (quit_cb), window);

	gtk_widget_show (GTK_WIDGET (window));

	/* We do not need the builder any more */
	g_object_unref (builder);
}

int main (int argc, char **argv)
{

	GtkApplication * app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	int status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);
	return status;
}

//
//static void activate (GtkApplication* app,gpointer user_data)
//{
//  GtkWidget *window;
//
//  window = gtk_application_window_new (app);
//  gtk_window_set_title (GTK_WINDOW (window), "Window");
//  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
//  gtk_widget_show (window);
//}
//
//int
//main (int    argc,
//      char **argv)
//{
//  GtkApplication *app;
//  int status;
//
//  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
//  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
//  status = g_application_run (G_APPLICATION (app), argc, argv);
//  g_object_unref (app);
//
//  return status;
//}
