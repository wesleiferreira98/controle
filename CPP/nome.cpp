#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string nome1, nome2, c,d;
    ofstream gravar;
    ifstream ler;
    gravar.open("nomes.py");
    do{
        cout << "Digite um nome: "<<"\n\n";
        getline(cin,nome1);
        gravar << nome1 << "\n\n";

        cout << "Mais ?? "<<"\n\n";
        cin >> c;
        cin.ignore();

    }while(c=="S"||c=="s");
    gravar.close();
    ler.open("nomes.py");
    cout<< "Digite o nome a ser procurado "<<"\n\n";
    getline(cin,d);
    cin.ignore();
    while(getline(ler,nome2)){
        if(d==nome2){
            cout<< "Nome encotrado."<<"\n\n";


        }else{
            cout << "Nome não consta no banco de dados. "<<"\n\n";

        }



    }









}
