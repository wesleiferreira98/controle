#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include<iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_gravar_clicked()
{
    ui->txt_nome->setFocus();
    string a,b,c,d,e;
    fstream gravar;
    gravar.open("clientes.txt",fstream::app);
    a=string(ui->txt_nome->text().toStdString());
    b=string(ui->txt_endereco->text().toStdString());
    c=string(ui->txt_titulofilme->text().toStdString());
    d=string(ui->txt_genero->text().toStdString());
    e=string(ui->txt_qtdfilmes->text().toStdString());
    gravar << a <<"\n\n"<< b <<"\n\n"<< c <<"\n\n"<< d <<"\n\n"<< e;
    gravar.close();
    ui->txt_nome->clear();
    ui->txt_endereco->clear();
    ui->txt_titulofilme->clear();
    ui->txt_genero->clear();
    ui->txt_qtdfilmes->clear();


}

void MainWindow::on_btn_ler_clicked()
{
    ui->tableWidget->clear();
    string y;
    ifstream ler;
    ler.open("clientes.txt");
    while(std::getline(ler,y)){
        const QString s=QString::fromStdString(y);
        ui->tableWidget->addItem(s);
    }
    ler.close();
}

void MainWindow::on_btn_limpar_clicked()
{
    ui->tableWidget->clear();
    system("rm clientes.txt");


}
