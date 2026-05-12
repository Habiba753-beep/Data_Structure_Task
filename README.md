# Data Structures Implementation in C++

## Team Members
- Sama Mohammed
- Adam Diaa 
- Habiba Ahmed
- Ahmed Mahmoud Adel

---

## Overview

This project implements three fundamental data structures in C++ — **Linked List**, **Stack**, and **Queue** — each provided in two variants: linked list-based and array-based.

---

## Project Structure

```
├── Node.h              # Node struct shared across all data structures
├── LinkedList.h / .cpp
├── Stack.h / .cpp
├── Queue.h / .cpp
└── Main.cpp            # Test cases for all implementations
```

---

## Data Structures

### Linked List
A singly linked list with head pointer.

| Method | Description |
|---|---|
| `insertAtHead(int)` | Inserts a node at the beginning |
| `insertAtEnd(int)` | Inserts a node at the end |
| `deleteValue(int)` | Deletes the first node with the given value |
| `display()` | Prints all elements |

---

### Stack
Implemented in two ways:

**StackLL** (Linked List-based)

| Method | Description |
|---|---|
| `push(int)` | Pushes a value onto the stack |
| `pop()` | Removes and returns the top element |
| `peek()` | Returns the top element without removing it |
| `isEmpty()` | Returns true if the stack is empty |

**StackArray** (Array-based)

Same interface as `StackLL`, plus:

| Method | Description |
|---|---|
| `isFull()` | Returns true if the stack has reached capacity |

---

### Queue
Implemented in two ways:

**QueueLL** (Linked List-based)

| Method | Description |
|---|---|
| `enqueue(int)` | Adds a value to the rear |
| `dequeue()` | Removes and returns the front element |
| `isEmpty()` | Returns true if the queue is empty |

**QueueArray** (Circular Array-based)

Same interface as `QueueLL`, plus:

| Method | Description |
|---|---|
| `isFull()` | Returns true if the queue has reached capacity |

> The array-based queue uses a **circular array** to efficiently reuse freed slots after dequeue operations.

---

## How to Compile & Run

```bash
g++ Main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o main
./main
```

---

## Notes

- All implementations handle edge cases such as underflow (pop/dequeue on empty) and overflow (push/enqueue when full), printing an error message and returning `-1` where applicable.
- Memory is properly freed in all destructors to avoid leaks.
