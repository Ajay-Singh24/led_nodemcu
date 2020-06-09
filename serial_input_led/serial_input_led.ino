void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D2,OUTPUT);
}

void loop() {
  if(Serial.available()){
     //int s = Serial.read();
     char s = Serial.read();
     if(s=='A'){
      digitalWrite(D2,HIGH);
      }
     if(s=='B'){
      digitalWrite(D2,LOW);
      } 
     Serial.println(s);
    }
 
}
