TEMPLATE    = app

QT          -= gui
QT          += core

CONFIG      += c++11 console
CONFIG      -= app_bundle

DESTDIR     = ../bin

DEFINES     += QT_DEPRECATED_WARNINGS

SOURCES     += $$files(./src/*.cpp)
HEADERS     += $$files(./include/*.h)

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
