#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremoteInt.h>
#include <IRremote.h>
#include <boarddefs.h>
#define receptor 11
#define m1 2
#define m2 3
float valor;
IRrecv recIR(receptor);
decode_results resultado;

void setup() {
 pinMode(m1,OUTPUT);
 pinMode(m2, OUTPUT);
 
 Serial.begin(9600);
 recIR.enableIRIn();// serve pra inicializar o receptor IR

}

void loop() {
  if(recIR.decode(&resultado)){
      valor=(resultado.value);
      Serial.print("Valor: ");
      //Serial.println(valor,HEX);
      switch(resultado.value){
        case 0xFF629D://cima
          frente();
        break;
        case 0xFFA857://baixo
          traz();
        break;
        case 0xFF02FD://ok
          parar();
        break;
        }
      recIR.resume();
   }
  

}
void parar(){
 digitalWrite(m1,0);
 digitalWrite(m2,0); 
  
 }

 void frente(){
 digitalWrite(m1,1);
 digitalWrite(m2,0); 
  
 }
 void traz(){
 digitalWrite(m1,0);
 digitalWrite(m2,1); 
  
 }
