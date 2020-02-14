#include"gerente.h"
#include"fucionario.h"
#include"diretor.h"
int main(){
    system("clear");
    gerente x;
    diretor y;
    x.set_dados();
    x.print_dados();
    cout <<"--------------------------------------------------------------------------"<<"\n\n";
    y.set_dados();
    y.print_dados();
    cout <<"--------------------------------------------------------------------------"<<"\n\n";
    cout <<"O salário do gerente é: "<< x.salario()<<"\n\n";
    cout <<"O salário do gerente é: "<< y.salario()<<"\n\n";







}
