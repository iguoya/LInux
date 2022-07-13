/* g09_gtk4-window.c
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

#include "g09_gtk4-config.h"
#include "g09_gtk4-window.h"

struct _G09Gtk4Window
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
  GtkFixed            *fixA;
  GtkButton            *buttonA;
  GtkButton            *buttonB;
  GtkButton            *buttonC;
  GtkButton            *buttonD;
};

G_DEFINE_TYPE (G09Gtk4Window, g09_gtk4_window, GTK_TYPE_APPLICATION_WINDOW)

static void
g09_gtk4_window_class_init (G09Gtk4WindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/gtk/yatiger/cn/g09_gtk4-window.ui");
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, header_bar);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, label);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, fixA);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, buttonA);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, buttonB);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, buttonC);
  gtk_widget_class_bind_template_child (widget_class, G09Gtk4Window, buttonD);
}

static void
g09_gtk4_window_init (G09Gtk4Window *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
