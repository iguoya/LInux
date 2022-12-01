g10_glade_sources = [
  'main.c',
  'g10_glade-window.c',
  ]

g10_glade_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g10_glade_sources += gnome.compile_resources('g10_glade-resources',
  'g10_glade.gresource.xml',
  c_name: 'g10_glade'
)

executable('g10-glade', g10_glade_sources,
  dependencies: g10_glade_deps,
  install: true,
)
