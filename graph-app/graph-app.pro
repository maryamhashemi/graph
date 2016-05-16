#-------------------------------------------------
#
# Project created by QtCreator 2016-05-16T21:40:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graph-app
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vertex.cpp \
    edge.cpp \
    graph.cpp \
    circle.cpp \
    triangle.cpp

HEADERS  += mainwindow.h \
    vertex.h \
    edge.h \
    graph.h \
    circle.h \
    triangle.h

FORMS    += mainwindow.ui
