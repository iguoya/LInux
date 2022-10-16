/*
 * public.c
 *
 *  Created on: 2022年10月16日
 *      Author: tiger
 */
#include  "public.h"


void show_dialog(GtkButton *button, gchar* data) {
	//	g_print("hello\n");
	GError *error = NULL;
	GtkBuilder* builder = gtk_builder_new ();
	gchar ui_file[30] = {};

	g_snprintf(ui_file, 30, "ui/%s.glade", data);
	//		g_print(ui_file);
	if (gtk_builder_add_from_file (builder, ui_file, &error) == 0)
	{
		g_printerr ("Error loading file: %s\n", error->message);
		g_clear_error (&error);
	}
	GtkWidget *dialog = GTK_WIDGET(gtk_builder_get_object(builder, "dialog"));

	gtk_builder_connect_signals (builder, NULL);

	g_signal_connect(G_OBJECT(dialog), "destroy", G_CALLBACK(gtk_widget_destroy), NULL);

	g_object_unref (G_OBJECT (builder));

	gtk_widget_show_all(dialog);
}

void text_view_append(GtkTextView *text_view, GString *content) {

	GtkTextIter end;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view);

	gtk_text_buffer_get_end_iter(buffer, &end);
	gtk_text_buffer_insert(buffer, &end, content->str, -1);
}
