#include "carro.h"

carro::carro()
{

}

float carro::val_carro(){
    float res;
    res=veiculos::ret_preco();
    return res*22;
}
