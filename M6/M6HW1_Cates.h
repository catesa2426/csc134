#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>

class Node {
public:
   std::string data;
   Node* next;

  // constructor
   Node(std::string initialData) {
      data = initialData;
      next = nullptr;
   }
};

class IntNode {
public:
   int data;
   Node* next;

   IntNode(int initialData) {
      data = initialData;
      next = nullptr;
   }
};

class LinkedList {

private:
   Node* head;
   Node* tail;

public:
  bool IsEmpty() {
   return (head == nullptr);
}
   LinkedList() {
      head = nullptr;
      tail = nullptr;

   }

   virtual ~LinkedList() {
      Node* currentNode = head;
      while (currentNode) {
         Node* toBeDeleted = currentNode;
         currentNode = currentNode->next;
         delete toBeDeleted;
      }
   }

   void Append(Node* newNode) {
      if (head == nullptr) {
         head = newNode;
         tail = newNode;
      }
      else {
         tail->next = newNode;
         tail = newNode;
      }
   }

   void Prepend(Node* newNode) {
      if (head == nullptr) {
         head = newNode;
         tail = newNode;
      }
      else {
         newNode->next = head;
         head = newNode;
      }
   }

   void PrintList(std::ostream& printStream, const std::string& separator = ", ") {
      Node* node = head;
      if (node) {
          // Head node is not preceded by separator
          printStream << node->data;
          node = node->next;
      }
      while (node) {
         printStream << separator << node->data;
         node = node->next;
      }
      printStream << std::endl;
   }


   void InsertAfter(Node* currentNode, Node* newNode) {
      if (head == nullptr) {
         head = newNode;
         tail = newNode;
      }
      else if (currentNode == tail) {
         tail->next = newNode;
         tail = newNode;
      }
      else {
         newNode->next = currentNode->next;
         currentNode->next = newNode;
      }
   }

void Remove(Node* nodeToRemove) {
   Node* current = head;
   Node* previous = nullptr;
   while (current) {
      if (current == nodeToRemove) {
         if (previous) {
            previous->next = current->next;
         } else {
            head = current->next;
         }
         if (!current->next) {
            tail = previous;
         }
         delete current;
         break;
      }

      previous = current;
      current = current->next;
   }
}

};

#endif