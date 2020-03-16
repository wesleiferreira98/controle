#include <CFB_led.h>


CFB_led ld1(13);
CFB_led ld2(7);
void setup() {
  

}

void loop() {
  ld1.acender_t(2000);
  ld2.acender_t(3500);
  
 
}
