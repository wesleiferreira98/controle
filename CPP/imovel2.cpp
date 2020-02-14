#include"imovel.h"
int main(){
    imovel x[2];
	string n;
	for (int a=0;a<2;a++){
	x[a].set_dados();
    }
	for (int a=0;a<2;a++){
		x[a].print_dados();
	}
    cout << "----------------Busca por nome------------------------";
    cout << "\ndigte o nome do propietario ";
    getline(cin,n);
    cin.ignore();
    for (int a=0;a<2;a++){
    	if(n==x[a].ret_nome()){
    		x[a].print_dados();
		}
	}




}
