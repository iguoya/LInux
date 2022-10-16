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

void show_dialog(GtkButton *button, gchar* data);

#endif /* PUBLIC_PUBLIC_H_ */
