g05_legacygtk_sources = [
  'main.c',
  'g05_legacygtk-window.c',
  ]

g05_legacygtk_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g05_legacygtk_sources += gnome.compile_resources('g05_legacygtk-resources',
  'g05_legacygtk.gresource.xml',
  c_name: 'g05_legacygtk'
)

executable('g05-legacygtk', g05_legacygtk_sources,
  dependencies: g05_legacygtk_deps,
  install: true,
)
