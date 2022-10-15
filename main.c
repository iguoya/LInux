/*
 ============================================================================
 Name        : LinuxProgramming.c
 Author      : tiger
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in GTK+
 ============================================================================
 */
#include <gtk/gtk.h>
#include "process/process.h"

void process (GtkWidget *widget,
		gpointer   data)
{
	g_print ("Hello World\n");
}

int main (int argc, char *argv[])
{

	GError *error = NULL;

	gtk_init (&argc, &argv);

	/* Construct a GtkBuilder instance and load our UI description */
	GtkBuilder* builder = gtk_builder_new ();
	if (gtk_builder_add_from_file (builder, "interface/window.glade", &error) == 0)
	{
		g_printerr ("Error loading file: %s\n", error->message);
		g_clear_error (&error);
		return 1;
	}

	/* Connect signal handlers to the constructed widgets. */
	GObject* window = gtk_builder_get_object (builder, "window");
	//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
	//	  gtk_builder_connect_signals(gtkBuilder, window);


	gtk_builder_connect_signals (builder, NULL);//连接响应事件
	g_object_unref(G_OBJECT(builder));
	//	button = gtk_builder_get_object (builder, "button1");
	//	g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
	//
	//	button = gtk_builder_get_object (builder, "button2");
	//	g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
	//
	//	button = gtk_builder_get_object (builder, "quit");
	//	g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);
	gtk_widget_show_all(window);
	gtk_main ();

	return 0;
}

//static void activate (GtkApplication* app, gpointer user_data)
//{

//
//	GError *error = NULL;
//	GtkBuilder *builder = gtk_builder_new ();
//	if (gtk_builder_add_from_file (builder, "simple.glade", &error) == 0)
//	{
//		g_printerr ("Error loading file: %s\n", error->message);
//		g_clear_error (&error);
//		g_print("hello");
////		return 1;
//	}
//
//	/* Connect signal handlers to the constructed widgets. */
//	GtkWidget *window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
////	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//	gtk_widget_show_all (window);
//
//}
//
//int
//main (int    argc,
//		char **argv)
//{
//	GtkApplication *app;
//	int status;
//
//	app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
//	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
//	status = g_application_run (G_APPLICATION (app), argc, argv);
//	g_object_unref (app);
//
//	return status;
//}
