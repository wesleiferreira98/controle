QT += core
QT -= gui

TARGET = faculdadef
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    aluno.cpp \
    bolsista.cpp \
    meiobolsista.cpp

HEADERS += \
    aluno.h \
    bolsista.h \
    meiobolsista.h

