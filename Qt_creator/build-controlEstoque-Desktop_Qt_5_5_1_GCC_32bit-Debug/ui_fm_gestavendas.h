/********************************************************************************
** Form generated from reading UI file 'fm_gestavendas.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAVENDAS_H
#define UI_FM_GESTAVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaVendas
{
public:
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QTableWidget *tw_listavenda;
    QTableWidget *tw_listaProdutoVenda;
    QPushButton *btn_geraPDF;
    QPushButton *btn_filtar;
    QPushButton *tnn_mostratudo;
    QTimeEdit *timeEdit;

    void setupUi(QDialog *fm_gestaVendas)
    {
        if (fm_gestaVendas->objectName().isEmpty())
            fm_gestaVendas->setObjectName(QStringLiteral("fm_gestaVendas"));
        fm_gestaVendas->resize(691, 414);
        dateEdit = new QDateEdit(fm_gestaVendas);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 10, 110, 26));
        dateEdit_2 = new QDateEdit(fm_gestaVendas);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(140, 10, 110, 26));
        tw_listavenda = new QTableWidget(fm_gestaVendas);
        tw_listavenda->setObjectName(QStringLiteral("tw_listavenda"));
        tw_listavenda->setGeometry(QRect(40, 50, 561, 111));
        tw_listaProdutoVenda = new QTableWidget(fm_gestaVendas);
        tw_listaProdutoVenda->setObjectName(QStringLiteral("tw_listaProdutoVenda"));
        tw_listaProdutoVenda->setGeometry(QRect(40, 170, 561, 192));
        btn_geraPDF = new QPushButton(fm_gestaVendas);
        btn_geraPDF->setObjectName(QStringLiteral("btn_geraPDF"));
        btn_geraPDF->setGeometry(QRect(40, 370, 141, 31));
        btn_filtar = new QPushButton(fm_gestaVendas);
        btn_filtar->setObjectName(QStringLiteral("btn_filtar"));
        btn_filtar->setGeometry(QRect(390, 10, 90, 28));
        tnn_mostratudo = new QPushButton(fm_gestaVendas);
        tnn_mostratudo->setObjectName(QStringLiteral("tnn_mostratudo"));
        tnn_mostratudo->setGeometry(QRect(490, 10, 161, 31));
        timeEdit = new QTimeEdit(fm_gestaVendas);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(260, 10, 118, 26));

        retranslateUi(fm_gestaVendas);

        QMetaObject::connectSlotsByName(fm_gestaVendas);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaVendas)
    {
        fm_gestaVendas->setWindowTitle(QApplication::translate("fm_gestaVendas", "Dialog", 0));
        btn_geraPDF->setText(QApplication::translate("fm_gestaVendas", "Gerar Relat\303\263rio PDF", 0));
        btn_filtar->setText(QApplication::translate("fm_gestaVendas", "filtrar", 0));
        tnn_mostratudo->setText(QApplication::translate("fm_gestaVendas", "Mostar todas as vendas", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaVendas: public Ui_fm_gestaVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAVENDAS_H
