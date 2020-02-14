#ifndef MEIABOL_H_INCLUDED
#define MEIABOL_H_INCLUDED
#include "aluno.h"
class meiabol: public aluno{

 public:
        float mensalidade(){
            float men;
            men=aluno::mensalidade();
            return men*0.25;




        }






};



#endif // MEIABOL_H_INCLUDED
