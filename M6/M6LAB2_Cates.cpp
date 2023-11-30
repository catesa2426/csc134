#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
M6LAB2 - Arrays/Vectors
Cates
11/22/23
  Part 1
  Create an array containing 6 integers. Iterate through the array, printing each value. When done, print the total of all the numbers.
  Part 2
  Instead of hard coding the array contents, use a loop and cin to let the user enter the six values.
  Print: Each value, the total, the average, the maximum, and the minimum values.
  Part 3 (Optional/Gold)
  Allow the user to choose how large the array should be. (They can pick any size from 1 to 20.)
  Ensure the program works for different size arrays.
  Hint for Part 3
  resizing an array is tricky, but we can make an array size of, say, 20, and then use a variable to only use part of the full size.
*/
  void part_1();
  void part_2();
  void part_3();

int main() {
  cout << "M6LAB2" << endl;
  cout << "Pick Which Part To See [Only Type The Number; Quit = 4]: " << endl;
  cout << "Part 1" << endl;
  cout << "Part 2" << endl;
  cout << "Part 3" << endl;
  cout << "Quit" << endl;
  int choice;
  cin >> choice;
  if (choice == 1) {
    part_1();
  }
  else if (choice == 2) {
    part_2();
  }
  else if (choice ==3 ) {
    part_3();
  }
  else if (choice == 4) {
    cout << "Okay! Goodbye!" << endl;
  }
  else {
    cout << "Enter Either 1, 2, or 3" << endl;
    main();
  }
}

void part_1() {
  cout << "Part 1: Arrays" << endl;
  int arr[] = {1, 2, 3, 4, 5, 6};
  int total = 0;
  for(int i = 0; i < 6; i++){
    cout << arr[i] << endl;
    total += arr[i];
  }
  cout << "Total: " << total << endl;
  cout << endl;
  cout << "Part 1: Vectors" << endl;
  vector<int> numbers;
  for (int i = 0 ; i < 6; i++) {
    //add a number to the vector
    numbers.push_back(i);
    cout << "Added " << i << ", numbers is size = " << numbers.size() << endl;
  }
  // now print back everything in the vector
  cout << "numbers[] - ";
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
  cout << endl;
  main();
}

void part_2() {
  cout << "Part 2" << endl;
  //now find the total, average, min, max
  int arr[6];
  int total = 0;
  for(int i = 0; i < 6; i++){
    cout << "Enter value " << i + 1 << ": ";
    cin >> arr[i];
    total += arr[i];
  }
  cout << "Each value: ";
  for(int i = 0; i < 6; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  double average = (double)total/6;
  cout << "Total: " << total << endl;
  cout << "Average: " << average << endl;
  auto min_num = min_element(arr, arr + 6);
  auto max_num = max_element(arr, arr + 6);
  cout << "Smallest Number: " << *min_num << endl;
  cout << "Largest Number : " << *max_num << endl;
  cout << endl;
  main();
}

void part_3() {
  cout << "Part 3" << endl;
  cout << "Enter the size [1-20]: " << endl;
  int size;
  cin >> size;
  if (size >= 1 && size <= 20) {
  int arr[size];
  int total = 0;
  for(int i = 0; i < size; i++){
    cout << "Enter value " << i + 1 << ": ";
    cin >> arr[i];
    total += arr[i];
  }
  cout << "Each value: ";
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  double average = (double)total/size;
  cout << "Total: " << total << endl;
  cout << "Average: " << average << endl;
  auto min_num = min_element(arr, arr + size);
  auto max_num = max_element(arr, arr + size);
  cout << "Smallest Number: " << *min_num << endl;
  cout << "Largest Number : " << *max_num << endl;
  }
  else {
    cout << "Size has to be 1-20" << endl;
    part_3();
  }
  cout << endl;
  main();
}