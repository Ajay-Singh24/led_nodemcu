void setup() {
  // put your setup code here, to run once:
  pinMode(D2,OUTPUT);
}

void loop() {
  for(int i=0;i<=255;i++){
    analogWrite(D2,i);
    delay(20);
    }
   for(int i=255;i>=0;i--){
    analogWrite(D2,i);
    delay(20);
    }  
}
