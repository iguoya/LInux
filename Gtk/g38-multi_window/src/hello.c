#include "hello.h"
#include <config.h>
#include <gtk/gtk.h>


#include <glib/gi18n.h>



typedef struct _Private Private;
struct _Private
{
	/* ANJUTA: Widgets declaration for g35_text.ui - DO NOT REMOVE */
};

static Private* priv = NULL;

/* For testing purpose, define TEST to use the local (not installed) ui file */
#define TEST
#ifdef TEST
#define UI_FILE "src/g37_conponent.ui"
#else
#define UI_FILE PACKAGE_DATA_DIR"/ui/g37_conponent.ui"
#endif
#define TOP_WINDOW "window"

  GtkWidget *window;
	GtkBuilder *builder;

void gyy(GtkButton *btn, GtkEntry *entry) {
	gtk_entry_set_text (entry, "郭雅");
}

void gy(GtkButton *btn, GtkLabel *label, ) {
	g_print("郭雅aaa\n");
/*	g_print(gtk_editable_get_text(GTK_EDITABLE (entry)));*/
/*	g_print();*/
/*	get_text_area ()*/
/*	gtk_label_set_text(label, "aabb");
	GtkLabel *label = GTK_BUTTON(gtk_builder_get_object(builder, "label"));
*/
	g_print(gtk_label_get_text (label));
	gtk_label_set_text(label, "郭雅");
}

void
on_window_destroy (GtkWidget *widget, gpointer data)
{
	gtk_main_quit ();
}


void hello() {
/*	g_print("郭雅");*/
/*  GtkWidget *dialog = NULL;
  dialog = gtk_message_dialog_new (GTK_WINDOW (win), GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_CLOSE, "Hello World!");
  gtk_window_set_position (GTK_WINDOW (dialog), GTK_WIN_POS_CENTER);
  gtk_dialog_run (GTK_DIALOG (dialog));
  gtk_widget_destroy (dialog);*/


	GError* error = NULL;

	/* Load UI from file */
	builder = gtk_builder_new ();
	if (!gtk_builder_add_from_file (builder, UI_FILE, &error))
	{
		g_critical ("Couldn't load builder file: %s", error->message);
		g_error_free (error);
	}

	/* Auto-connect signal handlers */
	gtk_builder_connect_signals (builder, NULL);

	/* Get the window object from the ui file */
	window = GTK_WIDGET (gtk_builder_get_object (builder, TOP_WINDOW));
        if (!window)
        {
                g_critical ("Widget \"%s\" is missing in file %s.",
				TOP_WINDOW,
				UI_FILE);
        }

	priv = g_malloc (sizeof (struct _Private));
	/* ANJUTA: Widgets initialization for g35_text.ui - DO NOT REMOVE */

	g_object_unref (builder);
   

  
}