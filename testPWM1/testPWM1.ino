void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=255;i++){
  analogWrite(3,i);
  delay(10);
  }
  
}
