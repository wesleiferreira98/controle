/********************************************************************************
** Form generated from reading UI file 'fm_novavendas.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVAVENDAS_H
#define UI_FM_NOVAVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novavendas
{
public:
    QTableWidget *tw_listaProdutos;
    QLabel *label_4;
    QLabel *lb_totalVenda;
    QPushButton *btn_pesquisarprod;
    QSplitter *splitter;
    QPushButton *btn_exclirprod;
    QPushButton *btn_editarprod;
    QPushButton *btn_finalizarvenda;
    QSplitter *splitter_2;
    QSplitter *splitter_4;
    QLineEdit *txt_qtde;
    QLabel *label_3;
    QLineEdit *txt_cod_produto;
    QSplitter *splitter_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *fm_novavendas)
    {
        if (fm_novavendas->objectName().isEmpty())
            fm_novavendas->setObjectName(QStringLiteral("fm_novavendas"));
        fm_novavendas->resize(752, 348);
        tw_listaProdutos = new QTableWidget(fm_novavendas);
        tw_listaProdutos->setObjectName(QStringLiteral("tw_listaProdutos"));
        tw_listaProdutos->setGeometry(QRect(10, 70, 741, 181));
        label_4 = new QLabel(fm_novavendas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 270, 111, 16));
        lb_totalVenda = new QLabel(fm_novavendas);
        lb_totalVenda->setObjectName(QStringLiteral("lb_totalVenda"));
        lb_totalVenda->setGeometry(QRect(100, 270, 121, 16));
        btn_pesquisarprod = new QPushButton(fm_novavendas);
        btn_pesquisarprod->setObjectName(QStringLiteral("btn_pesquisarprod"));
        btn_pesquisarprod->setGeometry(QRect(350, 30, 131, 31));
        btn_pesquisarprod->setAutoDefault(false);
        splitter = new QSplitter(fm_novavendas);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 300, 326, 28));
        splitter->setOrientation(Qt::Horizontal);
        btn_exclirprod = new QPushButton(splitter);
        btn_exclirprod->setObjectName(QStringLiteral("btn_exclirprod"));
        btn_exclirprod->setAutoDefault(false);
        splitter->addWidget(btn_exclirprod);
        btn_editarprod = new QPushButton(splitter);
        btn_editarprod->setObjectName(QStringLiteral("btn_editarprod"));
        btn_editarprod->setAutoDefault(false);
        splitter->addWidget(btn_editarprod);
        btn_finalizarvenda = new QPushButton(splitter);
        btn_finalizarvenda->setObjectName(QStringLiteral("btn_finalizarvenda"));
        btn_finalizarvenda->setAutoDefault(false);
        splitter->addWidget(btn_finalizarvenda);
        splitter_2 = new QSplitter(fm_novavendas);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 30, 321, 28));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_4 = new QSplitter(splitter_2);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        txt_qtde = new QLineEdit(splitter_4);
        txt_qtde->setObjectName(QStringLiteral("txt_qtde"));
        splitter_4->addWidget(txt_qtde);
        label_3 = new QLabel(splitter_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_4->addWidget(label_3);
        txt_cod_produto = new QLineEdit(splitter_4);
        txt_cod_produto->setObjectName(QStringLiteral("txt_cod_produto"));
        splitter_4->addWidget(txt_cod_produto);
        splitter_2->addWidget(splitter_4);
        splitter_3 = new QSplitter(fm_novavendas);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(10, 10, 331, 16));
        splitter_3->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        splitter_3->addWidget(label);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_3->addWidget(label_2);

        retranslateUi(fm_novavendas);

        QMetaObject::connectSlotsByName(fm_novavendas);
    } // setupUi

    void retranslateUi(QDialog *fm_novavendas)
    {
        fm_novavendas->setWindowTitle(QApplication::translate("fm_novavendas", "Dialog", 0));
        label_4->setText(QApplication::translate("fm_novavendas", "Valor total:", 0));
        lb_totalVenda->setText(QApplication::translate("fm_novavendas", "R$", 0));
        btn_pesquisarprod->setText(QApplication::translate("fm_novavendas", "Pesqusar Produto", 0));
        btn_exclirprod->setText(QApplication::translate("fm_novavendas", "Excluir Produto", 0));
        btn_editarprod->setText(QApplication::translate("fm_novavendas", "Editar Produto", 0));
        btn_finalizarvenda->setText(QApplication::translate("fm_novavendas", "Finalizar venda", 0));
        label_3->setText(QApplication::translate("fm_novavendas", "X", 0));
        label->setText(QApplication::translate("fm_novavendas", "Quantidade", 0));
        label_2->setText(QApplication::translate("fm_novavendas", "C\303\263digo do Produto", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_novavendas: public Ui_fm_novavendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVAVENDAS_H
