#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
  CSC-134
  M5HW1 - Using Functions in Detail
  Cates
  Gold
*/

//All Functions
void Question1();
void Question2();
void Question3();
void Question4();
void Question5();
void Question6();

int main() {
  string choice;
  cout << "Which Question do you want to see?" << endl;
  cout << "1. Average Rainfall of Three Months" << endl;
  cout << "2. Volume of a Three Dimensional Box" << endl;
  cout << "3. Roman Numerals" << endl;
  cout << "4. Geometry Calculator" << endl;
  cout << "5. Distance Travelled" << endl;
  cout << "6. Quit Program" << endl;
  cin >> choice;

  if (choice == "1") {
    Question1();
  }
  else if (choice == "2") {
    Question2();
  }
  else if (choice == "3") {
    Question3();
  }
  else if (choice == "4") {
    Question4();
  }
  else if (choice == "5") {
    Question5();
  }
  else if (choice == "6") {
    Question6();
  }
  else {
    cout << "ERORR: Please enter a valid number."<< endl;
      main();
  }
}

void Question1(){
  cout << "Enter Month: ";
  string month1;
  cin >> month1;
  cout << "Enter the Inches of Rainfall in " << month1 << ":" << endl;
  double rainfall1;
  cin >> rainfall1;

  cout << "Enter Month: ";
  string month2;
  cin >> month2;
  cout << "Enter the Inches of Rainfall in " << month2 << ":" << endl;
  double rainfall2;
  cin >> rainfall2;

  cout << "Enter Month: ";
  string month3;
  cin >> month3;
  cout << "Enter the Inches of Rainfall in " << month3 << ":" << endl;
  double rainfall3;
  cin >> rainfall3;

  cout << fixed << setprecision (2);
  double avg_rainfall = (rainfall1 + rainfall2 + rainfall3)/3;

  cout << "Average Inches of Rainfall in " << month1 << ", " << month2 << ", " << month3 << " is: " << avg_rainfall;
  cout << endl;
  cout << endl;
  main();
}

void Question2(){
  double length, width, heigth;
  cout << "Enter the length, width and height of the box [Press ENTER after each value]: " << endl;
  cin >> length;
  cin >> width;
  cin >> heigth;

  if (length > 0 && width > 0 && heigth > 0) {
    double volume = length * width * heigth; 
    cout << "Volume: " << volume;
  }
  else {
    cout << "ERROR: Value must be greater that 0" << endl;
    Question2();
  }
  cout << endl;
  cout << endl;
  main();
}

void Question3(){
  cout << "Enter a number from 1 to 10: " << endl;
  int num;
  cin >> num;

  if (num == 1) {
    cout << "The Roman Numeral version of 1 is I." << endl;
  }
  else if ( num == 2) {
    cout << "The Roman Numeral version of 2 is II." << endl;
  }
  else if ( num == 3) {
    cout << "The Roman Numeral version of 3 is III." << endl;
  }
  else if ( num == 4) {
    cout << "The Roman Numeral version of 4 is IV." << endl;
  }
  else if ( num == 5) {
    cout << "The Roman Numeral version of 5 is V." << endl;
  }
  else if ( num == 6) {
    cout << "The Roman Numeral version of 6 is VI." << endl;
  }
  else if ( num == 7) {
    cout << "The Roman Numeral version of 7 is VII." << endl;
  }
  else if ( num == 8) {
    cout << "The Roman Numeral version of 8 is VIII." << endl;
  }
  else if ( num == 9) {
    cout << "The Roman Numeral version of 9 is IX." << endl;
  }
  else if ( num == 10) {
    cout << "The Roman Numeral version of 10 is X." << endl;
  }
  else {
    cout << "ERORR: Please enter a valid number." << endl;
    Question3();
  }
  cout << endl;
  cout << endl;
  main();
}

void Question4(){
  cout << "Geometry Calculator" << endl;
  cout << "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. Quit" << endl;
  cout << "Enter Your Choice: ";
  int choice;
  cin >> choice;

  if (choice == 1) {
    cout << "Enter the Radius of the Circle: " << endl;
    double radius;
    cin >> radius;
    
    const double PI = 3.14159;
    double area = PI * pow(radius, 2);
    cout << "The Area of the Circle is: " << area << endl;
    cout << endl;
    cout << endl;
    Question4();
  }
  else if (choice == 2) {
    cout << "Enter the Width of the Rectangle: " << endl;;
    double width;
    cin >> width;
    cout << "Enter the Length of the Rectangle: " << endl;;
    double length;
    cin >> length;

    double area = length * width;
    cout << "The Area of the Rectangle is: " << area << endl;
    cout << endl;
    cout << endl;
    Question4();
  }
  else if (choice == 3) {
    cout << "Enter the Length of the Base of the Triangle: " << endl;;
    double base;
    cin >> base;
    cout << "Enter the Height of the Triangle: " << endl;;
    double height;
    cin >> height;

    double area = (base * height)/2;
    cout << "The Area of the Triangle is: " << area << endl;
    cout << endl;
    cout << endl;
    Question4();
  }
  else if (choice == 4){
    
    cout << endl;
    cout << endl;
    main();
  }
  else {
    cout << "ERORR: Please enter a valid number" << endl;
    Question4();
  }
  cout << endl;
  cout << endl;
  main();
}

void Question5(){
  cout << "Enter the Speed of the Vehicle (In Miles Per Hour): " << endl;
  double speed;
  cin >> speed;
  cout << "Enter the Hours the Vehicle Travelled: " << endl;
  double time;
  cin >> time;
  
  cout << "Hour\t\tDistance Travelled" << endl;
  cout << "______________________________" << endl;
  for (int hour = 1; hour <= time; hour++) {
    double distance = speed * hour;
    cout << hour << "\t\t\t" << distance;
    cout << endl;
  }
  
}

void Question6(){
  cout << "Okay! Goodbye!" << endl;
}