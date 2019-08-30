#-------------------------------------------------
#
# Project created by QtCreator 2019-08-30T16:54:57
#
#-------------------------------------------------

QT          += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = form-01
TEMPLATE    = app

DESTDIR     = ../bin

DEFINES     += QT_DEPRECATED_WARNINGS

CONFIG      += c++11

SOURCES     += $$files(./src/*.cpp)
HEADERS     += $$files(./include/*.h)
FORMS       += $$files(./forms/*.ui)

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
