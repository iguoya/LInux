## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = g38_multi_window.ui \
	g37_conponent.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G38_MULTI_WINDOW_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g38_multi_window

g38_multi_window_SOURCES = \
	main.c \
	g38-multi_window.h \
	g38-multi_window.c \
	hello.h \
	hello.c	


g38_multi_window_LDFLAGS = \
	-Wl,--export-dynamic

g38_multi_window_LDADD = $(G38_MULTI_WINDOW_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

