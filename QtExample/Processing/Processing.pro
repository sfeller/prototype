#-------------------------------------------------
#
# Project created by QtCreator 2016-01-26T15:02:29
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets datavisualization

TARGET = Processing
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aqtglwidget.cpp \
    aqtcoords.cpp

HEADERS  += mainwindow.h \
    aqtglwidget.h \
    aqtcoords.h

FORMS    += mainwindow.ui

CONFIG += c++11
