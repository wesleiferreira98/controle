#ifndef BTN_H_INCLUDED
#define BTN_H_INCLUDED
class Btn{
    public:
     int *pino;
     bool btnclicado;
     bool btnliberado;
     int ultimoEstado=LOW;
     unsigned long tempoPrimeiroAcionado=0;
     unsigned long tempoDebonce=50

     typedef void(funcao) (void);
     Btn(int p){
         btnclicado=false;
         btnliberado=false;
         this->pino=p;
     }
    void clique(funcao *f){
        //rotina Debouce
        int leitura=digitalRead(*pino);
        if(leitura!=ultimoEstado){
            tempoPrimeiroAcionado=millis();

        }
        if((millis()-tempoPrimeiroAcionado)>tempoDebonce){
            if(digitalRead(*pino)){
                btnclicado=true;
                btnliberado=false;

            }else{
                btnliberado=true;
            }
            if((btnclicado)and(btnliberado)){
                btnclicado=false;
                btnliberado=false;
                *f();
            }
        }
        ultimoEstado=leitura;
    }


};



#endif // BTN_H_INCLUDED
