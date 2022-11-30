g15_glade_sources = [
  'main.c',
  'g15_glade-window.c',
  ]

g15_glade_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g15_glade_sources += gnome.compile_resources('g15_glade-resources',
  'g15_glade.gresource.xml',
  c_name: 'g15_glade'
)

executable('g15-glade', g15_glade_sources,
  dependencies: g15_glade_deps,
  install: true,
)
