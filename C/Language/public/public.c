#include "public/public.h"
	
void text_view_append(GtkTextView *text_view, gchar *content) {   
    GtkTextIter end;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer(text_view);

	gtk_text_buffer_get_end_iter(buffer, &end);
	gtk_text_buffer_insert(buffer, &end, content, -1);
    
}