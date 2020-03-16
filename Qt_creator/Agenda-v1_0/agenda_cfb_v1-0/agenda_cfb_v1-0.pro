#-------------------------------------------------
#
# Project created by QtCreator 2019-07-31T14:34:08
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = agenda_cfb_v1-0
TEMPLATE = app


SOURCES += main.cpp\
        janelalogin.cpp \
    fm_principal.cpp \
    fm_contatos.cpp \
    fm_pesquisa.cpp \
    fm_editarcon.cpp

HEADERS  += janelalogin.h \
    fm_principal.h \
    fm_contatos.h \
    fm_pesquisa.h \
    fm_editarcon.h

FORMS    += janelalogin.ui \
    fm_principal.ui \
    fm_contatos.ui \
    fm_pesquisa.ui \
    fm_editarcon.ui
