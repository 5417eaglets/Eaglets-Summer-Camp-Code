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
  turnRight();
  turnLeft();
}

void turnRight(){
  driveLeftMotorForward(150);
  driveRightMotorForward(0);
  delay(700);
}

void turnLeft(){
  driveRightMotorForward(150);
  driveLeftMotorForward(0);
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

// ------------------------------Pre-Made Drive Functions
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
