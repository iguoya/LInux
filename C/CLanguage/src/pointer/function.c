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
	char result[100] = {0};//;
	gtk_text_buffer_insert(buffer, &end, "数据对比\n", -1);
	gtk_text_buffer_get_end_iter(buffer, &end);

	sprintf(result, "100对比200谁更小？：　%d", (*func)(100, 200));
	gtk_text_buffer_insert(buffer, &end, result, -1);

}

void on_treeview_function_show(GtkWidget* widget, gpointer data) {
	g_print("kkkkkssss\n");
}


void on_button_scores_clicked(GtkButton* button, gpointer data) {
	uint32_t scores[][4] = {
			{110, 123, 54, 248},
			{122, 183, 84, 214},
			{141, 127, 54, 242},
			{120, 83, 58, 264},
			{120, 83, 58, 264},
			{120, 83, 58, 264},
	};//	4*4*6

	GtkListStore* store = data;
	GtkTreeIter iter;
//	g_print("%d--%d\n", sizeof(scores), sizeof(uint32_t));


	for(int i = 0 ; i < sizeof(scores)/(sizeof(uint32_t)*4); ++i) {
		gtk_list_store_append(store, &iter);
		gtk_list_store_set(store, &iter, 0, i+1, -1);
		for(int j = 0; j < 4; ++j) {
			gtk_list_store_set(store, &iter, j+1, scores[i][j], -1);
		}
	}
}

