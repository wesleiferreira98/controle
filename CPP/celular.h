#ifndef CELULAR_H_INCLUDED
#define CELULAR_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class celular{
private:
    int qtd;
    float valor;
    string nome;
public:
    void set_dados(){
        cout <<"Digite o nome do celular"<<"\n\n";
        getline(cin,nome);
        cout << "Digite a quantidade de celulares"<<"\n\n";
        cin>> qtd;
        cout<<"diigite o valor do celular"<<"\n\n";
        cin >> valor;
        cin.ignore();

    }
    void print_dados(){
        cout <<"Digite o nome do celular"<<nome<<"\n\n";
        cout << "Digite a quantidade de celulares"<<qtd<<"\n\n";
        cout<<"diigite o valor do celular"<<valor<<"\n\n";




    }
    celular(int q,float v, string n){
        n=nome;
        q=qtd;
        v=valor;


    }
    celular(){
        qtd=0;
        valor=0;


    }
    ~celular(){
    }






};



#endif // CELULAR_H_INCLUDED

