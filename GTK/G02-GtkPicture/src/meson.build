g02_gtkpicture_sources = [
  'main.c',
  'g02_gtkpicture-window.c',
    'g02_gtkpicture-application.c',
  ]

g02_gtkpicture_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g02_gtkpicture_sources += gnome.compile_resources('g02_gtkpicture-resources',
  'g02_gtkpicture.gresource.xml',
  c_name: 'g02_gtkpicture'
)

executable('g02-gtkpicture', g02_gtkpicture_sources,
  dependencies: g02_gtkpicture_deps,
  install: true,
)
