/*
 * thread.c
 *
 *  Created on: 2022年10月15日
 *      Author: tiger
 */
#include "thread.h"


void number_task(GtkListBox* box) {
	//	GtkListBox *box = data;
	for(int i = 1; i <= 30; ++i) {

		GtkWidget* row = gtk_list_box_row_new();
		GtkWidget* label = gtk_label_new(g_strdup_printf("%i", i));
		//     gtk_list_box_insert(box, gtk_label_new("hello"), -1);
		g_usleep(rand()%4000000);

		gtk_container_add(GTK_CONTAINER(row), label);
		gtk_container_add(GTK_CONTAINER(box), row);

		gtk_widget_show(label);
		gtk_widget_show(row);
	}
}

void disorder_task(GtkButton* button, GtkListBox* box) {
	g_thread_new(NULL, (GThreadFunc)number_task, box);
}

void on_disorder_clicked(GtkButton* button, gpointer text_view) {
	//	g_print("hello");
//	text_view_append(text_view, "线程乱序随机执行");

	GtkTextBuffer* buffer = gtk_text_view_get_buffer (text_view);

	gtk_text_buffer_set_text (buffer, "线程乱序随机执行", -1);
}


void on_threadA_clicked(GtkButton* button, gpointer data) {
	//	g_print(gtk_button_get_label(button));
	g_print("hello");
}


void on_thread_click(GtkButton* button, gpointer data) {
	//	g_print(gtk_button_get_label(button));
}


//void *task(void *message) {
//	TMessage *msg = (TMessage *)message;
//	GString *content = g_string_new("");
//	g_string_sprintf(content, "thread function is running : argument :%s\n", msg->content->str);
//	text_view_append(msg->text_view, content);
//	//	GString *content = g_string_new("thread function is running : argument :%s");
//	//	g_string_append(content, msg->content);
//	//	text_view_append(msg->text_view, content);
//	sleep(2);
//	//	g_string_free(msg->content);
//	//	msg->content = g_string_new("bye");
//	//	text_view_append(msg->text_view, g_string_append(content, "bye"));
//	//	text_view_append(msg->text_view, g_string_new("guoya"));
//	g_string_assign(msg->content, "guoya");
//
//	pthread_exit("Thank you for the CPU time");
//}


//void create_thread(GtkButton *button,GtkTextView* text_view) {
//	pthread_t thread[3] = {};
//	TMessage *message = (TMessage *)malloc(sizeof(TMessage));
//	message->text_view = text_view;
//	message->content = g_string_new("hello world");
//
//	//	char message[] = "hello world";
//	int index = 0;
//	for(; index < 3; ++index) {
//		pthread_create(&thread[index], NULL, task, (void *)message);
//	}
//	GString *msg = g_string_new("create thread success \n waiting for thread to finish ...\n");
//	text_view_append(text_view, msg);
//
//	void *result;
//	pthread_join(thread[0], &result);
//
//
//	GString *content = g_string_new("");
//	g_string_sprintf(content, "thread joined, return : %s\n", g_string_new((char *)result)->str);
//	text_view_append(text_view, content);
////
//	GString *now_message = g_string_new("");
//	g_string_sprintf(now_message, "message is now : %s\n", message->content->str);
//	text_view_append(text_view, now_message);
//
//}

