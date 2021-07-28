#define redLED 4

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

  pinMode(19, OUTPUT);

  pinMode(14, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(14) == HIGH) 
  {
    digitalWrite(redLED, HIGH);
  }
  else 
  {
    digitalWrite(redLED, LOW);
  }
}
