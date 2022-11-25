## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = g37_multi_window.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G37_MULTI_WINDOW_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g37_multi_window

g37_multi_window_SOURCES = \
	main.c \
	g37-multi_window.h \
	g37-multi_window.c \
	hello.c \
	hello.h	


g37_multi_window_LDFLAGS = \
	-Wl,--export-dynamic

g37_multi_window_LDADD = $(G37_MULTI_WINDOW_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

