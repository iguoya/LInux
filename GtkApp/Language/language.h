/*
 * language.h
 *
 *  Created on: 2022年12月6日
 *      Author: tiger
 */

#ifndef LANGUAGE_H_
#define LANGUAGE_H_
#include <gtk/gtk.h>
#include "public.h"

//static const gchar* number;

typedef struct {
	size_t length;
	char content[];
}vector;



void get_number(GtkButton *button, GtkEntryBuffer* buffer);
vector* create_words(char s[]);
void on_button_flexible_clicked(GtkButton *button, GtkTextBuffer* buffer);





#endif /* LANGUAGE_H_ */
