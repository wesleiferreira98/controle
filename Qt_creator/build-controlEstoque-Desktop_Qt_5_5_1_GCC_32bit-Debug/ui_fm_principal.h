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
#include <QtWidgets/QHeaderView>
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
            fm_principal->setObjectName(QStringLiteral("fm_principal"));
        fm_principal->resize(646, 322);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fm_principal->sizePolicy().hasHeightForWidth());
        fm_principal->setSizePolicy(sizePolicy);
        actionEstoque = new QAction(fm_principal);
        actionEstoque->setObjectName(QStringLiteral("actionEstoque"));
        actionColaboradores = new QAction(fm_principal);
        actionColaboradores->setObjectName(QStringLiteral("actionColaboradores"));
        actionVendas = new QAction(fm_principal);
        actionVendas->setObjectName(QStringLiteral("actionVendas"));
        actionSAIR = new QAction(fm_principal);
        actionSAIR->setObjectName(QStringLiteral("actionSAIR"));
        actionSobre = new QAction(fm_principal);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(fm_principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 191, 31));
        pushButton->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 85, 255);\n"
"color:#fff;\n"
"font-size:16pt;\n"
"border:none;\n"
"boder-radius: 10px;\n"
""));
        btn_bloquear = new QPushButton(centralWidget);
        btn_bloquear->setObjectName(QStringLiteral("btn_bloquear"));
        btn_bloquear->setGeometry(QRect(10, 210, 64, 64));
        btn_bloquear->setStyleSheet(QStringLiteral(""));
        btn_bloquear->setFlat(true);
        lb_nome = new QLabel(centralWidget);
        lb_nome->setObjectName(QStringLiteral("lb_nome"));
        lb_nome->setGeometry(QRect(90, 230, 161, 21));
        fm_principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(fm_principal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 20));
        menuGest_o = new QMenu(menuBar);
        menuGest_o->setObjectName(QStringLiteral("menuGest_o"));
        menuSistema = new QMenu(menuBar);
        menuSistema->setObjectName(QStringLiteral("menuSistema"));
        fm_principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(fm_principal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        fm_principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(fm_principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "fm_principal", 0));
        actionEstoque->setText(QApplication::translate("fm_principal", "Estoque", 0));
        actionColaboradores->setText(QApplication::translate("fm_principal", "Colaboradores", 0));
        actionVendas->setText(QApplication::translate("fm_principal", "Vendas", 0));
        actionSAIR->setText(QApplication::translate("fm_principal", "SAIR", 0));
        actionSobre->setText(QApplication::translate("fm_principal", "Sobre", 0));
        pushButton->setText(QApplication::translate("fm_principal", "Nova Venda", 0));
        btn_bloquear->setText(QApplication::translate("fm_principal", "bloq", 0));
        lb_nome->setText(QApplication::translate("fm_principal", "N\303\243o existe colaboradores.", 0));
        menuGest_o->setTitle(QApplication::translate("fm_principal", "Gest\303\243o", 0));
        menuSistema->setTitle(QApplication::translate("fm_principal", "Sistema", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
