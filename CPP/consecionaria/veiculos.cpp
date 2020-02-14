#include "veiculos.h"
using namespace std;
veiculos::veiculos()
{
    qtd_rodas=0;
    valor=0;
}
void veiculos::set_dados(){
    cout<<"Digite o tipo do veiculo: "<<"\n\n";
    std::getline(cin,tipo);
    cout<<"Digite o modelo do veiculo: "<<"\n\n";
    std::getline(cin,nome);
    cout<<"Digite a qtd_de rodas: "<<"\n\n";
    cin>>qtd_rodas;
    cout<<"Digite o valor do veiculo: "<<"\n\n";
    cin>>valor;
    std::cin.ignore();

}
void veiculos::print_dados(){
     cout<<"O tipo do veiculo: "<< tipo <<"\n\n";
     cout<<"O modelo do veiculo: "<< nome <<"\n\n";
     cout<<"A qtd_de rodas: "<< qtd_rodas <<"\n\n";
     cout<<"O valor do veiculo: "<<valor<<"\n\n";


}
float veiculos::ret_preco(){
    return valor;
}

veiculos::~veiculos(){

}
