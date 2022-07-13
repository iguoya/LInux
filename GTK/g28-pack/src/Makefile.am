## Process this file with automake to produce Makefile.in

## Created by Anjuta



AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(G28_PACK_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = g28_pack

g28_pack_SOURCES = \
	main.c \
	g28-pack.h \
	g28-pack.c	


g28_pack_LDFLAGS = \
	-Wl,--export-dynamic

g28_pack_LDADD = $(G28_PACK_LIBS)




