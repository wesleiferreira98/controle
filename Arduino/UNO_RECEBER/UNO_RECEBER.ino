#define led 13


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  digitalWrite(led,0);
  

}

void loop() {
  if(Serial.available()>0){
    char c=Serial.read();
    if(c=='A'){
      digitalWrite(led,1);
      
    }else if(c=='a'){
      digitalWrite(led,0);
      
      
    }
  }
  

}
