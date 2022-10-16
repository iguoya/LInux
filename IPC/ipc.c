/*
 * share_memory.c
 *
 *  Created on: 2022年10月16日
 *      Author: tiger
 */
#include "ipc.h"




void share_memory(GtkButton *button, gpointer text_view) {


    GString *content =g_string_new("Hello Laomeng.");
    text_view_append(text_view, content);

//	GtkTextIter end;
//	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view));
//
////	const gchar *line = gtk_button_get_label (button);
////	gtk_text_buffer_set_text (buffer, line, -1);
//
//	gtk_text_buffer_get_end_iter(buffer, &end);
//	gtk_text_buffer_insert(buffer, &end, "共享内存ssss mmap :\n", -1);


}

