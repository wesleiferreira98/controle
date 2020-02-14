#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class aluno{
    private:
        string nome;
        float qtd_mem;
    public:
        aluno();
        void set_dados();
        void print_dados();
        float mensalidade();
        ~aluno();

};



#endif
