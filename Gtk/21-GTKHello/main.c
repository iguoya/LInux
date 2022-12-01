#include <gtk/gtk.h>

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
	GtkWidget *window;

	window = gtk_application_window_new (app);
	gtk_window_set_title (GTK_WINDOW (window), "郭雅");
	gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);

	GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
	GtkWidget *button = gtk_button_new_with_label("你好");
	GtkWidget *button2 = gtk_button_new_with_label("郭雅");
	GtkWidget *button3 = gtk_button_new_with_label("旅行");
	
	GtkWidget *button4 = gtk_button_new_with_label("开心");
	
	
	gtk_container_add(GTK_CONTAINER(hbox), button);
	gtk_container_add(GTK_CONTAINER(hbox), button2);
	gtk_container_add(GTK_CONTAINER(hbox), button3);
	gtk_container_add(GTK_CONTAINER(hbox), button4);
	
	
	gtk_container_add(GTK_CONTAINER(window),  hbox);
	
	
//  gtk_widget_show(button);
//  gtk_widget_show (window);
	gtk_widget_show_all(window);
}

int
main (int    argc,
      char **argv)
{
	GtkApplication *app;
	int status;

	app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);

	return status;
}
