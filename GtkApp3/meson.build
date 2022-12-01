project('LinuxProgramming', 'c')


incdir = include_directories(
'/usr/local/include/gtk-4.0/', 
'/usr/local/include/glib-2.0/',
'/usr/local/lib/aarch64-linux-gnu/glib-2.0/include/',
'/usr/local/include/cairo/',
'/usr/local/include/pango-1.0/',
'/usr/local/include/harfbuzz/',
'/usr/local/include/gdk-pixbuf-2.0/',
'/usr/local/include/graphene-1.0/',
'/usr/local/lib/aarch64-linux-gnu/graphene-1.0/include/',
'/usr/local/include/fribidi',
'/usr/local/include/freetype2',
'/usr/local/include/pixman-1',
'/usr/local/include',
'/usr/include/libpng12',
'/usr/include/libmount',
'/usr/include/blkid',
'/usr/include/uuid'
)



deplib = dependency('gtk4', 
'pangocairo-1.0', 
'pango-1.0', 
'harfbuzz', 
'gdk_pixbuf-2.0', 
'cairo-gobject',
'cairo',
'graphene-1.0',
'gio-2.0',
'gobject-2.0',
'glib-2.0'
)


executable('LinuxProgramming', 'LinuxProgramming.c', 
include_directories : incdir,
dependencies : deplib)


