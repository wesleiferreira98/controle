#include "janelalogin.h"
#include "ui_janelalogin.h"


JanelaLogin::JanelaLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    QString local=qApp->applicationDirPath();
    QString banco=local+"/db/db_agenda.db.db";
    bancoDeDados.setDatabaseName(banco);

    if(!bancoDeDados.open()){
        QMessageBox::warning(this,"ERRO","Banco de dados indisponivel:(");
    }else{
        QMessageBox::information(this,"Aviso","Banco de Dados foi aberto");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_btn_login_clicked()
{
    QString username= ui->txt_username->text();
    QString senha= ui->txt_senha->text();
    if(!bancoDeDados.isOpen()){
        qDebug() << "Banco de dados não está aberto";
        return;
    }
    QSqlQuery query;
    if(query.exec("select * from tb_colaboradores where username='"+username+"' and senha'"+senha+"'")){
        int cont=0;
        while(query.next() and cont==0){
            cont++;
        }
        if(cont>0){
            this->close();
            fm_principal principal;
            principal.setModal(true);
            principal.exec();
        }else{
            QMessageBox::warning(this,"ERRO","Usuario ou senhas incorretos");
            ui->txt_username->clear();
            ui->txt_senha->clear();
            ui->txt_username->setFocus();
            ui->txt_senha->setFocus();
        }

    }

}
