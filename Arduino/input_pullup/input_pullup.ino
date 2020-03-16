#define btn 3
#define led 4
void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT_PULLUP);
  
 

}

void loop() {
  if(digitalRead(btn)){
    digitalWrite(led,digitalRead(btn));
    
    
    }else{
      digitalWrite(led,digitalRead(btn));
      
      
    }
 
}
