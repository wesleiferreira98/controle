#include "aluno2.h"

aluno2::aluno2()
{
    idade=0;
    nome=" ";
}
void aluno2::set_dados(){
    cout <<"Digite o nome do aluno: "<<"\n\n";
    std::getline(cin,nome);
    cout << "Digite a idade do aluno: "<<"\n\n";
    cin >> idade;
    cin.ignore();
}
void aluno2::print_dados(){
    cout <<"O nome do aluno: "<< nome <<"\n\n";
    cout << "A idade do aluno: "<<idade<<"\n\n";
}
