## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = 14_gtk_foobar.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(_14_GTK_FOOBAR_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = 14_gtk_foobar

14_gtk_foobar_SOURCES = \
	main.c \
	14-gtk-foobar.h \
	14-gtk-foobar.c	


14_gtk_foobar_LDFLAGS = \
	-Wl,--export-dynamic

14_gtk_foobar_LDADD = $(_14_GTK_FOOBAR_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

