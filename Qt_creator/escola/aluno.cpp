#include <iostream>
#include "aluno.h"
using namespace std;

aluno::aluno()
{

}
void aluno::set_dados(){
    cout <<"Digite o nome do Dicente: "<<"\n\n";
    std::getline( std::cin, nome );
    cout << "Digite a quantidades de matéria de "<< nome << "\n\n";
    cin >>mensalidade;
    cout <<"Digite a idade do Dicente: "<<"\n\n";
    cin >>idade;

}
void aluno::print_dados(){
    cout << "O nome do dicente: "<< nome <<"\n\n";
    cout << "A quantidades de matéria de "<< nome << " é "<< mensalidade <<"\n\n";
}
aluno::~aluno(){

}

