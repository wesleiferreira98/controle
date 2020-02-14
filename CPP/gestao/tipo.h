#ifndef TIPO
#define TIPO
#include<iostream>
#include<locale>
#include"aluno2.h"
using namespace std;
template <class v>
class tipo{
private:
    v estoque[5];
public:
    void print_dados(){
        for(int i=0;i<5;i++){
            estoque[i].print_dados();
        }
    }
    void push(aluno2 t,int x ){
        estoque[x]=t;
    }


};


#endif // TIPO

