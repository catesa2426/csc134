#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <cstdlib>

using namespace std;
/*
M3HW1- Gold
Cates
CSC-134
9/25/23
Answer 4 Questions using the Menu system.
*/

//First, the list of functions.
//Declare
void Question1();
void Question2();
void Question3();
void Question4();

//Second, main
int main()
{
    cout << "Main Menu" << endl;
    //Question1();
    //Question2();
    //Question3();
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "Your Choice? ";

    int choice;
    cin >> choice;
    cout << "You chose: " << choice << endl;

    //Now branch on the choice
    if (choice == 1){
            Question1();
    }
    else if (choice == 2){
        Question2();
    }
    else if (choice == 3){
        Question3();
    }
      else if (choice == 4){
        Question4();
    }
    else {
        cout << "Sorry, that is not a valid choice." << endl;
    }
}
    //Third, the full functions
    //Define

    void Question1(){
    cout << "Question 1" << endl;
    string pizza_choice;
    cout << "Hello my name is Anna. I am your C++ program!" << endl;
    cout << "I have a question. Do you like pizza?" << endl;
    cin >> pizza_choice;
    if (pizza_choice == "yes"){
        cout << "Me too!" << endl;
        int pizza_choice2;
        cout << "What kind of pizza?" << endl;
        cin >> pizza_choice2;
        cout << "Ew" << endl;
    }
    else if (pizza_choice == "no") {
        cout << "That's okay" << endl;
    }
    else {
        cout << "Do you like something else?" << endl;
        string alternate;
        cin >> alternate;
        if (alternate == "no") {
            cout << "That's fine" << endl;
        }
        else {
        cout << "I actually hate " << alternate << ". But I won't yuck your yum" << endl;
        }
    }
    }
     void Question2(){
    cout << "Question 2" << endl;
    cout << "Receipt Calculator" << endl;
    //Ask the user the meal price
    double meal_price;
    cout << "What is the price of the meal?";
    cin >> meal_price;
    double tax_percent = 0.07; //for Cumberland county
    double tax_dollars = meal_price * tax_percent; //in dollars

    //ask if the order is take out (2) or dine in (1)
    int option;
    double tip_percent;
    cout << "Will this order be dining in or take out (Enter 1 for dine in and 2 for takeout)?";
    cin >> option;

    if (option == 1) {
        tip_percent = 0.15;
    }
    else if (option == 2) {
        tip_percent = 0.00;
    }
    else {
        cout << "Not a valid option" << endl;
    }

    double total_tip = meal_price * tip_percent;
    double before_taxe = total_tip + meal_price;
    double total_price = meal_price + tax_dollars; //price including tax

    //tax dollars is meal price times tax percent
    //then add the tax in $ to get the total $

    //we included <iomanip> at the top and then "cout << fixed << setprecision (2);" for 2 decimal places
    cout << fixed << setprecision (2);
    //print the receipt
    cout << "The menu price: $" << meal_price << endl;
    cout << "Tip:            $" << total_tip << endl;
    cout << "Tax:            $" << tax_dollars << endl;
    cout << "_____________________________" << endl;
    cout << "Total:          $" << total_price << endl;
    cout << "Thank you for dining with us" << endl;

    //works on my machine
    //works as designed
     }
     void Question3(){
    cout << "Question 3" << endl;
    //Greeting, ask for player name, explaining the game
string player_name;
int choice1;
  cout << "You are Player 1." << endl;
  cout << "What is your player name" << endl;
  cin >> player_name;
  cout << "Hello " << player_name << "! ";
  cout << "Welcome to Utopia! You are a poor man who gets by through petty theft." << endl;
  cout << "We will start with your first pickpocket. You have a chose between an old woman (1), a bodybuilder (2), or the President of Utopia (3)." << endl;
  cout << "You can choose by typing the corresponding number.";
  cin >> choice1;

  if (choice1 == 1) {
        int choice2;
    cout << "Great! You were able to stick your hand in the old woman's pocket!" << endl;
    cout << "now you have a choice to steal cash (4), lipstick (5), a phone (6), or a picture of her grandchildren (7). Enter the corresponding number." << endl;
    cin >> choice2;
  if (choice2 == 4){
    cout << "You were successful in stealing cash."<< endl;
    cout << "You Won!" << endl;
  }
    if (choice2 == 5 ||choice2 == 7){
    cout << "You managed to steal from the old lady but you have no use of the item."<< endl;
    cout << "You Lost." << endl;
  }
     if (choice2 == 6){
    cout << "While you were taking the phone out her pocket, the phone rang! The old lady saw that you were stealing from her and she hit you with her bag."<< endl;
    cout << "You Lost." << endl;
  }
  }
  else if (choice1 == 2) {
 cout << "Sorry, the bodybuilder felt you digging in his pocket. He picked you up and threw you across the street." << endl;
    cout << "You Lost." << endl;
  }
  else if (choice1 == 3) {
cout << "When the president saw you pickpocketing him, he whistled and three men in suits started running towards you." <<endl;
    cout << "It is best to say that you lost." << endl;
  }
  else {
    cout << "Not a valid choice. Start Over." <<endl;
  }
    }
    void Question4(){
     int seed(time(0));
      srand (seed);
        //assign random number
int num1 = rand() % 10;
int num2 = rand() % 10;
        int answer;
        //display equation
        cout << "Your equation is:" << num1 << " + " << num2 << endl;
        cin >> answer;
        if (answer == (num1 + num2)) {
          cout << "Correct!" << endl;
        }
        else if (answer != (num1 + num2)) {
          cout << "Incorrect." << endl;
        }
        else {
          cout << "Answer must be a number." << endl;
        }
    }
    // }



