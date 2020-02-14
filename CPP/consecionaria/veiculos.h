#ifndef VEICULOS_H
#define VEICULOS_H
#include<iostream>
#include<string>
using namespace std;


class veiculos
{
private:
    int qtd_rodas;
    string tipo;
    string nome;
    float valor;

public:
    veiculos();
    void set_dados();
    void print_dados();
    float ret_preco();
    ~veiculos();
};

#endif // VEICULOS_H
