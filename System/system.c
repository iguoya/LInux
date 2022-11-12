/*
 * system.c
 *
 *  Created on: 2022年10月15日
 *      Author: tiger
 */
#include "system.h"

static Bug data[] =
{
		{ 60482, "Normal",     "scrollable notebooks and hidden tabs" },
		{ 60620, "Critical",   "gdk_window_clear_area (gdkwindow-win32.c) is not thread-safe" },
		{ 50214, "Major",      "Xft support does not clean up correctly" },
		{ 52877, "Major",      "GtkFileSelection needs a refresh method. " },
		{ 56070, "Normal",     "Can't click button after setting in sensitive" },
		{ 56355, "Normal",     "GtkLabel - Not all changes propagate correctly" },
		{ 50055, "Normal",     "Rework width/height computations for TreeView" },
		{ 58278, "Normal",     "gtk_dialog_set_response_sensitive () doesn't work" },
		{ 55767, "Normal",     "Getters for all setters" },
		{ 56925, "Normal",     "Gtkcalender size" },
		{ 56221, "Normal",     "Selectable label needs right-click copy menu" },
		{ 50939, "Normal",     "Add shift clicking to GtkTextView" },
		{ 6112,  "Enhancement","netscape-like collapsable toolbars" },
		{ 1,     "Normal",     "First bug :=)" },
};


void on_char_clicked(GtkWidget *button, gpointer tree_view) {
	//	g_print("郭雅\n");
	//	GtkTreeIter parent_iter, child_iter;


	//	GtkListStore* store = gtk_tree_store_new(n_columns, G_TYPE_UINT, G_TYPE_STRING, G_TYPE_STRING);
	//	//	gtk_tree_store_new(store, &parent_iter, NULL);
	//	gtk_tree_view_set_model(tree_view, GTK_TREE_MODEL (store));
	//	GtkTreeIter iter;
	//	for (int i = 0; i < G_N_ELEMENTS (data); i++)
	//	{
	//
	//
	////		gtk_list_store_append (store, &iter);
	//		gtk_list_store_set (GTK_TREE_MODEL (store), &iter,
	//				column_id, data[i].number,
	//				column_name, data[i].name,
	//				column_result, data[i].description,
	//				-1);
	//	}
	//	;
	//	  treeview = gtk_tree_view_new_with_model (GTK_TREE_MODEL (store));

	//	gtk_tree_view_append(GTK_TREE_VIEW(content), column);



	//	 GtkTreeViewColumn* column=gtk_tree_view_column_new ();
	//	  gtk_tree_view_column_set_title(column,"hello world");
	//	GtkTreeViewColumn* column = gtk_tree_view_column_new_with_attributes("column 1",renderer_icon, "stock-id", 0, NULL);
	//	gtk_tree_view_append(GTK_TREE_VIEW(content), column);




	//	enum {
	//		column_id,
	//		column_description,
	//	//	column_input,
	//		column_result,
	//		n_columns
	//	};

	//	gint                   gtk_tree_view_append_column                 (GtkTreeView               *tree_view,
	//									    GtkTreeViewColumn         *column);
	//	 GtkWidget *list = gtk_tree_view_new();
	//		GtkCellRenderer* renderer = gtk_cell_renderer_text_new();  // 创建一个Render
	//		gtk_tree_view_insert_column_with_attributes(
	//				GTK_TREE_VIEW(tree_view),    //
	//				-1,
	//				"number",                 // 显示的内容
	//				renderer,               // 上面创建的Render
	//				"text", column_id,               // 列号
	//				NULL);
	//		 gtk_tree_view_insert_column_with_attributes(
	//			         GTK_TREE_VIEW(tree_view),    //
	//			         -1,
	//			         "name",                 // 显示的内容
	//			         renderer,               // 上面创建的Render
	//			         "text",                 // 显示的格式
	//					 column_name,               // 列号
	//			         NULL);
	//		 gtk_tree_view_insert_column_with_attributes(
	//			         GTK_TREE_VIEW(tree_view),    //
	//			         -1,
	//			         "description",                 // 显示的内容
	//			         renderer,               // 上面创建的Render
	//			         "text",                 // 显示的格式
	//					 column_description,               // 列号
	//			         NULL);
	//
	//		gtk_tree_view_insert_column_with_attributes(
	//				GTK_TREE_VIEW(tree_view),    //
	//				-1,
	//				"number",                 // 显示的内容
	//				renderer,               // 上面创建的Render
	//				"text", column_id,               // 列号
	//				NULL);
	//		 gtk_tree_view_insert_column_with_attributes(
	//			         GTK_TREE_VIEW(tree_view),    //
	//			         -1,
	//			         "name",                 // 显示的内容
	//			         renderer,               // 上面创建的Render
	//			         "text",                 // 显示的格式
	//					 column_name,               // 列号
	//			         NULL);
	//		 gtk_tree_view_insert_column_with_attributes(
	//			         GTK_TREE_VIEW(tree_view),    //
	//			         -1,
	//			         "description",                 // 显示的内容
	//			         renderer,               // 上面创建的Render
	//			         "text",                 // 显示的格式
	//					 column_description,               // 列号
	//			         NULL);
	//
	GtkCellRenderer* renderer = gtk_cell_renderer_text_new();
	GtkTreeViewColumn* column;
	column = gtk_tree_view_column_new_with_attributes (
			"id",
			renderer,
			"text",
			column_id,
			NULL);
	gtk_tree_view_column_set_sort_column_id (column, column_id);
	gtk_tree_view_append_column (tree_view, column);
	column = gtk_tree_view_column_new_with_attributes (
			"name",
			renderer,
			"text",
			column_name,
			NULL);
	gtk_tree_view_column_set_sort_column_id (column, column_name);
	gtk_tree_view_append_column (tree_view, column);
	column = gtk_tree_view_column_new_with_attributes (
			"description",
			renderer,
			"text",
			column_description,
			NULL);
	gtk_tree_view_column_set_sort_column_id (column, column_description);
	gtk_tree_view_append_column (tree_view, column);




	GtkListStore * store = gtk_list_store_new(n_columns, G_TYPE_UINT, G_TYPE_STRING, G_TYPE_STRING);
	//		GtkTreeModel *store =  GTK_TREE_MODEL(lstore);
	gtk_tree_view_set_model(tree_view, GTK_TREE_MODEL(store));
	GtkTreeIter iter;
	gtk_list_store_append (store, &iter);

	for (int i = 0; i < G_N_ELEMENTS (data); i++)
	{

		gtk_list_store_set (store, &iter,
				column_id, data[i].number,
				column_name, data[i].name,
				column_description, data[i].description,
				-1);
		gtk_list_store_append (store, &iter);
	}
}
