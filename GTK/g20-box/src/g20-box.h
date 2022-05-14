/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g20-box.h
 * Copyright (C) 2022 tiger <tiger@msi>
 * 
 * G20-Box is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * G20-Box is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _G20_BOX_
#define _G20_BOX_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G20_BOX_TYPE_APPLICATION             (g20_box_get_type ())
#define G20_BOX_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G20_BOX_TYPE_APPLICATION, G20box))
#define G20_BOX_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G20_BOX_TYPE_APPLICATION, G20boxClass))
#define G20_BOX_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G20_BOX_TYPE_APPLICATION))
#define G20_BOX_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G20_BOX_TYPE_APPLICATION))
#define G20_BOX_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G20_BOX_TYPE_APPLICATION, G20boxClass))

typedef struct _G20boxClass G20boxClass;
typedef struct _G20box G20box;
typedef struct _G20boxPrivate G20boxPrivate;

struct _G20boxClass
{
	GtkApplicationClass parent_class;
};

struct _G20box
{
	GtkApplication parent_instance;

	G20boxPrivate *priv;

};

GType g20_box_get_type (void) G_GNUC_CONST;
G20box *g20_box_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

