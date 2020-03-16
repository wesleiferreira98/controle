#include "fm_principal.h"
#include "ui_fm_principal.h"
#include"fm_logar.h"
#include "fm_novavendas.h"
#include "fm_gestaoestoque.h"
#include "fm_gestavendas.h"
#include "fm_gestaocolaboradores.h"
int variaveis_globais::id_colab;
QString variaveis_globais::acesso_colab;
QString variaveis_globais::nome_colab;
QString variaveis_globais::username_colab;
bool variaveis_globais::logado;



fm_principal::fm_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
    variaveis_globais::logado=false;
    cadFechado.addFile("//home/weslei/Imagens/images.jpeg");
    cadAberto->addFile("//home/weslei/Imagens/índice.png");
    ui->btn_bloquear->setText("");
    ui->btn_bloquear->setIcon(cadFechado);
    ui->statusBar->addWidget(ui->btn_bloquear);
    ui->statusBar->addWidget(ui->lb_nome);


}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_bloquear_clicked()
{
    if(!variaveis_globais::logado){
        fm_logar logar;
        logar.exec();
        variaveis_globais::logado= logar.getLogado();
        variaveis_globais::nome_colab= logar.getNome();
        variaveis_globais::acesso_colab= logar.getAcesso();

        if(variaveis_globais::logado){
            ui->btn_bloquear->setIcon(*cadAberto);
            ui->lb_nome->setText(variaveis_globais::nome_colab);
        }
    }else{
        variaveis_globais::logado=false;
        ui->btn_bloquear->setIcon(cadFechado);
        ui->lb_nome->setText("Não existe colaboradores.");
    }
}

void fm_principal::on_pushButton_clicked()
{
    if(variaveis_globais::logado){
        fm_novavendas f_venda;
        f_venda.exec();

    }else{
        QMessageBox::information(this,"Atenção ","É necessário ter um colaborador logado para abrir esta  janela.");
    }

}

void fm_principal::on_actionEstoque_triggered()
{

    if(variaveis_globais::logado){

        fm_gestaoEstoque f_estoque;
        f_estoque.exec();


    }else{
        QMessageBox::information(this,"Atenção ","Acesso não permitido");
    }




}

void fm_principal::on_actionColaboradores_triggered()
{
    if(variaveis_globais::logado){

        fm_gestaoColaboradores f_estoque;
        f_estoque.exec();


    }else{
        QMessageBox::information(this,"Atenção ","Acesso não permitido");
    }
}

void fm_principal::on_actionVendas_triggered()
{
    if(variaveis_globais::logado and variaveis_globais::acesso_colab=="A"){

        fm_gestaVendas f_estoque;
        f_estoque.exec();


    }else{
        QMessageBox::information(this,"Atenção ","Acesso não permitido");
    }
}
