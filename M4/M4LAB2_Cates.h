#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//#include <random>
#include <cstdlib> //for rand()
#include <ctime> //for time()
using namespace std;

//counting test: count zero to nine
void counting_test (){
  int num = 0;
  while (num <=9) {
    cout << num << " ";
    num++;
  }
  cout << endl;
}

//Dice roller: roll 1d6, then roll 3d6
//XdY is defined as rolling X dice with Y sides
void dice_roller() {
//set random number seed
  srand(time (0));
  int d100 = (rand() % 100) ;
  cout << "Percentage roll: " << endl;
  cout << "You rolled: " << d100 << endl;

  //roll 3d6 (three dice added together
  int first = (rand () % 6) +1;
  int second = (rand () % 6) +1;
  int third = (rand () % 6) +1;

  int total = first + second + third;
  cout << "3d6 Bell Curve Roll: " << endl;
  cout << "Roll: " << first << " + " << second << " + " << third << " = " << total << endl;
}

void total_average(){
  cout << "Running total and average" << endl;
  // roll 3d6 ten times, find total and average
  srand(time (0));
  int total = 0;
  int rolls = 10;

  for (int i = 0; i < rolls; i++) {
    int first = (rand () % 6) +1;
    int second = (rand () % 6) +1;
    int third = (rand () % 6) +1;

    total += first + second + third;
  }

  float average = static_cast<float>(total) / rolls;

  cout << "Total: " << total << endl;
  cout << "Average: " << average << endl;
}
#endif