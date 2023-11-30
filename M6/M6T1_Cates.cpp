#include <iostream>
#include <vector>
using namespace std;

/*
  M6T1 - Five Night in Four Loops
  Cates
  CSC - 134
  11/13/23
  In this C++ assignment, students will be tasked with creating a program that counts the     occurrences of the name "Fredbear" over a span of five days. The program should prompt the user to input the number of occurrences of "Fredbear" for each day and then calculate the total count. Students should utilize arrays to store the daily counts and implement necessary functions for input, computation, and output.
  To initialize the array, you can declare an array variable and assign values to its elements. In this case, you'll want an array to store the daily counts for five days.
  Once we get this working, we may look at how the same thing could be done using a vector.
*/

void array_version() {
  //allocate memory for five nights
  const int NIGHTS = 5;
  int bears[NIGHTS];

  // get the data
  for(int night = 0; night < NIGHTS; night = night +1) {
    cout << "Night " << night+1 << ": ";
    int tonights_bears;
    cin >> tonights_bears;
    //set tonight's bear count to the user entry
    bears[night] = tonights_bears;
  }
  cout << "__________" << endl << endl;
  //print the data
 // cout << "Night 0: " << bears[0] << " bears spotted" << endl;
  for (int night = 0; night < NIGHTS; night++) {
    cout << "Night " << night+1 << ": ";
    cout << bears[night] << " bears spotted." << endl;
  }
}

void vector_version(){
  //allocate memory for five nights (requires #include <vector>)
  const int NIGHTS = 5;
  vector<int> bears(NIGHTS, 0); //5 nights, 0 each
  for (int night = 0; night <  NIGHTS; night++) {
    cout << "Night " << night+1 << ": ";
    cin >> bears[night];
  }
  cout << "__________" << endl << endl;
  for (int night = 0; night <  NIGHTS; night++) {
    cout << "Night " << night+1 << ": ";
    cout << bears[night] << " bears spotted." << endl;
  }
  
}

int main() {
  cout << "Enter Observation Data For Each Night." << endl;
  cout << "Array Version" << endl;
  array_version(); //to run both
  cout << "__________" << endl << endl;
  cout << "Vector Version" << endl;
  vector_version();
}