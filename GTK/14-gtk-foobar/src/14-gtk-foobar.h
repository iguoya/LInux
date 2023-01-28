/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * 14-gtk-foobar.h
 * Copyright (C) 2021 tiger <tiger@loongnix>
 * 
 * 14-gtk-foobar is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * 14-gtk-foobar is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __14_GTK_FOOBAR_
#define __14_GTK_FOOBAR_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define _14_GTK_FOOBAR_TYPE_APPLICATION             (14_gtk_foobar_get_type ())
#define _14_GTK_FOOBAR_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), _14_GTK_FOOBAR_TYPE_APPLICATION, 14gtkfoobar))
#define _14_GTK_FOOBAR_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), _14_GTK_FOOBAR_TYPE_APPLICATION, 14gtkfoobarClass))
#define _14_GTK_FOOBAR_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), _14_GTK_FOOBAR_TYPE_APPLICATION))
#define _14_GTK_FOOBAR_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), _14_GTK_FOOBAR_TYPE_APPLICATION))
#define _14_GTK_FOOBAR_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), _14_GTK_FOOBAR_TYPE_APPLICATION, 14gtkfoobarClass))

typedef struct _14gtkfoobarClass 14gtkfoobarClass;
typedef struct _14gtkfoobar 14gtkfoobar;
typedef struct _14gtkfoobarPrivate 14gtkfoobarPrivate;

struct _14gtkfoobarClass
{
	GtkApplicationClass parent_class;
};

struct _14gtkfoobar
{
	GtkApplication parent_instance;

	14gtkfoobarPrivate *priv;

};

GType 14_gtk_foobar_get_type (void) G_GNUC_CONST;
14gtkfoobar *14_gtk_foobar_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

