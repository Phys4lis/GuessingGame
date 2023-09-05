/* Author: Roger Li
 * Date: 9/5/23
 * This project is a game where the user will have to guess a number between 0-100, inclusive. The user will receive hints on whether their number is too high or too low and win once they guess the correct number.
 *
 * Rules:
 * 1. No global variables.
 * 2. No strings.
 * 3. You should include <iostream>, no stdio.
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int count = 0;
  int input = 0;
  char playAgain;
  
  bool yn = true;
  bool gotIt;
  while (yn == true) {
    // Get a random number between 0 and 100, inclusive.
    int randValue = rand()%100 + 1;
    gotIt = false;
    while (gotIt == false) {
      cout << "Guess a number between 0 and 100, inclusive. " << endl;
      cin >> input;
      // Inputted number is too high
      if (input > randValue) {
	cout << "Your number was too high." << endl;
	count++;  
      }
      // Inputted number is too low
      else if (input < randValue) {
	cout << "Your number was too low." << endl;
	count++;
      }
      // Correct number
      else {
	cout << "You got it!" << endl;
	count++;
	cout << "It took you " << count << " guesses!" << endl;
	gotIt = true;                       		
      }
      
    }
    // Play again?
    cout << "Would you like to play again> (y/n)" << endl;
    cin >> playAgain;
    // Yes
    if (playAgain == 'y') {
      yn = true;
      count = 0;
    }
    // No
    else if (playAgain == 'n') {
      cout << "Thanks for playing!" << endl;
      yn = false;
    }
  }
  return 0;
}
