#-------------------------------------------------
#
# Project created by QtCreator 2019-01-19T16:20:35
#
#-------------------------------------------------

QT       -= gui

TARGET = shit
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

QMAKE_CXXFLAGS += -lncurses
QMAKE_CXXFLAGS_DEBUG += -lncurses
LIBS += -L/usr/include -lncurses
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
    main.cpp \
    States/basestate.cpp \
    States/gamestate.cpp \
    States/menustate.cpp \
    States/idlestate.cpp \
    States/inventorystate.cpp \
    States/statecontroller.cpp \
    Term/mainwindow.cpp \
    Term/cframe.cpp \
    Term/clabel.cpp \
    Term/baseconsoleobject.cpp

HEADERS += \
    States/basestate.h \
    States/gamestate.h \
    States/menustate.h \
    States/idlestate.h \
    States/inventorystate.h \
    States/statecontroller.h \   
    Term/mainwindow.h \
    Term/cframe.h \
    Term/clabel.h \
    Term/baseconsoleobject.h


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
