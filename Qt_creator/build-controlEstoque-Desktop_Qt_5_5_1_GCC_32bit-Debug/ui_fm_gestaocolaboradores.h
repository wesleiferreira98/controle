/********************************************************************************
** Form generated from reading UI file 'fm_gestaocolaboradores.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOCOLABORADORES_H
#define UI_FM_GESTAOCOLABORADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoColaboradores
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_novocaborador;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *lbael2;
    QLineEdit *txt_novo_colab;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *txt_username_novocolab;
    QSplitter *splitter_3;
    QLabel *label_3;
    QLineEdit *txt_senha_novo_colab;
    QSplitter *splitter_4;
    QLabel *label_5;
    QLineEdit *txt_fone_novocolab;
    QSplitter *splitter_5;
    QLabel *label_4;
    QComboBox *cb_novo_acesso;
    QSplitter *splitter_7;
    QPushButton *btn_gravar_novocolab;
    QPushButton *btn_can_novo_novocolab;
    QPushButton *btn_cancalar_novocolab;
    QWidget *tab_2;
    QPushButton *btn_flitro_colab;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_idcolab;
    QRadioButton *rb_nome_colab;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLineEdit *txt_filtro_colab;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_6;
    QLabel *label;
    QLineEdit *txt_nome_colab;
    QSplitter *splitter_8;
    QLabel *label_6;
    QLineEdit *txt_user_cobal;
    QSplitter *splitter_9;
    QLabel *label_7;
    QLineEdit *txt_senha_colab;
    QSplitter *splitter_10;
    QLabel *label_8;
    QLineEdit *txt_colab_tel;
    QSplitter *splitter_11;
    QLabel *label_9;
    QComboBox *cb_acesso_colabt;
    QSplitter *splitter_12;
    QPushButton *btn_editar_colab;
    QPushButton *btn_excluir_colab;
    QPushButton *btn_vendas_colab;
    QTableWidget *lv_colab;

    void setupUi(QDialog *fm_gestaoColaboradores)
    {
        if (fm_gestaoColaboradores->objectName().isEmpty())
            fm_gestaoColaboradores->setObjectName(QStringLiteral("fm_gestaoColaboradores"));
        fm_gestaoColaboradores->resize(767, 427);
        horizontalLayout = new QHBoxLayout(fm_gestaoColaboradores);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(fm_gestaoColaboradores);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_novocaborador = new QWidget();
        tab_novocaborador->setObjectName(QStringLiteral("tab_novocaborador"));
        layoutWidget = new QWidget(tab_novocaborador);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 701, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        lbael2 = new QLabel(splitter);
        lbael2->setObjectName(QStringLiteral("lbael2"));
        splitter->addWidget(lbael2);
        txt_novo_colab = new QLineEdit(splitter);
        txt_novo_colab->setObjectName(QStringLiteral("txt_novo_colab"));
        splitter->addWidget(txt_novo_colab);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        txt_username_novocolab = new QLineEdit(splitter_2);
        txt_username_novocolab->setObjectName(QStringLiteral("txt_username_novocolab"));
        splitter_2->addWidget(txt_username_novocolab);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(layoutWidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_3->addWidget(label_3);
        txt_senha_novo_colab = new QLineEdit(splitter_3);
        txt_senha_novo_colab->setObjectName(QStringLiteral("txt_senha_novo_colab"));
        txt_senha_novo_colab->setEchoMode(QLineEdit::Password);
        splitter_3->addWidget(txt_senha_novo_colab);

        verticalLayout->addWidget(splitter_3);

        splitter_4 = new QSplitter(layoutWidget);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter_4->addWidget(label_5);
        txt_fone_novocolab = new QLineEdit(splitter_4);
        txt_fone_novocolab->setObjectName(QStringLiteral("txt_fone_novocolab"));
        splitter_4->addWidget(txt_fone_novocolab);

        verticalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(layoutWidget);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_5->addWidget(label_4);
        cb_novo_acesso = new QComboBox(splitter_5);
        cb_novo_acesso->setObjectName(QStringLiteral("cb_novo_acesso"));
        splitter_5->addWidget(cb_novo_acesso);

        verticalLayout->addWidget(splitter_5);

        splitter_7 = new QSplitter(tab_novocaborador);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(110, 290, 511, 28));
        splitter_7->setOrientation(Qt::Horizontal);
        btn_gravar_novocolab = new QPushButton(splitter_7);
        btn_gravar_novocolab->setObjectName(QStringLiteral("btn_gravar_novocolab"));
        splitter_7->addWidget(btn_gravar_novocolab);
        btn_can_novo_novocolab = new QPushButton(splitter_7);
        btn_can_novo_novocolab->setObjectName(QStringLiteral("btn_can_novo_novocolab"));
        splitter_7->addWidget(btn_can_novo_novocolab);
        btn_cancalar_novocolab = new QPushButton(splitter_7);
        btn_cancalar_novocolab->setObjectName(QStringLiteral("btn_cancalar_novocolab"));
        splitter_7->addWidget(btn_cancalar_novocolab);
        tabWidget->addTab(tab_novocaborador, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        btn_flitro_colab = new QPushButton(tab_2);
        btn_flitro_colab->setObjectName(QStringLiteral("btn_flitro_colab"));
        btn_flitro_colab->setGeometry(QRect(570, 80, 141, 28));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(440, 20, 106, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rb_idcolab = new QRadioButton(layoutWidget1);
        rb_idcolab->setObjectName(QStringLiteral("rb_idcolab"));
        rb_idcolab->setChecked(true);

        verticalLayout_2->addWidget(rb_idcolab);

        rb_nome_colab = new QRadioButton(layoutWidget1);
        rb_nome_colab->setObjectName(QStringLiteral("rb_nome_colab"));

        verticalLayout_2->addWidget(rb_nome_colab);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(570, 20, 137, 52));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        txt_filtro_colab = new QLineEdit(layoutWidget2);
        txt_filtro_colab->setObjectName(QStringLiteral("txt_filtro_colab"));

        verticalLayout_3->addWidget(txt_filtro_colab);

        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 411, 301));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter_6 = new QSplitter(layoutWidget3);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_6);
        label->setObjectName(QStringLiteral("label"));
        splitter_6->addWidget(label);
        txt_nome_colab = new QLineEdit(splitter_6);
        txt_nome_colab->setObjectName(QStringLiteral("txt_nome_colab"));
        splitter_6->addWidget(txt_nome_colab);

        verticalLayout_4->addWidget(splitter_6);

        splitter_8 = new QSplitter(layoutWidget3);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        splitter_8->addWidget(label_6);
        txt_user_cobal = new QLineEdit(splitter_8);
        txt_user_cobal->setObjectName(QStringLiteral("txt_user_cobal"));
        splitter_8->addWidget(txt_user_cobal);

        verticalLayout_4->addWidget(splitter_8);

        splitter_9 = new QSplitter(layoutWidget3);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_9);
        label_7->setObjectName(QStringLiteral("label_7"));
        splitter_9->addWidget(label_7);
        txt_senha_colab = new QLineEdit(splitter_9);
        txt_senha_colab->setObjectName(QStringLiteral("txt_senha_colab"));
        txt_senha_colab->setEchoMode(QLineEdit::Password);
        splitter_9->addWidget(txt_senha_colab);

        verticalLayout_4->addWidget(splitter_9);

        splitter_10 = new QSplitter(layoutWidget3);
        splitter_10->setObjectName(QStringLiteral("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_10);
        label_8->setObjectName(QStringLiteral("label_8"));
        splitter_10->addWidget(label_8);
        txt_colab_tel = new QLineEdit(splitter_10);
        txt_colab_tel->setObjectName(QStringLiteral("txt_colab_tel"));
        splitter_10->addWidget(txt_colab_tel);

        verticalLayout_4->addWidget(splitter_10);

        splitter_11 = new QSplitter(layoutWidget3);
        splitter_11->setObjectName(QStringLiteral("splitter_11"));
        splitter_11->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_11);
        label_9->setObjectName(QStringLiteral("label_9"));
        splitter_11->addWidget(label_9);
        cb_acesso_colabt = new QComboBox(splitter_11);
        cb_acesso_colabt->setObjectName(QStringLiteral("cb_acesso_colabt"));
        splitter_11->addWidget(cb_acesso_colabt);

        verticalLayout_4->addWidget(splitter_11);

        splitter_12 = new QSplitter(layoutWidget3);
        splitter_12->setObjectName(QStringLiteral("splitter_12"));
        splitter_12->setOrientation(Qt::Horizontal);
        btn_editar_colab = new QPushButton(splitter_12);
        btn_editar_colab->setObjectName(QStringLiteral("btn_editar_colab"));
        splitter_12->addWidget(btn_editar_colab);
        btn_excluir_colab = new QPushButton(splitter_12);
        btn_excluir_colab->setObjectName(QStringLiteral("btn_excluir_colab"));
        splitter_12->addWidget(btn_excluir_colab);
        btn_vendas_colab = new QPushButton(splitter_12);
        btn_vendas_colab->setObjectName(QStringLiteral("btn_vendas_colab"));
        splitter_12->addWidget(btn_vendas_colab);

        verticalLayout_4->addWidget(splitter_12);

        lv_colab = new QTableWidget(tab_2);
        lv_colab->setObjectName(QStringLiteral("lv_colab"));
        lv_colab->setGeometry(QRect(450, 140, 256, 192));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(fm_gestaoColaboradores);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fm_gestaoColaboradores);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoColaboradores)
    {
        fm_gestaoColaboradores->setWindowTitle(QApplication::translate("fm_gestaoColaboradores", "Dialog", 0));
        lbael2->setText(QApplication::translate("fm_gestaoColaboradores", "Nome:", 0));
        label_2->setText(QApplication::translate("fm_gestaoColaboradores", "Nome de usuario:", 0));
        label_3->setText(QApplication::translate("fm_gestaoColaboradores", "Senha:", 0));
        label_5->setText(QApplication::translate("fm_gestaoColaboradores", "<html><head/><body><p>Telefone:</p></body></html>", 0));
        label_4->setText(QApplication::translate("fm_gestaoColaboradores", "<html><head/><body><p>Tipo de acesso:</p></body></html>", 0));
        btn_gravar_novocolab->setText(QApplication::translate("fm_gestaoColaboradores", "Gravar", 0));
        btn_can_novo_novocolab->setText(QApplication::translate("fm_gestaoColaboradores", "Novo", 0));
        btn_cancalar_novocolab->setText(QApplication::translate("fm_gestaoColaboradores", "Cancelar", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_novocaborador), QApplication::translate("fm_gestaoColaboradores", "Novo Colaborador", 0));
        btn_flitro_colab->setText(QApplication::translate("fm_gestaoColaboradores", "Filtrar", 0));
        rb_idcolab->setText(QApplication::translate("fm_gestaoColaboradores", "Id Cobal.", 0));
        rb_nome_colab->setText(QApplication::translate("fm_gestaoColaboradores", "Nome", 0));
        label_10->setText(QApplication::translate("fm_gestaoColaboradores", "Filtro", 0));
        label->setText(QApplication::translate("fm_gestaoColaboradores", "Nome", 0));
        label_6->setText(QApplication::translate("fm_gestaoColaboradores", "Username", 0));
        label_7->setText(QApplication::translate("fm_gestaoColaboradores", "Senha", 0));
        label_8->setText(QApplication::translate("fm_gestaoColaboradores", "Telefone", 0));
        label_9->setText(QApplication::translate("fm_gestaoColaboradores", "Acesso", 0));
        btn_editar_colab->setText(QApplication::translate("fm_gestaoColaboradores", "Editar", 0));
        btn_excluir_colab->setText(QApplication::translate("fm_gestaoColaboradores", "Excluir", 0));
        btn_vendas_colab->setText(QApplication::translate("fm_gestaoColaboradores", "Ver Vendas", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("fm_gestaoColaboradores", "Gest\303\243o de Colaboradores", 0));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoColaboradores: public Ui_fm_gestaoColaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOCOLABORADORES_H
