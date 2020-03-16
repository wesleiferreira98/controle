#ifndef FM_LOGAR_H
#define FM_LOGAR_H
#include "conexao.h"
#include <QDialog>
#include<QMessageBox>
#include"fm_principal.h"


namespace Ui {
class fm_logar;
}

class fm_logar : public QDialog
{
    Q_OBJECT

public:
    explicit fm_logar(QWidget *parent = 0);
    ~fm_logar();
    bool logado;
    Conexao con;
    QString nome,acesso;
    QString getNome();
    QString getAcesso();
    bool getLogado();

private slots:
    void on_btn_logar_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::fm_logar *ui;
};

#endif // FM_LOGAR_H
