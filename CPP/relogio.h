#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class relogio{
private:
    int qtd;
    string marca;
    float valor;
public:
   relogio(){
    qtd=0;
    valor=0;
   }

    void set_dados(){
        cout <<"informe a marca do relógio: "<<"\n\n";
        getline(cin,marca);
        cout << "Digite o valor do relógio: "<<"\n\n";
        cin >> valor;
        cout << "Insira a quantidade de relógios: "<<"\n\n";
        cin >> qtd;
        cin.ignore();


    }
    void print_dados(){
        cout <<" a marca do relógio: "<<marca<<"\n\n";
        cout <<" o valor do relógio: "<<valor<<"\n\n";
        cout << "quantidade de relógios: "<<qtd<<"\n\n";


    }
    void adicionar(relogio a,relogio b){
        valor=a.valor+b.valor;
        qtd=a.qtd+b.qtd;


    }

    ~relogio(){
    }












};


#endif // RELOGIO_H_INCLUDED
