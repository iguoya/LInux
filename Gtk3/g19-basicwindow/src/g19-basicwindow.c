/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g19-basicwindow.c
 * Copyright (C) 2022 tiger <tiger@msi>
 * 
 * G19-BasicWindow is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * G19-BasicWindow is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "g19-basicwindow.h"

#include <glib/gi18n.h>



/* For testing propose use the local (not installed) ui file */
/* #define UI_FILE PACKAGE_DATA_DIR"/ui/g19_basicwindow.ui" */
#define UI_FILE "src/g19_basicwindow.ui"
#define TOP_WINDOW "window"


G_DEFINE_TYPE (G19basicwindow, g19_basicwindow, GTK_TYPE_APPLICATION);

/* ANJUTA: Macro G19_BASICWINDOW_APPLICATION gets G19basicwindow - DO NOT REMOVE */
struct _G19basicwindowPrivate
{
	/* ANJUTA: Widgets declaration for g19_basicwindow.ui - DO NOT REMOVE */
};

/* Create a new window loading a file */
static void
g19_basicwindow_new_window (GApplication *app,
                           GFile        *file)
{
	GtkWidget *window;

	GtkBuilder *builder;
	GError* error = NULL;

	G19basicwindowPrivate *priv = G19_BASICWINDOW_APPLICATION(app)->priv;

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

	
	/* ANJUTA: Widgets initialization for g19_basicwindow.ui - DO NOT REMOVE */

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
g19_basicwindow_activate (GApplication *application)
{
	g19_basicwindow_new_window (application, NULL);
}

static void
g19_basicwindow_open (GApplication  *application,
                     GFile        **files,
                     gint           n_files,
                     const gchar   *hint)
{
	gint i;

	for (i = 0; i < n_files; i++)
		g19_basicwindow_new_window (application, files[i]);
}

static void
g19_basicwindow_init (G19basicwindow *object)
{
	object->priv = G_TYPE_INSTANCE_GET_PRIVATE (object, G19_BASICWINDOW_TYPE_APPLICATION, G19basicwindowPrivate);
}

static void
g19_basicwindow_finalize (GObject *object)
{
	G_OBJECT_CLASS (g19_basicwindow_parent_class)->finalize (object);
}

static void
g19_basicwindow_class_init (G19basicwindowClass *klass)
{
	G_APPLICATION_CLASS (klass)->activate = g19_basicwindow_activate;
	G_APPLICATION_CLASS (klass)->open = g19_basicwindow_open;

	g_type_class_add_private (klass, sizeof (G19basicwindowPrivate));

	G_OBJECT_CLASS (klass)->finalize = g19_basicwindow_finalize;
}

G19basicwindow *
g19_basicwindow_new (void)
{
	return g_object_new (g19_basicwindow_get_type (),
	                     "application-id", "org.gnome.g19_basicwindow",
	                     "flags", G_APPLICATION_HANDLES_OPEN,
	                     NULL);
}

