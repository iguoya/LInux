/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * 25-glade.c
 * Copyright (C) 2022 tiger <tiger@msi>
 * 
 * 25-Glade is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * 25-Glade is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "25-glade.h"

#include <glib/gi18n.h>



/* For testing propose use the local (not installed) ui file */
/* #define UI_FILE PACKAGE_DATA_DIR"/ui/25_glade.ui" */
#define UI_FILE "src/25_glade.ui"
#define TOP_WINDOW "window"


G_DEFINE_TYPE (25glade, 25_glade, GTK_TYPE_APPLICATION);

/* ANJUTA: Macro _25_GLADE_APPLICATION gets 25glade - DO NOT REMOVE */
struct _25gladePrivate
{
	/* ANJUTA: Widgets declaration for 25_glade.ui - DO NOT REMOVE */
};

/* Create a new window loading a file */
static void
25_glade_new_window (GApplication *app,
                           GFile        *file)
{
	GtkWidget *window;

	GtkBuilder *builder;
	GError* error = NULL;

	25gladePrivate *priv = _25_GLADE_APPLICATION(app)->priv;

	/* Load UI from file */
	builder = gtk_builder_new ();
	if (!gtk_builder_add_from_file (builder, UI_FILE, &error))
	{
		g_critical ("Couldn't load builder file: %s", error->message);
		g_error_free (error);
	}

	/* Auto-connect signal handlers */
	gtk_builder_connect_signals (builder, app);

	/* Get the window object from the ui file */
	window = GTK_WIDGET (gtk_builder_get_object (builder, TOP_WINDOW));
        if (!window)
        {
		g_critical ("Widget \"%s\" is missing in file %s.",
				TOP_WINDOW,
				UI_FILE);
        }

	
	/* ANJUTA: Widgets initialization for 25_glade.ui - DO NOT REMOVE */

	g_object_unref (builder);
	
	
	gtk_window_set_application (GTK_WINDOW (window), GTK_APPLICATION (app));
	if (file != NULL)
	{
		/* TODO: Add code here to open the file in the new window */
	}

	gtk_widget_show_all (GTK_WIDGET (window));
}


/* GApplication implementation */
static void
25_glade_activate (GApplication *application)
{
	25_glade_new_window (application, NULL);
}

static void
25_glade_open (GApplication  *application,
                     GFile        **files,
                     gint           n_files,
                     const gchar   *hint)
{
	gint i;

	for (i = 0; i < n_files; i++)
		25_glade_new_window (application, files[i]);
}

static void
25_glade_init (25glade *object)
{
	object->priv = G_TYPE_INSTANCE_GET_PRIVATE (object, _25_GLADE_TYPE_APPLICATION, 25gladePrivate);
}

static void
25_glade_finalize (GObject *object)
{
	G_OBJECT_CLASS (25_glade_parent_class)->finalize (object);
}

static void
25_glade_class_init (25gladeClass *klass)
{
	G_APPLICATION_CLASS (klass)->activate = 25_glade_activate;
	G_APPLICATION_CLASS (klass)->open = 25_glade_open;

	g_type_class_add_private (klass, sizeof (25gladePrivate));

	G_OBJECT_CLASS (klass)->finalize = 25_glade_finalize;
}

25glade *
25_glade_new (void)
{
	return g_object_new (25_glade_get_type (),
	                     "application-id", "org.gnome.25_glade",
	                     "flags", G_APPLICATION_HANDLES_OPEN,
	                     NULL);
}

