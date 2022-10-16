/*
 * share_memory.c
 *
 *  Created on: 2022年10月16日
 *      Author: tiger
 */
#include "ipc.h"


void create_ipc_dialog(GtkWidget *button, gpointer window) {
	//	g_print("hello\n");
		GError *error = NULL;
		GtkBuilder* builder = gtk_builder_new ();
		//	    gtk_builder_add_from_file (builder, "tutorial.glade", NULL);
		if (gtk_builder_add_from_file (builder, "ui/ipc.glade", &error) == 0)
		{
			g_printerr ("Error loading file: %s\n", error->message);
			g_clear_error (&error);
		}
		GtkWidget *dialog = GTK_WIDGET(gtk_builder_get_object(builder,"dialog"));
		//	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
		//	GtkButton *return_button = GTK_BUTTON(gtk_builder_get_object(builder, "return"));
		//	g_signal_connect (return_button, "clicked", G_CALLBACK (return_window), parent);
		//			    GtkWidget *window = GTK_WIDGET (gtk_builder_get_object (builder, "../window"));
		gtk_builder_connect_signals (builder, NULL);

		g_object_unref (G_OBJECT (builder));

		gtk_dialog_run(GTK_DIALOG(dialog));
//		gtk_widget_show_all(dialog);


}


void share_memory(GtkButton *button, gpointer text_view) {


    GString *content =g_string_new("Hello Laomeng.");
    text_view_append(text_view, content);

//	GtkTextIter end;
//	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view));
//
////	const gchar *line = gtk_button_get_label (button);
////	gtk_text_buffer_set_text (buffer, line, -1);
//
//	gtk_text_buffer_get_end_iter(buffer, &end);
//	gtk_text_buffer_insert(buffer, &end, "共享内存ssss mmap :\n", -1);


}

