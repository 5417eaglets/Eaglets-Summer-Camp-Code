// ------------ In this program, the LED switches between on and off each time the limit switch is pressed
bool isLEDOff = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(14, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(isLEDOff && digitalRead(14) == HIGH) // if the LED is off, and if the limit switch is pressed
  {
    digitalWrite(4, HIGH);
    digitalWrite(19, HIGH);
    isLEDOff = false;
    delay(500);
  }
  else if(!isLEDOff && digitalRead(14) == HIGH) // if the LED is on (not off), and if the limit switch is pressed
  {
    digitalWrite(4, LOW);
    digitalWrite(19, LOW);
    isLEDOff = true;
    delay(500);
  }
  
}
