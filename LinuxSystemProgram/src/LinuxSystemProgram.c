/*
 ============================================================================
 Name        : LinuxSystemProgram.c
 Author      : tiger
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <gtk/gtk.h>

#include "system.h"

void hello(GtkButton *button, gpointer textView) {
	const gchar *content = "hello 郭雅\n";

	GtkTextBuffer *buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (textView));
	GtkTextIter start,end;

	gtk_text_buffer_get_bounds(GTK_TEXT_BUFFER(buffer),&start,&end);/*获得缓冲区开始和结束位置的Iter*/
	gtk_text_buffer_insert(GTK_TEXT_BUFFER(buffer),&start,content,strlen(content));/*插入文本到缓冲区*/

}

int main(int argc, char *argv[]) {
	//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	gtk_init(&argc,  &argv);
	//	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	GtkBuilder *builder = gtk_builder_new();
	if ( !gtk_builder_add_from_file(builder,"mainwindow.glade", NULL)) {
		printf("can't load file!");
	}

	GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
	gtk_builder_connect_signals(builder, NULL);
	g_object_unref(builder);

	gtk_widget_show(window);
	gtk_main();

	return 0;
}
