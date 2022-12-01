/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g31-mixbox.c
 * Copyright (C) 2022 tiger <tiger@loongnix>
 * 
 * g31-mixBox is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * g31-mixBox is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "g31-mixbox.h"

#include <glib/gi18n.h>



/* For testing propose use the local (not installed) ui file */
/* #define UI_FILE PACKAGE_DATA_DIR"/ui/g31_mixbox.ui" */
#define UI_FILE "src/g31_mixbox.ui"
#define TOP_WINDOW "window"


G_DEFINE_TYPE (G31mixbox, g31_mixbox, GTK_TYPE_APPLICATION);

/* ANJUTA: Macro G31_MIXBOX_APPLICATION gets G31mixbox - DO NOT REMOVE */
struct _G31mixboxPrivate
{
	/* ANJUTA: Widgets declaration for g31_mixbox.ui - DO NOT REMOVE */
};

/* Create a new window loading a file */
static void
g31_mixbox_new_window (GApplication *app,
                           GFile        *file)
{
	GtkWidget *window;

	GtkBuilder *builder;
	GError* error = NULL;

	G31mixboxPrivate *priv = G31_MIXBOX_APPLICATION(app)->priv;

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

	
	/* ANJUTA: Widgets initialization for g31_mixbox.ui - DO NOT REMOVE */

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
g31_mixbox_activate (GApplication *application)
{
	g31_mixbox_new_window (application, NULL);
}

static void
g31_mixbox_open (GApplication  *application,
                     GFile        **files,
                     gint           n_files,
                     const gchar   *hint)
{
	gint i;

	for (i = 0; i < n_files; i++)
		g31_mixbox_new_window (application, files[i]);
}

static void
g31_mixbox_init (G31mixbox *object)
{
	object->priv = G_TYPE_INSTANCE_GET_PRIVATE (object, G31_MIXBOX_TYPE_APPLICATION, G31mixboxPrivate);
}

static void
g31_mixbox_finalize (GObject *object)
{
	G_OBJECT_CLASS (g31_mixbox_parent_class)->finalize (object);
}

static void
g31_mixbox_class_init (G31mixboxClass *klass)
{
	G_APPLICATION_CLASS (klass)->activate = g31_mixbox_activate;
	G_APPLICATION_CLASS (klass)->open = g31_mixbox_open;

	g_type_class_add_private (klass, sizeof (G31mixboxPrivate));

	G_OBJECT_CLASS (klass)->finalize = g31_mixbox_finalize;
}

G31mixbox *
g31_mixbox_new (void)
{
	return g_object_new (g31_mixbox_get_type (),
	                     "application-id", "org.gnome.g31_mixbox",
	                     "flags", G_APPLICATION_HANDLES_OPEN,
	                     NULL);
}

