int a = 30;
int b = 20;
int difference = a - b;
bool monday = true;
bool friday = false;
bool anExpression = 3 > 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3500);
  Serial.println("Hello, world!");
  Serial.println();
  
  Serial.println(a + b);
  Serial.println(difference);
  Serial.println();

  Serial.println(monday);
  Serial.println(friday);
  Serial.println(anExpression);
}

void loop() {
  // put your main code here, to run repeatedly:

}
