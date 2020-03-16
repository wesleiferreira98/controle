#include <Wire.h>


#define d1 0x101
#define d2 0x102
#define d3 0x103

void setup() {
  Wire.begin();
  Wire.onReceive(cfb);
  

}

void loop() {
  Wire.beginTransmission(d1);
  Wire.Write(1);
  Wire.endTransmission();
  

}
void cfb(){
  
  
}
