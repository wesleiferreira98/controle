/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSAIR;
    QAction *actionSobre;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *btn_bloquear;
    QLabel *lb_nome;
    QMenuBar *menuBar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(646, 322);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fm_principal->sizePolicy().hasHeightForWidth());
        fm_principal->setSizePolicy(sizePolicy);
        actionEstoque = new QAction(fm_principal);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionColaboradores = new QAction(fm_principal);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionVendas = new QAction(fm_principal);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSAIR = new QAction(fm_principal);
        actionSAIR->setObjectName(QString::fromUtf8("actionSAIR"));
        actionSobre = new QAction(fm_principal);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralWidget = new QWidget(fm_principal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 191, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 85, 255);\n"
"color:#fff;\n"
"font-size:16pt;\n"
"border:none;\n"
"boder-radius: 10px;\n"
""));
        btn_bloquear = new QPushButton(centralWidget);
        btn_bloquear->setObjectName(QString::fromUtf8("btn_bloquear"));
        btn_bloquear->setGeometry(QRect(10, 210, 64, 64));
        btn_bloquear->setStyleSheet(QString::fromUtf8(""));
        btn_bloquear->setFlat(true);
        lb_nome = new QLabel(centralWidget);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(90, 230, 161, 21));
        fm_principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(fm_principal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 20));
        menuGest_o = new QMenu(menuBar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menuBar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        fm_principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(fm_principal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        fm_principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(fm_principal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        fm_principal->setStatusBar(statusBar);

        menuBar->addAction(menuGest_o->menuAction());
        menuBar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSAIR);
        menuSistema->addAction(actionSobre);

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QMainWindow *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "fm_principal", nullptr));
        actionEstoque->setText(QCoreApplication::translate("fm_principal", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("fm_principal", "Colaboradores", nullptr));
        actionVendas->setText(QCoreApplication::translate("fm_principal", "Vendas", nullptr));
        actionSAIR->setText(QCoreApplication::translate("fm_principal", "SAIR", nullptr));
        actionSobre->setText(QCoreApplication::translate("fm_principal", "Sobre", nullptr));
        pushButton->setText(QCoreApplication::translate("fm_principal", "Nova Venda", nullptr));
        btn_bloquear->setText(QCoreApplication::translate("fm_principal", "bloq", nullptr));
        lb_nome->setText(QCoreApplication::translate("fm_principal", "N\303\243o existe colaboradores.", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("fm_principal", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("fm_principal", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
