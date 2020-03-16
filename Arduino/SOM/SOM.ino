#include "notas.h"
#define som 9
#define t4 2000
#define t2 1000
#define t1 500
#define t05 250
#define t025 125

#define pausa 125
int ritimo=1;

int musica[]={
  NOTA_C4,NOTA_C4,
  NOTO_D4,NOTA_C4,NOTA_F4
    
  
 
 };
 int durações[]={
  
  
  
  
  
  };
 
void setup() {
  pinMode(som, OUTPUT);

}

void loop() {
  tone(som,200,1500);
  delay(1600);
  //delay(5000);
  

}
