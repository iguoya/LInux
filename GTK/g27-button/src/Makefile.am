## Process this file with automake to produce Makefile.in

## Created by Anjuta



AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G27_BUTTON_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g27_button

g27_button_SOURCES = \
	main.c


g27_button_LDFLAGS = \
	-Wl,--export-dynamic

g27_button_LDADD = $(G27_BUTTON_LIBS)




