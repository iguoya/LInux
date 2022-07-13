/* g12_glade-window.c
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

//#include "g12_glade-config.h"
#include "g12_glade-window.h"

struct _G12GladeWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
  GtkFixed            *g1;
};

G_DEFINE_TYPE (G12GladeWindow, g12_glade_window, GTK_TYPE_APPLICATION_WINDOW)

static void
g12_glade_window_class_init (G12GladeWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/tiger/g12_glade-window.ui");
  gtk_widget_class_bind_template_child (widget_class, G12GladeWindow, header_bar);
  //gtk_widget_class_bind_template_child (widget_class, G12GladeWindow, label);
   gtk_widget_class_bind_template_child (widget_class, G12GladeWindow, g1);
}

static void
g12_glade_window_init (G12GladeWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
