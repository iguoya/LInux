g05_image_sources = [
  'main.c',
  'g05_image-window.c',
    'g05_image-application.c',
  ]

g05_image_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g05_image_sources += gnome.compile_resources('g05_image-resources',
  'g05_image.gresource.xml',
  c_name: 'g05_image'
)

executable('g05-image', g05_image_sources,
  dependencies: g05_image_deps,
  install: true,
)
