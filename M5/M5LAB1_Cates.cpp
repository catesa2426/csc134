
#include <iostream>
#include <string>

using namespace std;
/*
M5LAB1 - CYOA 
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
  cout << "You open peek to see who was wrapped in linen and it is your grandmother!" << endl;
  cout << "Do You: " << endl;
  cout << "1. Runaway and go home." << endl;
  cout << "2. Go inside and seek revenge." << endl;
  string choice;
  cin >> choice;

  if (choice == "1") {
    choice_go_home();
  }
  else if (choice == "2") {
    choice_enter_back_house();
  }
  else {
    cout << "You must choose!" << endl;
    choice_grave();
  }
}

void choice_enter_back_house(){
  cout << "You break in fron the back door and you enter into the kitchen." << endl;
  cout << "Do You: " << endl;
  cout << "1. Grab a knife." << endl;
  cout << "2. Eat. You are hungry anyways." << endl;
  string choice;
  cin >> choice;

  if (choice == "1") {
    choice_grab_knife();
  }
  else if (choice == "2") {
    choice_eat(); 
  }
  else {
    cout << "You must choose!" << endl;
    choice_enter_back_house();
  }
}

void choice_grab_knife(){
  cout << "You grab a knife and go upstairs" << endl;
  cout << "With each step you hear a man snore. loudly." << endl;
  cout << "Do You: " << endl;
  cout << "1. Continue going upstairs." << endl;
  cout << "2. Runaway and go home." << endl;
  string choice;
  cin >> choice;

  if (choice == "1") {
    cout << "You arrive at the second floor and you peek in the room with the snoring." << endl;
    cout << "You see a big lump in the bed covered by the blanket. You imagine it is the person snoring." << endl;
    cout << "You walk towards it and you noticed that there is a speaker next to the bed. you realize that the snoring is from the speaker and not the person." << endl;
    cout << "you pull the blanket off the person. Except, it is not a person, it's a skeleton!" << endl;
    cout << "You turn around and notice that the owner of the house is behind you. They stab you and you wake up in a hospital bed." << endl;
  }
  else if (choice == "2") {
    choice_go_home();
  }
  else {
    cout << "You must choose!" << endl;
    choice_grab_knife();
  }
}

void choice_eat() {
  cout << "You open the fridge and you see a big stew the owners planned to eat for lunch. Not anymore." << endl;
  cout << "Do you: " << endl;
  cout << "1. Microwave before eating." << endl;
  cout << "2. Eat it cold." << endl;
  string choice;
  cin >> choice;

  if (choice == "1") {
    cout << "You microwaved the stew and ate it. it was okay." << endl;
    choice_after_eating();
  }
  else if (choice == "2") {
    cout << "You ate it cold and you should have definitely warmed it up beforehand" << endl;
    choice_after_eating();
  }
  else {
    cout << "You must choose!" << endl;
      choice_eat();
  }
}

void choice_after_eating(){
  cout << "Now that you are full, you decide to go upstairs." << endl;
  cout << "Oh Wait! You feel sick. It was probably from the stew." << endl;
  cout << "Do you: " << endl;
  cout << "1. Contine and grab a knife and go upstairs." << endl;
  cout << "2. Give up and go home." << endl;
  string choice;
  cin >> choice;

  if (choice == "1") {
    choice_grab_knife();
  }
  else if (choice == "2") {
    choice_go_home();
  }
  else {
    cout << "You must choose!" << endl;
    choice_after_eating();
  }
}

void choice_go_home() {
    cout << "Okay! Goodbye!" << endl;
}

