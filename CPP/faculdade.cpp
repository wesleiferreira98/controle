#include "bolsista.h"
#include "meiabol.h"
int main(){
    bolsista x;
    meiabol y;
    x.set_dados();
    x.print_dados();
    cout <<"----------------------------------------------------------\n\n";
    y.set_dados();
    y.print_dados();
    cout <<"----------------------------------------------------------\n\n";
    cout <<"\t\t\t A mesalidade de bolsista é: "<< x.mensalidade()<<"\n\n";
    cout <<"\t\t\t A mesalidade de bolsista é: "<< y.mensalidade()<<"\n\n";




}
