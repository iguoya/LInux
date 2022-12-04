#include <gtk/gtk.h>
#include <gtk/gtkapplication.h>
#include <gtk/gtkwidget.h>

#include "public.h"
#include "system.h"
#include "process.h"
#include "thread.h"


//
void on_system_clicked(GtkButton* button, gpointer data) {
	g_print("hello");
//	GtkBox* container = GTK_WIDGET(data);

//	GtkWidget* buttonA = gtk_button_new_with_label("My button");
////
////	//连接信号，让点击按钮后，便调用 print_msg 函数
////	g_signal_connect(button , "clicked" , G_CALLBACK( print_msg ) , NULL);
////
////	//将按钮放入盒容器中
//	gtk_container_add(GTK_CONTAINER(data) , buttonA);
//
//	gtk_widget_show(buttonA);
}

//static void activate (GtkApplication* app, gpointer user_data)
//{
//	GtkBuilder* builder = gtk_builder_new_from_file("ui/window.glade");
////	 GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (class);
////	  gtk_widget_class_set_template_from_resource (widget_class,
////	                                               "/ui/window.glade");
//
//	//	if (gtk_builder_add_from_file (builder, "ui/window.glade", &error) == 0)
//	//	{
//	//		g_printerr ("Error loading file: %s\n", error->message);
//	//		g_clear_error (&error);
//	//		return 1;
//	//	}
//	/* Connect signal handlers to the constructed widgets. */
//	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
//
//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//
//	GtkWidget* container = GTK_WIDGET(gtk_builder_get_object (builder, "container"));
//
//
//
//	gtk_builder_connect_signals (builder, NULL);//连接响应事件
//	g_object_unref(G_OBJECT(builder));
//
//	gtk_widget_show_all(window);
////
////	int i = 100;
//	gtk_main ();
//
//}
//
//int main (int argc, char **argv)
//{
//
//	GtkApplication* app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
//	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
//	int status = g_application_run (G_APPLICATION (app), argc, argv);
//	g_object_unref (app);
//
//	return status;
//}



///*
// ============================================================================
// Name        : LinuxProgramming.c
// Author      : tiger
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in GTK+
// ============================================================================
// */
//#include <gtk/gtk.h>
//#include "public.h"
//#include "system.h"
//#include "process.h"
//#include "thread.h"
//
//
////static void activate (GtkApplication *app, gpointer user_data)
////{
////	GError *error = NULL;
////	GtkBuilder* builder = gtk_builder_new ();
////	if (gtk_builder_add_from_file (builder, "interface/window.glade", &error) == 0)
////	{
////		g_printerr ("Error loading file: %s\n", error->message);
////		g_clear_error (&error);
////	}
////	/* Connect signal handlers to the constructed widgets. */
////	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
////	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
////
////	gtk_builder_connect_signals (builder, NULL);//连接响应事件
////	g_object_unref(builder);
////
////	gtk_widget_show_all(window);
////	gtk_main ();
////
////	//	app = gtk_builder_get_application (builder);
////	////	gtk_application_window_new(app);
////	//	GtkWidget *window = GTK_WIDGET (gtk_builder_get_object (builder, "window"));//获取window串口使用权
////	////
////	//	gtk_builder_connect_signals (builder, NULL);//连接响应事件
////	//	g_object_unref(G_OBJECT(builder));
////	//
////	//	gtk_widget_show_all (window);
////	//	gtk_main();
////}
//

void app_exit() {

	pthread_mutex_destroy(&lock);
	gtk_main_quit();
}

int main (int argc, char **argv)
{

	//	GtkApplication *app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	//	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	//	int status = g_application_run (G_APPLICATION (app), argc, argv);
	//	g_object_unref (app);
	//	GError *error = NULL;

	gtk_init (&argc, &argv);

	pthread_mutex_init(&lock, NULL);

	//	GtkBuilder* builder = gtk_builder_new ();

	GtkBuilder* builder = gtk_builder_new_from_file("ui/integration.glade");
	//	if (gtk_builder_add_from_file (builder, "ui/window.glade", &error) == 0)
	//	{
	//		g_printerr ("Error loading file: %s\n", error->message);
	//		g_clear_error (&error);
	//		return 1;
	//	}

	/* Connect signal handlers to the constructed widgets. */
	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
	g_signal_connect (window, "destroy", G_CALLBACK (app_exit), NULL);

	gtk_builder_connect_signals (builder, NULL);//连接响应事件
	g_object_unref(G_OBJECT(builder));

	gtk_widget_show_all(window);
	gtk_main ();


	return 0;
}
