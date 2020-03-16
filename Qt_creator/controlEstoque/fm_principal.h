#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>
#include<QtSql>
#include<QMessageBox>
#include"variaveis_globais.h"

namespace Ui {
class fm_principal;
}

class fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit fm_principal(QWidget *parent = 0);
    ~fm_principal();
    QIcon cadFechado;
    QIcon *cadAberto=new QIcon();


private slots:
    void on_btn_bloquear_clicked();

    void on_pushButton_clicked();

    void on_actionEstoque_triggered();

    void on_actionColaboradores_triggered();

    void on_actionVendas_triggered();

private:
    Ui::fm_principal *ui;
};

#endif // FM_PRINCIPAL_H
