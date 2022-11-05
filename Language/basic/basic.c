
#include "basic.h"

//void hello_world() {
//    printf("hello world !");
//}

void hello_world (GtkButton *button, gpointer text_view)
{
    text_view_append(text_view, "hello world ! 郭雅\n");
//    GtkWidget *text_view = gtk_text_view_new();
//    gtk_grid_attach(GTK_GRID(window), text_view, 1, 0, 4, 1);
//    gtk_widget_show_all(text_view);
//    text_view_append(text_view, "hello world ! 郭雅\n");

}

void show_content(GtkButton *button, gpointer window)
{
//    g_print("hello \n");

//	GtkWidget *normal_button = gtk_button_new_with_label("normal button");
//    gtk_container_add(GTK_CONTAINER(window), normal_button);
//    gtk_widget_show_
    GtkWidget *normal_button = gtk_button_new_with_label("Button1");
//    g_signal_connect(button , "clicked" , G_CALLBACK(print_hello) , NULL);
//    gtk_remove_widget
    gtk_grid_attach(GTK_GRID(window), normal_button, 1, 0, 4, 1);

    gtk_widget_show_all(window);

}

void show_type_bytes(GtkButton *button, gpointer text_view)
{
    gchar info[200] = {0};

    g_snprintf(info, sizeof(info), "%30s  %30s  %30s  %30s\n", "type", "size", "min", "max");
    text_view_append(text_view, info);

//    bzero(info, sizeof(info));

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "bool", sizeof(bool), 0, 0);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "char", sizeof(char), 0, CHAR_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "uint8_t", sizeof(uint8_t), 0, UCHAR_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "uint", sizeof(uint32_t), 0, UINT_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "long int", sizeof(long int), LONG_MIN, LONG_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "int 64", sizeof(uint64_t), LLONG_MIN, LLONG_MAX);
    text_view_append(text_view, info);

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    text_view_append(text_view, info);

    text_view_append(text_view, "\n-------------------浮点数--------------------\n");

    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "float", sizeof(float), FLT_MIN, FLT_MAX);
    text_view_append(text_view, info);
    g_snprintf(info, sizeof(info), "%30s  %30lu  %30d  %30d\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
    text_view_append(text_view, info);


}
void clear_content(GtkButton* button, gpointer window)
{
//    gtk_scrolled_window_get_placement()
    gtk_widget_destroy(window);

}

void show_array(GtkButton* button, gpointer tree_view)
{
//    gtk_widget_destroy(tree_view);


    GtkCellRenderer* renderer =  gtk_cell_renderer_text_new();

//    gtk_tree_view_insert_column_with_attributes(
//        GTK_TREE_VIEW(tree_view),    //
//        -1,
//        "name",                 // 显示的内容
//        renderer,               // 上面创建的Render
//        "text",                 // 显示的格式
//        col_name,               // 列号
//        NULL);
//    ;
//    gtk_tree_view_insert_column_with_attributes(
//        GTK_TREE_VIEW(tree_view),    //
//        -1,
//        "age",                 // 显示的内容
//        renderer,               // 上面创建的Render
//        "text",                 // 显示的格式
//        col_age,               // 列号
//        NULL);
//    ;
//    gtk_tree_view_insert_column_with_attributes(
//        GTK_TREE_VIEW(tree_view),    //
//        -1,
//        "score",                 // 显示的内容
//        renderer,               // 上面创建的Render
//        "text",                 // 显示的格式
//        col_score,               // 列号
//        NULL);
//    ;




    /* 创建model，注意这个函数的参数，第一个为列数，后面一次是列存储数据的类型，我们这里是一列，如果是多列在后面依次增加就行，如：
    gtk_list_store_new(n_cols, G_TYPE_STRING, G_TYPE_STRING);
     */
    GtkTreeStore *store = gtk_tree_store_new(n_cols, G_TYPE_STRING, G_TYPE_INT,G_TYPE_BOOLEAN);
    
    GtkTreeModel *store_tree = GTK_TREE_MODEL(store);
    
    gtk_tree_view_set_model(GTK_TREE_VIEW(tree_view), store_tree);

    GtkTreeIter iter;  // 定义元素，GtkTreeIter是一个结构，我理解它是一行
    gtk_tree_store_append(GTK_TREE_STORE(store), &iter, NULL);
    // 把这一行添加到model中，listview也就会显示出来了
    /* 为这一行添加数据 */
    gtk_tree_store_set(store, &iter, col_name,  "Tom", col_age,  30, col_score,  TRUE,  -1);
//    gtk_tree_store_set(store, &iter, col_age,  "AAAA",  -1);
//    gtk_tree_store_set(store, &iter, col_score,  "BBBB",  -1);
//gtk_list_store_set(GTK_TREE_STORE(store), &iter, col_name,  "Tom",  -1);
}



//void hello_world (GtkButton *button, gpointer text_view)
//{
//
//	GtkTextIter end;
//	GtkTextBuffer *buffer = gtk_text_view_get_buffer (text_view);
//
//	gtk_text_buffer_get_end_iter(buffer, &end);
//	gtk_text_buffer_insert(buffer, &end, "hello world 郭雅!", -1);
//
//}
//
