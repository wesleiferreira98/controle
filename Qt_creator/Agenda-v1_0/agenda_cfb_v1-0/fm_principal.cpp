#include "fm_principal.h"
#include "ui_fm_principal.h"
#include "fm_pesquisa.h"


fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_contato_clicked()
{
    fm_contatos contatos;
    contatos.exec();
}

void fm_principal::on_btn_pesquisar_clicked()
{
    fm_pesquisa pesquisa;
    pesquisa.exec();
}
