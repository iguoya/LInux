g03_buttonlabel_sources = [
  'main.c',
  'g03_buttonlabel-window.c',
    'g03_buttonlabel-application.c',
  ]

g03_buttonlabel_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g03_buttonlabel_sources += gnome.compile_resources('g03_buttonlabel-resources',
  'g03_buttonlabel.gresource.xml',
  c_name: 'g03_buttonlabel'
)

executable('g03-buttonlabel', g03_buttonlabel_sources,
  dependencies: g03_buttonlabel_deps,
  install: true,
)
