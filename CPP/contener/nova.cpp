#include "nova.h"

template<class v>
void nova<v>::set_dados(v var){

    for(int i=0;i<5;i++){
        cout<<"Digite um valor: "<<"\n\n";
        cin >> estoque[i];
    }
    var = v;
}
template<class v>
void nova<v>::print_dados(v var){

    for(int i=0;i<5;i++){
        cout<<estoque[i]<<"\n\n";

    }
    var = v;
}
