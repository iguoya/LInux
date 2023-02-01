#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})

aux_source_directory(. recursion_src)
add_library(recursion ${recursion_src})
