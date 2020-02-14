#ifndef ALUNO_H
#define ALUNO_H

#include<iostream>
using namespace std;
class aluno
{
private:
    float qtd_materias;
    string nome;
    string curso;

public:
    aluno();
    void set_dados();
    void print_dados();
    float mensalidade();
    string ret_nome();
};

#endif // ALUNO_H
