#define led 13
int valor_lido;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop() {
  if(Serial.available()>0){
    valor_lido=-Serial.read();
  }
  if(valor_lido=='1'){
    digitalWrite(led,1);
  }else{
    digitalWrite(led,0);
  }
 

}
