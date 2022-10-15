/*
 * process.c
 *
 *  Created on: 2022年10月15日
 *      Author: tiger
 */
#include "process.h"

void create_process_window(GtkWidget *widget,gpointer data) {
	GtkWidget *window;
//	window = gtk_new_window();

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_title (GTK_WINDOW (window), "Window");
	gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);
	gtk_widget_show_all (window);
}
