#ifndef CONEXAO
#define CONEXAO
#include <QtSql>

class Conexao{
public:
   QSqlDatabase bancoDeDados;
   QString local;
   QString banco;
   Conexao(){
       local=qApp->applicationDirPath();
       banco=local+"/db/controlEstoque.db";
       bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

   }
   void fechar(){
       bancoDeDados.close();
   }
   bool abrir(){

       bancoDeDados.setDatabaseName(banco);

       if(!bancoDeDados.open()){
           return false;


       }else{
           return true;
       }
   }
   bool aberto(){
       if(bancoDeDados.isOpen()){
           return true;


       }else{
           return false;
       }

   }

};

#endif // CONEXAO

