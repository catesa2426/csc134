#include <iostream>

using namespace std;

/*
M3LAB3- Grades
CSC-134
Cates
9/27/23

Given a number grade 0-100, give the letter grade
*/

int main() {
//use constants for 10 point scales

  const int A_GRADE = 90;
  const int B_GRADE = 80;
  const int C_GRADE = 70;
  const int D_GRADE = 60;
  
  std::cout << "Number Grade to Letter Grade" << endl;
  //get number grade
  int num_grade;
  string letter_grade;

  cout << "What is the number grade?";
  cin >> num_grade;

  //convert to a letter
  // if it is an A
  if (num_grade >= A_GRADE){
    letter_grade = "A";
    if (num_grade < 95){
      letter_grade = letter_grade + "-";
    }
    else if (num_grade >= 95) {
      letter_grade = letter_grade + "+";
    }
  }
  //if it is a B
  else if (num_grade >= B_GRADE){
    letter_grade = "B";
    if (num_grade < 85){
      letter_grade = letter_grade + "-";
    }
    else if (num_grade >= 85) {
      letter_grade = letter_grade + "+";
    }
  }
  //if it is a C
  else if (num_grade >= C_GRADE) {
    letter_grade = "C";
    if (num_grade < 75){
      letter_grade = letter_grade + "-";
    }
    else if (num_grade >= 75) {
      letter_grade = letter_grade + "+";
    }
  }
  //if it is a D
  else if (num_grade >= D_GRADE) {
    letter_grade = "D";
    if (num_grade < 65){
      letter_grade = letter_grade + "-";
    }
    else if (num_grade >= 65) {
      letter_grade = letter_grade + "+";
    }
  }
else {
  letter_grade = "F";
}
  //print the results
  cout << "A grade of " << num_grade;
  cout << " is " << letter_grade << endl;
}