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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QLabel *label_2;
    QLineEdit *txt_endereco;
    QLabel *label_5;
    QLineEdit *txt_qtdfilmes;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *txt_titulofilme;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_genero;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_gravar;
    QPushButton *btn_ler;
    QPushButton *btn_limpar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(761, 413);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QListWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(460, 30, 291, 251));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 10, 351, 301));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        formLayout->setWidget(1, QFormLayout::LabelRole, txt_nome);


        verticalLayout->addLayout(formLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        txt_endereco = new QLineEdit(widget);
        txt_endereco->setObjectName(QStringLiteral("txt_endereco"));

        verticalLayout->addWidget(txt_endereco);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        txt_qtdfilmes = new QLineEdit(widget);
        txt_qtdfilmes->setObjectName(QStringLiteral("txt_qtdfilmes"));

        verticalLayout->addWidget(txt_qtdfilmes);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_4->addLayout(verticalLayout_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        txt_titulofilme = new QLineEdit(widget);
        txt_titulofilme->setObjectName(QStringLiteral("txt_titulofilme"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, txt_titulofilme);


        verticalLayout_4->addLayout(formLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        txt_genero = new QLineEdit(widget);
        txt_genero->setObjectName(QStringLiteral("txt_genero"));

        verticalLayout_3->addWidget(txt_genero);


        verticalLayout_4->addLayout(verticalLayout_3);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(170, 320, 391, 31));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_gravar = new QPushButton(widget1);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout->addWidget(btn_gravar);

        btn_ler = new QPushButton(widget1);
        btn_ler->setObjectName(QStringLiteral("btn_ler"));

        horizontalLayout->addWidget(btn_ler);

        btn_limpar = new QPushButton(widget1);
        btn_limpar->setObjectName(QStringLiteral("btn_limpar"));

        horizontalLayout->addWidget(btn_limpar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Nome:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Endere\303\247o: ", 0));
        label_5->setText(QApplication::translate("MainWindow", "Qtd de Filmes:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Titulo do filme:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Genero:", 0));
        btn_gravar->setText(QApplication::translate("MainWindow", "Gravar", 0));
        btn_ler->setText(QApplication::translate("MainWindow", "Ler", 0));
        btn_limpar->setText(QApplication::translate("MainWindow", "Limpar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
