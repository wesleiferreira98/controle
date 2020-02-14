#include "meiobolsista.h"

meiobolsista::meiobolsista()
{

}
float meiobolsista::bolsam(){
    float men;
    men=aluno::mensalidade();
    return men*0.25;
}

