#-------------------------------------------------
#
# Project created by QtCreator 2020-01-06T17:35:32
#
#-------------------------------------------------
include(QtXlsx/src/xlsx/qtxlsx.pri)
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_com_exel
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS XLSX_NO_LIB


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
