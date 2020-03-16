/********************************************************************************
** Form generated from reading UI file 'fm_contatos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_CONTATOS_H
#define UI_FM_CONTATOS_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_contatos
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_contatos)
    {
        if (fm_contatos->objectName().isEmpty())
            fm_contatos->setObjectName(QStringLiteral("fm_contatos"));
        fm_contatos->resize(620, 325);
        widget = new QWidget(fm_contatos);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 591, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout_3->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QStringLiteral("txt_telefone"));

        horizontalLayout_2->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QStringLiteral("txt_email"));

        horizontalLayout->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout_4->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(fm_contatos);

        QMetaObject::connectSlotsByName(fm_contatos);
    } // setupUi

    void retranslateUi(QDialog *fm_contatos)
    {
        fm_contatos->setWindowTitle(QApplication::translate("fm_contatos", "Dialog", 0));
        label->setText(QApplication::translate("fm_contatos", "Nome", 0));
        label_2->setText(QApplication::translate("fm_contatos", "Telefone", 0));
        label_3->setText(QApplication::translate("fm_contatos", "E-mail", 0));
        btn_gravar->setText(QApplication::translate("fm_contatos", "Gravar", 0));
        btn_cancelar->setText(QApplication::translate("fm_contatos", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_contatos: public Ui_fm_contatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_CONTATOS_H
