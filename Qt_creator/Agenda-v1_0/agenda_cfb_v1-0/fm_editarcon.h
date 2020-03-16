#ifndef FM_EDITARCON_H
#define FM_EDITARCON_H

#include <QDialog>

namespace Ui {
class fm_editarcon;
}

class fm_editarcon : public QDialog
{
    Q_OBJECT

public:
    explicit fm_editarcon(QWidget *parent = nullptr, int id_contato= 0);
    ~fm_editarcon();

private slots:
    void on_btn_gravar_clicked();

private:
    Ui::fm_editarcon *ui;
};

#endif // FM_EDITARCON_H
