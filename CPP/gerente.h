#ifndef GERENTE_H_INCLUDED
#define GERENTE_H_INCLUDED
#include "fucionario.h"
class gerente:public fucionario{
    public:
        float salario(){
            float salg;
            salg=fucionario::salario();
            return salg*1.30;


        }



};



#endif // GERENTE_H_INCLUDED
