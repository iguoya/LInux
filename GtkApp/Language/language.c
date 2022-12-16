/*
 * language.c
 *
 *  Created on: 2022年12月6日
 *      Author: tiger
 */
#include "language.h"

gchar number[100] = {0};

void get_number(GtkButton* button, GtkEntryBuffer* buffer) {
	strcpy(number, gtk_entry_buffer_get_text(buffer));

//	g_print(gtk_entry_buffer_get_text(buffer));
//	g_print("hello");
	g_print(number);

}

vector* create_words(char s[]) {
	vector* v = (vector* )malloc(sizeof(vector) + strlen(s));
	v->length = strlen(s);
	strcpy(v->content, s);
	return v;
}

void on_button_flexible_clicked(GtkButton* button, GtkTextBuffer* buffer) {

	char msg[100];
	sprintf(msg, "数组长度：%s, vector大小：%d", number, sizeof(vector));
	append(buffer, number);

	vector* slogan = create_words("中国共产党万岁！！！");
	append(buffer, slogan->content);

	free(slogan);

	slogan = create_words("世界人民大团结万岁！！！");
	append(buffer, slogan->content);
	free(slogan);



//	GtkTextIter end;
	//	gtk_text_buffer_insert(buffer, &iter, "hello", -1);

//	gtk_text_buffer_get_end_iter(buffer, &end);

//	gtk_text_buffer_insert(buffer, &end, "共享内存ssss mmap :\n", -1);

//	gtk_text_buffer_get_end_iter(buffer, &end);
//	gtk_text_buffer_insert(buffer, &end, numbers, -1);


	//
	//		gtk_text_buffer_get_end_iter(buffer, &end);
	//		gtk_text_buffer_insert(buffer, &end, content->str, -1);
}
