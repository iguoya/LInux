/*
 * base_system.c
 *
 *  Created on: 2022年12月17日
 *      Author: tiger
 */
#include "basic.h"


void get_entry_content(GtkButton* button, gpointer data) {
	entry_number = gtk_entry_get_text(data);
}

void on_button_number_clicked(GtkButton* button, gpointer data) {
	//	g_print(entry);
	GtkListStore* store = data;
	GtkTreeIter iter;
	gtk_list_store_append (store, &iter);
	gtk_list_store_set(store, &iter, 0, "二进制", -1);
	gtk_list_store_set(store, &iter, 1, to_binary(atoi(entry_number)), -1);

	char result[9] = {0};
	sprintf(result, "%08X", atoi(entry_number));

	gtk_list_store_append (store, &iter);
	gtk_list_store_set(store, &iter, 0, "十六进制", -1);
	gtk_list_store_set(store, &iter, 1, result, -1);

}


char* to_binary(int number) {
	int position = 32;
	char *result = calloc(32+1, 1);
	memset(result, '0', 32);
	int quotient = 0;
	while(1) {
		quotient = number / 2;
		char reminder = number % 2;
		*(result+position-1) = reminder+48;// 48 : 0
		--position;
		if(quotient == 0) {
			break;
		} else {
			number = quotient;
		}
	}
	return result;
}

char* to_hex(int number) {

}
