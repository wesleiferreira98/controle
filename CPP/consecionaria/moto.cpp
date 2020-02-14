#include "moto.h"

moto::moto()
{

}

float moto::val_moto(){
    float res;
    res=veiculos::ret_preco();
    return res*8;
}
