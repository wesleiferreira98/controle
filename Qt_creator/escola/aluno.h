#ifndef ALUNO_H
#define ALUNO_H
#include <bits/stdc++.h>
using namespace std;
class aluno
{
private:
      int idade;
      string nome;

      float mensalidade;
 public:
     void set_dados();
     void print_dados();
     aluno();
     ~aluno();







};

#endif // ALUNO_H
