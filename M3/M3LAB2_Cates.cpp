#include <iostream>

using namespace std;

/*
  To complete the program:
Start with a binary choice for the player
Have an if/ else if / else choice for:
Picked first choice
Picked second choice
Didn't pick either (error)
Next, make one of those branches a "continuation", and:
Also put a binary choice within that branch
The player "wins" if they make both "correct" choices - one for the first choice, one for the second.
*/

int main() {
  //Greeting, ask for player name, explaining the game
string player_name;
string choice1;
  cout << "You are Player 1." << endl;
  cout << "What is your player name" << endl;
  cin >> player_name;
  cout << "Hello " << player_name << "!" << endl;
  cout << "You are low on energy. You must go to the Bamboo Cafe and replenish." << endl;
  cout << "But remember, you have a couple allergies.";
  cout << "You are allergic to shellfish and any nut." << endl;
  cout << "Do you want to continue?" << endl;
  cin >> choice1;

  //"yes" if statement
  if ("yes" == choice1)
  {
      int choice2;

  // Bamboo cafe greeting, display menu
  cout << "Welcome to the Bamboo Cafe!" << endl;
  cout << "Choose what you want from the menu below. Type the menu number." << endl;
  cout << "1. Shrimp" << endl;
  cout << "2. Cake" << endl;
  cout << "3. Muffin" << endl;
  cout << "4. PB & J Sandwich" << endl;
  cout << "5. Lobster" << endl;
  cout << "6. Walnut Cupcake" << endl;
  cin >> choice2;

    //display when player picks wrong answer
  if (choice2 == 1 || choice2 == 4 || choice2 == 5 || choice2 == 6){
    cout << "You had an allergic reaction. The people in cafe saw that you puffed up and turned completely red. They called the paramedics but they were too late." << endl;
    cout << "You Died." << endl;
    cout << "Game Over" << endl;
  }
    //display if player picks right answer
  else if (choice2 == 2 || choice2 == 3){
    cout << "Great! You are no longer hungry, you win!." << endl;
  }
    //display if player picks no answer
  else {
    cout << "You did not eat anything. You are too malnourished." << endl;
    cout << "You died" << endl;
    cout << "Game Over" << endl;
  }
  }
    //"no" if statment
  else if ("no" == choice1)
  {
      cout << "Okay! You Lose! Goodbye!" << endl;
  }
else {
  cout << "Invalid answer. You lose!" << endl;
}
} 