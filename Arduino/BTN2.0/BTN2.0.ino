

#define btn_pin 0 //int 0 = pino 2
int cont=100;



void setup() {
  attachInterrupt(btn_pin,reset,RISING);
  //LOW DISPARA CONTINUAMENTE 
  //CHANGE DISPARO UNICO 
  //RISING: LOW-HIGH
  //FALLING HIGH-LOW
  pinMode(btn_pin,INPUT );
  Serial.begin(9600);
  
}

void loop() {
  for(cont;cont>0;cont--){
    Serial.println(cont);
    delay(1000);  
  }
  Serial.println("Reiniciando contagem");

  
  
  

}
void reset(){
  cont=100;
}
