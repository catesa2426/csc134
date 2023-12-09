#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;


int main() {
   LinkedList groceryList;
   Node* node_eggs = new Node("Eggs");
   Node* node_milk = new Node("Milk");
   Node* node_bread = new Node ("Bread");
   Node* node_onions = new Node ("Onions");
  

  // append adds things to the tail
  // prepend adds them to the head
  
  groceryList.Append(node_eggs);   
  groceryList.Append(node_milk);
  groceryList.Append(node_bread);
  groceryList.Append(node_onions);  



   // Output list
   cout << "Grocery List: ";
  groceryList.PrintList(cout);

  //Remove from list
  while (!groceryList.IsEmpty()) {
    cout << "What did you get?";
    string item;
    cin >> item;

  if (item == "eggs") {
     groceryList.Remove(node_onions);

    cout << "List: " ;
    groceryList.PrintList(cout);
  }
  else if (item == "milk") {
  groceryList.Remove(node_eggs);

    cout << "List: " ;
    groceryList.PrintList(cout);
  }
  else if (item == "bread") {
    groceryList.Remove(node_milk);

    cout << "List: " ;
    groceryList.PrintList(cout);
  }
  else if (item == "onions") {
    groceryList.Remove(node_bread);

    cout << "List: " ;
    groceryList.PrintList(cout);
  }
  else {
    cout << "That item is not on the list.";

    cout << "List: " ;
    groceryList.PrintList(cout);
  }
  // output
  }

 
  
   // LinkedList destructor frees remaining nodes
}
