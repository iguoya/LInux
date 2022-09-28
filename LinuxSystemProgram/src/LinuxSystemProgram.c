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

void hello(GtkWidget *widget, gpointer user_data) {
	g_print("hello 郭雅");
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
