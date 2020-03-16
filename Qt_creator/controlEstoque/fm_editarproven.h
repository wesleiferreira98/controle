#ifndef FM_EDITARPROVEN_H
#define FM_EDITARPROVEN_H

#include <QDialog>

namespace Ui {
class fm_editarproven;
}

class fm_editarproven : public QDialog
{
    Q_OBJECT

public:
    explicit fm_editarproven(QWidget *parent = 0);
    ~fm_editarproven();

private slots:
    void on_btn_confirmared_clicked();

    void on_btn_cancelaed_clicked();

private:
    Ui::fm_editarproven *ui;
};

#endif // FM_EDITARPROVEN_H
