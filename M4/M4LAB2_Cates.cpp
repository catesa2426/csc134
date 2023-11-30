#include <iostream>
#include "functions.h"
using namespace std;

/*
 M4LAB2- Simple Menus 
 CSC-134 
 Cates
 10/11/23
 This program will do the following:
 Ask the user to select option 1, 2, 3, or 4.
 If they do choose 1,2, or 3, or 4, carry out an action using if block ("option one", "option 
 two", or quit)
 If they choose anything else, ask them again until they do choose a valid option.
 This will give you the basis of a simple menu that you can use in your own applications.
*/

int main() {
  //ask user to select option 1,2,3,4

  cout << "Menu" << endl;
  cout << "1. Counting Test" << endl;
  cout << "2. Dice Roller" << endl;
  cout << "3. Running Total and Average" << endl;
  cout << "4. Quit Program" << endl;
  cout << "Your choice: " << endl;
  int option;
  cin >> option;
  cout << "You chose " << option << endl;

  //call diferent funtion based on choice
  if (option == 1) {
    counting_test();
  }
  else if (option ==2){
    dice_roller();
  }
  else if (option == 3) {
    total_average();
  }
  else if (option == 4) {
    cout << "Goodbye!" << endl;
  }
  else {
    cout << "Please choose 1, 2, 3, or 4." << endl;
  }
}