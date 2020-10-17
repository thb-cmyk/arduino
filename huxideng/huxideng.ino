


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=2;i<=7;i++)
  pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2;i<=7;i++){
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
}
