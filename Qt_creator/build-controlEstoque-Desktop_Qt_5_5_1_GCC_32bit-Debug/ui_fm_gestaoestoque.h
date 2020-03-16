/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_novoprodutodo;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_codigoproduto;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_descrisaop;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_estoque;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_fornecedo;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_compra;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_venda;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_novop;
    QPushButton *btn_gravarp;
    QWidget *tab_gestoproduto;
    QTableWidget *tw_ge_produtos;
    QGroupBox *groupBox;
    QRadioButton *rb_ge_codigo;
    QRadioButton *rb_ge_descrisao;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLineEdit *txt_ge_codigo;
    QLabel *label_8;
    QLineEdit *txt_ge_produto;
    QLabel *label_9;
    QLineEdit *txt_ge_quantidade;
    QLabel *label_10;
    QLineEdit *txt_ge_compra;
    QLabel *label_11;
    QLineEdit *txt_ge_venda;
    QLabel *label_12;
    QLineEdit *txt_ge_fornecedor;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ge_gravar;
    QPushButton *btn_ge_excluir;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_ge_filtrar;
    QPushButton *btn_pesquisar;

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName(QStringLiteral("fm_gestaoEstoque"));
        fm_gestaoEstoque->resize(773, 433);
        horizontalLayout = new QHBoxLayout(fm_gestaoEstoque);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(fm_gestaoEstoque);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_novoprodutodo = new QWidget();
        tab_novoprodutodo->setObjectName(QStringLiteral("tab_novoprodutodo"));
        verticalLayout_7 = new QVBoxLayout(tab_novoprodutodo);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(tab_novoprodutodo);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        txt_codigoproduto = new QLineEdit(tab_novoprodutodo);
        txt_codigoproduto->setObjectName(QStringLiteral("txt_codigoproduto"));

        verticalLayout->addWidget(txt_codigoproduto);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(tab_novoprodutodo);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_descrisaop = new QLineEdit(tab_novoprodutodo);
        txt_descrisaop->setObjectName(QStringLiteral("txt_descrisaop"));

        verticalLayout_2->addWidget(txt_descrisaop);


        verticalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(tab_novoprodutodo);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_estoque = new QLineEdit(tab_novoprodutodo);
        txt_estoque->setObjectName(QStringLiteral("txt_estoque"));

        verticalLayout_3->addWidget(txt_estoque);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(tab_novoprodutodo);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        txt_fornecedo = new QLineEdit(tab_novoprodutodo);
        txt_fornecedo->setObjectName(QStringLiteral("txt_fornecedo"));

        verticalLayout_4->addWidget(txt_fornecedo);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(tab_novoprodutodo);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        txt_compra = new QLineEdit(tab_novoprodutodo);
        txt_compra->setObjectName(QStringLiteral("txt_compra"));

        verticalLayout_5->addWidget(txt_compra);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(tab_novoprodutodo);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        txt_venda = new QLineEdit(tab_novoprodutodo);
        txt_venda->setObjectName(QStringLiteral("txt_venda"));

        verticalLayout_6->addWidget(txt_venda);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_novop = new QPushButton(tab_novoprodutodo);
        btn_novop->setObjectName(QStringLiteral("btn_novop"));

        horizontalLayout_2->addWidget(btn_novop);

        btn_gravarp = new QPushButton(tab_novoprodutodo);
        btn_gravarp->setObjectName(QStringLiteral("btn_gravarp"));

        horizontalLayout_2->addWidget(btn_gravarp);


        verticalLayout_7->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_novoprodutodo, QString());
        tab_gestoproduto = new QWidget();
        tab_gestoproduto->setObjectName(QStringLiteral("tab_gestoproduto"));
        tw_ge_produtos = new QTableWidget(tab_gestoproduto);
        tw_ge_produtos->setObjectName(QStringLiteral("tw_ge_produtos"));
        tw_ge_produtos->setGeometry(QRect(390, 141, 351, 231));
        groupBox = new QGroupBox(tab_gestoproduto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(390, 0, 161, 81));
        rb_ge_codigo = new QRadioButton(groupBox);
        rb_ge_codigo->setObjectName(QStringLiteral("rb_ge_codigo"));
        rb_ge_codigo->setGeometry(QRect(10, 20, 141, 21));
        rb_ge_descrisao = new QRadioButton(groupBox);
        rb_ge_descrisao->setObjectName(QStringLiteral("rb_ge_descrisao"));
        rb_ge_descrisao->setGeometry(QRect(10, 50, 151, 21));
        layoutWidget = new QWidget(tab_gestoproduto);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 331, 361));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_8->addWidget(label_7);

        txt_ge_codigo = new QLineEdit(layoutWidget);
        txt_ge_codigo->setObjectName(QStringLiteral("txt_ge_codigo"));

        verticalLayout_8->addWidget(txt_ge_codigo);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        txt_ge_produto = new QLineEdit(layoutWidget);
        txt_ge_produto->setObjectName(QStringLiteral("txt_ge_produto"));

        verticalLayout_8->addWidget(txt_ge_produto);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_8->addWidget(label_9);

        txt_ge_quantidade = new QLineEdit(layoutWidget);
        txt_ge_quantidade->setObjectName(QStringLiteral("txt_ge_quantidade"));

        verticalLayout_8->addWidget(txt_ge_quantidade);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_8->addWidget(label_10);

        txt_ge_compra = new QLineEdit(layoutWidget);
        txt_ge_compra->setObjectName(QStringLiteral("txt_ge_compra"));

        verticalLayout_8->addWidget(txt_ge_compra);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_8->addWidget(label_11);

        txt_ge_venda = new QLineEdit(layoutWidget);
        txt_ge_venda->setObjectName(QStringLiteral("txt_ge_venda"));

        verticalLayout_8->addWidget(txt_ge_venda);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_8->addWidget(label_12);

        txt_ge_fornecedor = new QLineEdit(layoutWidget);
        txt_ge_fornecedor->setObjectName(QStringLiteral("txt_ge_fornecedor"));

        verticalLayout_8->addWidget(txt_ge_fornecedor);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_ge_gravar = new QPushButton(layoutWidget);
        btn_ge_gravar->setObjectName(QStringLiteral("btn_ge_gravar"));

        horizontalLayout_3->addWidget(btn_ge_gravar);

        btn_ge_excluir = new QPushButton(layoutWidget);
        btn_ge_excluir->setObjectName(QStringLiteral("btn_ge_excluir"));

        horizontalLayout_3->addWidget(btn_ge_excluir);


        verticalLayout_10->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(tab_gestoproduto);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(394, 90, 221, 48));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_ge_filtrar = new QLineEdit(layoutWidget1);
        txt_ge_filtrar->setObjectName(QStringLiteral("txt_ge_filtrar"));

        horizontalLayout_4->addWidget(txt_ge_filtrar);

        btn_pesquisar = new QPushButton(layoutWidget1);
        btn_pesquisar->setObjectName(QStringLiteral("btn_pesquisar"));

        horizontalLayout_4->addWidget(btn_pesquisar);


        verticalLayout_9->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_gestoproduto, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(fm_gestaoEstoque);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QApplication::translate("fm_gestaoEstoque", "Dialog", 0));
        label->setText(QApplication::translate("fm_gestaoEstoque", "Codigo do produto", 0));
        label_2->setText(QApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o do Protudo", 0));
        label_3->setText(QApplication::translate("fm_gestaoEstoque", "Quantidade em estoque", 0));
        label_4->setText(QApplication::translate("fm_gestaoEstoque", "Fornecedor", 0));
        label_5->setText(QApplication::translate("fm_gestaoEstoque", "Valor da Compra", 0));
        label_6->setText(QApplication::translate("fm_gestaoEstoque", "Valor da venda", 0));
        btn_novop->setText(QApplication::translate("fm_gestaoEstoque", "Novo", 0));
        btn_gravarp->setText(QApplication::translate("fm_gestaoEstoque", "Gravar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoprodutodo), QApplication::translate("fm_gestaoEstoque", "Novo Produto", 0));
        groupBox->setTitle(QApplication::translate("fm_gestaoEstoque", "Filtrar por:", 0));
        rb_ge_codigo->setText(QApplication::translate("fm_gestaoEstoque", "C\303\263digo do produto", 0));
        rb_ge_descrisao->setText(QApplication::translate("fm_gestaoEstoque", "Descris\303\243o do produto", 0));
        label_7->setText(QApplication::translate("fm_gestaoEstoque", "C\303\263digo do produto", 0));
        label_8->setText(QApplication::translate("fm_gestaoEstoque", "Produto", 0));
        label_9->setText(QApplication::translate("fm_gestaoEstoque", "Quantidade", 0));
        label_10->setText(QApplication::translate("fm_gestaoEstoque", "Valor de compra", 0));
        label_11->setText(QApplication::translate("fm_gestaoEstoque", "Valor de venda", 0));
        label_12->setText(QApplication::translate("fm_gestaoEstoque", "Fornecedor", 0));
        btn_ge_gravar->setText(QApplication::translate("fm_gestaoEstoque", "Gravar novo produto", 0));
        btn_ge_excluir->setText(QApplication::translate("fm_gestaoEstoque", "Excluir produto", 0));
        label_13->setText(QApplication::translate("fm_gestaoEstoque", "Filtar", 0));
        btn_pesquisar->setText(QApplication::translate("fm_gestaoEstoque", "Pesqusar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestoproduto), QApplication::translate("fm_gestaoEstoque", "Gest\303\243o de Produtos", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
