#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_tab.h"
int i;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i=ui->tabWidget->count();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);

}

void MainWindow::on_pushButton_clicked()
{
    i++;
    ui->tabWidget->addTab(new QWidget(),"Nova tab: "+ QString::number(i));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
}

void MainWindow::on_pushButton_3_clicked()
{
    i++;
    ui->tabWidget->addTab(new Form_tab(),"Nova tab: "+ QString::number(i));
}
