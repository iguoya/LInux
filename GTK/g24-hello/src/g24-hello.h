/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g24-hello.h
 * Copyright (C) 2022 tiger <tiger@loongnix>
 * 
 * G24-Hello is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * G24-Hello is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _G24_HELLO_
#define _G24_HELLO_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G24_HELLO_TYPE_APPLICATION             (g24_hello_get_type ())
#define G24_HELLO_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G24_HELLO_TYPE_APPLICATION, G24hello))
#define G24_HELLO_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G24_HELLO_TYPE_APPLICATION, G24helloClass))
#define G24_HELLO_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G24_HELLO_TYPE_APPLICATION))
#define G24_HELLO_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G24_HELLO_TYPE_APPLICATION))
#define G24_HELLO_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G24_HELLO_TYPE_APPLICATION, G24helloClass))

typedef struct _G24helloClass G24helloClass;
typedef struct _G24hello G24hello;
typedef struct _G24helloPrivate G24helloPrivate;

struct _G24helloClass
{
	GtkApplicationClass parent_class;
};

struct _G24hello
{
	GtkApplication parent_instance;

	G24helloPrivate *priv;

};

GType g24_hello_get_type (void) G_GNUC_CONST;
G24hello *g24_hello_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

