void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);

  pinMode(19, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4, HIGH);
  digitalWrite(19, HIGH);
  delay(500);

  digitalWrite(4, LOW);
  digitalWrite(19, LOW);
  delay(500);
}
