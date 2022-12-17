/*
 * base_system.c
 *
 *  Created on: 2022年12月17日
 *      Author: tiger
 */
#include "basic.h"


void get_entry_content(GtkButton* button, gpointer data) {
	entry_number = gtk_entry_buffer_get_text(data);
}

void on_button_number_clicked(GtkButton* button, gpointer data) {
	//	g_print(entry);
	GtkListStore* store = data;
	GtkTreeIter iter;
	gtk_list_store_append (store, &iter);
	gtk_list_store_set(store, &iter, 0, "二进制", -1);
	gtk_list_store_set(store, &iter, 1, to_binary(atoi(entry_number)), -1);


	gtk_list_store_append (store, &iter);
	gtk_list_store_set(store, &iter, 0, "十六进制", -1);
	gtk_list_store_set(store, &iter, 1, to_hex(atoi(entry_number)), -1);

	gtk_list_store_append (store, &iter);
	gtk_list_store_set(store, &iter, 0, "IP转换", -1);
	gtk_list_store_set(store, &iter, 1, to_ip(atoi(entry_number)), -1);

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
	char* result = calloc(9, 1);
	sprintf(result, "%08X", number);
	return result;
}


char* to_ip(int number) {
	uint8_t* p = &number;
	char* result = calloc(100, 1);
	for(int i = 3; i >= 0; --i) {
//		char tmp[5] = {0};
		sprintf(result, "%s%u. ", result, *(p+i));
//		fprintf("%s", result);
//		strcat(result, tmp);
	}
	return result;
}
