#ifndef FM_PESQUISA_H
#define FM_PESQUISA_H

#include <QDialog>

namespace Ui {
class fm_pesquisa;
}

class fm_pesquisa : public QDialog
{
    Q_OBJECT

public:
    explicit fm_pesquisa(QWidget *parent = 0);
    ~fm_pesquisa();

private slots:
    void on_btn_excluir_clicked();

    void on_btn_editar_clicked();

private:
    Ui::fm_pesquisa *ui;
};

#endif // FM_PESQUISA_H
