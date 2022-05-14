/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * g21-framework.h
 * Copyright (C) 2022 tiger <tiger@msi>
 * 
 * G21-FrameWork is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * G21-FrameWork is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _G21_FRAMEWORK_
#define _G21_FRAMEWORK_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G21_FRAMEWORK_TYPE_APPLICATION             (g21_framework_get_type ())
#define G21_FRAMEWORK_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G21_FRAMEWORK_TYPE_APPLICATION, G21framework))
#define G21_FRAMEWORK_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G21_FRAMEWORK_TYPE_APPLICATION, G21frameworkClass))
#define G21_FRAMEWORK_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G21_FRAMEWORK_TYPE_APPLICATION))
#define G21_FRAMEWORK_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G21_FRAMEWORK_TYPE_APPLICATION))
#define G21_FRAMEWORK_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G21_FRAMEWORK_TYPE_APPLICATION, G21frameworkClass))

typedef struct _G21frameworkClass G21frameworkClass;
typedef struct _G21framework G21framework;
typedef struct _G21frameworkPrivate G21frameworkPrivate;

struct _G21frameworkClass
{
	GtkApplicationClass parent_class;
};

struct _G21framework
{
	GtkApplication parent_instance;

	G21frameworkPrivate *priv;

};

GType g21_framework_get_type (void) G_GNUC_CONST;
G21framework *g21_framework_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

