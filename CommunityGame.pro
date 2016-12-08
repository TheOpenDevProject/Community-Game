QT += core
QT -= gui

CONFIG += c++11

TARGET = CommunityGame
CONFIG += console
CONFIG -= app_bundle

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
INCLUDEPATH += /usr/local/include/
LIBS += -L/usr/local/lib/


TEMPLATE = app

SOURCES += main.cpp \
    gamewindow.cpp \
    basescene.cpp \
    testscene.cpp

HEADERS += \
    gamewindow.h \
    basescene.h \
    testscene.h
