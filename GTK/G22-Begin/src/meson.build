g22_begin_sources = [
  'main.c',
  'g22_begin-window.c',
    'g22_begin-application.c',
  ]

g22_begin_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g22_begin_sources += gnome.compile_resources('g22_begin-resources',
  'g22_begin.gresource.xml',
  c_name: 'g22_begin'
)

executable('g22-begin', g22_begin_sources,
  dependencies: g22_begin_deps,
  install: true,
)
