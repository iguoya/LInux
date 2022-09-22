/***************************************************************************
 *            system.c
 *
 *  四 九月 22 23:43:33 2022
 *  Copyright  2022  tiger
 *  <user@host>
 ****************************************************************************/
#include "system.h"
#include <stdio.h>

void random_number(GtkWidget *widget, gpointer content)
{
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (content));
	/*	 gtk_text_buffer_insert(buffer, -1, "hello", 6);
	gtk_text_buffer_set_text (buffer, "Hello, this is some text 郭雅", -1);
	*/
	const gchar *text;

	/*	gchar str[300];*/
	srand(time(0));

	GString *string = g_string_new("");
	 
	for(int i = 0; i<10; ++i) {
		
		/*		g_print("hello world: %d\n", number);*/
		for(int j = 0; j < 10; ++j) {
			int number = rand()%100 +1;
			gchar *number_str = g_strdup_printf("%i\t", number);
			g_string_append (string, number_str);
		}
		g_string_append (string, "\n");

		/*		text = itoa(number);*/
		/*		sprintf(text, "随机数：%s\t", number);*/
	}
g_string_append (string, "\n----------------\n");
	text = string->str;



	GtkTextIter start,end;

	gtk_text_buffer_get_bounds(GTK_TEXT_BUFFER(buffer),&start,&end);/*获得缓冲区开始和结束位置的Iter*/

	gtk_text_buffer_insert(GTK_TEXT_BUFFER(buffer),&start,text,strlen(text));/*插入文本到缓冲区*/

}