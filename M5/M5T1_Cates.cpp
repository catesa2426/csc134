
#include <iostream>
#include <string>

using namespace std;
/*
M5T1 - CYOA 
CSC 134
Cates
10/23/23
*/


void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_grave();
void choice_enter_back_house();
void choice_grab_knife();
void choice_eat();
void choice_after_eating();

int main() {
    cout << "M5T1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    string choice;
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_front_door();
    } else if (choice == "2") {
        choice_back_door();
    } else if (choice == "3") {
        choice_go_home();
    } else if (choice == "4") {
        cout << "Ok, quitting game" << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        main_menu();
    }
}

void choice_front_door() {
    string choice;
    cout << "Try the front door." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_back_door();
    } else if (choice == "2") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door(); // recursion
    }
}

void choice_back_door() {
    cout << "You go arond back, there's a hole in the fence" << endl;
  cout << "You see a couple of interesting things. Do you: " << endl;
  cout << "1. Investigate the open grave next to the shed" << endl;
  cout << "2. Try the back door of the house." << endl;
  string choice;
  cin >> choice;
  if (choice == "1") {
    choice_grave();
  }
  else if (choice == "2") {
    choice_enter_back_house();
  }
  else {
    cout << "You must choose!" << endl;
    choice_back_door();
  }
}

void choice_grave() {
  cout << "You look into the grave to see what is inside." << endl;
  cout << "You find a body wrapped in white linen." << endl;
  cout << "You move closer to investigate but you were pushed into the grave." << endl;
  cout << "You hit your head and were unconscious for four hours." << endl;
}

void choice_enter_back_house(){
  cout << "You break in fron the back door and you enter into the kitchen." << endl;
  cout << "You triggered the alarm system and the police are on their way." << endl;
  choice_go_home();
}


void choice_go_home() {
    cout << "Okay! Goodbye!" << endl;
}

