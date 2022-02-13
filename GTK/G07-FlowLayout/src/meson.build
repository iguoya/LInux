g07_flowlayout_sources = [
  'main.c',
  'g07_flowlayout-window.c',
  ]

g07_flowlayout_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g07_flowlayout_sources += gnome.compile_resources('g07_flowlayout-resources',
  'g07_flowlayout.gresource.xml',
  c_name: 'g07_flowlayout'
)

executable('g07-flowlayout', g07_flowlayout_sources,
  dependencies: g07_flowlayout_deps,
  install: true,
)
