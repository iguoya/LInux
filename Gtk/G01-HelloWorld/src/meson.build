g01_helloworld_sources = [
  'main.c',
  'g01_helloworld-window.c',
    'g01_helloworld-application.c',
  ]

g01_helloworld_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g01_helloworld_sources += gnome.compile_resources('g01_helloworld-resources',
  'g01_helloworld.gresource.xml',
  c_name: 'g01_helloworld'
)

executable('g01-helloworld', g01_helloworld_sources,
  dependencies: g01_helloworld_deps,
  install: true,
)
