#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class QueueLL {

private: 
Node* front;
Node* rear; 

public:
QueueLL();
~QueueLL();
void enqueue(int value);
int dequeue();
bool isEmpty();
};

class QueueArray {

private:
int* arr;   
int front;
int rear;
int capacity;
int currentSize;

public:
QueueArray(int size);
~QueueArray();
void enqueue(int value);
int dequeue();
bool isEmpty();
bool isFull();
};
#endif
