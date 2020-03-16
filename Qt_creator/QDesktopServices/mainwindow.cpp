#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>

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

void MainWindow::on_pushButton_clicked()
{
    QString site="http://www.cfbcursos.com.br";
    QDesktopServices::openUrl(QUrl(site));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString aplicativo="file:///home/weslei/Downloads/fritzing-0.9.3b.linux.i386/fritzing";
    QDesktopServices::openUrl(QUrl(aplicativo));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString aplicativo="file:///home/weslei/Downloads/fritzing-0.9.3b.linux.i386/fritzing";
    QDesktopServices::openUrl(QUrl(aplicativo));
}

