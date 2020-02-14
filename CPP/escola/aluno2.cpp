#include<iostream>
#include"aluno2.h"
using namespace std;
aluno2::aluno2(){
	time=0;
	mensalidade=0;
}
void aluno2::set_dados(){
	cout <<"Digite o nome do Dicente: "<<"\n\n";
    getline(cin,time);
    cout << "Digite a quantidades de matéria de "<< time << "\n\n";
    cin >>mensalidade;
    cout <<"Digite a idade do Dicente: "<<"\n\n";
    cin >>idade;
    cin.ignore();
}
void aluno2::print_dados(){
	cout << "O nome do dicente: "<< time <<"\n\n";
    cout << "A quantidades de matéria de "<< time << " é "<< mensalidade <<"\n\n";
}
aluno2::~aluno2(){

}