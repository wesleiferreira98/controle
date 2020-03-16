#include <Servo.h>

#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3

Servo s1,s2,s3,s4;
int angs1,angs2,angs3,angs4;
int tmp=100;

void setup() {
  s1.attach(2);
  s1.attach(3);
  s1.attach(4);
  s1.attach(5);
  Serial.begin(9600);
  
}

void loop() {
  angs1=map(analogRead(pot1),0,1023,0,180);
  angs2=map(analogRead(pot2),0,1023,0,180);
  angs3=map(analogRead(pot3),0,1023,0,180);
  angs4=map(analogRead(pot4),0,1023,0,180);
  
  /*s1.write(angs1);
  s2.write(angs2);
  s3.write(angs3);
  s4.write(angs4);
  delay(tmp);*/
  
  
  

}
