#include <iostream>

using namespace std;

/*
CSC - 134
Cates
10/16/23
The Rules:
Submission due by halloween.
Must Include one of:
-Spooky Thing
-Fall Thing
-Football
*/
void yes_play();

int main()
{
    //Title Screen
    string play;
    cout << "Halloween Jamboree" << endl;
    cout << "Play?" <<  endl;
    cin >> play;

    //if player says yes, go to a new function
    if (play == "yes"){
        cout << "let's play!" << endl;
        yes_play();
    }
    //If player says no, go back to title screen
    //TODO: make the title screen reapear
    else if (play == "no") {
        cout << "Okay, Goodbye" << endl;
    }
    //if player inputs anything else, go back to title screen
    //TODO: make title screen reapear
    else {
        cout << "Please input either a yes or a no." << endl;
    }

    return 0;
}

//if player says yes, code goes here
void yes_play()
{
    cout << "Hello Player! What is your name?" << endl;
    string name;
    cin >> name;
    cout << "Welcome " << name << "!" << endl;
    cout << "You have arrived in your new town. As you pass by the sign that says \"Westford\", you saw a spray painted word that reads \"RUN\"." << endl;

}
