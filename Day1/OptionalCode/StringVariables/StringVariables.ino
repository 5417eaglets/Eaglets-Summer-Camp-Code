String greeting1 = "Hello, my name is ";
String myName = "Eaglets";
String greeting2 = "I am ";
int age = 100;
String greeting3 = " years old";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3500); 
  Serial.println(greeting1 + myName); // print "Hello, my name is Eaglets"
  Serial.println(greeting2 + age + greeting3); // print "I am 100 years old"

}

void loop() {
  // put your main code here, to run repeatedly:

}
