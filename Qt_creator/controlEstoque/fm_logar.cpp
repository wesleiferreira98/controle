#include "fm_logar.h"
#include "ui_fm_logar.h"
#include"variaveis_globais.h"
#include<QDebug>


fm_logar::fm_logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_logar)
{
    ui->setupUi(this);
    logado=false;

}

fm_logar::~fm_logar()
{
    delete ui;
}

void fm_logar::on_btn_logar_clicked()
{
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao acessar o banco de dados :(");

    }else{
        QString username, senha;
        username=ui->txt_username->text();
        senha=ui->txt_senha->text();
        QSqlQuery query;
        query.prepare("select * from tb_colaboradores where username='"+username+"'and senha='"+senha+"'");
        if(query.exec()){
            query.first();
            if(query.value(2).toString()!=""){
                variaveis_globais::logado=true;
                nome=query.value(2).toString();
                acesso=query.value(6).toString();

                con.fechar();
                close();
            }else{
                QMessageBox::warning(this,"ERRO","Nome de usuario não foi encontrado :(");
                qDebug() << query.lastError();
            }
        }else{
            QMessageBox::warning(this,"ERRO","Falha no login.");

        }
    }

    con.fechar();
}

void fm_logar::on_btn_cancelar_clicked()
{
    variaveis_globais::logado=false;
    close();
}
bool fm_logar::getLogado(){
    return variaveis_globais::logado;
}
QString fm_logar::getNome(){
    return nome;
}
QString fm_logar::getAcesso(){
    return acesso;
}

