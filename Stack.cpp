#include <iostream>
#include "Stack.h"

StackLL::StackLL() : Top(nullptr) {}

    bool StackLL:: isEmpty(){
      return Top==nullptr;   
 }
    void StackLL:: push(int value){
      Node* newNode = new Node;
      newNode->value= value;
      newNode->next= Top;
      Top= newNode;
} 
    int StackLL:: pop(){
        if(isEmpty()){
         std::cerr<< "The Stack is Empty, cannot pop" <<std::endl; //To handle Underflow
         return -1;
        }
        Node* Temp = Top;
        Top = Top->next;
        int popValue= Temp->value;
        delete Temp ; //To avoid Memory Leak
        return popValue;
}
    int StackLL:: peek(){
        if(isEmpty()){
         std::cerr<< "The Stack is Empty, Nothing is found to peek" <<std::endl; //To handle Underflow
         return -1;
        }
        return Top->value;
    } 

    StackLL::~StackLL(){
        while(!isEmpty()){
            pop();
        }
    }
 

    StackArray:: StackArray(int Size) : Top(-1), capacity(Size), currentSize(0){
        arr= new int[capacity]; // Take memory for the array
    }
     
    bool StackArray:: isEmpty(){
        return Top==-1;
    }

    bool StackArray:: isFull(){
        return Top==capacity-1;
    }

    void StackArray:: push(int Value){
        if(isFull()){
            std:: cerr<<"The Stack is Full, cannot push"<< std::endl; //To handle Overflow
            return;
        }
        Top++;
        arr[Top]= Value;
        currentSize++;
    }
    
    int StackArray:: pop(){
        if(isEmpty()){
            std:: cerr<<"The Stack is Empty, cannot pop"<< std::endl; //To handle Underflow
            return -1;
        }
        int popValue= arr[Top];
        Top--;
        currentSize--;
        return popValue;
    }

    int StackArray:: peek(){
         if(isEmpty()){
            std:: cerr<<"The Stack is Empty, cannot peek"<< std::endl; //To handle Underflow
            return -1;
         }
        return arr[Top];
    }

    StackArray::~StackArray(){
        delete[] arr;
    }
