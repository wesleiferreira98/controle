#include <HCSR04.h>


#define triggerPin 13
#define  echoPin  12
UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);
float dist_cm;
float dist_m;

void setup () {
    Serial.begin(9600); 
}

void loop () {
    dist_cm = distanceSensor.measureDistanceCm();
    dist_m = dist_cm/100;
    Serial.println("distancia");
    Serial.println(dist_cm);
    Serial.println("cm | ");
    Serial.println(dist_m);
    Serial.println("m");
    Serial.println("---------------------------------------");
    delay(1000);
}
