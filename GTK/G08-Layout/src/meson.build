g08_layout_sources = [
  'main.c',
  'g08_layout-window.c',
  ]

g08_layout_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g08_layout_sources += gnome.compile_resources('g08_layout-resources',
  'g08_layout.gresource.xml',
  c_name: 'g08_layout'
)

executable('g08-layout', g08_layout_sources,
  dependencies: g08_layout_deps,
  install: true,
)
