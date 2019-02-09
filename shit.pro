#-------------------------------------------------
#
# Project created by QtCreator 2019-01-19T16:20:35
#
#-------------------------------------------------

QT += gui core testlib
TARGET = shit
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -lncurses --coverage
QMAKE_CXXFLAGS_DEBUG += -lncurses --coverage
QMAKE_LFLAGS += --coverage
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
    States/statecontroller.cpp \
    Term/mainwindow.cpp \
    Term/cframe.cpp \
    Term/clabel.cpp \
    Term/baseconsoleobject.cpp \
    Term/gamestateWin/menuwidget.cpp \
    Term/gamestateWin/basewidget.cpp \
    Term/consolereader.cpp \
    Term/gamestateWin/gamewidget.cpp \
    Term/gamestateWin/ldlewidget.cpp \
    States/gameoverstate.cpp \
    Term/gamestateWin/gameowerwidget.cpp \
    GLogick/map.cpp \
    GLogick/controller.cpp \
    GLogick/Entity/movableentity.cpp \
    GLogick/Entity/sceneentity.cpp \
    GLogick/Entity/wall.cpp \
    GLogick/Entity/floor.cpp \
    GLogick/Entity/staticobject.cpp \
    Term/cchar.cpp \
    GLogick/Entity/charecter.cpp \
    GLogick/mapgenerator.cpp \
    GLogick/Entity/enemy.cpp \
    GLogick/Entity/projectile.cpp \
    GLogick/Entity/door.cpp

HEADERS += \
    States/basestate.h \
    States/gamestate.h \
    States/menustate.h \
    States/idlestate.h \
    States/statecontroller.h \   
    Term/mainwindow.h \
    Term/cframe.h \
    Term/clabel.h \
    Term/baseconsoleobject.h \
    Term/consolecolor.h \
    Term/gamestateWin/menuwidget.h \
    Term/gamestateWin/basewidget.h \
    Term/consolereader.h \
    Term/gamestateWin/gamewidget.h \
    Term/gamestateWin/ldlewidget.h \
    Term/gamestateWin/gameowerwidget.h \
    GLogick/mapgenarator.h \
    States/gameoverstate.h \
    GLogick/map.h \
    GLogick/controller.h \
    GLogick/Entity/movableentity.h \
    GLogick/Entity/sceneentity.h \
    GLogick/Entity/wall.h \
    GLogick/Entity/floor.h \
    GLogick/Entity/staticobject.h \
    Term/cchar.h \
    GLogick/Entity/charecter.h \
    GLogick/Entity/enemy.h \
    GLogick/Entity/projectile.h \
    GLogick/Entity/door.h


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
