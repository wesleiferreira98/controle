#include<iostream>
#include<string>
using namespace std;
class cliente{
private:
    string nome,endq;
    int idade;
private:
    cliente(){
        idade=0;

    }
    void set_dados(){
        cout<<"Digite o nome do cliente: "<<"\n\n";
        getline(cin,nome);
        cout<<"Digite a idade do cliente: "<<"\n\n";
        cin >> idade;
        cout<<"Digite o endereço do cliente: "<<"\n\n";
        getline(cin,endq);
        cin.ignore();

    }
    void print_dados(){
        cout<<"O nome do cliente: "<<nome<<"\n\n";
        cout<<"A idade do cliente: "<<idade<<"\n\n";
        cout<<"O endereço do cliente: "<<endq<<"\n\n";

    }
    string ret_nome(){
        return nome;
    }
    string ret_end(){
        return endq;

    }
};
class dvd{
private:
    int qtd;
    string titulo, genero;
public:
    dvd(){
        qtd=0;
    }
    void seti(){
        cout<<"Digite o nome do filme: "<<"\n\n";
        getline(cin,titulo);
        cout<<"Digite o genero do filme: "<<"\n\n";
        getline(cin,genero);
        cout<< "Digite a qtd de filmes: "<<"\n\n";
        cin>> qtd;
        cin.ignore();

    }
    void get_dados(){
        cout<<"O nome do filme: "<<titulo<<"\n\n";
        cout<<"O genero do filme: "<<genero<<"\n\n";
        cout<< "A qtd de filmes: "<<qtd<<"\n\n";

    }
    string ret_titulo(){
        return titulo;

    }
    ~dvd(){
    }

};
class aloca{

private:
    string titulo, cliente,de;
public:
    aloca(){
    }
    void set_data(){
        cout<< "Digite a data de entrega do filme: "<<"\n\n";
        getline(cin,de);
        cin.ignore();

    }
    void retatorio(){
        cout<<" O filme "<< titulo << "está com "<< cliente << "devover "<< de <<"\n\n";

    }
    aloca(string t,string c){
        titulo=t;
        cliente=c;

    }
    ~aloca(){
    }



};
int main(){
    cliente a,b;
    dvd c,d;
    aloca f,g;
    a.set_dados();
    b.set_dados();
    a.print_dados();
    b.print_dados();
    c.seti();
    c.get_dados();
    f(a.ret_nome(),c.ret_titulo());
    f.set_data();
    cout << f.retatorio()<<"\n\n";







}
