## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = linuxprogramdesign.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(LINUXPROGRAMDESIGN_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = linuxprogramdesign

linuxprogramdesign_SOURCES = \
	main.c \
	hello.c \
	hello.h \
	system.c \
	system.h


linuxprogramdesign_LDFLAGS = \
	-Wl,--export-dynamic

linuxprogramdesign_LDADD = $(LINUXPROGRAMDESIGN_LIBS)




EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

