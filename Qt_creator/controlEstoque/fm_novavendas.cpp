#include "fm_novavendas.h"
#include "ui_fm_novavendas.h"
#include "fm_editarproven.h"
#include <QMessageBox>
#include "fm_principal.h"
#include "variaveis_globais.h"
QString fm_novavendas:: g_prod;
QString fm_novavendas:: g_idprod;
QString fm_novavendas:: g_qtde;
QString fm_novavendas:: g_valtotal;
QString fm_novavendas:: q_valtotal;
bool fm_novavendas:: alterou;

fm_novavendas::fm_novavendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_novavendas)
{
    ui->setupUi(this);
    if(!Con.aberto()){
     if(!Con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");
     }
    }
    ui->tw_listaProdutos->setColumnCount(5);
    ui->tw_listaProdutos->setColumnWidth(0,100);
    ui->tw_listaProdutos->setColumnWidth(1,200);
    ui->tw_listaProdutos->setColumnWidth(2,100);
    ui->tw_listaProdutos->setColumnWidth(3,100);
    ui->tw_listaProdutos->setColumnWidth(4,100);
    QStringList cabecalhos={"Código","Produto","Valor Un.","Quantidade","Total"};
    ui->tw_listaProdutos->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_listaProdutos->setStyleSheet("QTableView{selection-backgrond-color:red;}");
    ui->tw_listaProdutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_listaProdutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaProdutos->verticalHeader()->setVisible(false);
    ui->txt_cod_produto->setFocus();
    contlinhas=0;
}

fm_novavendas::~fm_novavendas()
{
    delete ui;
}

void fm_novavendas::on_txt_cod_produto_returnPressed()
{
    QSqlQuery query;
    QString id=ui->txt_cod_produto->text();
    double valtot;
    query.prepare("select id_produto,produto,valor_venda from tb_produtos where id_produto="+id);
    if(query.exec()){
        query.first();
        if(query.value(0).toString()!=" "){
            ui->tw_listaProdutos->insertRow(contlinhas);
            ui->tw_listaProdutos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaProdutos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaProdutos->setItem(contlinhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaProdutos->setItem(contlinhas,3,new QTableWidgetItem(ui->txt_qtde->text()));
            valtot=ui->txt_qtde->text().toDouble()*query.value(2).toDouble();
            ui->tw_listaProdutos->setItem(contlinhas,4,new QTableWidgetItem(QString::number(valtot)));
            ui->tw_listaProdutos->setRowHeight(contlinhas,20);
            contlinhas++;
            ui->lb_totalVenda->setText("R$ "+QString::number(calulaTotal(ui->tw_listaProdutos,4)));
            ui->txt_cod_produto->clear();
         }else{
             QMessageBox::warning(this,"ERRO","Produto não encontrado ");

         }
        resetaCampos();



    }else{
        QMessageBox::warning(this,"ERRO","Erro ao inserir novo produto. ");
    }

}
void fm_novavendas::resetaCampos(){
    ui->txt_cod_produto->clear();
    ui->txt_qtde->setText("1");
    ui->txt_cod_produto->setFocus();


}

void fm_novavendas::removerlinhas(QTableWidget *tw){
    while(tw->rowCount()>0){
        tw->removeRow(0);
    }


}
double fm_novavendas::calulaTotal(QTableWidget *tw, int colunas){
    int totallinhas;
    double total;
    totallinhas=tw->rowCount();
    for(int i=0;i<totallinhas;i++){
        total+=tw->item(i,colunas)->text().toDouble();

    }
    return total;
}

void fm_novavendas::on_btn_exclirprod_clicked()
{
    if(ui->tw_listaProdutos->currentColumn()==-1){
        QMessageBox::warning(this,"ERRO","Selecione um produto para excluir.");


    }else{
        QMessageBox::StandardButton opc= QMessageBox::question(this,"Exclusão ?","Deseja excluir o produto ? ",QMessageBox::Yes|QMessageBox::No);
        if(opc==QMessageBox::Yes){
            ui->tw_listaProdutos->removeRow(ui->tw_listaProdutos->currentRow());
            ui->lb_totalVenda->setText("R$ "+QString::number(calulaTotal(ui->tw_listaProdutos,4)));
            contlinhas--;
        }

    }
}

void fm_novavendas::on_btn_editarprod_clicked()
{
   if(ui->tw_listaProdutos->currentColumn()==!-1){
    int linha= ui->tw_listaProdutos->currentRow();

    g_idprod=ui->tw_listaProdutos->item(linha,0)->text();
    g_prod=ui->tw_listaProdutos->item(linha,1)->text();
    g_valtotal=ui->tw_listaProdutos->item(linha,2)->text();
    g_qtde=ui->tw_listaProdutos->item(linha,3)->text();
    fm_editarproven editar;
    editar.exec();
    if(alterou){
        ui->tw_listaProdutos->item(linha,2)->setText(g_valtotal);
        ui->tw_listaProdutos->item(linha,3)->setText(g_qtde);
        ui->tw_listaProdutos->item(linha,4)->setText(q_valtotal);
        ui->lb_totalVenda->setText("R$ "+QString::number(calulaTotal(ui->tw_listaProdutos,4)));

    }
   }
}

void fm_novavendas::on_btn_finalizarvenda_clicked()
{
    if(ui->tw_listaProdutos->rowCount()>0){
        int id_venda;
        QString fvenda;
        double totalvenda;
        totalvenda=calulaTotal(ui->tw_listaProdutos,4);
        QString data=QDate::currentDate().toString("dd/MM/yyyy");
        QString hora=QTime::currentTime().toString("hh:mm:ss");
        QSqlQuery query;
        query.prepare("insert int tb_vendas(data-venda,hora_venda,id_colaborador,valor_total,id_tipo-pagamento) values('"+data+"','"+hora+"','"+QString::number(variaveis_globais::id_colab)+"','"+QString::number(totalvenda)+"',1)  ");
        if(!query.exec()){
             QMessageBox::warning(this,"ERRO","Erro ao registrar nova venda.");
        }else{
            query.prepare("select id_venda form tb_vendas order by id_venda desc limit 1");
            query.exec();
            query.first();
            id_venda=query.value(0).toInt();
            fvenda="ID Venda: "+QString::number(id_venda)+"\nValor total: R$"+QString::number(totalvenda);
            int totalLinhas= ui->tw_listaProdutos->rowCount();
            int linha=0;
            while(linha<totalLinhas){
                QString prod=ui->tw_listaProdutos->item(linha,1)->text();
                QString qtde=ui->tw_listaProdutos->item(linha,3)->text();
                QString valun=ui->tw_listaProdutos->item(linha,2)->text();
                QString valtot=ui->tw_listaProdutos->item(linha,4)->text();
                query.prepare("insert into tb_produtosVendas (id_venda,produto,qtde,valor_unitario,valor_total) values('"+QString::number(id_venda)+"','"+prod+"','"+qtde+"','"+valun+"','"+valtot+"')");
                query.exec();
                linha++;

            }
            QMessageBox::information(this,"Venda Concluida",fvenda);
            resetaCampos();
            removerlinhas(ui->tw_listaProdutos);
            ui->lb_totalVenda->setText("R$ 0.00");


        }
    }else{
        QMessageBox::warning(this,"ERRO","Não existem produtos nessa venda\nPrimeiro adicione um produto.");
    }
}
