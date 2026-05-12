#ifndef STACK_H
#define STACK_H
#include "Node.h"

class StackLL{

 private:
   Node* Top;

 public:
   StackLL();
   ~StackLL(); //Must free all nodes
   void push(int value);
   int pop();
   int peek();
   bool isEmpty();

};

class StackArray{
 
 private:
   int* arr;
   int Top;
   int capacity;
   int currentSize;

 public:  
   StackArray(int size);
   ~StackArray(); //Must free all nodes
   void push(int value);
   int pop();
   int peek();
   bool isEmpty();
   bool isFull();

};

#endif