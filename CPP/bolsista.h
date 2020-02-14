#ifndef BOLSISTA_H_INCLUDED
#define BOLSISTA_H_INCLUDED
#include "aluno.h"
class bolsista: public aluno{

    public:
        float mensalidade(){
            float men;
            men=aluno::mensalidade();
            return men*0.50;




        }









};



#endif // BOLSISTA_H_INCLUDED
