#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class aluno{
    private:
        string nome;
        float qtd_mem;
    public:
        aluno(){
        qtd_mem=0;
        }
        void set_dados(){
            cout <<"Digite o nome do Dicente: "<<"\n\n";
            getline(cin,nome);
            cout << "Digite a quantidades de matéria de "<< nome << "\n\n";
            cin >> qtd_mem;
            cin.ignore();

        }
        void print_dados(){
            cout << "O nome do dicente: "<< nome <<"\n\n";
            cout << "A quantidades de matéria de "<< nome << " é "<< qtd_mem <<"\n\n";
        }
        float mensalidade(){
            float men;
            men=qtd_mem*200;
            return men;



        }
        ~aluno(){
        }


};



#endif // ALUNO_H_INCLUDED
