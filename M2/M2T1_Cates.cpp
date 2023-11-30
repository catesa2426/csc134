#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2T1 - Receipt Calculator
Cates
9/6/23
This program should take the price of a meal, which is $5.99, and print out a simple text receipt.
It should include:
-The price before tax
-The amount of tax owed (8%)
-The total including tax
*/
int main()
{
    cout << "Receipt Calculator" << endl;
    //TODO: Ask the user the meal price
    double meal_price = 5.99;
    double tax_percent = 0.07; //for Cumberland county
    double tax_dollars = meal_price * tax_percent; //in dollars
    double total_price = meal_price + tax_dollars; //price including tax

    //tax dollars is meal price times tax percent
    //then add the tax in $ to get the total $

    //we included <iomanip> at the top and then "cout << fixed << setprecision (2);" for 2 decimal places
    cout << fixed << setprecision (2);
    //print the receipt
    cout << "The menu price: $" << meal_price << endl;
    cout << "Tax:            $" << tax_dollars << endl;
    cout << "_____________________________" << endl;
    cout << "Total:          $" << total_price << endl;
    cout << "Thank you for dining with us" << endl;

    //works on my machine
    //works as designed

    return 0;
}
