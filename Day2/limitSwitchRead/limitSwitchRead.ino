#define redLED 4
#define blueLED 19
#define limitSwitch 14

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

  pinMode(blueLED, OUTPUT);

  pinMode(limitSwitch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  onoffLED();
}

void onoffLED(){
  if (digitalRead(limitSwitch) == HIGH) {
    digitalWrite(redLED, HIGH);
    digitalWrite(blueLED, HIGH);
  }
  else {
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, LOW);
  }
}
