/*
 * pointer.h
 *
 *  Created on: 2022年12月18日
 *      Author: tiger
 */

#ifndef POINTER_H_
#define POINTER_H_
#include <gtk/gtk.h>

void on_treeview_week_show(GtkWidget* label, gpointer data);
void on_button_week_clicked(GtkButton* button, gpointer data);

void on_button_function_clicked(GtkWidget* button, gpointer data);
void on_treeview_function_show(GtkWidget* widget, gpointer data);

void on_button_scores_clicked(GtkButton* button, gpointer data);


#endif /* POINTER_H_ */
