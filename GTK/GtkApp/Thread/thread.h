/*
 * thread.h
 *
 *  Created on: 2022年10月15日
 *      Author: tiger
 */

#ifndef THREAD_THREAD_H_
#define THREAD_THREAD_H_
#include <gtk/gtk.h>
//#include <pthread.h>
#include "public.h"
#include <stdlib.h>
#include <glib.h>


//enum {
//
//  LIST_ITEM = 0,
//
//  N_COLUMNS
//
//};




typedef struct TMessage {
	GtkTextView* text_view;
	GString *content;
} TMessage;

void *task(void *message);
void create_thread(GtkButton *button, GtkTextView* text_view);

void on_button_disorder_clicked(GtkButton* button, gpointer text_view);
void number_task(GtkListBox* box);
void task_disorder(GtkButton* button, GtkListBox* box);


void on_button_mutex_clicked(GtkButton* button, gpointer data);
void task_mutex(GtkListStore* store);
void thread_mutex(GtkButton* button, gpointer data);

void show_tree(GtkButton* button, gpointer data);


void on_threadA_click(GtkButton* button, gpointer data);
void on_thread_click(GtkButton* button, gpointer data);

#endif /* THREAD_THREAD_H_ */
