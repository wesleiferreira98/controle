#include "carro.h"
#include "moto.h"
#include "navio.h"

int main()
{
    carro x;
    moto y;
    navio z;
    x.set_dados();
    x.print_dados();
    cout<<"O preço do carro é: "<<x.val_carro()<<"\n\n";
    cout<<"--------------------------------------------\n\n";
    y.set_dados();
    y.print_dados();
    cout<<"O preço do carro é: "<<y.val_moto()<<"\n\n";
    cout<<"--------------------------------------------\n\n";
    z.set_dados();
    z.print_dados();
    cout<<"O preço do carro é: "<<z.preNavio()<<"\n\n";
}


