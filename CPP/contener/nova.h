#ifndef NOVA_H
#define NOVA_H
#include<iostream>
#include<locale>
using namespace  std;


template<class v>
class nova
{
private:
    v estoque[5];


public:

    void set_dados(v var);
    void print_dados(v var);

};

#endif // NOVA_H
