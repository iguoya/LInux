/*
 * week.c
 *
 *  Created on: 2022年12月18日
 *      Author: tiger
 */
#include "pointer.h"

void on_treeview_week_show(GtkWidget* label, gpointer data){
//	g_print("hello!!!\n");
//	printf("hello###\n");
}

void on_button_week_clicked(GtkButton* button, gpointer data) {
	char* weeks[] = {
			"Monday",
			"Tuesday",
			"Wednesday",
			"Thursday",
			"Friday",
			"Saturday",
			"Sunday"
	};

	GtkListStore* store = data;
	GtkTreeIter iter;

	for(int i = 0 ; i < 7; ++i) {
		gtk_list_store_append (store, &iter);
		gtk_list_store_set(store, &iter, 0, i, -1);
		gtk_list_store_set(store, &iter, 1, weeks[i], -1);
	}



}


