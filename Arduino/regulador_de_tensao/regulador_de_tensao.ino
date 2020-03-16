#include <Servo.h>

#define pot A0

Servo s1;
int angs1;
int a;
void setup() {
  s1.attach(2);
  angs1=0;
  s1.write(angs1);
  pinMode(pot,INPUT);
  Serial.begin(9600);

}

void loop() {
  //angs1=map(analogRead(pot),0,1023,0,180);
  angs1=0;
  s1.write(angs1);
  a=s1.read();
  Serial.println(a);
  delay(3000);

  angs1=90;
  a=s1.read();
  Serial.println(a);
  s1.write(angs1);
  delay(3000);

  angs1=180;
  a=s1.read();
  Serial.println(a);
  s1.write(angs1);
  delay(3000);
  
  

}
