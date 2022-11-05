#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <stdint.h>
#include "public.h"

enum {col_name = 0, col_age, col_score , n_cols};


void hello_world(GtkButton *button, gpointer pointer);

void show_content(GtkButton *button, gpointer window);

void clear_content(GtkButton *button, gpointer window); 

void show_type_bytes(GtkButton *button, gpointer pointer);

void show_array(GtkButton *button, gpointer pointer);