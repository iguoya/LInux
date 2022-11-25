#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
//	GtkWidget *window;
//
//	gtk_init (&argc, &argv);
//
//	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
//
//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//	
//	GtkWidget *hbox = gtk_box_new(0,  0);
//	
//	GtkWidget *button = gtk_button_new_with_label("你好");
//	GtkWidget *button2 = gtk_button_new_with_label("郭雅");
//	GtkWidget *button3 = gtk_button_new_with_label("旅行");
//	
//	GtkWidget *button4 = gtk_button_new_with_label("开心");
//	
//	
//	gtk_container_add(GTK_CONTAINER(hbox), button);
//	gtk_container_add(GTK_CONTAINER(hbox), button2);
//	gtk_container_add(GTK_CONTAINER(hbox), button3);
//	gtk_container_add(GTK_CONTAINER(hbox), button4);
//	
//	
//	gtk_container_add(GTK_CONTAINER(window),  hbox);
//	
//	gtk_widget_show (window);
//
//	gtk_main ();

//
//     gtk_init(&argc,&argv);
//     GtkWidget *win, *label, *btn, *vbox;
//
//     win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
//     g_signal_connect(win,"delete_event",gtk_main_quit,NULL); 
//
//     label = gtk_label_new("Label 1"); 
//     btn = gtk_button_new_with_label("Button 1"); 
//
//     vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL,10); 
//	 
//     gtk_box_pack_start(GTK_BOX(vbox),label,0,0,0); 
//     gtk_box_pack_start(GTK_BOX(vbox),btn,0,0,0); 
//
//     gtk_container_add(GTK_CONTAINER(win),vbox); 
//
//     gtk_widget_show_all(win); 
//     gtk_main(); 

        //1.gtk环境初始化
        gtk_init(&argc, &argv);
 
        //2.创建一个窗口
        //GtkWidget *window = gtk_window_new(GTK_WINDOW_POPUP);
 
        GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
 
        //设置窗口标题
        gtk_window_set_title(GTK_WINDOW(window), "hbox");
 
        //3.1创建一个水平容器
        GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_VERTICAL,  50);
        //3.2将水平容器加入到窗口中
        gtk_container_add(GTK_CONTAINER(window), hbox);
 
 
 
 
 
//        //4.1.1创建按钮button1
//        GtkWidget *button1 = gtk_button_new_with_label("button1");
//        //4.1.2将button1加入到hbox中
//        gtk_container_add(GTK_CONTAINER(hbox), button1);
// 
//        //4.2.1创建按钮button2
//        GtkWidget *button2 = gtk_button_new_with_label("button2");
//        //4.2.2将button2加入到hbox
//        gtk_container_add(GTK_CONTAINER(hbox), button2);
// 
//        //4.3.1创建按钮button3
//        GtkWidget *button3 = gtk_button_new_with_label("button3");
//        //4.3.2将button2加入到hbox
//        gtk_container_add(GTK_CONTAINER(hbox), button3);
// 

GtkWidget *button = gtk_button_new_with_label("你好");
	GtkWidget *button2 = gtk_button_new_with_label("郭雅");
	GtkWidget *button3 = gtk_button_new_with_label("旅行");
	GtkWidget *button4 = gtk_button_new_with_label("开心");
	
	
	gtk_container_add(GTK_CONTAINER(hbox), button);
	gtk_container_add(GTK_CONTAINER(hbox), button2);
	gtk_container_add(GTK_CONTAINER(hbox), button3);
	gtk_container_add(GTK_CONTAINER(hbox), button4);

 
 
 
        //5.显示所有文件
        gtk_widget_show_all(window);
 
        //6.主事件循环
        gtk_main();

	return 0;
}