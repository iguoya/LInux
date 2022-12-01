/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * 25-glade.h
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

#ifndef __25_GLADE_
#define __25_GLADE_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define _25_GLADE_TYPE_APPLICATION             (25_glade_get_type ())
#define _25_GLADE_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), _25_GLADE_TYPE_APPLICATION, 25glade))
#define _25_GLADE_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), _25_GLADE_TYPE_APPLICATION, 25gladeClass))
#define _25_GLADE_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), _25_GLADE_TYPE_APPLICATION))
#define _25_GLADE_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), _25_GLADE_TYPE_APPLICATION))
#define _25_GLADE_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), _25_GLADE_TYPE_APPLICATION, 25gladeClass))

typedef struct _25gladeClass 25gladeClass;
typedef struct _25glade 25glade;
typedef struct _25gladePrivate 25gladePrivate;

struct _25gladeClass
{
	GtkApplicationClass parent_class;
};

struct _25glade
{
	GtkApplication parent_instance;

	25gladePrivate *priv;

};

GType 25_glade_get_type (void) G_GNUC_CONST;
25glade *25_glade_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

