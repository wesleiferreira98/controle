/********************************************************************************
** Form generated from reading UI file 'fm_editarproven.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARPROVEN_H
#define UI_FM_EDITARPROVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_fm_editarproven
{
public:
    QSplitter *splitter_6;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *txt_editapro;
    QSplitter *splitter_5;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *txt_editapreco;
    QSplitter *splitter_3;
    QLabel *label_3;
    QLineEdit *txt_editaqtd;
    QSplitter *splitter_4;
    QPushButton *btn_confirmared;
    QPushButton *btn_cancelaed;

    void setupUi(QDialog *fm_editarproven)
    {
        if (fm_editarproven->objectName().isEmpty())
            fm_editarproven->setObjectName(QString::fromUtf8("fm_editarproven"));
        fm_editarproven->resize(398, 197);
        splitter_6 = new QSplitter(fm_editarproven);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setGeometry(QRect(20, 30, 361, 151));
        splitter_6->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_6);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        txt_editapro = new QLineEdit(splitter);
        txt_editapro->setObjectName(QString::fromUtf8("txt_editapro"));
        splitter->addWidget(txt_editapro);
        splitter_6->addWidget(splitter);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        txt_editapreco = new QLineEdit(splitter_2);
        txt_editapreco->setObjectName(QString::fromUtf8("txt_editapreco"));
        splitter_2->addWidget(txt_editapreco);
        splitter_5->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_5);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_3->addWidget(label_3);
        txt_editaqtd = new QLineEdit(splitter_3);
        txt_editaqtd->setObjectName(QString::fromUtf8("txt_editaqtd"));
        splitter_3->addWidget(txt_editaqtd);
        splitter_5->addWidget(splitter_3);
        splitter_6->addWidget(splitter_5);
        splitter_4 = new QSplitter(splitter_6);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        btn_confirmared = new QPushButton(splitter_4);
        btn_confirmared->setObjectName(QString::fromUtf8("btn_confirmared"));
        splitter_4->addWidget(btn_confirmared);
        btn_cancelaed = new QPushButton(splitter_4);
        btn_cancelaed->setObjectName(QString::fromUtf8("btn_cancelaed"));
        splitter_4->addWidget(btn_cancelaed);
        splitter_6->addWidget(splitter_4);

        retranslateUi(fm_editarproven);

        QMetaObject::connectSlotsByName(fm_editarproven);
    } // setupUi

    void retranslateUi(QDialog *fm_editarproven)
    {
        fm_editarproven->setWindowTitle(QCoreApplication::translate("fm_editarproven", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fm_editarproven", "Produto ", nullptr));
        label_2->setText(QCoreApplication::translate("fm_editarproven", "Pre\303\247o Unit\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("fm_editarproven", "Quantidade", nullptr));
        btn_confirmared->setText(QCoreApplication::translate("fm_editarproven", "Confirmar", nullptr));
        btn_cancelaed->setText(QCoreApplication::translate("fm_editarproven", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_editarproven: public Ui_fm_editarproven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARPROVEN_H
