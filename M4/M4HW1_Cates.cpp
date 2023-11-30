#include <iostream>
using namespace std;

/*
CSC- 134
Cates
10/16/23
For this assignment we will create a program that prints a multiplication table (or "times table").
Attempt: Gold
Here's an example of one line of output from the program:
5 times 1 is 5.
We already know how to print a single line like the above statement using variables within a cout statement. I recommend making sure you have one line of output working first, and then build the loop.
*/

void question1();
void question2();
void question3();

int main() {
int choice;
cout << "Which Question would you like to see?" << endl;
  cin >> choice;

  if (choice == 1){
    question1();
  }
  else if (choice == 2) {
    question2();
  }
  else if (choice == 3) {
    question3();
  }
  else {
    cout << "Only valid number is 1, 2, and 3." << endl;
  }
}

void question1(){
  //For your program, you should use a while loop to print the "5 times" table, using the format above. This means it should print everything from "5 times 1 is 5." to "5 times 12 is 60." 
for (int i= 1; i <= 60; i++) {
  int ans = 5 * i;
  cout << "5 times " << i << " is " << ans << "." << endl;
  } 
}

void question2() {
/*
Instead of the "5 times" table, ask the user to enter a number from 1 to 12. Create that table instead.
Here's an example of output: (Yours may look different)
Enter a number from 1 to 12? 10
10 times 1 is 10.
10 times 2 is 20.
<... more lines here...>
10 times 12 is 120.
*/
int num;
cout << "Pick a number between 1 to 12." << endl;
cin >> num;
for (int i = 1; i <= 12; i++) {
  int ans = num * i;
  cout << num << " times " << i << " is " << ans << "." << endl;
    }
  }

void question3() {
/*
For this portion, you'll need to look at input validation from the same chapter. Program 5-5 (from "Gaddis Slides - Loops" in this module) is an example of it, but there are a few others. Your plan of attack should be a loop which does not exit until the user enters a valid number. Only after this does the program continue to the second loop, which prints the times table.
Modify the program so that if the user doesn't select a number between 1 to 12, your program keeps asking them until they select a valid number. 
*/
int num;
  do {
    cout << "Pick a number between 1 to 12." << endl;
    cin >> num;
    } 
  while (num < 1 || num > 12);
  
  for (int i = 1; i <= 12; i++) {
    int ans = num * i;
    cout << num << " times " << i << " is " << ans << "." << endl;
    }
}
