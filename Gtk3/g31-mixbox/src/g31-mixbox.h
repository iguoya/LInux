/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g31-mixbox.h
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

#ifndef _G31_MIXBOX_
#define _G31_MIXBOX_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G31_MIXBOX_TYPE_APPLICATION             (g31_mixbox_get_type ())
#define G31_MIXBOX_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G31_MIXBOX_TYPE_APPLICATION, G31mixbox))
#define G31_MIXBOX_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G31_MIXBOX_TYPE_APPLICATION, G31mixboxClass))
#define G31_MIXBOX_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G31_MIXBOX_TYPE_APPLICATION))
#define G31_MIXBOX_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G31_MIXBOX_TYPE_APPLICATION))
#define G31_MIXBOX_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G31_MIXBOX_TYPE_APPLICATION, G31mixboxClass))

typedef struct _G31mixboxClass G31mixboxClass;
typedef struct _G31mixbox G31mixbox;
typedef struct _G31mixboxPrivate G31mixboxPrivate;

struct _G31mixboxClass
{
	GtkApplicationClass parent_class;
};

struct _G31mixbox
{
	GtkApplication parent_instance;

	G31mixboxPrivate *priv;

};

GType g31_mixbox_get_type (void) G_GNUC_CONST;
G31mixbox *g31_mixbox_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

