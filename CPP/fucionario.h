#ifndef FUCIONARIO_H_INCLUDED
#define FUCIONARIO_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class fucionario{
    private:
     string nome_fun;
     float qhe;
     float vhe;
     float salariobase;
    public:
    fucionario(){
        qhe=0;
        vhe=0;
        salariobase=0;


    }
    void set_dados(){
        cout<<"Digite o nome do funcionario: "<<"\n\n";
        getline(cin,nome_fun);
        cout <<"Ensira o salario base de "<<nome_fun<<"\n\n";
        cin>>salariobase;
        cout <<"Insira a quantidade de hora extra de "<<nome_fun<<"\n\n";
        cin>> qhe;
        cout << "Digite o valor da hora extra de "<<nome_fun<<"\n\n";
        cin>> vhe;
        cin.ignore();
    }
    void print_dados(){
        cout <<"O nome do funcionario: "<<nome_fun<<"\n\n";
        cout <<"O salario base de "<<nome_fun<<" é "<< salariobase <<"\n\n";
        cout <<"A quantidade de hora extra de "<<nome_fun<< " é "<<qhe<<"\n\n";
        cout <<"O valor de hora extra de "<<nome_fun<< " é "<<vhe<<"\n\n";
    }
    float salario(){
        float sal;
        sal=salariobase+(qhe*vhe);
        return sal;

    }
    ~fucionario(){
    }
};



#endif // FUCIONARIO_H_INCLUDED
