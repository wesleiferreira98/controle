#include "fm_gestavendas.h"
#include "ui_fm_gestavendas.h"
#include<QtSql>
#include<QMessageBox>
#include<QDebug>
#include<QPrinter>
#include<QPainter>
#include<QDir>
#include<QDesktopServices>


fm_gestaVendas::fm_gestaVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaVendas)
{
    ui->setupUi(this);
    ui->tw_listaProdutoVenda->horizontalHeader()->setVisible(true);
    ui->tw_listaProdutoVenda->setColumnCount(5);
    QStringList cabe={"Mov.","Produto","Qtde","Valor Unitário","Valor Total"};
    //ui->tw_listaProdutoVenda->setHorizontalHeader(cabe);
    ui->tw_listaProdutoVenda->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listaProdutoVenda->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listaProdutoVenda->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaProdutoVenda->setEditTriggers(QAbstractItemView::NoEditTriggers);


    ui->tw_listavenda->horizontalHeader()->setVisible(true);
    ui->tw_listavenda->setColumnCount(6);
    QStringList cab={"ID","Data","Hora","Colab","Valor Total","Tipo de pagamento"};
    //ui->tw_listavenda->setHorizontalHeader(cab);
    ui->tw_listavenda->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listavenda->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listavenda->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listavenda->setEditTriggers(QAbstractItemView::NoEditTriggers);

    con.abrir();
    QSqlQuery query;
    query.prepare("select * from tb_vendas");
    if(!query.exec()){
        QMessageBox::information(this,"ERRO","Falha ao acessar o banco de dados");

    }else{
        int contLinhas=0;
        query.first();
        do{
            ui->tw_listavenda->insertRow(contLinhas);
            ui->tw_listavenda->setItem(contLinhas,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listavenda->setItem(contLinhas,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listavenda->setItem(contLinhas,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listavenda->setItem(contLinhas,3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_listavenda->setItem(contLinhas,4, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_listavenda->setItem(contLinhas,5, new QTableWidgetItem(query.value(5).toString()));





            contLinhas++;


        }while(query.next());
    }



    con.fechar();
}

fm_gestaVendas::~fm_gestaVendas()
{
    delete ui;
}

void fm_gestaVendas::on_tw_listavenda_itemSelectionChanged()
{
    ui->tw_listaProdutoVenda->clear();
    ui->tw_listaProdutoVenda->setRowCount(0);

    con.abrir();
    QSqlQuery query;
    query.prepare("select id_movimentação, produto, qtde, valor_un, valot_total from tb_produtosVendas where id_venda="+ui->tw_listavenda->item(ui->tw_listavenda->currentRow(),0)->text());
    if(!query.exec()){
        QMessageBox::information(this,"ERRO","Falha ao acessar o banco de dados");

    }else{
        int contLinhas=0;
        query.first();
        do{
            ui->tw_listaProdutoVenda->insertRow(contLinhas);
            ui->tw_listaProdutoVenda->setItem(contLinhas,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaProdutoVenda->setItem(contLinhas,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaProdutoVenda->setItem(contLinhas,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaProdutoVenda->setItem(contLinhas,3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_listaProdutoVenda->setItem(contLinhas,4, new QTableWidgetItem(query.value(4).toString()));






            contLinhas++;


        }while(query.next());
    }



    con.fechar();
}

void fm_gestaVendas::on_btn_filtar_clicked()
{
    ui->tw_listavenda->setRowCount(0);
    con.abrir();
    QSqlQuery query;
    query.prepare("select * from tb_vendas where data_venda between"+ui->dateEdit->text()+"and "+ui->dateEdit_2->text());
    if(!query.exec()){
        QMessageBox::information(this,"ERRO","Falha ao acessar o banco de dados");

    }else{
        int contLinhas=0;
        query.first();
        do{
            ui->tw_listavenda->insertRow(contLinhas);
            ui->tw_listavenda->setItem(contLinhas,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listavenda->setItem(contLinhas,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listavenda->setItem(contLinhas,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listavenda->setItem(contLinhas,3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_listavenda->setItem(contLinhas,4, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_listavenda->setItem(contLinhas,5, new QTableWidgetItem(query.value(5).toString()));





            contLinhas++;


        }while(query.next());
    }
}

void fm_gestaVendas::on_btn_geraPDF_clicked()
{
    QString nome=ui->tw_listavenda->item(ui->tw_listavenda->currentRow(),0)->text()+"_vendas.pdf";
    QString local=QDir::currentPath();
    QPrinter priter;
    priter.setOutputFormat(QPrinter::PdfFormat);
    priter.setOutputFileName(nome);

    QPainter pai;
    pai.begin(&priter);

    int linha=200;
    int salto=20;

    pai.drawText(25,200,ui->tw_listavenda->item(ui->tw_listavenda->currentRow(),0)->text());
    pai.drawText(150,200,ui->tw_listavenda->item(ui->tw_listavenda->currentRow(),1)->text());
    for(int i=0;i<ui->tw_listaProdutoVenda->rowCount();i++){
        pai.drawText(25,linha,ui->tw_listaProdutoVenda->item(i,0)->text());
        pai.drawText(50,linha,ui->tw_listaProdutoVenda->item(i,1)->text());
        pai.drawText(300,linha,ui->tw_listaProdutoVenda->item(i,3)->text());
        linha+=salto;
    }







    pai.end();
    QDesktopServices::openUrl(QUrl("file:///"+nome));
}
