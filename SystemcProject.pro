#-------------------------------------------------
#
# Project created by QtCreator 2016-06-12T08:37:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SystemcProject
TEMPLATE = app


SOURCES += main.cpp\
        systemcproject.cpp \
    baseconnector.cpp \
    port.cpp \
    signal.cpp

HEADERS  += systemcproject.h \
    baseconnector.h \
    port.h \
    signal.h

FORMS    += systemcproject.ui
