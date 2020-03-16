/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionSalvar_como;
    QAction *actionSalvar;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionCFB_Cursos;
    QAction *actionAbrir;
    QAction *actionFonte;
    QAction *actionCor;
    QAction *actionCor_de_Fundo;
    QAction *actionImprimir;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuFormatar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(768, 361);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        QIcon icon;
        icon.addFile(QStringLiteral("../Documentos/trabalhos/qqqq.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName(QStringLiteral("actionSalvar_como"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QStringLiteral("actionFechar"));
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QStringLiteral("actionCopiar"));
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName(QStringLiteral("actionRecortar"));
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QStringLiteral("actionColar"));
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QStringLiteral("actionDesfazer"));
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QStringLiteral("actionRefazer"));
        actionCFB_Cursos = new QAction(MainWindow);
        actionCFB_Cursos->setObjectName(QStringLiteral("actionCFB_Cursos"));
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QStringLiteral("actionFonte"));
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QStringLiteral("actionCor"));
        actionCor_de_Fundo = new QAction(MainWindow);
        actionCor_de_Fundo->setObjectName(QStringLiteral("actionCor_de_Fundo"));
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QStringLiteral("actionImprimir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 0, 741, 291));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 768, 20));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        menuFormatar = new QMenu(menuBar);
        menuFormatar->setObjectName(QStringLiteral("menuFormatar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuFormatar->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionColar);
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuSobre->addAction(actionCFB_Cursos);
        menuFormatar->addAction(actionFonte);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionCor_de_Fundo);
        mainToolBar->addAction(actionNovo);
        mainToolBar->addAction(actionAbrir);
        mainToolBar->addAction(actionSalvar_como);
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionColar);
        mainToolBar->addAction(actionCopiar);
        mainToolBar->addAction(actionRecortar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDesfazer);
        mainToolBar->addAction(actionRefazer);
        mainToolBar->addAction(actionCFB_Cursos);
        mainToolBar->addAction(actionFechar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", 0));
        actionSalvar_como->setText(QApplication::translate("MainWindow", "Salvar como", 0));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", 0));
        actionFechar->setText(QApplication::translate("MainWindow", "Fechar", 0));
        actionCopiar->setText(QApplication::translate("MainWindow", "Copiar", 0));
        actionRecortar->setText(QApplication::translate("MainWindow", "Recortar", 0));
        actionColar->setText(QApplication::translate("MainWindow", "Colar", 0));
        actionDesfazer->setText(QApplication::translate("MainWindow", "Desfazer", 0));
        actionRefazer->setText(QApplication::translate("MainWindow", "Refazer", 0));
        actionCFB_Cursos->setText(QApplication::translate("MainWindow", "CFB Cursos", 0));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", 0));
        actionFonte->setText(QApplication::translate("MainWindow", "Fonte ", 0));
        actionCor->setText(QApplication::translate("MainWindow", "Cor", 0));
        actionCor_de_Fundo->setText(QApplication::translate("MainWindow", "Cor de Fundo", 0));
        actionImprimir->setText(QApplication::translate("MainWindow", "Imprimir", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", 0));
        menuFormatar->setTitle(QApplication::translate("MainWindow", "Formatar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
