# DS2 BLA - Stacks, Queues, and Trees

## Student Information
**Name:** Akash Patel  
**Instructor:** Dr. Victor Govindaswamy  
**Course:** Computer Science - C++ Programming  
**Project:** Stack, Circular Queue, Binary Tree, and Binary Search Tree

## Project Overview
This repository contains my work on important Data Structure concepts in C++.

I worked with a Stack, Queue, Circular Queue, Binary Tree, and Binary Search Tree. I also created my own diagrams to understand how the structures work during different operations.

The main goal was not only to make the programs run, but also to understand why each operation works and how the theory connects with the C++ implementation.

## Repository Structure
```text
DS2-BLA-Stacks-Queues-Trees/
|-- README.md
|-- Stack/
|   |-- Stack.cpp
|-- Queue/
|   |-- CircularQueue.cpp
|-- Tree/
|   |-- BinarySearchTree.cpp
|-- Diagrams/
|-- Presentations/
|-- Documentation/
```

## Stack
A Stack follows **LIFO - Last In, First Out**. The last value added is the first one removed.

My Stack program includes:
- push()
- pop()
- peek()
- isEmpty()
- isFull()
- displayAll()
- Stack Overflow checking
- Stack Underflow checking

A simple real-life example is a pile of cafeteria trays.

**Code:** `Stack/Stack.cpp`

## Queue and Circular Queue
A Queue follows **FIFO - First In, First Out**.

Values are added at the **REAR** and removed from the **FRONT**.

A Circular Queue reuses empty array positions by wrapping the rear back to the beginning when needed.

My program includes:
- enqueue()
- dequeue()
- showFront()
- displayAll()
- isEmpty()
- isFull()
- Queue Overflow checking
- Queue Underflow checking
- Circular wrap-around

Wrap-around uses:
```cpp
(end + 1) % SIZE
```

**Code:** `Queue/CircularQueue.cpp`

## Binary Tree and Binary Search Tree
A Binary Tree is hierarchical and each node can have up to two children.

A Binary Search Tree follows:
- Smaller values go to the LEFT
- Larger values go to the RIGHT

Each node contains:
```cpp
int data;
Node* left;
Node* right;
```

My BST values are:
`48, 27, 73, 14, 36, 58, 91, 32, 42, 54, 36, 73`

The repeated 36 and 73 are detected as duplicates and are not inserted again.

**Code:** `Tree/BinarySearchTree.cpp`

## Tree Traversals
### Inorder
LEFT -> ROOT -> RIGHT  
`14 27 32 36 42 48 54 58 73 91`

### Preorder
ROOT -> LEFT -> RIGHT  
`48 27 14 36 32 42 73 58 54 91`

### Postorder
LEFT -> RIGHT -> ROOT  
`14 32 42 36 27 54 58 91 73 48`

The tree does not change between traversals. Only the visiting order changes.

## Original Diagrams
The `Diagrams` folder contains:
- Stack Push and Pop
- Stack Overflow and Underflow
- Queue Enqueue and Dequeue
- Circular Queue Wrap-Around
- Binary Tree Terminology
- Completed Binary Search Tree
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal

## Real-World Applications
### Stack
Undo/Redo, browser navigation, and function calls.

### Queue
Print queues, customer service systems, and network packet handling.

### Tree
File and folder systems, organization structures, and HTML/XML structures.

A file system is a Tree, but not necessarily a Binary Search Tree.

### Binary Search Tree
Searching ordered information, maintaining sorted data, and lookup-style structures.

## How to Compile and Run
### Stack
```bash
cd Stack
g++ Stack.cpp -o stack
./stack
```

### Circular Queue
```bash
cd Queue
g++ CircularQueue.cpp -o queue
./queue
```

### Binary Search Tree
```bash
cd Tree
g++ BinarySearchTree.cpp -o bst
./bst
```

## Video Demonstrations
### Stack
[ADD STACK YOUTUBE LINK HERE]

### Queue and Circular Queue
[ADD QUEUE YOUTUBE LINK HERE]

### Binary Tree and BST
[ADD TREE/BST YOUTUBE LINK HERE]

## LinkedIn Posts
### Stack
[ADD STACK LINKEDIN LINK HERE]

### Queue and Circular Queue
[ADD QUEUE LINKEDIN LINK HERE]

### Binary Tree and BST
[ADD TREE/BST LINKEDIN LINK HERE]

## References
1. Course Material - Dr. Victor Govindaswamy
2. GeeksforGeeks
3. W3Schools

## What I Learned
The Stack helped me understand LIFO and how the top position changes.

The Circular Queue helped me understand how array positions can be reused through wrap-around.

The BST helped me understand node relationships, comparisons, duplicate handling, pointers, recursion, and traversals.

Creating diagrams and comparing them with the actual program output made the concepts much easier for me to understand.
