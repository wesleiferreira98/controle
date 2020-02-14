#include "gato.h"
int main()
{
	gato *a= new gato;
	a->set_dados();
	a->print_dados();
	cout << a->ret() <<"\n\n";

	return 0;
}