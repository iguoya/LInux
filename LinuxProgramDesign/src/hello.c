/***************************************************************************
 *            hello.c
 *
 *  四 九月 22 22:47:45 2022
 *  Copyright  2022  tiger
 *  <user@host>
 ****************************************************************************/
/*
 * hello.c
 *
 * Copyright (C) 2022 - tiger
	 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
	 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *GUI
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "hello.h"

void hello (GtkWidget *widget, gpointer content)
{
	GtkTextBuffer *buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (content));
	/*	 gtk_text_buffer_insert(buffer, -1, "hello", 6);
	gtk_text_buffer_set_text (buffer, "Hello, this is some text 郭雅", -1);
	*/
	const gchar *text= "How are you! 郭雅\n";

	GtkTextIter start,end;

	gtk_text_buffer_get_bounds(GTK_TEXT_BUFFER(buffer),&start,&end);/*获得缓冲区开始和结束位置的Iter*/

	gtk_text_buffer_insert(GTK_TEXT_BUFFER(buffer),&start,text,strlen(text));/*插入文本到缓冲区*/

}
