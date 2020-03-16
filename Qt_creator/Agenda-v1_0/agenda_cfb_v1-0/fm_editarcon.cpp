#include "fm_editarcon.h"
#include "ui_fm_editarcon.h"
#include <QtSql>
#include <QMessageBox>
int id ;

fm_editarcon::fm_editarcon(QWidget *parent, int id_contatos) :
    QDialog(parent),
    ui(new Ui::fm_editarcon)
{
    ui->setupUi(this);
    id=id_contatos;
     QSqlQuery query;
     query.prepare("select * from tb_contatos where id_contato="+QString::number(id_contatos));
     if(query.exec()){
         query.first();
         ui->txt_nome->setText(query.value(1).toString());
         ui->txt_telefone->setText(query.value(2).toString());
         ui->txt_email->setText(query.value(3).toString());

     }else{
         QMessageBox::warning(this,"ERRO","Os contatos não foram abertos :(");
     }
}

fm_editarcon::~fm_editarcon()
{
    delete ui;
}

void fm_editarcon::on_btn_gravar_clicked()
{
    QString nome= ui->txt_nome->text();
    QString telefone= ui->txt_telefone->text();
    QString email= ui->txt_email->text();

     QSqlQuery query;
     query.prepare("update tb_contatos set nome_contato='"+nome+"', telefone_contato'"+telefone+"', email_contato'"+email+"'where id_contato"+QString::number(id));
     if(query.exec()){
         this->close();
     }else{
         QMessageBox::warning(this,"ERRO","Erro ao atualizar contato :(");

     }
}
