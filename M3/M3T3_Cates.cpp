#include <iostream>

using namespace std;
/*
M3T3- Setting Up a Simple Menu
Cates
CSC-134
9/25/23
We'll set up our program to list three options, and then call code for the option that the user picks.
*/

//First, the list of functions.
//Declare
void Question1();
void Question2();
void Question3();

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
    else {
        cout << "Sorry, that is not a valid choice." << endl;
    }
}
    //Third, the full functions
    //Define

    void Question1(){
    cout << "Question 1" << endl;
    }
     void Question2(){
    cout << "Question 2" << endl;
     }
     void Question3(){
    cout << "Question 3" << endl;
    }




