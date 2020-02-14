#ifndef DIRETOR_H_INCLUDED
#define DIRETOR_H_INCLUDED
#include "fucionario.h"
class diretor:public fucionario{
    public:
        float salario(){
            float sald;
            sald=fucionario::salario();
            return sald*1.90;


        }







};



#endif // DIRETOR_H_INCLUDED
