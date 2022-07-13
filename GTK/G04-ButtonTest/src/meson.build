g04_buttontest_sources = [
  'main.c',
  'g04_buttontest-window.c',
    'g04_buttontest-application.c',
  ]

g04_buttontest_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

g04_buttontest_sources += gnome.compile_resources('g04_buttontest-resources',
  'g04_buttontest.gresource.xml',
  c_name: 'g04_buttontest'
)

executable('g04-buttontest', g04_buttontest_sources,
  dependencies: g04_buttontest_deps,
  install: true,
)
