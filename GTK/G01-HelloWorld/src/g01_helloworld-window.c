/* g01_helloworld-window.c
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

#include "g01_helloworld-config.h"
#include "g01_helloworld-window.h"

struct _G01HelloworldWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
};

G_DEFINE_TYPE (G01HelloworldWindow, g01_helloworld_window, GTK_TYPE_APPLICATION_WINDOW)

static void
g01_helloworld_window_class_init (G01HelloworldWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/cn/yatiger/gtk/g01_helloworld-window.ui");
  gtk_widget_class_bind_template_child (widget_class, G01HelloworldWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, G01HelloworldWindow, label);
}

static void
g01_helloworld_window_init (G01HelloworldWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
