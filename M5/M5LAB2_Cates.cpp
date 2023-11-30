#include <iostream>
using namespace std;

/*
CSC - 134 
M5LAB2- Complete a Program
11/8/23
AnnaSophia Cates
Matthew Bedsole
*/

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

void displayData();

double getLength()
{
  double length;
  cout << "Enter the length: ";
  cin >> length;


  return length;
}

double getWidth() {
  double width;
  cout << "Enter the width: ";
  
  cin >> width;

  return width;
}

double getArea(double length, double width) {
  double area;

  
  area = length * width;


  return area;
}

void displayData(double length, double width, double area) {
  cout << "Length: " << length << endl;
  cout << "Width: " << width << endl;
  cout << "Area: " << area << endl;
}

int main()
{
  // This program calculates the area of a rectangle.
 

   double length;    // The rectangle's length
   double width;     // The rectangle's width
   double area;      // The rectangle's area

   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();

   // Get the rectangle's area.
   area = getArea(length, width);

   //Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

