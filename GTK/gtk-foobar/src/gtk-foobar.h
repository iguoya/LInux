/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * gtk-foobar.h
 * Copyright (C) 2022 tiger <tiger@loongnix>
 * 
 * gtk-foobar is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * gtk-foobar is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GTK_FOOBAR_
#define _GTK_FOOBAR_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GTK_FOOBAR_TYPE_APPLICATION             (gtk_foobar_get_type ())
#define GTK_FOOBAR_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_FOOBAR_TYPE_APPLICATION, Gtkfoobar))
#define GTK_FOOBAR_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_FOOBAR_TYPE_APPLICATION, GtkfoobarClass))
#define GTK_FOOBAR_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_FOOBAR_TYPE_APPLICATION))
#define GTK_FOOBAR_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_FOOBAR_TYPE_APPLICATION))
#define GTK_FOOBAR_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_FOOBAR_TYPE_APPLICATION, GtkfoobarClass))

typedef struct _GtkfoobarClass GtkfoobarClass;
typedef struct _Gtkfoobar Gtkfoobar;
typedef struct _GtkfoobarPrivate GtkfoobarPrivate;

struct _GtkfoobarClass
{
	GtkApplicationClass parent_class;
};

struct _Gtkfoobar
{
	GtkApplication parent_instance;

	GtkfoobarPrivate *priv;

};

GType gtk_foobar_get_type (void) G_GNUC_CONST;
Gtkfoobar *gtk_foobar_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

