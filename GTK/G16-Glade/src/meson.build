g16_glade_sources = [
  'main.c'
  ]

g16_glade_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')



executable('g16-glade', g16_glade_sources,
  dependencies: g16_glade_deps,
  install: true,
)
