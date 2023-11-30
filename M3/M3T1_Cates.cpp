#include <iostream>

using namespace std;

/*
M3T1 - Comparing Rectangles
Cates
9/18/23
CSC-134
Part 1:
For this assignment you will create a program to match the following specifications.
Ask the user to enter the length and width of two rectangles, then display the area of both.
Part 2: Add Additional Features
Ask the user to enter the length and width of two rectangles, then display the area of both.
Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.)
Submit a screenshot and the source code in a ZIP as usual.
*/

int main()
{
    cout << "Areas of Rectangles\n" << endl;
    //Declare variables
    double length1, length2, width1, width2;
    // ask for length and width of first rectangle
    cout << "Rectangle 1 length?"<< endl;;
    cin >> length1;
    cout << "Rectangle 1 width?" << endl;;
    cin >> width1;
    //ask for length and width of second rectangle
    cout << "Rectangle 2 length?" << endl;
    cin >> length2;
    cout << "Rectangle 2 width?"<< endl;
    cin >> width2;
    //calculate areas
    double area1, area2;
    area1 = length1 * width1;
    area2 = length2 * width2;
    cout << "Area of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 <<endl;

    //comparison
    if (area1 > area2){
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area1 < area2){
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "Rectangles are equal size." << endl;
    }
    return 0;
}
