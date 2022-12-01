g11_glade_sources = [
  'main.c',
  'g11_glade-window.c',
  ]

g11_glade_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g11_glade_sources += gnome.compile_resources('g11_glade-resources',
  'g11_glade.gresource.xml',
  c_name: 'g11_glade'
)

executable('g11-glade', g11_glade_sources,
  dependencies: g11_glade_deps,
  install: true,
)
