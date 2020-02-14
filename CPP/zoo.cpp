#include"animal.h"
int main()
{
	animal *a= new animal;
	a->set_dados();
	a->print_dados();
	return 0;
}zoo