#include "bolsista.h"

bolsista::bolsista()
{

}

float bolsista::bolsa(){
    float men;
    men=aluno::mensalidade();
    return men*0.50;
}
