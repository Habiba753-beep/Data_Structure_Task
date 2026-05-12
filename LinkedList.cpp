#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList() {
    head = nullptr;
}
LinkedList::~LinkedList() {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        Node* next = currentNode->next;
        delete currentNode;
        currentNode = next;
    }
    head = nullptr;
}
void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}
void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* currentNode = head;
    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}
void LinkedList::deleteValue(int value) {
    if (head == nullptr) {
        return;
    }
    if (head->value == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* currentNode = head;
    while (currentNode->next != nullptr && currentNode->next->value != value) {
        currentNode = currentNode->next;
    }
    if (currentNode->next != nullptr) {
        Node* temp = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete temp;
    }
}
void LinkedList::display() {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        cout << currentNode->value << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}