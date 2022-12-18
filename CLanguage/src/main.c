/*
 ============================================================================
 Name        : CLanguage.c
 Author      : tiger
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

#include "basic/basic.h"
#include "pointer/pointer.h"

int main(int argc, char* argv[]) {

	gtk_init (&argc, &argv);

	GtkBuilder* builder = gtk_builder_new_from_file("ui/window.glade");

	/* Connect signal handlers to the constructed widgets. */
	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));

	//	GtkStyleProvider* provider = GTK_STYLE_PROVIDER (gtk_css_provider_new ());
	//	gtk_css_provider_load_from_resource (GTK_CSS_PROVIDER (provider), "/style/gtk.css");
	//
	//	apply_css (window, provider);

	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	gtk_builder_connect_signals (builder, builder);//连接响应事件
	g_object_unref(G_OBJECT(builder));

	gtk_widget_show_all(window);
	gtk_main ();
	return 0;

}
