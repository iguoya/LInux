/*
 * basic.h
 *
 *  Created on: 2022年12月17日
 *      Author: tiger
 */

#ifndef BASIC_BASIC_H_
#define BASIC_BASIC_H_
#include <gtk/gtk.h>

const gchar *entry_number;

void get_entry_content(GtkButton* button, gpointer data);
void on_button_number_clicked(GtkButton* button, gpointer data);

char* to_binary(int number);
char* to_hex(int number);
char* to_ip(int number);

#endif /* BASIC_BASIC_H_ */
