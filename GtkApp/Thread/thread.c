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

void task_disorder(GtkButton* button, GtkListBox* box) {
	g_thread_new(NULL, (GThreadFunc)number_task, box);
}

void on_button_disorder_clicked(GtkButton* button, gpointer text_buffer) {

	//	text_view_append(text_view, "线程乱序随机执行");
	//	GtkTextBuffer* buffer = gtk_text_view_get_buffer (text_buffer);
	gtk_text_buffer_set_text (text_buffer, "线程乱序随机执行 !!!", -1);
}

//enum
//{
//	COL_NAME = 0,
//	COL_AGE,
//	NUM_COLS
//} ;

guint count = 0;


void on_button_mutex_clicked(GtkButton* button, gpointer store) {


	//	store = data;
	//	GtkTreeIter iter;
	//	gtk_list_store_set(store, &iter, 0, "hello", -1);
	//	gtk_list_store_append();

	//	  GtkListStore *store;
	//
	//	  GtkTreeIter iter;


	//
	//	  store = GTK_LIST_STORE(gtk_tree_view_get_model
	//
	//	      (GTK_TREE_VIEW(list)));



	//	  gtk_list_store_append(store, &iter);
	//
	//	  gtk_list_store_set(store, &iter, 0, 1111, -1);
	//			g_print("hello");

	//	  GtkWidget *view = gtk_tree_view_new ();

	//	  GtkCellRenderer *renderer;

	/* --- Column #1 --- */
	//	  renderer = gtk_cell_renderer_text_new ();
	//	  gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
	//	                                               -1,
	//	                                               "Name",
	//	                                               renderer,
	//	                                               "text", COL_NAME,
	//	                                               NULL);
	//
	//	  /* --- Column #2 --- */
	//	  renderer = gtk_cell_renderer_text_new ();
	//	  gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
	//	                                               -1,
	//	                                               "Age",
	//	                                               renderer,
	//	                                               "text", COL_AGE,
	//	                                               NULL);

	//	  GtkTreeModel *model = create_and_fill_model ();
	//	  GtkTreeModel *model =

	//	  gtk_tree_view_set_model (GTK_TREE_VIEW (view), model);

	/* The tree view has acquired its own reference to the
	 *  model, so we can drop ours. That way the model will
	 *  be freed automatically when the tree view is destroyed
	 */
	//	  g_object_unref (model);
	//	GtkListStore *store = gtk_list_store_new (NUM_COLS,
	//			G_TYPE_STRING,
	//			G_TYPE_UINT);

	/* Append a row and fill in some data */
	GtkTreeIter iter;
	static int index = 0;

	for(int i = 1; i <= 20; ++i) {
		gtk_list_store_append (store, &iter);
		gtk_list_store_set(store, &iter, 0, i+index, -1);

	}
	index += 20;

//	sleep(10);



	//	/* append another row and fill in some data */
	//	gtk_list_store_append (store, &iter);
	//	gtk_list_store_set (store, &iter,
	//			COL_NAME, "Jane Doe",
	//			COL_AGE, 23,
	//			-1);
	//
	//	/* ... and a third row */
	//	gtk_list_store_append (store, &iter);
	//	gtk_list_store_set (store, &iter,
	//			COL_NAME, "Joe Bungop",
	//			COL_AGE, 91,
	//			-1);


	//	  GtkWidget *view = gtk_tree_view_new ();

	//	GtkCellRenderer *renderer;
	//
	//	/* --- Column #1 --- */
	//	renderer = gtk_cell_renderer_text_new ();
	//	gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
	//			-1,
	//			"Name",
	//			renderer,
	//			"text", COL_NAME,
	//			NULL);
	//
	//	/* --- Column #2 --- */
	//	renderer = gtk_cell_renderer_text_new ();
	//	gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (view),
	//			-1,
	//			"Age",
	//			renderer,
	//			"text", COL_AGE,
	//			NULL);
	//
	//	GtkTreeModel *model = GTK_TREE_MODEL(store);
	//
	//	gtk_tree_view_set_model (GTK_TREE_VIEW (view), model);
	//
	//	/* The tree view has acquired its own reference to the
	//	 *  model, so we can drop ours. That way the model will
	//	 *  be freed automatically when the tree view is destroyed
	//	 */
	//	g_object_unref (model);


}
void task_mutex(GtkListStore* store) {
	GtkTreeIter iter;

	pthread_mutex_lock(&lock);

	for(int i = 0; i < 20; ++i) {
		++count;
		gtk_list_store_append (store, &iter);
		gtk_list_store_set(store, &iter, 0, count, -1);
		g_usleep(rand()%500000);
	}
	pthread_mutex_unlock(&lock);
}


void thread_mutex(GtkButton* button, gpointer store) {
	g_thread_new(NULL, (GThreadFunc)task_mutex, store);
}

void show_tree(GtkButton* button, gpointer view) {
	//	GtkTreeModel *model = GTK_TREE_MODEL(store);
	//	gtk_tree_view_set_model (GTK_TREE_VIEW (view), model);
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

