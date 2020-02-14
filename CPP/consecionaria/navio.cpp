#include "navio.h"

navio::navio()
{

}

float navio::preNavio(){
    float res;
    res=veiculos::ret_preco();
    return res*12;
}
