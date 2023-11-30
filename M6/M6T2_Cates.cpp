#include <iostream>
#include <iomanip>
using namespace std;

/*
CSC - 134
M6T2 - Box Classes and Objects
Cates
11/29/23
Gold Tier
*/

//Box class
class Box {
  private: //often _ indicates a private variable
    double _width;
    double _height;
    double _length;
  public:
    void set_width(double);
    void set_height(double);
    void set_length(double);
//const = does not change the object
    double get_width()const;
    double get_height()const;
    double get_length()const;
    double get_volume()const;

};

//All functions of the Rectangle class
void Box::set_width(double w) {
  _width = w;
}

void Box::set_height(double h){
  _height = h;
}

void Box::set_length(double l){
  _length = l;
}

double Box::get_width()const{
  return _width;
}

double Box::get_height()const{
  return _height;
}

double Box::get_length()const{
  return _length;
}

double Box:: get_volume()const{
  double volume = _width * _height * _length;
  return volume;
}

//main()
int main() {
  Box b;
  double width;
  double height;
  double length;

  //Ask the user for the size of the rectand=gle
  cout << "What is the rectangle height?" << endl;
  cin >> height;
  cout << "What is the rectangle width" << endl;
  cin >> width;
  cout << "What is the rectangle length?" << endl;
  cin >> length;

  //set up rectangle
  b.set_height (height);
  b.set_width(width);
  b.set_length(length);

  //output the size and are of the rectangle
  cout << fixed << setprecision(2);
  cout << "The box is width: ";
  cout << b.get_width() << endl;
  cout << "The box is height: ";
  cout << b.get_height() << endl;
  cout << "The box is length: ";
  cout << b.get_length() << endl;
  cout << "The box is volume: ";
  cout << b.get_volume() << endl;

  //output the validation of input
  if (b.get_width() >= 1 && b.get_height() >= 1 && b.get_length() >= 1) {
    cout << "This is a valid box" << endl;
  }
  else {
    cout << "This box is not valid" << endl;
  }

}