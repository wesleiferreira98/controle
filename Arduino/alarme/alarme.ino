#include<TimerOne.h>

#define led_alarme 7
#define led_armado 13
#define btn 2

int led_al=LOW;
int led_ar=LOW;
bool armado=false;


void setup() {
  pinMode(led_alarme,OUTPUT);
  pinMode(led_armado,INPUT);
  attachInterrupt(digitalPinToInterrupt(btn),toogle_alarme,FALLING);
  
}

void loop() {
  //O loop que se foda nesse programa do caralho.
 

}
void alarme(){
  digitalWrite(led_alarme,!digitalRead(led_alarme));
}


void toogle_alarme(){
  if(armado){
    digitalWrite(led_armado,LOW);
    armado=false;
    Timer1.detachInterrupt();
    digitalWrite(led_armado,LOW);
    
  }else{
    digitalWrite(led_armado,HIGH);
    armado=true;
    Timer1.initialize(1000000);
    Timer1.attachInterrupt(alarme);
  }
  
}
