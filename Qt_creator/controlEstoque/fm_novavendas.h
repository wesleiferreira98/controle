#ifndef FM_NOVAVENDAS_H
#define FM_NOVAVENDAS_H

#include <QDialog>
#include "conexao.h"
#include <QTableWidget>

namespace Ui {
class fm_novavendas;
}

class fm_novavendas : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novavendas(QWidget *parent = 0);
    ~fm_novavendas();
    Conexao Con;
    int contlinhas;
    void resetaCampos();
    double calulaTotal(QTableWidget *tw, int coluna);
    static QString g_idprod,g_prod,g_qtde,g_valtotal,q_valtotal;
    static bool alterou;
    void removerlinhas(QTableWidget *tw);

private slots:
    void on_txt_cod_produto_returnPressed();

    void on_btn_exclirprod_clicked();

    void on_btn_editarprod_clicked();

    void on_btn_finalizarvenda_clicked();

private:
    Ui::fm_novavendas *ui;
};

#endif // FM_NOVAVENDAS_H
