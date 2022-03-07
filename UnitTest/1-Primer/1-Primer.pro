include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        sample1.h \
        tst_factorialtest.h

SOURCES += \
        main.cpp \
        sample1.cpp
