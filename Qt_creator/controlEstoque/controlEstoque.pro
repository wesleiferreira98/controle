#-------------------------------------------------
#
# Project created by QtCreator 2019-08-26T18:43:52
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = controlEstoque
TEMPLATE = app


SOURCES += main.cpp\
        fm_principal.cpp \
    fm_logar.cpp \
    fm_novavendas.cpp \
    fm_gestavendas.cpp \
    fm_gestaoestoque.cpp \
    fm_gestaocolaboradores.cpp \
    fm_editarproven.cpp \
    funcoes_globais.cpp

HEADERS  += fm_principal.h \
    fm_logar.h \
    conexao.h \
    fm_novavendas.h \
    fm_gestavendas.h \
    fm_gestaoestoque.h \
    fm_gestaocolaboradores.h \
    fm_editarproven.h \
    variaveis_globais.h \
    funcoes_globais.h

FORMS    += fm_principal.ui \
    fm_logar.ui \
    fm_novavendas.ui \
    fm_gestavendas.ui \
    fm_gestaoestoque.ui \
    fm_gestaocolaboradores.ui \
    fm_editarproven.ui
