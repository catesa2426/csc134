#include <iostream>
#include <iomanip>

/*
M2LAB1-Crate Example
Cates
CSC-134
9/13/23
Find the volume of crate of a given size
Find the cost to make it
Find the price we sell it for
Find the profit
*/

using namespace std;

int main()
{
    cout << "General Crates Pricing System" << endl;

    //declare the variables
    const double COST_PER_CUBIC_FOOT =0.23; //$ per cubic foot
    const double CHARGE_PER_CUBIC_FOOT = 0.5; //$ per cubic foot

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
    cout << "Cost to make: $" << cost << endl;
    cout << "Price to sell: $" << charge << endl;
    cout << "Profit made: $" << profit <<endl;

    return 0;
}
