/*
 * public.h
 *
 *  Created on: 2022年10月16日
 *      Author: tiger
 */

#ifndef PUBLIC_PUBLIC_H_
#define PUBLIC_PUBLIC_H_
#include <gtk/gtk.h>

void text_view_append(GtkTextView *text_view, GString *content);

void show_dialog(GtkButton *button, GtkWindow* parent);

void show_dialogA(GtkButton *button, GtkWindow* parent);


void on_thread_clicked(GtkButton *button, gpointer data);

#endif /* PUBLIC_PUBLIC_H_ */
