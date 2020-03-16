#include <Stepper.h>


#define e1 8
#define e2 9
#define e3 10
#define e4 11
#define led 13

const int passosPorGiro=64;
int tmp=3000;

Stepper mp(passosPorGiro,e1,e3,e2,e4);


void setup() {
  
  pinMode(led,OUTPUT);
  

}

void loop() {
  
  digitalWrite(led,LOW);
  motor(500,2,1,0);
  digitalWrite(led,HIGH);
  delay(tmp);
  digitalWrite(led,LOW);
  motor(500,2,1,0);
  digitalWrite(led,HIGH);
  delay(tmp);
  

}

void motor(int val,int sentido,int voltas,int passos,int tmp,){
  mp.setSpeed(vel);
  for(int i=0;i<(passos*voltas);i++){
    mp.step(passosPorGiro*sentido);
    delay(tmp);
    
  }
  
  
  
  
  
  
 
 
 
 
}
