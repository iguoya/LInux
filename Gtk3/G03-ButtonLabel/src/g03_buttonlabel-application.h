/* g03_buttonlabel-application.h
 *
 * Copyright 2022 tiger
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define G03_BUTTONLABEL_TYPE_APPLICATION (g03_buttonlabel_application_get_type())

G_DECLARE_FINAL_TYPE (G03ButtonlabelApplication, g03_buttonlabel_application, G03_BUTTONLABEL, APPLICATION, GtkApplication)

G03ButtonlabelApplication *g03_buttonlabel_application_new (gchar *application_id,
                                                            GApplicationFlags  flags);

G_END_DECLS
