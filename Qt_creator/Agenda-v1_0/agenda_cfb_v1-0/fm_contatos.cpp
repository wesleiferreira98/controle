#include "fm_contatos.h"
#include "ui_fm_contatos.h"

fm_contatos::fm_contatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_contatos)
{
    ui->setupUi(this);
}

fm_contatos::~fm_contatos()
{
    delete ui;
}

void fm_contatos::on_btn_gravar_clicked()
{
    QString nome= ui->txt_nome->text();
    QString telefone= ui->txt_telefone->text();
    QString email= ui->txt_email->text();

    QSqlQuery query;
    query.prepare("insert int tb_contatos (nome_contatos,telefone_contato,email_contato) values"
                  "('"+nome+"'"+telefone+"'"+email+"')");
   if(query.exec()){
       QMessageBox::information(this,"Informação", "Registro gravado com sucesso:)");
       ui->txt_nome->clear();
       ui->txt_telefone->clear();
       ui->txt_email->clear();
       ui->txt_nome->setFocus();

   }else{
       qDebug() <<"Erro ao inserir registro";

   }
}
