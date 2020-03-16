#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

QString local="home/weslei/Documentos/Qt Creator/";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir unidades;
    foreach(QFileInfo qfi, unidades.drives()){
        ui->comboBox->addItem(qfi.absoluteFilePath());

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->listWidget->clear();
    ui->listWidget->addItem(arg1);
    QDir conteudo(arg1);
    foreach(QFileInfo qfi, conteudo.entryInfoList()){
        if(qfi.isDir()){
            ui->listWidget->addItem("Pasta...: "+qfi.absoluteFilePath());

        }/*else if(qfi.isFile()){
             ui->listWidget->addItem("Arquivo: "+qfi.absoluteFilePath());


        }*/



    }

}

void MainWindow::on_pushButton_clicked()
{
    QString local=ui->listWidget->currentItem()->text();
    QString nome= "/"+ui->lineEdit->text();
    QDir dir(local+nome);
    if(dir.exists()){
        QMessageBox::about(this,"pasta","Diretório já existe");

    }else{
        dir.mkdir(local+nome);
        ui->listWidget->clear();
        ui->listWidget->addItem(ui->comboBox->currentText());
        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo qfi, conteudo.entryInfoList()){
            if(qfi.isDir()){
                ui->listWidget->addItem("Pasta...: "+qfi.absoluteFilePath());

            }
        }
   }
    ui->lineEdit->clear();
   }

void MainWindow::on_pushButton_2_clicked()
{
    QString local=ui->listWidget->currentItem()->text();
    QDir dir(local);
    if(!dir.exists()){
        QMessageBox::about(this,"pasta","Diretório não existe");

    }else{
        dir.rmdir(local);
        ui->listWidget->clear();
        ui->listWidget->addItem(ui->comboBox->currentText());
        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo qfi, conteudo.entryInfoList()){
            if(qfi.isDir()){
                ui->listWidget->addItem("Pasta...: "+qfi.absoluteFilePath());

            }
        }
   }
}
