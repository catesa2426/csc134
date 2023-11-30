#include <iostream>

using namespace std;

/*
M4T1- Example Loops
CSC-134
Cates
10/2/2023
*/

//Declare functions (define at bottom)
void hello();
void squares();

int main() {
  //Main menu
  cout << "M4T1 Menu"<< endl;
  cout << "1. Say Hello" << endl;
  cout << "2. Table of Squares" << endl;

  int choice;
  cout << "Select: ";
  cin >> choice;
  //if statements for 1 or 2
  //if choice = 1
  if (choice == 1) {
    hello();
  }
  //if choice =2
  else if (choice == 2){
    squares();
  }
  //if choice is not valid
  else {
    cout << "Not a valid choice." << endl;
  }

  
} // end of main

//define functions

void hello() {
  //use a loop to say hello five times
  int number = 0;
  while (number <= 5) {
    cout << "Hello!" << endl;
    number++;
  }
    cout << "Goodbye!" << endl; 
}

void squares() {
  //use loop to print a table of squares
  //from 1 to 10
  const int MIN = 1;
  const int MAX = 10;
  cout << "Table of Squares" << endl;

  cout << "Number\t\t" << "Number Squared" << endl;
  cout << "______________________________" << endl;
  //print number and its square
  for (int number = MIN; number <= MAX; number++){
    int square = number * number;
    cout << number << "\t\t" << square << endl;
  }
  cout << "______________________________" << endl;
}
