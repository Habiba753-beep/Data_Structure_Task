#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"

int main()
{
   std::cout << std::boolalpha;

   StackLL StackLinkedList{};
   std::cout<< "Is Empty? " << StackLinkedList.isEmpty()<< std::endl;
   StackLinkedList.push(10);
   StackLinkedList.push(20);
   StackLinkedList.push(30);
   std::cout<< "Popped element is: " << StackLinkedList.pop()<< std::endl;
   std::cout<< "The last element is: " << StackLinkedList.peek()<< std::endl;
   std::cout<< "Is Empty Now? " << StackLinkedList.isEmpty()<< std::endl;

   StackArray StackArr(3);
   std::cout<< "Is the StackArr Empty? " << StackArr.isEmpty()<< std::endl; 
   std::cout<< "The last element is: " << StackArr.peek()<< std::endl; //To test avoiding Underflow
   std::cout<< "Is the StackArr Full? " << StackArr.isFull()<< std::endl;
   StackArr.push(1);
   StackArr.push(2);
   StackArr.push(3);
   std::cout<< "The last element is: " << StackArr.peek()<< std::endl;
   StackArr.push(4);             //To test avoiding Overflow
   std::cout<< "Is the StackArr Full? " << StackArr.isFull()<< std::endl;
   std::cout<< "Popped element is: " << StackArr.pop()<< std::endl;
   std::cout<< "Popped element is: " << StackArr.pop()<< std::endl;
   std::cout<< "Popped element is: " << StackArr.pop()<< std::endl;
   std::cout<< "Popped element is: " << StackArr.pop()<< std::endl; //To test avoiding underflow
   
   QueueLL QueueLinkedList{};
   std::cout<< "Is Empty? " << QueueLinkedList.isEmpty()<< std::endl;
   std::cout<< "Dequeued element is: " << QueueLinkedList.dequeue()<< std::endl; //To test avoiding underflow
    QueueLinkedList.enqueue(10); std::cout<< "Enqueued 10" << std::endl;
    QueueLinkedList.enqueue(20); std::cout<< "Enqueued 20" << std::endl;
    QueueLinkedList.enqueue(30); std::cout<< "Enqueued 30" << std::endl;
    std::cout<< "Dequeued element is: " << QueueLinkedList.dequeue()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueLinkedList.dequeue()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueLinkedList.dequeue()<< std  ::endl;
    std::cout<< "Is Empty Now? " << QueueLinkedList.isEmpty()<< std::endl;  
    std::cout<< "-------------------------------------------" << std::endl;
    QueueArray QueueArr(3);
    std::cout<< "Is the QueueArr Empty? " << QueueArr.isEmpty()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl; //To test avoiding underflow
    QueueArr.enqueue(1); std::cout<< "Enqueued 1" << std::endl;
    QueueArr.enqueue(2); std::cout<< "Enqueued 2" << std::endl;
    QueueArr.enqueue(3); std::cout<< "Enqueued 3" << std::endl;
    std::cout<< "Is the QueueArr Full? " << QueueArr.isFull()<< std::endl;
    QueueArr.enqueue(4);             //To test avoiding Overflow
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl;
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl; //To test avoiding underflow
    QueueArr.enqueue(100); std::cout<< "Enqueued 100" << std::endl;
    QueueArr.enqueue(200); std::cout<< "Enqueued 200" << std::endl;
    QueueArr.enqueue(300); std::cout<< "Enqueued 300" << std::endl;
    std::cout<< "Dequeued element is: " << QueueArr.dequeue()<< std::endl;
    QueueArr.enqueue(400); std::cout<< "Enqueued 400" << std::endl;
    std::cout<< "Dequeue all elements: " << QueueArr.dequeue()<< ", " << QueueArr.dequeue()<< ", " << QueueArr.dequeue()<< std::endl;//To test circular array functionality
    std::cout<< "Is the QueueArr Empty? " << QueueArr.isEmpty()<< std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    LinkedList NewList{};
    //Inserting
    NewList.insertAtHead(4);
    NewList.insertAtHead(9);
    NewList.insertAtEnd(6);
    std::cout << "Display List";
    NewList.display();

    // Deleting
    NewList.deleteValue(9);
    std::cout << "Display List after deleting";
    NewList.display();



       
}

