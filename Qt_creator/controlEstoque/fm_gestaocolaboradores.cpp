#include "fm_gestaocolaboradores.h"
#include "ui_fm_gestaocolaboradores.h"
#include <QSql>
#include<QMessageBox>
#include"funcoes_globais.h"


fm_gestaoColaboradores::fm_gestaoColaboradores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoColaboradores)
{
    ui->setupUi(this);
    if(!con.aberto()){
         if(!con.abrir()){
             QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");

         }
     }
    ui->cb_novo_acesso->addItem("A");
    ui->cb_novo_acesso->addItem("B");
    ui->txt_novo_colab->setFocus();

    ui->lv_colab->setColumnCount(2);
    ui->tabWidget->setCurrentIndex(0);

    ui->lv_colab->setColumnWidth(0,150);
    ui->lv_colab->setColumnWidth(1,230);
    QStringList cabecalho={"ID ", "Nome"};
    ui->lv_colab->setHorizontalHeaderLabels(cabecalho);
    ui->lv_colab->setStyleSheet("QTableView {selection-backgrond-color:red}");
    ui->lv_colab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->lv_colab->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->lv_colab->verticalHeader()->setVisible(false);


}


fm_gestaoColaboradores::~fm_gestaoColaboradores()
{
    delete ui;
}

void fm_gestaoColaboradores::on_btn_gravar_novocolab_clicked()
{
    if(ui->lv_colab->currentRow()==-1){
        QMessageBox::critical(this,"ERRO","Selecione um colaborador");
        return;
    }

    QString nome= ui->txt_novo_colab->text();
    QString username= ui->txt_username_novocolab->text();
    QString telefone= ui->txt_fone_novocolab->text();
    QString senha=ui->txt_senha_novo_colab->text();
    QString acesso=ui->cb_novo_acesso->currentText();
    QSqlQuery query;
    query.prepare("insert into tb_colaboradores (username,senha,nome_colab,telefone_colab) values"
                    "("+username+","+telefone+","+senha+","+nome+")");
    if(!query.exec()){
          QMessageBox::critical(this,"ERRO","Não foi possivel adicionar novos colaboradores");

    }else{
        QMessageBox::information(this,"Atenção","Colaborador gravado com sucesso");

        ui->txt_nome_colab->clear();
        ui->txt_fone_novocolab->clear();
        ui->txt_senha_novo_colab->clear();
        ui->txt_username_novocolab->clear();
        ui->txt_nome_colab->setFocus();


      }

}

void fm_gestaoColaboradores::on_btn_can_novo_novocolab_clicked()
{
    ui->txt_novo_colab->clear();
    ui->txt_fone_novocolab->clear();
    ui->txt_senha_novo_colab->clear();
    ui->txt_username_novocolab->clear();
    ui->cb_novo_acesso->setCurrentIndex(0);
    ui->txt_novo_colab->setFocus();
}

void fm_gestaoColaboradores::on_btn_cancalar_novocolab_clicked()
{

}

void fm_gestaoColaboradores::on_tabWidget_currentChanged(int index)
{
    if(index==1){
       funcoes_globais::removerLinhas(ui->lv_colab);
        int cont=0;
        //remover os produtos do TW
        QSqlQuery query;
        query.prepare("select id,nome_colab  from tb_colaboradores order by id ");
        if(query.exec()){
            while(query.next()){
                ui->lv_colab->insertRow(cont);
                ui->lv_colab->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
                ui->lv_colab->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
                ui->lv_colab->setRowHeight(cont,20);
                cont++;

            }
            ui->lv_colab->setColumnWidth(0,150);
            ui->lv_colab->setColumnWidth(1,230);
            QStringList cabecalho={"Código ", "Produto"};
            ui->lv_colab->setHorizontalHeaderLabels(cabecalho);
            ui->lv_colab->setStyleSheet("QTableView {selection-backgrond-color:red}");
            ui->lv_colab->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->lv_colab->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->lv_colab->verticalHeader()->setVisible(false);



        }else{
            QMessageBox::warning(this, "Erro", "Não foi possivel listar os usuarios. ");
        }

    }
}

void fm_gestaoColaboradores::on_lv_colab_itemSelectionChanged()
{
    int linha=ui->lv_colab->currentRow();
    int id=ui->lv_colab->item(linha,0)->text().toInt();
    QSqlQuery query;
    query.prepare("select  * from tb_colaboradores where id="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_username_novocolab->setText(query.value(1).toString());
        ui->txt_senha_novo_colab->setText(query.value(2).toString());
        ui->txt_novo_colab->setText(query.value(3).toString());
        ui->txt_username_novocolab->setText(query.value(4).toString());
        ui->txt_fone_novocolab->setText(query.value(5).toString());

    }
}

void fm_gestaoColaboradores::on_btn_flitro_colab_clicked()
{
    QString busca;
    funcoes_globais::removerLinhas(ui->lv_colab);
    if(ui->txt_filtro_colab->text()==""){
        if(ui->rb_idcolab->isChecked()){
            busca="select id,nome_colab from tb_colaboradores order by id";

        }else{
            busca="select id,nome_colab from tb_colaboradores order by nome_colab";

        }

    }else{
        if(ui->rb_idcolab->isChecked()){
            busca="select id,nome_colab from tb_colaboradores where  id="+ui->txt_filtro_colab->text()+"order by id";

        }else{
           busca="select id,nome_colab from tb_colaboradores where  id like '%"+ui->txt_filtro_colab->text()+"%'+ order by nome_colab";

        }


    }
    int cont=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec()){
        while(query.next()){
            ui->lv_colab->insertRow(cont);
            ui->lv_colab->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->lv_colab->setItem(cont,1,new QTableWidgetItem(query.value(3).toString()));
            ui->lv_colab->setRowHeight(cont,20);
            cont++;


        }
    }else{
        QMessageBox::warning(this,"ERRO","O produto desejado não está na lista de banco de dados. ");
    }
    ui->txt_filtro_colab->clear();
    ui->txt_filtro_colab->setFocus();
}

void fm_gestaoColaboradores::on_btn_editar_colab_clicked()
{

}

void fm_gestaoColaboradores::on_btn_excluir_colab_clicked()
{
    if(ui->lv_colab->currentRow()==-1){
        QMessageBox::critical(this,"ERRO","Selecione um colaborador");
        return;
    }else{
        QMessageBox::StandardButton opc= QMessageBox::question(this,"Exclusão","Deseja excluir o colaborador ? ",QMessageBox::Yes|QMessageBox::No);

       if(opc==QMessageBox::Yes){
           int linha=ui->lv_colab->currentRow();
           int id=ui->lv_colab->item(linha,0)->text().toInt();
           QSqlQuery query;
           query.prepare("delete from colaboradores where id="+QString::number(id));
           if(query.exec()){
               ui->lv_colab->removeRow(linha);
               QMessageBox::information(this,"DELETADO","Colaborador deletado com sucesso. ");
           }else{
               QMessageBox::warning(this,"ERRO","Não foi possível apagar o colaborador selecionado. ");
           }
       }

    }

}
