#include "tipo.h"

int main()
{
    tipo<aluno2> x;
    aluno2 temp;
    for(int i=0;i<5;i++){
        temp.set_dados();
        x.push(temp,i);
    }
    x.print_dados();
    cout<<"\n\n";
    return 0;
}

