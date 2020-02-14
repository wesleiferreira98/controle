#ifndef GATO_H_INCLUDED
#define GATO_H_INCLUDED
#include"animal.h"
class gato: public animal{
public:
	int ret(){
		int pat;
		pat=animal::ret_qtd();
		return pat*2;
	}
};




#endif