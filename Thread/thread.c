/*
 * thread.c
 *
 *  Created on: 2022年10月15日
 *      Author: tiger
 */
#include "thread.h"
//
//void create_thread_window(GtkWidget *widget,gpointer window) {
//	  GtkWidget *dialog = NULL;
//	  dialog = gtk_message_dialog_new (GTK_WINDOW (window), GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_CLOSE, "Hello World!");
//	  gtk_window_set_position (GTK_WINDOW (dialog), GTK_WIN_POS_CENTER);
//	  gtk_dialog_run (GTK_DIALOG (dialog));
//	  gtk_widget_destroy (dialog);
//
////	//2.创建GtkBuilder对象，GtkBuilder在<gtk/gtk.h>声明
////	GtkBuilder *builder = gtk_builder_new();
////
////	//3.读取test.glade文件的信息，保存在builder中
////	if ( !gtk_builder_add_from_file(builder,"interface/simple.glade", NULL)) {
////		g_print("cannot load file!");
////	}
////
////	//4.获取窗体指针，注意"window1"要和glade里面的标签名词匹配
//////	GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder,"window"));
////
////	//	GtkButton *button = GTK_BUTTON(gtk_builder_get_object(builder, "button1"));
////	//
////	//	const char *text = gtk_button_get_label(button);
////	//	printf("text=%s\n", text);
//////	gtk_widget_show_all(window);
////
////	gtk_builder_connect_signals (builder, NULL);
////
////	g_object_unref (G_OBJECT (builder));
//}
