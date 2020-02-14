#ifndef IMOVEL_H_INCLUDED
#define IMOVEL_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class imovel{
private:
    int numero;
    string endereco;
    string nome_pro;
    float valor;
public:
    imovel(){
        valor= 0;
        numero= 0;

    }
    void set_dados(){
        cout <<"Digite o nome do proprietário: "<<"\n\n";
        getline(cin,nome_pro);
        cout <<"Digite o endereço do proprietario: "<<"\n\n";
        getline(cin,endereco);
        cout <<"Insira o número da casa"<<"\n\n";
        cin >> numero;
        cout <<"Insira o valor da casa"<<"\n\n";
        cin >> valor;
        cin.ignore();


    }
    void print_dados(){
        cout <<"O nome do proprietário: "<<nome_pro<<"\n\n";
        cout <<"O endereço do proprietario: "<<endereco<<"\n\n";
        cout <<"O número da casa: "<<numero<<"\n\n";
        cout <<"O valor da casa: "<<valor<<"\n\n";




    }

    ~imovel(){
    }
    string ret_nome(){
        return nome_pro;

    }












};



#endif // IMOVEL_H_INCLUDED
