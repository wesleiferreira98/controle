#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremoteInt.h>
#include <IRremote.h>
#include <boarddefs.h>

#define bt1 8
#define bt2 9

IRsend irsend;
unsigned long valor;
decode_results res;
decode_type_t tipo;



void setup() {
  Serial.begin(9600);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
 

}

void loop() {
  if(digitalRead(bt1)==1){//Esquerda
    valor=0xFF22DD;
    irsend.sendRC5(valor,12);
    Serial.println(valor,HEX);
    tipo=res.decode_type;
    delay(2000);
    
  }else if(digitalRead(bt2)==1){//direita
    valor=0xFFC23D;
    irsend.sendRC5(valor,12);
    Serial.println(valor,HEX);
    tipo=res.decode_type;
    delay(2000);
  }
  

}
