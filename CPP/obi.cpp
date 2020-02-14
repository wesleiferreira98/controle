#include<iostream>
using namespace std;
int main()
{
	int pi, pf, res;
	cout << "Digite a nota da primeira fase do canditado: "<<"\n\n";
	cin >> pi;

	cout << "Digite a nota da segunda fase do canditado: "<<"\n\n";
	cin >> pf;
	res= pi+pf;
	if(res>= 435){
		cout<<"O canditado será convidado ao curso da unicamp"<<"\n\n";
	}else{
		cout<<"O canditado não será convidado ao curso da unicamp"<<"\n\n";
	}
	return 0;
}