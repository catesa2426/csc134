#include <iostream>
#include <iomanip>
#include <string>

/*
M2HW1- 4 Questions
Cates
CSC-134
9/13/23
*/

using namespace std;

int main()
{
    /*
    Ask for name, starting balance, deposit amount, and withdrawal amount.
    Then display name on account, account #, and final balance.
    For improvement, include whitespace in name and print money with two decimal points.
    */
    cout << "Question 1" << endl;

    string name;
    double deposit;
    double withdrawal;

    //Ask for name
    cout << "Thank You For Using USAA!" << endl;
    cout << "What is your name?" << endl;
    cin >> name;

    //ask for amount of deposit
    cout << "How much are you depositing?" << endl;
    cin >> deposit;

    //ask for withdrawal amount
    cout << "How much are you withdrawing" << endl;
    cin >> withdrawal;

    //calculate final balance
    double balance;
    balance = deposit- withdrawal;
    //display name , account #, and account balance
    cout << fixed <<setprecision(2);
    cout << "Name: " << name << endl;
    cout << "Account #3802725384" << endl;
    cout << "Account Balance: $" << balance << endl;

    /*
    Change the cost of cubic feet in M2LAB1 to $0.3.
    Charge can't go over 0.52.
    */
    cout << "______________________________________________________________________" << endl;
    cout << "Question 2" << endl;
    cout << "General Crates Pricing System" << endl;

    //declare the variables
    const double COST_PER_CUBIC_FOOT =0.3; //$ per cubic foot
    const double CHARGE_PER_CUBIC_FOOT = 0.51; //$ per cubic foot

    double length, width, height; // in feet
    double volume; //in cubic foot
    double cost, charge, profit; //$

    //get the crate dimensions
    cout << "Enter length, width, and height in feet. Press ENTER after each value." << endl;
    cin >> length >> width >> height;

    //calculate the volume
    volume = length * width * height;

    //find the cost and price for that volume
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume;

    //find the profit
    profit = charge - cost;

    //output answer
    // use 2 decimals
    cout << fixed << setprecision(2);
    cout << "That crate is: " << volume << " cubic ft." << endl;
    cout << "Cost to make:  $" << cost << endl;
    cout << "Price to sell: $" << charge << endl;
    cout << "Profit made:   $" << profit <<endl;

    /*
    Ask for amount of pizza, slice per pizza, and amount of visitors (each visitor gets 3 slices).
    Calculate and display the amount of slices are left over.
    */
    cout << "______________________________________________________________________" << endl;
    cout << "Question 3" << endl;
    
    // ask for pizza amount
    int pizza_amount;
    cout << "How many pizzas did you buy?" << endl;
    cin >> pizza_amount;

    // ask for slice amount per pizza
    int slice_per_pizza;
    cout << "How many slices are there in each pizza?" << endl;
    cin >> slice_per_pizza;

    // ask for # of visitors
    int number_of_visitors;
    cout << "How many visitors will there be?" << endl;
    cin >> number_of_visitors;

    //calculate the slice per pizza
    int full_slice_amount;
    full_slice_amount = pizza_amount * slice_per_pizza;

    //calculate the amount left
    int slices_eaten;
    int slices_left;
    slices_eaten = 3 * number_of_visitors;
    slices_left= full_slice_amount - slices_eaten;
      
    //Display slice total amount, slice per visitor, and slices left
    cout << "There are " << full_slice_amount << " slices in total." << endl;
    cout << "Each visitor will get 3 slices. Therefore, " << slices_eaten << " slices will be eaten."<< endl;
    cout << "If each visitor eats 3 slices, " << slices_left << " slices will be left." << endl;
  
  /*
    The program should output this message:
    "Let's go FTCC
    Let's go FTCC
    Let's go FTCC
    Let's go Trojans"
    You should use the following variables in your cout statements: string school, team; 
    For Bonus Points: You can't print out any raw strings ("that look like this"), only string variables.
    you can only use these string variables: string letsGo, school, team, cheerOne, cheerTwo;
    You must use string concatenation to build the strings cheerOne and cheerTwo .
    */
    cout << "______________________________________________________________________" << endl;
    cout << "Question 4" << endl;

    string letsGo = "Let's go";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + " " + school;
    string cheerTwo = letsGo + " " + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}