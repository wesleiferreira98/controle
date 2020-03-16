#include <LiquidCrystal.h>

LiquidCrystal LCD(7,6,5,4,3,2);

void setup() {
  LCD.begin(16,2);
  LCD.clear();
  

}

void loop() {
  LCD.setCursor(3,0);
  LCD.print("Weslei programador");
  LCD.setCursor(4,1);
  LCD.print("Arduino");
  delay(3000);

  for(int pos=0;pos<3;pos++){
    LCD.scrollDisplayLeft();
    delay(100);
  }

  for(int pos=0;pos<6;pos++){
    LCD.scrollDisplayRight();
    delay(100);
  }

  for(int pos=0;pos<3;pos++){
    LCD.scrollDisplayLeft();
    delay(100);
  }
  delay(1000);
  LCD.noDisplay();
  delay(500);
  LCD.display();
  delay(500);
  LCD.noDisplay();
  delay(500);
  LCD.display();
  delay(500);
  LCD.noDisplay();
  delay(500);
  LCD.display();
  delay(500);
  
  

}
