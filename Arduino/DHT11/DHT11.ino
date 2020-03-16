#include <dht.h>
#define pin 4
dht sensor;



void setup() {
  Serial.begin(9600);
  delay(2000);
  

}

void loop() {
  sensor.read11(pin);
  Serial.print("Umidade: ");
  Serial.print(sensor.humidity);
  Serial.println("%");
  Serial.print("Temperatura: ");
  Serial.print(sensor.temperature,0);
  Serial.println("C");
  Serial.println("-------------------------");
  delay(2000);
  

}
