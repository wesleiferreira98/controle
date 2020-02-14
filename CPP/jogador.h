#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class jogador{
	static:
		
			int num;
			string nome;
	static:
		
			void set_dados(){
				cout<<"Ensira o nome do jogador: "<<"\n\n";
				getline(cin,nome);
				cout<<"Ensira o número da camisa do jogador: "<<"\n\n";
				cin>> num;
				cin.ignore(); 
			}	
			void print_dados(){
				cout<<"O nome do jogador: "<<nome<<"\n\n";
				cout<<"O número da camisa do jogador: "<<num<<"\n\n";
			}	

};
#endif