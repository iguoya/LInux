g12_glade_sources = [
  'main.c',
  'g12_glade-window.c',
    'g12_glade-application.c',
  ]

g12_glade_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g12_glade_sources += gnome.compile_resources('g12_glade-resources',
  'g12_glade.gresource.xml',
  c_name: 'g12_glade'
)

executable('g12-glade', g12_glade_sources,
  dependencies: g12_glade_deps,
  install: true,
)
