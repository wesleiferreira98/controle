#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string nome,y;
    char x;
    ofstream gravar;
    ifstream ler;
    gravar.open("nomess.py");
    do{
        cout<<"Digite nome: "<<"\n\n";
        getline(cin,nome);
        gravar << nome;
        cout <<"Mais ???"<<"\n\n";
        cin >> x;
        cin.ignore();




    }while(x=='S'||x=='s');
    gravar.close();
    ler.open("nomess.py");
    while(getline(ler,y)){
        cout << y <<"\n\n";

    }
    ler.close();



}
