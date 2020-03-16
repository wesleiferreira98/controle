#include "fm_gestaoestoque.h"
#include "ui_fm_gestaoestoque.h"
#include "funcoes_globais.h"


fm_gestaoEstoque::fm_gestaoEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoEstoque)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this, "ERRO","Banco de dados não está aberto");
    }else{
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){
            QMessageBox::warning(this,"ERRO"," Erro ao abrir os produtos. ");


        }else{

        }
    }
    ui->tw_ge_produtos->setColumnCount(2);
}

fm_gestaoEstoque::~fm_gestaoEstoque()
{
    delete ui;
    con.fechar();
}

void fm_gestaoEstoque::on_btn_novop_clicked()
{
    ui->txt_codigoproduto->clear();
    ui->txt_descrisaop->clear();
    ui->txt_compra->clear();
    ui->txt_fornecedo->clear();
    ui->txt_venda->clear();
    ui->txt_estoque->clear();
    ui->txt_codigoproduto->setFocus();
}

void fm_gestaoEstoque::on_btn_gravarp_clicked()
{

      QString axu;
      QString codigo= ui->txt_codigoproduto->text();
      QString des= ui->txt_descrisaop->text();

      QString fore=ui->txt_fornecedo->text();

      axu=ui->txt_compra->text();
      std::replace(axu.begin(),axu.end(), ',','.');
      QString com= axu;

      axu=ui->txt_venda->text();
      std::replace(axu.begin(),axu.end(), ',','.');
      QString venda=axu;
      QString estoque= ui->txt_estoque->text();


      QSqlQuery query;
      query.prepare("inseert into tb_produtos (id_produto,produto,id_fornecedor,qtde_estoque,valor_compra,valor_venda) value"
                      "("+QString::number(codigo.toInt())+","+QString::number(fore.toInt())+""+QString::number(estoque.toInt())+","+QString::number(com.toFloat())+","+QString::number(venda.toFloat())+")");
      if(!query.exec()){
            QMessageBox::warning(this,"ERRO","Não foi possivel adicionar novos produtos");

      }else{
          QMessageBox::information(this,"Atenção","Produto gravdo com sucesso");

          ui->txt_codigoproduto->clear();
          ui->txt_descrisaop->clear();
          ui->txt_compra->clear();
          ui->txt_fornecedo->clear();
          ui->txt_venda->clear();
          ui->txt_estoque->clear();
          ui->txt_codigoproduto->setFocus();

        }

        }



void fm_gestaoEstoque::on_tabWidget_currentChanged(int index)
{
    if(index==1){
       funcoes_globais::removerLinhas(ui->tw_ge_produtos);
        int cont=0;
        //remover os produtos do TW
        QSqlQuery query;
        query.prepare("select id_produto,produto  from tb_produto order by produto ");
        if(query.exec()){
            while(query.next()){
                ui->tw_ge_produtos->insertRow(cont);
                ui->tw_ge_produtos->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_ge_produtos->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_ge_produtos->setRowHeight(cont,20);
                cont++;

            }
            ui->tw_ge_produtos->setColumnWidth(0,150);
            ui->tw_ge_produtos->setColumnWidth(1,230);
            QStringList cabecalho={"Código ", "Produto"};
            ui->tw_ge_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_ge_produtos->setStyleSheet("QTableView {selection-backgrond-color:red}");
            ui->tw_ge_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tw_ge_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_ge_produtos->verticalHeader()->setVisible(false);



        }else{
            QMessageBox::warning(this, "Erro", "Não foi possivel listar os produtos. ");
        }

    }
}

void fm_gestaoEstoque::on_tw_ge_produtos_itemSelectionChanged()
{
    int linha=ui->tw_ge_produtos->currentRow();
    int id=ui->tw_ge_produtos->item(linha,0)->text().toInt();
    QSqlQuery query;
    query.prepare("select  * from tb_produtos where id_produtos="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_ge_codigo->setText(query.value(0).toString());
        ui->txt_ge_produto->setText(query.value(1).toString());
        ui->txt_ge_fornecedor->setText(query.value(2).toString());
        ui->txt_ge_quantidade->setText(query.value(3).toString());
        ui->txt_ge_compra->setText(query.value(4).toString());
        ui->txt_ge_venda->setText(query.value(5).toString());
    }
}

void fm_gestaoEstoque::on_btn_ge_gravar_clicked()
{
    if(ui->txt_ge_codigo->text()==""){
        QMessageBox::warning(this,"ERRO", "Selecione um produto para modifica-lo. ");

    }else{
        int linha=ui->tw_ge_produtos->currentRow();
        int id=ui->tw_ge_produtos->item(linha,0)->text().toInt();
        QString aux;
        QString prod= ui->txt_ge_produto->text();
        QString  forn=ui->txt_ge_fornecedor->text();
        QString qtde= ui->txt_ge_quantidade->text();

        aux=ui->txt_ge_compra->text();
        std::replace(aux.begin(),aux.end(), ',', '.');
        QString valcompra=aux;
        aux=ui->txt_ge_venda->text();
        std::replace(aux.begin(),aux.end(), ',', '.');
        QString valvenda=aux;
        QSqlQuery query;
        //query.prepare("update tb_produtos set id_produtos="+QString::number(id)+", produto='"+prod+"', id-fornecedor='"+QString::number(forn.toInt())+"',qtde_estoque'"+QString::number(qtde.toInt()+"',valor="+QString::number(valcompra.toDouble()+", valor_venda="+QString::number(valvenda.toDouble()+" wheremid_produto="+QString::number(id)+);
        if(query.exec()){
            int linha=ui->tw_ge_produtos->currentRow();
            ui->tw_ge_produtos->item(linha,0)->setText(ui->txt_ge_codigo->text());
            ui->tw_ge_produtos->item(linha,0)->setText(prod);
            QMessageBox::information(this,"Atualizado","Foi atualizado com sucesso");
         }else{
             QMessageBox::warning(this,"ERRO", "Ao atualiza produto.");
         }

    }
}

void fm_gestaoEstoque::on_btn_ge_excluir_clicked()
{
     QMessageBox::StandardButton opc= QMessageBox::question(this,"Exclusão","Deseja excluir o produto ? ",QMessageBox::Yes|QMessageBox::No);

    if(opc==QMessageBox::Yes){
        int linha=ui->tw_ge_produtos->currentRow();
        int id=ui->tw_ge_produtos->item(linha,0)->text().toInt();
        QSqlQuery query;
        query.prepare("delete from tb_produtos where id_produto="+QString::number(id));
        if(query.exec()){
            ui->tw_ge_produtos->removeRow(linha);
            QMessageBox::information(this,"DELETADO","Produto deletado com sucesso. ");
        }else{
            QMessageBox::warning(this,"ERRO","Não foi possível apagar o produto selecionado. ");
        }
    }




}


void fm_gestaoEstoque::on_btn_pesquisar_clicked()
{
    QString busca;
    funcoes_globais::removerLinhas(ui->tw_ge_produtos);
    if(ui->txt_ge_filtrar->text()==""){
        if(ui->rb_ge_codigo->isChecked()){
            busca="select id_produtos,produto from tb_produtos order by id_produto";

        }else{
            busca="select id_produtos,produto from tb_produtos order by produto";

        }

    }else{
        if(ui->rb_ge_codigo->isChecked()){
            busca="select id_produtos,produto from tb_produtos where  id_produto="+ui->txt_ge_filtrar->text()+"order by id_produto";

        }else{
           busca="select id_produtos,produto from tb_produtos where  id_produto like '%"+ui->txt_ge_filtrar->text()+"%'+ order by id_produto";

        }


    }
    int cont=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec()){
        while(query.next()){
            ui->tw_ge_produtos->insertRow(cont);
            ui->tw_ge_produtos->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_ge_produtos->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_ge_produtos->setRowHeight(cont,20);
            cont++;


        }
    }else{
        QMessageBox::warning(this,"ERRO","O produto desejado não está na lista de banco de dados. ");
    }
    ui->txt_ge_filtrar->clear();
    ui->txt_ge_filtrar->setFocus();
}
