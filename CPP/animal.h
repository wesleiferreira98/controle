#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED	
#include <iostream>
#include <string>
using namespace std;
class animal{
private:
	string tipo;
	string nome;
	string alimen;
	int qtd;
public:
	animal(){
		qtd=0;
	}
	void set_dados(){
		cout <<"Digite a família do animal: "<<"\n\n";
		getline(cin,tipo);
		cout <<"Digite o nome do animal: "<<"\n\n";
		getline(cin,nome);
		cout <<"digite o tipo de alimento do animal: "<<"\n\n";
		getline(cin,alimen);
		cout <<"digite a qtd do animal: "<<"\n\n";
		cin >> qtd;
		cin.ignore();
	}
	void print_dados(){
		cout<<"A família do animal: "<< tipo <<"\n\n";
		cout<<"O nome do animal: "<<nome<<"\n\n";
		cout<<"O tipo de alimento do animal: "<<alimen<<"\n\n";
		cout <<"A qtd do animal: "<<qtd<<"\n\n";
	}
	int ret_qtd(){
		return qtd;

	}
	~animal(){

	}


};
#endif