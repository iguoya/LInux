
#include "basic.h"

//void hello_world() {
//    printf("hello world !");
//}

void hello_world (GtkButton *button, gpointer text_view)
{
    text_view_append(text_view, "hello world ! 郭雅\n");
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
