#include "relogio.h"
int main(){
    relogio x,y,total;
    x.set_dados();
    y.set_dados();
    total.adicionar(x,y);
    total.print_dados();
    x.print_dados();
    y.print_dados();


}
