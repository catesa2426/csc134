#include <iostream>
using namespace std;

/*
M4T3 - three Loops
Cates
10/9/23
Task:
Three times, we'll take some numbers, then sum and average them
-1: for loop
-2: while loop
-3: sentinel loop
 */

int main() {
  const int NUM_DAYS = 5;
  int todays_cars;
  int total_cars = 0;
  double average;

  //Part 1
  cout << "Part 1: Counting loop with for" << endl;
  cout << "How many cars did you see each day?" << endl;
  for (int i = 0; i < NUM_DAYS; i++) {
    cout << "Day #" << i << ": ";
    cin >> todays_cars;
    total_cars += todays_cars; // add today to total
  }
  cout << "Total cars seen was: " << total_cars;
  cout << " over " << NUM_DAYS << " days" << endl;
  average = (double) total_cars / NUM_DAYS; //add extra double to convert total_cars as a double
  cout << "Average per day = " << average << endl;

  cout << endl;

  //Part 2
  cout << "Part 2: Counting loop with while" << endl;
  total_cars = 0;
  int i = 0;
  while (i < NUM_DAYS) {
    cout << "Day #" << i << ": ";
    cin >> todays_cars;
    total_cars += todays_cars; // add today to total
    i++; //Go to next day
  }
  cout << "Total cars seen was: " << total_cars;
  cout << " over " << NUM_DAYS << " days" << endl;
  average = (double) total_cars / NUM_DAYS; //add extra double to convert total_cars as a double
  cout << "Average per day = " << average << endl;

  cout << endl;

  //Part 3
  cout << "Part 3: Counting loop with sentinel" << endl;
  total_cars = 0;
  cout << "Enter how many cars you saw per day." << endl;
  cout << "or -1 to finish." << endl;
  bool keep_going = true;
  int day = 0;
  while (keep_going) {
    cout << "Day #" << day << ": ";
    cin >> todays_cars;
    if (todays_cars == -1) {
      cout << "OK, Done" << endl;
      keep_going = false;
    }
    else {
      total_cars += todays_cars;
      day++;
    }
  }
  cout << "Total = " << total_cars << " cars" << endl;
  average = (double) total_cars / day; //add extra double to convert total_cars as a double
  cout << "Average per day = " << average << endl;
}