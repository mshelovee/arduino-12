void setup() {
  Serial.begin(9600);
    pinMode(2,OUTPUT);
}

void loop() {
  int LDR = analogRead(A0);
    int LED = map(LDR,974,54,0,255);
  analogWrite(2,LED);
  Serial.print("\t\n LDR Değeri = ");
  Serial.print(LDR);
  Serial.print("\t\n LED Değeri = ");
  Serial.print(LED);
  delay(2);
}