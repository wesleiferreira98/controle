#include "fm_pesquisa.h"
#include "ui_fm_pesquisa.h"
#include "fm_editarcon.h"
#include <QtSql>
#include<QMessageBox>

fm_pesquisa::fm_pesquisa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_pesquisa)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_contatos");
    if(query.exec()){
        int cont=0;
        ui->tw_lista->setColumnCount(4);// determina a quantidade de colunas
        while(query.next()){
            ui->tw_lista-> insertRow(cont);
            ui->tw_lista->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_lista->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_lista->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_lista->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_lista->setRowHeight(cont,20);
            cont++;
        }
        ui->tw_lista->setColumnWidth(0,30);
        ui->tw_lista->setColumnWidth(1,150);
        ui->tw_lista->setColumnWidth(3,230);
        QStringList cabecalhos={"ID","Nome","Telefone","E-mail"};
        ui->tw_lista->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_lista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_lista->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_lista->verticalHeader()->setVisible(false);
        ui->tw_lista->setStyleSheet("QTableView {selection-backgrond-color:blue}");


    }else{
        QMessageBox::warning(this,"ERRO","Erro ao pesquisar contato :(");
    }
}

fm_pesquisa::~fm_pesquisa()
{
    delete ui;
}

void fm_pesquisa::on_btn_excluir_clicked()
{
    int linha=ui->tw_lista->currentRow();
    int id=ui->tw_lista->item(linha,0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from tb_contatos where id_contato="+QString::number(id));
    if(query.exec()){
        QMessageBox::information(this,"Aviso","Contato excluido com sucesso:)");
        ui->tw_lista->removeRow(linha);
    }else{
        QMessageBox::warning(this,"ERRO","Não foi possivel excluir contato :(");
    }

}

void fm_pesquisa::on_btn_editar_clicked()
{
    int linha=ui->tw_lista->currentRow();
    int id=ui->tw_lista->item(linha,0)->text().toInt();
    fm_editarcon editacon(this,id);
    editacon.exec();
    QSqlQuery query;
    query.prepare("select * from tb_contatos where id_contato="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->tw_lista->setItem(linha,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_lista->setItem(linha,2,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_lista->setItem(linha,3,new QTableWidgetItem(query.value(1).toString()));
    }

}
