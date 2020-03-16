#include "fm_editarproven.h"
#include "ui_fm_editarproven.h"
#include "fm_novavendas.h"

fm_editarproven::fm_editarproven(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_editarproven)
{
    ui->setupUi(this);
    ui->txt_editapro->setText(fm_novavendas::g_prod);
    ui->txt_editaqtd->setText(fm_novavendas::g_qtde);
    ui->txt_editapreco->setText(fm_novavendas::g_valtotal);
}

fm_editarproven::~fm_editarproven()
{
    delete ui;
}

void fm_editarproven::on_btn_confirmared_clicked()
{
    QString aux;
    fm_novavendas::alterou=true;
    fm_novavendas::g_qtde=ui->txt_editaqtd->text();
    aux=ui->txt_editapreco->text();
    std::replace(aux.begin(),aux.end(),',','.');
    fm_novavendas::g_valtotal=aux;
    fm_novavendas::q_valtotal=QString::number(ui->txt_editaqtd->text().toDouble()*aux.toDouble());
    close();
}

void fm_editarproven::on_btn_cancelaed_clicked()
{
    fm_novavendas::alterou=false;
    close();
}
