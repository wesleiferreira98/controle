#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempo=new QTimer(this);
    connect(tempo,SIGNAL(timeout()),this,SLOT(minhaFuncao()));
    tempo->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::minhaFuncao(){

     qDebug() << "Cursos de QTimer";


}
