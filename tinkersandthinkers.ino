#define blueLED 19
#define redLED 4
#define Lswitch 14
#define onOff 15

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
  // This lets you turn the lights turn on and off. To make it turn on, put HIGH. To make it to turn off, put LOW.
  // If you want to use the blue light, replace redLED with blueLED. 
  digitalWrite(redLED, HIGH);                         
  if(digitalRead(Lswitch) == HIGH){
    // You can change the speed of how fast the robot drives backward after hitting a wall. 
    // Just replace the number in the parenthesis with any number between 0 and 255.
    driveBackward(150);
    // This is how long the robot drives backwards for. You can change the time. 
    // 1 second is equal to 1000 milliseconds, so put 1000 in the parenthesises if you want to have it drive backward 
    // for 1 second.       
    delay(500);
    // The robot can turn left or right. If you want the robot to to turn right, replace this line of code with turnRight() 
    // instead of turnLeft().               
    turnLeft();               
  }
  else{
    // You can change the speed of how fast the robot drives. Just replace the number in the parenthesis with 
    // any number between 0 and 255.
    driveForward(150);        
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
