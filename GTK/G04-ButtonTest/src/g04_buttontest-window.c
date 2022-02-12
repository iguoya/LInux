/* g04_buttontest-window.c
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

#include "g04_buttontest-config.h"
#include "g04_buttontest-window.h"

struct _G04ButtontestWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
  GtkFixed            *fixed_panel;
};

G_DEFINE_TYPE (G04ButtontestWindow, g04_buttontest_window, GTK_TYPE_APPLICATION_WINDOW)

static void
g04_buttontest_window_class_init (G04ButtontestWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);



  gtk_widget_class_set_template_from_resource (widget_class, "/org/example/App/g04_buttontest-window.ui");
  gtk_widget_class_bind_template_child (widget_class, G04ButtontestWindow, header_bar);


  gtk_widget_class_bind_template_child (widget_class, G04ButtontestWindow, fixed_panel);


  gtk_widget_class_bind_template_child (widget_class, G04ButtontestWindow, label);
}

static void
g04_buttontest_window_init (G04ButtontestWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
