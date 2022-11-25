include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_factorial.h \
        tst_hello.h

SOURCES += \
        ../App/hello.cpp \
        ../App/sample1.cc \
        main.cpp
