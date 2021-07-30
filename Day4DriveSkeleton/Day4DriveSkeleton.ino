#define blueLED 19
#define redLED 4
#define Lswitch 14

// —————————————————————————  Motors
int motorRight[] = {16, 17, 10};
int motorLeft[] = {11, 12, 9};

void setup() {
  Serial.begin(9600);

  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  pinMode(Lswitch, INPUT);
  
  // Setup motors
  int i;
  for(i = 0; i < 3; i++){
    pinMode(motorLeft[i], OUTPUT);
    pinMode(motorRight[i], OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly: 
  // sample code calling the functions; feel free to change it
  if(digitalRead(Lswitch) == HIGH){
    turnRight();
    driveForward(150);
    delay(500);
    turnLeft();
  }
  else{
    driveForward(150); // power between 0-255
  }
}

// ------------------------- Functions made earlier
void turnLeft(){
  driveBackward(150);
  delay(700);
  driveRightMotorForward(180); // number is between 0-255
  driveLeftMotorForward(0);
  delay(700);
}

void turnRight(){
  // power always has to be between 0 - 255
  driveBackward(150);
  delay(700);
  driveLeftMotorForward(180); // if you increase the turning power, decrease the amount of time you turn for
  driveRightMotorForward(0);
  delay(700);
}

void driveForward(int power){
  driveLeftMotorForward(power);
  driveRightMotorForward(power);
}

void driveBackward(int power){
  driveLeftMotorBackward(power);
  driveRightMotorBackward(power);
}

// ------------------------------ Pre-made drive functions
void driveLeftMotorForward(int power){
  analogWrite(motorLeft[2], power);
  digitalWrite(motorLeft[0], LOW);
  digitalWrite(motorLeft[1], HIGH);
}

void driveRightMotorForward(int power){
  analogWrite(motorRight[2], power);
  digitalWrite(motorRight[0], LOW);
  digitalWrite(motorRight[1], HIGH);
}

void driveLeftMotorBackward(int power){
  analogWrite(motorLeft[2], power);
  digitalWrite(motorLeft[0], HIGH);
  digitalWrite(motorLeft[1], LOW);
}

void driveRightMotorBackward(int power){
  analogWrite(motorRight[2], power);
  digitalWrite(motorRight[0], HIGH);
  digitalWrite(motorRight[1], LOW); 
}
