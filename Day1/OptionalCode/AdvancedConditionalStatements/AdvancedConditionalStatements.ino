/* Favorite Number Game
 * A number between 1 and 10 is assigned as the "favorite number"
 * Task: Create an integer variable called guessNumber, and check if it equals the "favorite number."
 * Details:
 *  If guessNumber equals the favorite number, program prints "You've guessed the favorite number!"
 *  Else if guessNumber isn't between 1 and 10, program prints "Please guess a number between 1 and 10."
 *  Else if guessNumber is between 1 and 10, but guessNumber is smaller than the favorite number, program prints "Too small!"
 *  Else if guessNumber is between 1 and 10, but guessNumber is greater than the favorite number, program prints "Too large!"
 */

int favNumber = 8;
int guessNumber = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(3500); 

  if(guessNumber == favNumber)
  {
    Serial.println("You've guessed the favorite number!");
  }
  else if(guessNumber < 1 || guessNumber > 10) // you can find the | sign (pipe sign) above the "enter" or "return" key on your keyboard
  {
    Serial.println("Please guess a number between 1 and 10");
  }
  else if(guessNumber < favNumber)
  {
    Serial.println("Too small!");
  }
  else 
  {
    Serial.println("Too large!");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
