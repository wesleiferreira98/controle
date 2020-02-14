#include "aluno.h"

aluno::aluno()
{

}

void aluno::set_dados(){
    cout <<"Digite o nome do dicente: "<<"\n\n";
    std::getline(cin,nome);
    cout <<"Digite o curso de "<< nome << "\n\n";
    std::getline(cin,curso);
    cout<<"Digite a quantidade de matérias de "<< nome <<"\n\n";
    cin >> qtd_materias;
    cin.ignore();
}
void aluno::print_dados(){
    cout<< "O nome do dicente "<< nome << "\n\n";
    cout<< "O curso de "<< nome << " é "<< curso <<"\n\n";
    cout<<" A quantidade de matérias de "<< nome << " é "<< qtd_materias <<"\n\n";
}
float aluno::mensalidade(){
    float men;
    men= qtd_materias*200;
    return men;
}
string aluno::ret_nome(){
    return nome;
}
