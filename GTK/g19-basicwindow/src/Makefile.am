## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = g19_basicwindow.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G19_BASICWINDOW_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g19_basicwindow

g19_basicwindow_SOURCES = \
	main.c \
	g19-basicwindow.h \
	g19-basicwindow.c	


g19_basicwindow_LDFLAGS = \
	-Wl,--export-dynamic

g19_basicwindow_LDADD = $(G19_BASICWINDOW_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

