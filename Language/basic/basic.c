
#include "basic.h"

//void hello_world() {
//    printf("hello world !");
//}

void hello_world (GtkButton *button, gpointer text_view)
{
    
	GtkTextIter end;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view);

	gtk_text_buffer_get_end_iter(buffer, &end);
	gtk_text_buffer_insert(buffer, &end, "hello world 郭雅!", -1);

}