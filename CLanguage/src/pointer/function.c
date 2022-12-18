/*
 * function.c
 *
 *  Created on: 2022年12月18日
 *      Author: tiger
 */

#include "pointer.h"

int min(int x, int y) {
	return x > y ? y : x;
}

void on_button_function_clicked(GtkWidget* button, gpointer data) {
	GtkTextBuffer* buffer = data;
	GtkTextIter end;
	gtk_text_buffer_get_end_iter(buffer, &end);

	int (*func)();
	func = min;
	char result[10] = {0};//;
	sprintf(result, "%d", (*func)(100, 200));
	gtk_text_buffer_insert(buffer, &end, result, -1);

}

void on_treeview_function_show(GtkWidget* widget, gpointer data) {
	g_print("kkkkkssss\n");
}
