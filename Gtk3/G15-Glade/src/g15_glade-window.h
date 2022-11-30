/* g15_glade-window.h
 *
 * Copyright 2022 雪虎
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

#define G15_GLADE_TYPE_WINDOW (g15_glade_window_get_type())

G_DECLARE_FINAL_TYPE (G15GladeWindow, g15_glade_window, G15_GLADE, WINDOW, GtkApplicationWindow)

G_END_DECLS
