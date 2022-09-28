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
//#include <stdlib.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	gtk_init(&argc,  &argv);
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(window);
	gtk_main();

	return 0;
}
