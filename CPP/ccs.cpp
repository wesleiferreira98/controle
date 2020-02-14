#include <iostream>
#include <string>
using namespace std;

class imovel {
	private:
		string nome;
		string cpf;
		int idade;
	public:
		imovel (){
			idade = 0;
		}
	    ~imovel (){
		}
      void set_dados(){
	    cout << "\ndefina o nome ";
	    getline(cin,nome);
	    cout << "\ndefia o cpf ";
	    getline(cin,cpf);
	    cout << "\ndefina a idade ";
	    cin >> idade;
	    cin.ignore();
	    }
	    void print_dados(){
	    cout << "\no nome  = " << nome;
	    cout << "\no cpf  = " << cpf;
	    cout << "\na idade  = " << idade;
		}
		string ret_prop(){
			return nome;
		}

};
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
    	if(n==x[a].ret_prop()){
    		x[a].print_dados();
		}
	}
return 0;
}
