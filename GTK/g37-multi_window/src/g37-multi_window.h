/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g37-multi_window.h
 * Copyright (C) 2022 tiger <tiger@loongnix>
 * 
 * g37-multi_window is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * g37-multi_window is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _G37_MULTI_WINDOW_
#define _G37_MULTI_WINDOW_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G37_MULTI_WINDOW_TYPE_APPLICATION             (g37_multi_window_get_type ())
#define G37_MULTI_WINDOW_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G37_MULTI_WINDOW_TYPE_APPLICATION, G37multi_Window))
#define G37_MULTI_WINDOW_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G37_MULTI_WINDOW_TYPE_APPLICATION, G37multi_WindowClass))
#define G37_MULTI_WINDOW_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G37_MULTI_WINDOW_TYPE_APPLICATION))
#define G37_MULTI_WINDOW_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G37_MULTI_WINDOW_TYPE_APPLICATION))
#define G37_MULTI_WINDOW_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G37_MULTI_WINDOW_TYPE_APPLICATION, G37multi_WindowClass))

typedef struct _G37multi_WindowClass G37multi_WindowClass;
typedef struct _G37multi_Window G37multi_Window;
typedef struct _G37multi_WindowPrivate G37multi_WindowPrivate;

struct _G37multi_WindowClass
{
	GtkApplicationClass parent_class;
};

struct _G37multi_Window
{
	GtkApplication parent_instance;

	G37multi_WindowPrivate *priv;

};

GType g37_multi_window_get_type (void) G_GNUC_CONST;
G37multi_Window *g37_multi_window_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

