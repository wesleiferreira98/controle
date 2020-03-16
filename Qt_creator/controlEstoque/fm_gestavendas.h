#ifndef FM_GESTAVENDAS_H
#define FM_GESTAVENDAS_H

#include <QDialog>
#include"funcoes_globais.h"
#include "conexao.h"



namespace Ui {
class fm_gestaVendas;
}

class fm_gestaVendas : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaVendas(QWidget *parent = 0);
    ~fm_gestaVendas();
    Conexao con;

private slots:
    void on_tw_listavenda_itemSelectionChanged();

    void on_btn_filtar_clicked();

    void on_btn_geraPDF_clicked();

private:
    Ui::fm_gestaVendas *ui;
};

#endif // FM_GESTAVENDAS_H
