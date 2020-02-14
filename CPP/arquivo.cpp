#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int x,y,p=0,i=0;
    char d;
    ofstream gravar;
    gravar.open("pares.txt");
    do{
        cout<<"Digite um número"<<"\n\n";
        cin >>x;
        gravar << x <<"\n";
        cout <<"Dejesa outro ? "<<"\n\n";
        cin >> d;

    }while(d=='S'|| d=='s');
    gravar.close();
    ifstream ler;
    ler.open("pares.txt");
    while(ler>>y){
        if(y%2==0){
         p++;

        }else{
            i++;

        }
    }
    ler.close();
    cout <<"Quantida de pares "<< p <<"\n\n";
    cout <<"Quantida de ímpares "<< i <<"\n\n";






}
