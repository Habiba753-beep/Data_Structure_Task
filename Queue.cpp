#include "Queue.h"
#include <iostream>

QueueLL::QueueLL() : front(nullptr), rear(nullptr) {}
bool QueueLL::isEmpty() {
    return front == nullptr;
}
void QueueLL::enqueue(int value) {
    Node* newNode = new Node{value, nullptr};
    if (isEmpty()) { // If the queue is empty, both front and rear will point to the new node
        front = newNode;
    } else {
        rear->next = newNode;
    }
    rear = newNode;
}
int QueueLL::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
        return -1; // Return -1 to indicate an error
    }
    Node* temp = front;
    int value = temp->value;
    front = front->next;
    delete temp; // Free the memory of the dequeued node
    return value;
}
QueueLL::~QueueLL() {
    while (!isEmpty()) {
        dequeue(); // Dequeue all elements to free memory
    }
}
QueueArray::QueueArray(int size) : front(0), rear(-1), capacity(size), currentSize(0) {
    arr = new int[capacity]; // Take memory for the array
}
bool QueueArray::isEmpty() {
    return currentSize == 0;
}
bool QueueArray::isFull() {
    return currentSize == capacity;
}
void QueueArray::enqueue(int value) {
    if (isFull()) {
        std::cerr << "Queue is full. Cannot enqueue." << std::endl;
        return;
    }
    rear = (rear + 1) % capacity; // To implement circular array
    arr[rear] = value;
    currentSize++;
}
int QueueArray::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
        return -1; // Return -1 to indicate an error
    }
    int value = arr[front];
    front = (front + 1) % capacity; // To implement circular array
    currentSize--;
    return value;
}
QueueArray::~QueueArray() {
    delete[] arr; // Free the memory
}
