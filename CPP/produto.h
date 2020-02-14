#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class produto{
    private:
        string nome;
        int qtd;
        float valor;
    public:
         produto(string n){
            nome=n;
            qtd=0;
            valor=0;

        }
        produto(string n, int q){
            nome=n;
            qtd=q;
            valor=0;

        }
        produto(string n, int q,float v){
            nome=n;
            qtd=v;
            valor=v;
        }
        produto(){
            qtd=0;
            valor=0;
        }
         void set_dados(){
            cout <<"Digite o nome do produto: "<<"\n\n";
            getline(cin,nome);
            cout <<"Digite a quantidade de produtos: "<<"\n\n";
            cin >>qtd;
            cout <<"Digite o valor do produto: "<<"\n\n";
            cin >> valor;
            cin.ignore();



         }
         void print_dados(){
            cout <<"O nome do produto: "<< nome <<"\n\n";
            cout <<"A quantidade de produtos: "<< qtd <<"\n\n";
            cout <<"O  valor do produto: "<< valor <<"\n\n";
        }
        produto soma(produto a){
            produto res;
            res.qtd=a.qtd+qtd;
            res.valor=a.valor+valor;
            return res;


        }

        ~produto(){
        }









};




#endif // PRODUTO_H_INCLUDED
