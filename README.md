# Data Structures

A **data structure** is a container is used to store and organize data. They are used to arrange data on a computer for efficient access and updates.

## Types of Data Structure

Two main categories are Linear and Non-linear data structures.

### Linear data structures

In linear data structures, the elements are arranged in a sequence, i.e. one after the other. However, when the complexity of a program increases, they might not be the best choice because of operational complexities.

Some popular linear data structures are:

- `Arrays`: In an array, elements are arranged in continuous memory. All the elements of an array are of the same data type.
- `Stacks`: In a stack, elements are stored in the `LIFO` principle, i.e. last element stored will be removed first. It works just like a pile of plates where the last plate kept on the pile will be removed first.
- `Queues`: A queue works in the `FIFO` principle, i.e. first element stored will be removed first. It works just like a queue of people in the ticket counter where first person on the queue will get the ticket first.
- `Linked Lists`: In linked lists, data elements are connected through a series of nodes, where each node contains the data items and address to the next node.

### Non linear data structures

Elements in non-linear data structures are not in any sequence, but are arranged in a hierarchical manner where one element will be connected to one or more elements. These structures are further divided into **graph** and **tree** based data structures.

- `Graphs`: In graph data structure, each node is called `vertex` and each vertex is connected to other vertices through `edges`. Examples include Spanning Tree, Adjacency Matrix and Adjacency List.
- `Trees`: A tree is also a collection of `vertices` and `edges`, however, there can only be one edge between two vertices. Examples include Binary Tree, Binary Search Tree and AVL Tree.

## Linear Vs Non-linear Data Structures

|             Linear Data Structures             |                     Non Linear Data Structures                     |
| :--------------------------------------------: | :----------------------------------------------------------------: |
|    Data items arranged in sequential order.    | Data items arranged in non-sequential order (hierarchical manner). |
| All the items are present on the single layer. |          The data items are present at different layers.           |
|      It can be traversed on a single run.      |                     It requires multiple runs.                     |
| All the items are present on the single layer. |          The data items are present at different layers.           |
|      Memory utilization is not efficient.      |  Different structures utilize memory in different efficient ways.  |
|  Time complexity increase with the data size.  |                 Time complexity remains the same.                  |

In this repo, we will implement a **Stack**, a **Queue** and a **Circular Queue**.

### Stacks
A stack is a linear data structure that follows the principle of Last In First Out (LIFO), i.e. last element inserted inside the stack is removed first. Some basic operations of a stack are:

- `Push`: Add an element to the top of a stack
- `Pop`: Remove an element from the top of a stack
- `IsEmpty`: Check if the stack is empty
- `IsFull`: Check if the stack is full
- `Peek`: Get the value of the top element without removing it

### Queue


### Circular Queue