/********************************************************************************
** Form generated from reading UI file 'fm_editarcon.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARCON_H
#define UI_FM_EDITARCON_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editarcon
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *txt_id;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_editarcon)
    {
        if (fm_editarcon->objectName().isEmpty())
            fm_editarcon->setObjectName(QStringLiteral("fm_editarcon"));
        fm_editarcon->resize(601, 188);
        widget = new QWidget(fm_editarcon);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        txt_id = new QLabel(widget);
        txt_id->setObjectName(QStringLiteral("txt_id"));

        horizontalLayout_5->addWidget(txt_id);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QStringLiteral("txt_telefone"));

        horizontalLayout_2->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QStringLiteral("txt_email"));

        horizontalLayout_3->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout_4->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(fm_editarcon);

        QMetaObject::connectSlotsByName(fm_editarcon);
    } // setupUi

    void retranslateUi(QDialog *fm_editarcon)
    {
        fm_editarcon->setWindowTitle(QApplication::translate("fm_editarcon", "Dialog", 0));
        label->setText(QApplication::translate("fm_editarcon", "ID", 0));
        txt_id->setText(QApplication::translate("fm_editarcon", "Carregar ID", 0));
        label_3->setText(QApplication::translate("fm_editarcon", "Nome", 0));
        label_4->setText(QApplication::translate("fm_editarcon", "Telefone", 0));
        label_5->setText(QApplication::translate("fm_editarcon", "E-mail", 0));
        btn_gravar->setText(QApplication::translate("fm_editarcon", "Gravar", 0));
        btn_cancelar->setText(QApplication::translate("fm_editarcon", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_editarcon: public Ui_fm_editarcon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARCON_H
