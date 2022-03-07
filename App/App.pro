QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

include(QtAwesome/QtAwesome.pri)

SOURCES += \
    entrance.cpp \
    main.cpp \
    mainwindow.cpp \
    thread.cpp \
    tpl.cpp

HEADERS += \
    entrance.h \
    mainwindow.h \
    thread.h \
    tpl.h

FORMS += \
    entrance.ui \
    mainwindow.ui \
    thread.ui \
    tpl.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    dark/font.qrc \
    dark/style.qrc \
    images.qrc

#DISTFILES += \
#    dark/font/fontawesome-webfont.ttf \
#    font/fontawesome-webfont.ttf
