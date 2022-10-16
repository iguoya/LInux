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
#include "public.h"
#include "system.h"
#include "process.h"
#include "thread.h"


//static void activate (GtkApplication *app, gpointer user_data)
//{
//	GError *error = NULL;
//	GtkBuilder* builder = gtk_builder_new ();
//	if (gtk_builder_add_from_file (builder, "interface/window.glade", &error) == 0)
//	{
//		g_printerr ("Error loading file: %s\n", error->message);
//		g_clear_error (&error);
//	}
//	/* Connect signal handlers to the constructed widgets. */
//	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//
//	gtk_builder_connect_signals (builder, NULL);//连接响应事件
//	g_object_unref(builder);
//
//	gtk_widget_show_all(window);
//	gtk_main ();
//
//	//	app = gtk_builder_get_application (builder);
//	////	gtk_application_window_new(app);
//	//	GtkWidget *window = GTK_WIDGET (gtk_builder_get_object (builder, "window"));//获取window串口使用权
//	////
//	//	gtk_builder_connect_signals (builder, NULL);//连接响应事件
//	//	g_object_unref(G_OBJECT(builder));
//	//
//	//	gtk_widget_show_all (window);
//	//	gtk_main();
//}

int main (int argc, char **argv)
{

	//	GtkApplication *app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	//	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	//	int status = g_application_run (G_APPLICATION (app), argc, argv);
	//	g_object_unref (app);
	GError *error = NULL;

	gtk_init (&argc, &argv);

	GtkBuilder* builder = gtk_builder_new ();
	if (gtk_builder_add_from_file (builder, "ui/window.glade", &error) == 0)
	{
		g_printerr ("Error loading file: %s\n", error->message);
		g_clear_error (&error);
		return 1;
	}

	/* Connect signal handlers to the constructed widgets. */
	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
	GtkWidget* process = GTK_WIDGET(gtk_builder_get_object (builder, "process"));
	GtkWidget* ipc = GTK_WIDGET(gtk_builder_get_object (builder, "ipc"));
	GtkWidget* thread = GTK_WIDGET(gtk_builder_get_object (builder, "thread"));

	g_signal_connect(G_OBJECT(process), "clicked", G_CALLBACK(show_dialog), "process");;
	g_signal_connect(G_OBJECT(ipc), "clicked", G_CALLBACK(show_dialog), "ipc");;
	g_signal_connect(G_OBJECT(thread), "clicked", G_CALLBACK(show_dialog), "thread");;

	//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	gtk_builder_connect_signals (builder, NULL);//连接响应事件
	g_object_unref(G_OBJECT(builder));

	gtk_widget_show_all(window);
	gtk_main ();

	return 0;
}
