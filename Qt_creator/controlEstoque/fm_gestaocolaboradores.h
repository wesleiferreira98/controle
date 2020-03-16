#ifndef FM_GESTAOCOLABORADORES_H
#define FM_GESTAOCOLABORADORES_H

#include <QDialog>
#include "conexao.h"
#include<QMessageBox>

namespace Ui {
class fm_gestaoColaboradores;
}

class fm_gestaoColaboradores : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoColaboradores(QWidget *parent = 0);
    ~fm_gestaoColaboradores();
    Conexao con;

private slots:
    void on_btn_gravar_novocolab_clicked();

    void on_btn_can_novo_novocolab_clicked();

    void on_btn_cancalar_novocolab_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_lv_colab_itemSelectionChanged();

    void on_btn_flitro_colab_clicked();

    void on_btn_editar_colab_clicked();

    void on_btn_excluir_colab_clicked();

private:
    Ui::fm_gestaoColaboradores *ui;
};

#endif // FM_GESTAOCOLABORADORES_H
