/********************************************************************************
** Form generated from reading UI file 'fm_pesquisa.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISA_H
#define UI_FM_PESQUISA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisa
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesquisa;
    QPushButton *btn_pesquisar;
    QTableWidget *tw_lista;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;

    void setupUi(QDialog *fm_pesquisa)
    {
        if (fm_pesquisa->objectName().isEmpty())
            fm_pesquisa->setObjectName(QStringLiteral("fm_pesquisa"));
        fm_pesquisa->resize(748, 375);
        widget = new QWidget(fm_pesquisa);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 721, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_pesquisa = new QLineEdit(widget);
        txt_pesquisa->setObjectName(QStringLiteral("txt_pesquisa"));
        txt_pesquisa->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(txt_pesquisa);

        btn_pesquisar = new QPushButton(widget);
        btn_pesquisar->setObjectName(QStringLiteral("btn_pesquisar"));

        horizontalLayout->addWidget(btn_pesquisar);


        verticalLayout->addLayout(horizontalLayout);

        tw_lista = new QTableWidget(widget);
        tw_lista->setObjectName(QStringLiteral("tw_lista"));

        verticalLayout->addWidget(tw_lista);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_excluir = new QPushButton(widget);
        btn_excluir->setObjectName(QStringLiteral("btn_excluir"));

        horizontalLayout_2->addWidget(btn_excluir);

        btn_editar = new QPushButton(widget);
        btn_editar->setObjectName(QStringLiteral("btn_editar"));

        horizontalLayout_2->addWidget(btn_editar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(fm_pesquisa);

        QMetaObject::connectSlotsByName(fm_pesquisa);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisa)
    {
        fm_pesquisa->setWindowTitle(QApplication::translate("fm_pesquisa", "Dialog", 0));
        label->setText(QApplication::translate("fm_pesquisa", "Pesquisar Contatos", 0));
        btn_pesquisar->setText(QApplication::translate("fm_pesquisa", "Pesquisar", 0));
        btn_excluir->setText(QApplication::translate("fm_pesquisa", "Excluir", 0));
        btn_editar->setText(QApplication::translate("fm_pesquisa", "Editar", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisa: public Ui_fm_pesquisa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISA_H
