/********************************************************************************
** Form generated from reading UI file 'fm_logar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_LOGAR_H
#define UI_FM_LOGAR_H

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

class Ui_fm_logar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_logar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_logar)
    {
        if (fm_logar->objectName().isEmpty())
            fm_logar->setObjectName(QStringLiteral("fm_logar"));
        fm_logar->resize(453, 304);
        widget = new QWidget(fm_logar);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 421, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName(QStringLiteral("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName(QStringLiteral("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName(QStringLiteral("btn_logar"));

        horizontalLayout_3->addWidget(btn_logar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(fm_logar);

        QMetaObject::connectSlotsByName(fm_logar);
    } // setupUi

    void retranslateUi(QDialog *fm_logar)
    {
        fm_logar->setWindowTitle(QApplication::translate("fm_logar", "Dialog", 0));
        label->setText(QApplication::translate("fm_logar", "Nome de usuario", 0));
        label_2->setText(QApplication::translate("fm_logar", "Senha", 0));
        btn_logar->setText(QApplication::translate("fm_logar", "LOGAR", 0));
        btn_cancelar->setText(QApplication::translate("fm_logar", "CANCELAR", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_logar: public Ui_fm_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_LOGAR_H
