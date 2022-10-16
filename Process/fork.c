#include "process.h"

void create_task(GtkButton *button, gpointer textView) {

	GtkTextIter end;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (textView));

	const gchar *line = gtk_button_get_label (button);
	gtk_text_buffer_set_text (buffer, line, -1);

	gtk_text_buffer_get_end_iter(buffer, &end);
//	 GtkTextIter iter;
//	gtk_text_buffer_get_iter_at_offset(buffer, &iter, 0);

//	gtk_text_buffer_insert(buffer, &end, "Plain text\n", -1);
	//    gtk_text_buffer_set_text (buffer, "Hello, this is some text", -1);
//
//	int children = fork();
//	int status = 0;
//	gchar *msg;
//	if(children == 0) {
////		msg = g_strdup();
//		gtk_text_buffer_insert(buffer, &end, "I am son ", -1);
////		gtk_text_buffer_get_end_iter(buffer, &end);
////		gtk_text_buffer_insert(buffer, &end, msg, -1);
//	} else {
////		gchar *msg = "I am father ....";
////		if(waitpid(children, &status, 0) == children) {
////			gchar *
////			msg = g_strjoin("\n", msg, "son finished , ready to start father ...", NULL);
//////		}
////
////		gtk_text_buffer_get_end_iter(buffer, &end);
////		gtk_text_buffer_insert(buffer, &end, msg, -1);
////		gtk_text_buffer_insert(buffer, &end, "I am son ", -1);
//	}
	gtk_text_buffer_insert(buffer, &end, "\nI am son \n", -1);
//
//	gtk_text_buffer_get_end_iter(buffer, &end);
//	gtk_text_buffer_insert(buffer, &end, msg, -1);

}
