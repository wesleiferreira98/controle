#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "xlsxdocument.h"
#include<QDir>
#include "dialog.h"
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

void MainWindow::on_btn_criarplanilha_clicked()
{
    QXlsx::Document planilha;
    planilha.write("A1","CFB Cursos");
    planilha.write("A2",ui->le_conteudo->text());
    planilha.saveAs(QDir::currentPath()+"\\CFBCursos.xlsx");
}

void MainWindow::on_pushButton_clicked()
{
   Dialog di;
   di.exec();
}
