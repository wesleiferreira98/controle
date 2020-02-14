#include "imovel.h"
int main(){

    imovel x;
    string n;
    x.set_dados();
    cout<< "Digite o nome a ser cosultado: "<<"\n\n";
    getline(cin,n);
    if(n==x.ret_nome()){
        x.print_dados();
    }


    return 0;

}
