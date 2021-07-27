int guessNumber = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3500);

  if(guessNumber == 4)
  {
    Serial.println("Correct!");
  }
  else if(guessNumber < 4)
  {
    Serial.println("Too small");
  }
  else
  {
    Serial.println("Too large");
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
