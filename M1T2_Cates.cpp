#include <iostream>
using namespace std;
/*
  CSC 134
  M1T2 - Hello Student
  Cates
  8/23/23
  */
int main() {
  cout << "Hello, What's your name?" << endl;
  // ask the user's name
  string name;
  cin >> name;
  
  cout << "Nice to meet you, " << name << endl; 
  //Now add a few lines of info about yourself and have the person next to you to test the program
  cout << "What program are you enrolled in at Fayettville Tech?" <<endl;
  string program;
  //cin >> program;
  //for answers with spaces
  cin.ignore();
  getline(cin, program);

  cout<< "Very nice!" <<endl;
//Ask user's favorite movie
  cout << "What's your favorite movie?" << endl;
  string movie;
  //cin >> movie;
  cin.ignore();
  getline(cin, movie);

  cout << "Great! I like " << movie << " too!" << endl;
}