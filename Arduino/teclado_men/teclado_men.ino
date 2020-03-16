#include <Keypad.h>
#define linhas 4
#define colunas 3
#define led_vermelho 2
#define led_verde 3
#define led_amarelo 4
int estado=0;

char mapate[4][3]={{'1','2','3'},{'4','5','6'},{'7','8','8'},{'*','0','#'}};
String senha="123"; 
String digitada;
byte pinos_linha [linhas]={6,7,8,9};
byte pinos_coluna [colunas]={10,11,12};
Keypad teclado=Keypad (makeKeymap(mapate), pinos_linha,pinos_coluna, linhas,colunas );
void setup() {
  
 pinMode(led_vermelho,OUTPUT);
 pinMode(led_verde,OUTPUT);
 pinMode(led_amarelo,OUTPUT);

}

void loop() {
  char tecla=teclado.getKey();
  if(tecla != NO_KEY){
    estado =1;
    if(tecla=="#"){
      if(verificaSenha(senha,digitada)){
        estado =3;
        leds(estado);
        delay(3000);
        estado=0;
      }else{
        estado=2;
        leds(estado);
        delay(3000);
        estado=0;
      }
      digitado="";
    }else{
      digitada+=tecla;
    }
    leds(estado);
    
    
  }


  
  
  
  
 

}
bool verificaSenha(String sa, String sd){
  bool resultado=false;
  if(sa.compareTo(sd)==0){
    resultado=true;
  }else{
    resultado=false;
  }
  return resultado;
  
}
void leds(int e){
  if(e==0){//0=aguardando /1=Digitando /2=Negado / 3=aceito
    digitalWrite(led_vermelho,0);
    digitalWrite(led_verde,0);
    digitalWrite(led_amarelo,0);
  }else if(e==1){//0=aguardando /1=Digitando /2=Negado / 3=aceito
    digitalWrite(led_vermelho,0);
    digitalWrite(led_verde,0);
    digitalWrite(led_amarelo,1);
  }else if(e==2){//0=aguardando /1=Digitando /2=Negado / 3=aceito
    digitalWrite(led_vermelho,1);
    digitalWrite(led_verde,0);
    digitalWrite(led_amarelo,0);
  }else if(e==3){//0=aguardando /1=Digitando /2=Negado / 3=aceito
    digitalWrite(led_vermelho,0);
    digitalWrite(led_verde,1);
    digitalWrite(led_amarelo,0);
  }
  
  
}
