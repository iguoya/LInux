## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = g36_multiwindow.ui \
	g37_conponent.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G36_MULTIWINDOW_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g36_multiwindow

g36_multiwindow_SOURCES = \
	main.c \
	g36-multiwindow.h \
	g36-multiwindow.c \
	g37-conponent.h \
	g37-conponent.c	


g36_multiwindow_LDFLAGS = \
	-Wl,--export-dynamic

g36_multiwindow_LDADD = $(G36_MULTIWINDOW_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

