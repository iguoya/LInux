/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g19-basicwindow.h
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

#ifndef _G19_BASICWINDOW_
#define _G19_BASICWINDOW_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G19_BASICWINDOW_TYPE_APPLICATION             (g19_basicwindow_get_type ())
#define G19_BASICWINDOW_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G19_BASICWINDOW_TYPE_APPLICATION, G19basicwindow))
#define G19_BASICWINDOW_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G19_BASICWINDOW_TYPE_APPLICATION, G19basicwindowClass))
#define G19_BASICWINDOW_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G19_BASICWINDOW_TYPE_APPLICATION))
#define G19_BASICWINDOW_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G19_BASICWINDOW_TYPE_APPLICATION))
#define G19_BASICWINDOW_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G19_BASICWINDOW_TYPE_APPLICATION, G19basicwindowClass))

typedef struct _G19basicwindowClass G19basicwindowClass;
typedef struct _G19basicwindow G19basicwindow;
typedef struct _G19basicwindowPrivate G19basicwindowPrivate;

struct _G19basicwindowClass
{
	GtkApplicationClass parent_class;
};

struct _G19basicwindow
{
	GtkApplication parent_instance;

	G19basicwindowPrivate *priv;

};

GType g19_basicwindow_get_type (void) G_GNUC_CONST;
G19basicwindow *g19_basicwindow_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

