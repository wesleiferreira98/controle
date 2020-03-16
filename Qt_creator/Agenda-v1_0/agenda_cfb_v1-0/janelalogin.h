#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>
#include<QMessageBox>
#include "fm_principal.h"
#include<QtSql>
namespace Ui {
class JanelaLogin;
}

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit JanelaLogin(QWidget *parent = 0);
    ~JanelaLogin();
    QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

private slots:
    void on_btn_login_clicked();

private:
    Ui::JanelaLogin *ui;
};

#endif // JANELALOGIN_H
