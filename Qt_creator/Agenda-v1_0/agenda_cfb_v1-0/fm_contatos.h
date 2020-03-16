#ifndef FM_CONTATOS_H
#define FM_CONTATOS_H

#include <QDialog>
#include <QtSql>
#include<QMessageBox>

namespace Ui {
class fm_contatos;
}

class fm_contatos : public QDialog
{
    Q_OBJECT

public:
    explicit fm_contatos(QWidget *parent = 0);
    ~fm_contatos();

private slots:
    void on_btn_gravar_clicked();

private:
    Ui::fm_contatos *ui;
};

#endif // FM_CONTATOS_H
