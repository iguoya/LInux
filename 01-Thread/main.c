
#include <gtk/gtk.h>
static GtkWidget *btn1;
static GtkWidget *btn2;
gboolean task2(gpointer data)
{    
//     sleep(10);
     
       
    gtk_button_set_label((GtkButton *)btn1, "not main");
//     g_usleep(5000000);
    return FALSE;
}
gboolean thread_task(gpointer data)//多线程解决
{
    gdk_threads_add_idle((GSourceFunc)task2, data);
    
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