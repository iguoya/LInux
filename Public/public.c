/*
 * public.c
 *
 *  Created on: 2022年10月16日
 *      Author: tiger
 */
#include  "public.h"

void text_view_append(GtkTextView *text_view, GString *content) {

	GtkTextIter end;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view);

	gtk_text_buffer_get_end_iter(buffer, &end);
	gtk_text_buffer_insert(buffer, &end, content->str, -1);
}
