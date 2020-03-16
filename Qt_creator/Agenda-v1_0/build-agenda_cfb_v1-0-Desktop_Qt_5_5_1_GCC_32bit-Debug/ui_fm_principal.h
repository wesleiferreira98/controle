/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QPushButton *btn_contato;
    QPushButton *btn_pesquisar;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QStringLiteral("fm_principal"));
        fm_principal->resize(718, 365);
        btn_contato = new QPushButton(fm_principal);
        btn_contato->setObjectName(QStringLiteral("btn_contato"));
        btn_contato->setGeometry(QRect(10, 10, 121, 21));
        btn_pesquisar = new QPushButton(fm_principal);
        btn_pesquisar->setObjectName(QStringLiteral("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(150, 10, 121, 21));

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", 0));
        btn_contato->setText(QApplication::translate("fm_principal", "adicionar contato", 0));
        btn_pesquisar->setText(QApplication::translate("fm_principal", "Pesquisar contato", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
