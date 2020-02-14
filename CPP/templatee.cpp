#include<iostream>
using namespace std;
template <class Alpha>  // ou template <typename Alpha>
class minhaClasse
{
public:
  minhaClasse();
  void meuMetodo(Alpha var);
private:
  Alpha _var;
};

template <class T>
minhaClasse<T>::minhaClasse() {
  // minha construtora
}

template <class T>
minhaClasse<T>::meuMetodo(Alpha var) {
  _var = var;
}
