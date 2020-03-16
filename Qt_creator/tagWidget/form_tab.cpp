#include "form_tab.h"
#include "ui_form_tab.h"

Form_tab::Form_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_tab)
{
    ui->setupUi(this);
}

Form_tab::~Form_tab()
{
    delete ui;
}
