#include <iostream>
using namespace std;

/*
  M5T2 - More Practice with Functions
  CSC - 134
  Cates
  10/30/23
  This program will involve us using some simple functions, both void and value-returning, to solve this problem:
  List the numbers from 1 to 10 along with the squares of those numbers. (Note this is similar to our times table problem from last module.)
  Specifications:
  a main() function
  int square(int num) {
    return num * num;
}a square() function that takes an int, and returns the square of that int (value returning)
  a print_answer() function that prints one line of the answer (void)
*/

//list all functions here
int square(int);
int add(int, int);
void print_answer_line(int num, int num_squared);

int main() {
  cout << "M5T2: Using Multiple Functions" << endl;
  int num = 4;
  cout << num << " squared is " << square(num) << endl;
  cout << "2 + 3 = " << add(2,3) << endl;

  //We'll print out the squares of the numbers 1 to 10
  cout << "Number\tSquared" << endl;
  for ( int num = 1; num <= 10; num++) {
    print_answer_line(num, square(num));
  }
}

//write all functions here

//a square() function that takes an int, and returns the square of that int
int square(int num) {
  int answer = num * num;
  return answer;
}

//add() takes two ints, returns the sum
int add(int first, int second) {
  int answer = first + second;
  return answer;
}

void print_answer_line(int num, int num_squared) {
  cout << num << "\t\t" << num_squared << endl;
}
