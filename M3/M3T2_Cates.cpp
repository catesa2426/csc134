#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
M3T2 - The House Always Win
CSC-134
Cates
9/18/23
(At the beginning, we can ask the user to tell us what the dice rolls are, and then we'll use rnd(). )
We'll start with the very basics:
-The player rolls two 6-sided dice (abbreviated 2d6.)
-7 or 11 -> instant win
-2, 3, or 12 -> instant loss
The program should ask for the dice rolls, then use if statements to tell the user the result.
Additional Features:
-rnd() function used to roll the dice -- so we'll change the user input to something like "press any key to roll."
-Specific response messages for the losses (for example, 2 = "snake eyes")
*/

int roll(){
    //new function: roll 1 to 6
    int roll = rand() %6 +1 ;
    return roll;
    }

int main()
{
    cout << "Welcome to the Craps Table" << endl;
    int die1, die2, total;

    //roll is 2d6 (two 6-siders)
    //cout << "What are the two rolls?" << endl;
    //cin >> die1 >> die2;
    int seed = time(0);
    cout << "Today's Lucky Number is: " << seed<< endl;
    //cin >> seed;
    srand (seed);
    //random roll
    die1 = roll();
    die2 = roll();
    total = die1+ die2;
    cout << "You Rolled: ";
    cout << die1<< "+" << die2;
    cout << " = " << total << endl;
    // Do if / else if for:
    // 7 or 11 (win)
    //2,3,12 (lose)
    if ( total == 7 || total == 11){
        // || is or
        cout << " You Win!" << endl;
    }
    else if (total == 2 || total == 3 || total ==12 ){
        cout << "You Lose!" <<endl;
    }
    else { //(total = 4 || total = 5 || total=6 || total =8 || total =9 || total =10);{
        cout <<"Did not win or lose :( " << endl;
    }

    return 0;
}
