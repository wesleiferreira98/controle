QT += core
QT -= gui

TARGET = consecionaria
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    veiculos.cpp \
    carro.cpp \
    moto.cpp \
    navio.cpp

HEADERS += \
    veiculos.h \
    carro.h \
    moto.h \
    navio.h

