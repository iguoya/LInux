g09_gtk4_sources = [
  'main.c',
  'g09_gtk4-window.c',
    'g09_gtk4-application.c',
  ]

g09_gtk4_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g09_gtk4_sources += gnome.compile_resources('g09_gtk4-resources',
  'g09_gtk4.gresource.xml',
  c_name: 'g09_gtk4'
)

executable('g09-gtk4', g09_gtk4_sources,
  dependencies: g09_gtk4_deps,
  install: true,
)
