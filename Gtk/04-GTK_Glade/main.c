#include <gtk/gtk.h>
 
 void button1_clicked()
{
        gtk_main_quit();  //这里仅实现退出程序
}

 int main(int argc,char *argv[])
 {
	//1.gtk初始化
	gtk_init(&argc,&argv);
 
	//2.创建GtkBuilder对象，GtkBuilder在<gtk/gtk.h>声明
	GtkBuilder *builder = gtk_builder_new();
 
	//3.读取test.glade文件的信息，保存在builder中
	if ( !gtk_builder_add_from_file(builder,"tiger_glade.glade", NULL)) {
		printf("connot load file!");
	}
 
	//4.获取窗口指针，注意"window1"要和glade里面的标签名词匹配
	GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder,"window"));


//	GtkButton *button = GTK_BUTTON(gtk_builder_get_object(builder, "button"));
	
	
	gtk_builder_connect_signals (builder, NULL);//连接响应事件
// 
//	const char *text = gtk_button_get_label(button);
//	
	gtk_widget_show(window);
 
	gtk_main();
 
	return 0;
 }