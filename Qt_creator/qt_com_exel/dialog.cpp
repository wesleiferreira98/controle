#include "dialog.h"
#include "ui_dialog.h"
#include "xlsxdocument.h"
#include <QDir>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tw_dados->horizontalHeader()->setVisible(true);
    ui->tw_dados->setColumnCount(7);
    QStringList titulos;
    QString colunas[]={"A","B","C","D","E","F","G"};
    int linha=2;
    QXlsx::Document planilha(QDir::currentPath()+"\\cursos.xlsx");
    for(int i=0;i<7;i++){
        titulos.append(planilha.read(colunas[2]+QString::number(linha)).toString());
    }
    QString tmp=planilha.read("A1").toString();
    ui->tw_dados->setHorizontalHeaderLabels(titulos);
    ui->tw_dados->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_dados->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_dados->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_dados->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_dados->verticalHeader()->setVisible(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    QXlsx::Document planilha(QDir::currentPath()+"\\mov.xlsx");
    QString colunas[]={"A","B","C","D","E","F","G"};
    int linha=3;

    for(int l=0;l<3;l++){
        ui->tw_dados->insertRow(l);
        for(int i=0;i<7;i++){
            // titulos.append(planilha.read(colunas[1]+QString::number(linha)).toString());

            ui->tw_dados->setItem(l,i,new QTableWidgetItem(planilha.read(colunas[1]+QString::number(l+linha)).toString()));

    }
   }
}
