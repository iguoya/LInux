include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_hello.h

SOURCES += \
        ../App/hello.cpp \
        main.cpp
