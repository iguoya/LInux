//#include <gtk/gtk.h>
//
//
//GtkWidget *window;
//GtkWidget *label;

//void hello(){
//	int i;
//	for(i=0;;i++){
//		/*使用gdk_thread_*()将要刷新的界面*/
//		char buf[6];
//		sprintf(buf,"%d",(int)i);
//		/*睡眠一下*/
//		sleep(5);
//		gdk_threads_enter();
//		gtk_label_set_text(GTK_LABEL(label),buf);
//		gdk_threads_leave();
//		if(i==100)i=0;
//	}
//}
//
//int main( int   argc,char *argv[] ){
//	gtk_init (NULL,NULL);//这个函数这样使用不好，但在此例中简写它了
//	/* 创建一个新窗口 */
//	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
//	gtk_window_set_title(GTK_WINDOW(window),"thread number");
////	gtk_widget_set_size(GTK_WIDGET(window),200,60);
//	/*创建一个标签*/
//	label=gtk_label_new("0");
//	gtk_container_add (GTK_CONTAINER (window), label);
//	gtk_widget_show (label);
//	gtk_widget_show (window);
//	g_signal_connect (G_OBJECT (window), "destroy",G_CALLBACK(gtk_main_quit), NULL);
//	
//	/*线程的初始化*/
//	if(!g_thread_supported()) g_thread_init(NULL);
//	gdk_threads_init();
//	/*创建线程*/
//	g_thread_create((GThreadFunc)hello, NULL, FALSE, NULL);
//	
//	gdk_threads_enter();
//	gtk_main ();
//	gdk_threads_leave();   
//	
//	return 0;
//}
//


#include <gtk/gtk.h>
#include <stdlib.h>

static GtkWidget *btn1;
static GtkWidget *btn2;

//void task2(){
//	int i;
//	for(i=0;;i++){
//		/*使用gdk_thread_*()将要刷新的界面*/
//		char buf[6];
//		sprintf(buf,"%d",(int)i);
//		/*睡眠一下*/
//		sleep(5);
////		gdk_threads_enter();
//		gtk_button_set_label((GtkButton *)btn1,buf);
////		gdk_threads_leave();
//		if(i==100)i=0;
//	}
//}
//

gboolean task2(gpointer data)
{   
//    for(int i = 0; i < 10; ++i) {
//    int i = 100;
//        char buf[6];
//		sprintf(buf,"%d", data);
//        gtk_button_set_label((GtkButton *)btn1, buf);
        gtk_button_set_label((GtkButton *)btn1, data);
//    }
    
    return FALSE;
}
gboolean thread_task(gpointer data)//多线程解决
{
    for(int i = 0; i < 10; ++i) {
         char buf[6];
         sprintf(buf,"%d", i);
          sleep(2);
            gdk_threads_add_idle((GSourceFunc)task2, buf);
      
    }

    /*如果说return TRUE他会一直调用这个*/
    return FALSE;
}
 
/*改进的回调函数，传递到该函数的数据将会被打印到标准输出*/
void callback(GtkWidget *widget, gpointer data)
{
    gtk_button_set_label((GtkButton *)btn1, "main");
}
void callback2(GtkWidget *widget, gpointer data)
{
    g_thread_new(NULL, (GThreadFunc)thread_task, data);
}
/*关闭窗口的函数*/
void destroy(GtkWidget *widget, gpointer data)
{
    g_print("退出hello world!\n");
    gtk_main_quit();
}
int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box;
    /*函数gtk_init()会在每个GTK的应用程序中调用。
     * 该函数设定默认的视频和颜色默认参数，接下来会调用函数
     * gdk_init()该函数初始化要使用的库，设定默认的信号处理
     *检查传递到程序的命令行参数
     * */
    gtk_init(&argc, &argv);
    //g_mutex = g_mutex_new();
    //下面两行创建并显示窗口。创建一个200*200的窗口。
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    /*设置窗口标题*/
    gtk_window_set_title(GTK_WINDOW(window), "Helloworld.c test!");
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER_ALWAYS);//居中
    g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(destroy), NULL);
    /*设置窗口边框的宽度*/
    gtk_container_set_border_width(GTK_CONTAINER(window), 80);
    /*创建一个组装盒
     *我们看不见它，用来排列构建的工具
     * */
    box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    /*把组装盒box1放到主窗口中*/
    gtk_container_add(GTK_CONTAINER(window), box);
    /*等待按钮*/
    GtkWidget *spinner = gtk_spinner_new();
    gtk_spinner_start(GTK_SPINNER(spinner));
    gtk_box_pack_start(GTK_BOX(box), spinner, TRUE, TRUE, 0);
    gtk_widget_show(spinner);
    /*创建一个标签为“欢迎”的按钮*/
    btn1 = gtk_button_new_with_label("主线程");
    /*当按下欢迎按钮时，我们调用 callback函数，会打印出我们传递的参数*/
    g_signal_connect(G_OBJECT(btn1), "clicked", G_CALLBACK(callback), "欢迎大家来到我的博客学习！");
    /*我们将button 按钮放入组装盒中*/
    gtk_box_pack_start(GTK_BOX(box), btn1, TRUE, TRUE, 0);
    /*欢迎按钮设置成功，别忘了写下个函数来显示它*/
    gtk_widget_show(btn1);
    /*创建第二个按钮*/
    btn2 = gtk_button_new_with_label("分线程");
    g_signal_connect(G_OBJECT(btn2), "clicked", G_CALLBACK(callback2), "GTK编程入门学习！");
    gtk_box_pack_start(GTK_BOX(box), btn2, TRUE, TRUE, 0);
    gtk_widget_show(btn2);
    /*创建一个退出按钮*/
    button = gtk_button_new_with_label("退出");
    /*当点击退出按钮时，会触发gtk_widet_destroy来关闭窗口，destroy信号从这里发出
     * 会触发destroy函数。*/
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(destroy), NULL);
    g_signal_connect_swapped(G_OBJECT(button), "clicked", G_CALLBACK(gtk_widget_destroy), window);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);
    gtk_widget_show(button);
    gtk_widget_show(box);
    gtk_widget_show(window);
    //进入主循环
    gtk_main();
    return 0;
}