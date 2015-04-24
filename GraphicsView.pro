#-------------------------------------------------
#
# Project created by QtCreator 2015-04-14T20:00:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GraphicsView
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rectitem.cpp \
    LKRectItem.cpp \
    LKBaseItem.cpp \
    focusagentitem.cpp \
    LKAgentItem.cpp

HEADERS  += mainwindow.h \
    rectitem.h \
    ItemsHeader.h \
    ItemDefine.h \
    LKBaseItem.h \
    LKRectItem.h \
    focusagentitem.h \
    LKAgentItem.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc
