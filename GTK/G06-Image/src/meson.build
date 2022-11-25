g06_image_sources = [
  'main.c',
  'g06_image-window.c',
  ]

g06_image_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

g06_image_sources += gnome.compile_resources('g06_image-resources',
  'g06_image.gresource.xml',
  c_name: 'g06_image'
)

executable('g06-image', g06_image_sources,
  dependencies: g06_image_deps,
  install: true,
)
