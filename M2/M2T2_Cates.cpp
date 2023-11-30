#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC 134
M2T2 - Receipt Calculator V2
Cates
9/11/23
This program should take the price of a meal, which is $5.99, and print out a simple text receipt.
The user should enter:
-the name of food item
-the price of item
-how many they want

It should include:
-The price before tax
-The amount of tax owed (8%)
-The total including tax
*/
int main()
{
    //set up variables
    double meal_price = 0;
    double tax_percent = 0.07; //for Cumberland county
    double item_price;
    int num_items;
    string item_name;

    cout << "Welcome!" << endl;

    //ask for order
    cout <<"What would you like today?" << endl;
    cin >> item_name;

    cout << "What's the price on " << item_name << "?"<< endl;
    cin >> item_price;

    cout<< "How many " << item_name << "(s) do you want?" << endl;
    cin >> num_items;

    //calculate meal price
    meal_price = num_items *item_price;

    //print the reciept
    //tax dollars is meal price times tax percent
    //then add the tax in $ to get the total $
    double  tax_dollars = meal_price * tax_percent;
    double total_price = meal_price +tax_dollars;

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
