#include "meiobolsista.h"

int main()
{
   meiobolsista x;
   x.set_dados();
   x.print_dados();
   cout <<"O valor da mensalidade do dicente é "<<x.bolsam()<<"\n\n";

    return 0;
}

