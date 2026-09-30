# UML Class Diagrams

This folder contains the UML class diagrams for the three C++ Data Structure programs in this project.

I created these UML diagrams to show the main classes, their data members, and the functions used in each program.

## 1. Stack UML

The Stack UML shows the `Stack` class used in my array-based Stack program.

### Main Data Members
- `SIZE`
- `arr`
- `top`

### Main Functions
- `Stack()`
- `isEmpty()`
- `isFull()`
- `push()`
- `pop()`
- `peek()`
- `displayAll()`

This UML represents how the Stack program organizes the fixed-size array and the operations that work with the top of the Stack.

---

## 2. Circular Queue UML

The Circular Queue UML shows the `CircularQueue` class used in my Queue program.

### Main Data Members
- `SIZE`
- `arr`
- `start`
- `end`
- `count`

### Main Functions
- `CircularQueue()`
- `isEmpty()`
- `isFull()`
- `enqueue()`
- `dequeue()`
- `showFront()`
- `displayAll()`

This diagram shows how the program keeps track of the FRONT and REAR positions and how the Circular Queue operations are organized inside the class.

---

## 3. Binary Search Tree UML

The Binary Search Tree UML shows the `Node` class used in my BST program.

### Main Data Members
- `data`
- `left`
- `right`

### Main Functions
- `Node()`
- `valueExists()`
- `insert()`
- `showRoot()`
- `inorder()`
- `preorder()`
- `postorder()`

This UML shows how each node stores one value and uses left and right pointers to connect with other nodes in the Binary Search Tree.

The traversal functions are also included because they are part of the `Node` class in my implementation.

---

## UML Files

- `Stack_UML.pptx`
- `CircularQueue_UML.pptx`
- `BinarySearchTree_UML.pptx`

