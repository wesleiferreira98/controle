#include <LiquidCrystal_I2C_ByVac.h>
#include <LCD.h>
#include <FastIO.h>
#include <LiquidCrystal_SR2W.h>
#include <LiquidCrystal_SI2C.h>
#include <I2CIO.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR1W.h>
#include <SoftI2CMaster.h>
#include <LiquidCrystal_SR3W.h>
#include <LiquidCrystal_SR.h>
#include <SI2CIO.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE);


void setup() {
 lcd.begin(16,2);
 lcd.backlight();
  
  

}

void loop() {
  lcd.home();
  lcd.print("Weslei ferreira");
  lcd.setCursor(0,0);
  lcd.print("Arduino");
  delay(1000);
  lcd.clear();
  delay(1000);

}
