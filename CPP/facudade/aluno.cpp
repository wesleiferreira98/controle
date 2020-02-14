#include<iostream>
#include"aluno.h"
using namespace std;
aluno::aluno(){
    qtd_mem=0;
}

void aluno::set_dados(){
    cout <<"Digite o nome do Dicente: "<<"\n\n";
    getline(cin,nome);
    cout << "Digite a quantidades de matéria de "<< nome << "\n\n";
    cin >> qtd_mem;
    cin.ignore();

}

void aluno::print_dados(){
    cout << "O nome do dicente: "<< nome <<"\n\n";
    cout << "A quantidades de matéria de "<< nome << " é "<< qtd_mem <<"\n\n";
}
float aluno::mensalidade(){
    float men;
    men=qtd_mem*200;
    return men;



}
aluno::~aluno(){
}

