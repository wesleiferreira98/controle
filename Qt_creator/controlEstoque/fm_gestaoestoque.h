#ifndef FM_GESTAOESTOQUE_H
#define FM_GESTAOESTOQUE_H
#include "conexao.h"
#include <QMessageBox>
#include <QtSql>
#include <QTableWidget>
#include <QDialog>

namespace Ui {
class fm_gestaoEstoque;
}

class fm_gestaoEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoEstoque(QWidget *parent = 0);
    ~fm_gestaoEstoque();
    Conexao con;


private slots:
    void on_btn_novop_clicked();

    void on_btn_gravarp_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tw_ge_produtos_itemSelectionChanged();

    void on_btn_ge_gravar_clicked();

    void on_btn_ge_excluir_clicked();

    void on_btn_pesquisar_clicked();

private:
    Ui::fm_gestaoEstoque *ui;
};

#endif // FM_GESTAOESTOQUE_H
