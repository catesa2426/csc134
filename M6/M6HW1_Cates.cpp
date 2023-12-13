#include <iostream>
#include <iomanip>
#include "SinglyLinkedList.h"
using namespace std;

/* 
  M6HW1 
  Cates
  12/12/23
  CSC - 134
  Gold
*/

void question1();
void question2();
void question3();
void question4();

int main() {
  cout << "What question (1-3) do you want to see? [ENTER 4 TO QUIT]" << endl;
  int question;
  cin >> question;
  if (question == 1) {
    question1();
  }
  else if (question == 2) {
    question2();
  }
  else if (question == 3) {
    question3();
  }
  else if (question == 4) {
    cout << "Okay, bye!" << endl;
  }
  else {
    cout << "Input a valid question number." << endl;
    main();
  }
}

void question1() {
  //Create a text-based currency converter program that allows users to convert between different currencies. The program should provide a menu with conversion options and display the converted amounts based on user input.
  //1 USD = 0.85 Euro; 1 Euro = 1.18 USD; 1 USD = 110.24 Japanese Yen; 1 Japanese Yen = 0.0091 USD

  cout << "Currency Converter" << endl;
  cout << "1. Convert USD to Euro" << endl;
  cout << "2. Convert Euro to USD" << endl;
  cout << "3. Convert USD to Japanese Yen" << endl;
  cout << "4. Convert Japanese Yen to USD" << endl;
  cout << "5. Quit" << endl;
  
 int choice;
  cout << "Enter: ";
  cin >> choice;
  
  if (choice == 1) {
    cout << fixed << setprecision(2);
    double usd;
    cout << "Enter USD: ";
    cin >> usd;
    double euro = usd * 0.85;
    cout << "Euro: " << euro << endl;
    question1();
  }
  else if (choice == 2) {
    cout << fixed << setprecision(2);
    double euro;
    cout << "Enter Euro: ";
    cin >> euro;
    double usd = euro * 1.18;
    cout << "USD: " << usd << endl;
    question1();
  }
  else if (choice == 3) {
    cout << fixed << setprecision(2);
    double usd;
    cout << "Enter USD: ";
    cin >> usd;
    double yen = usd * 110.24;
    cout << "Japanese Yen: " << yen << endl;
    question1();
  }
  else if (choice == 4) {
    cout << fixed << setprecision(2);
    double yen;
    cout << "Enter Japanese Yen: ";
    cin >> yen;
    double usd = yen * 0.0091;
    cout << "USD: " << usd << endl;
    question1();
  }
  else if (choice == 5) {
    main();
  }
  else {
    cout << "The valid choices are 1 through 5. Run the program again and select one of those." << endl;
    question1();
  }
}

void question2() {
  //Develop a program that functions as a basic unit converter. The program should present a menu with various conversion options:

  cout << "Unit Converter" << endl;
  cout << "1. Convert Miles to Kilometers" << endl;
  cout << "2. Convert Kilometers to Miles" << endl;
  cout << "3. Convert Pounds to Kilograms" << endl;
  cout << "4. Convert Kilograms to Pounds" << endl;
  cout << "5. Quit" << endl;
  
  int choice;
  cout << "Enter: ";
  cin >> choice;
  
  if (choice == 1) {
    cout << fixed << setprecision(2);
    double miles;
    cout << "Enter Miles: ";
    cin >> miles;
    double kilometers = miles * 1.60934;
    cout << "Kilometers: " << kilometers << endl;
    question2();
  }
  else if (choice == 2) {
    cout << fixed << setprecision(2);
    double kilometers;
    cout << "Enter Kilometers: ";
    cin >> kilometers;
    double miles = kilometers * 0.621371;
    cout << "Miles: " << miles << endl;
    question2();
  }
  else if (choice == 3) {
    cout << fixed << setprecision(2);
    double pounds;
    cout << "Enter Pounds: ";
    cin >> pounds;
    double kilograms = pounds * 0.453592;
    cout << "Kilograms: " << kilograms << endl;
    question2();
  }
  else if (choice == 4) {
    cout << fixed << setprecision(2);
    double kilograms;
    cout << "Enter Kilograms: ";
    cin >> kilograms;
    double pounds = kilograms * 2.20462;
    cout << "Pounds: " << pounds << endl;
    question2();
  }
  else if (choice == 5) {
    main();
  }
  else {
    cout << "The valid choices are 1 through 5. Run the program again and select one of those." << endl;
    question2();
  }
  
}

void question3() {
  /* take any previous question from an earlier homework assignment that you had trouble with, and knowing what you know now, re-implement the program. You should either:
-Fix a bug in the existing program, or
-Add a new feature such as input validation Within these guidelines, anything is fine.
*/
  cout << "M6T3 Revision" << endl; 
  cout << "----------------------" << endl;
  LinkedList groceryList;
   Node* node_eggs = new Node("Eggs");
   Node* node_milk = new Node("Milk");
   Node* node_bread = new Node ("Bread");
   Node* node_onions = new Node ("Onions");


  // append adds things to the tail
  // prepend adds them to the head

  groceryList.Append(node_eggs);   
  groceryList.Append(node_milk);
  groceryList.Append(node_bread);
  groceryList.Append(node_onions);  



   // Output list
   cout << "Grocery List: ";
  groceryList.PrintList(cout);

  //Remove from list
  while (!groceryList.IsEmpty()) {
    cout << "What did you get?";
    string item;
    cin >> item;

  if (item == "eggs") {
     groceryList.Remove(node_eggs);

    cout << "Grocery List: " ;
    groceryList.PrintList(cout);

  }
  else if (item == "milk") {
  groceryList.Remove(node_milk);

    cout << "Grocery List: " ;
    groceryList.PrintList(cout);
  }
  else if (item == "bread") {
    groceryList.Remove(node_bread);

    cout << "Grocery List: " ;
    groceryList.PrintList(cout);
  }
  else if (item == "onions") {
    groceryList.Remove(node_onions);

    cout << "Grocery List: " ;
    groceryList.PrintList(cout);
  }
  else {
    cout << "That item is not on the list.";

    cout << "Grocery List: " ;
    groceryList.PrintList(cout);
  }
  }
  main();
}