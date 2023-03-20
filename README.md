# Data Structures

A **data structure** is a container used to store and organize data. They are used to arrange data on a computer for efficient access and updates.

## Types of Data Structure

Two main categories are Linear and Non-linear data structures.

### Linear data structures

In linear data structures, the elements are arranged in a sequence, i.e. one after the other. However, when the complexity of a program increases, they might not be the best choice because of operational complexities.

Some popular linear data structures are:

- `Arrays`: Elements are arranged in continuous memory, and are of the same data type.
- `Stacks`: Elements are stored in the `LIFO` principle, i.e. last element stored will be removed first. It works just like a pile of plates, where the last plate kept on the pile will be removed first.
- `Queues`: Works in the `FIFO` principle, i.e. first element stored will be removed first. It works just like a queue of people in the ticket counter, where first person on the queue will get the ticket first.
- `Linked Lists`: Data elements are connected through a series of nodes, where each node contains the data items and address to the next node.

### Non linear data structures

Elements in non-linear data structures are not in any sequence, but are arranged in a hierarchical manner, where one element will be connected to one or more elements. These structures are further divided into **graph** and **tree** based data structures.

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

In this repo, we will implement a **Stack**, a **Queue**, a **Circular Queue** and a **Linked List**.

### Stacks
A stack is a linear data structure that follows the principle of Last In First Out (LIFO), i.e. last element inserted inside the stack is removed first. Some basic operations of a stack are:

- `Push`: Add an element to the top of a stack
- `Pop`: Remove an element from the top of a stack
- `IsEmpty`: Check if the stack is empty
- `IsFull`: Check if the stack is full
- `Peek`: Get the value of the top element without removing it

### Queue
A queue is a linear data structure that follows the First In First Out (FIFO) principle, i.e. the element that was first added is removed first. Some basic operations of a queue are:

- `Enqueue`: Add an element to the end of a queue
- `Dequeue`: Remove an element from the front of a queue
- `IsEmpty`: Check if the queue is empty
- `IsFull`: Check if the queue is full
- `Peek`: Get the value of the top element without removing it

### Circular Queue
A circular queue is a type of queue where the last element points to the first element, thereby creating a link between the two. Its main advantage, over the regular queue, is better memory utilization as it allows us to add elements to the empty spaces of the queue, in situations where the last elements of the queue are occupied and the front elements are empty. **Note**: The queue indices are updated by `circular increments`, i.e. `FRONT = (FRONT+1) % SIZE`.

### Linked List
In a linked list, a series of nodes are connected, whereby each node stores its **data** and the **address** of the next node in the series. Normally, the address of the first node is assigned a special name 'HEAD', while the last node points to 'NULL'.

Some basic operations of a linked list are:

- `Traversal`: Access each node in the list
- `Insertion`: Add a node in the list
- `Deletion`: Remove a node in the list
- `Search`: Find a node in the list
- `Sort`: Sort the nodes in the list

There are three common types of linked lists:

- `Singly Linked List`: Each node has data and a pointer to the next node.
- `Doubly Linked List`: A pointer to the previous node is added as well allowing for forward or backward traversal.
- `Circular Linked List`: The last element is linked to the first element, forming a circular loop. It can be of type `singly` (next pointer of last node points to the first node) or `doubly` (previous pointer of first node points to last node).

### Hash Tables
Hash table data structure stores elements in `key-value pairs` where the `key` is a unique integer that is used for indexing the values, and the `value` is the data associated with keys.

#### Hashing
`Hashing` is a process where by an element corresponding to a certain key, is stored at the index determined using its key, i.e. if `k` is a key and `h(x)` is a hash function, then `h(k)` wil return a new index to store the element linked with `k`.

#### Hash Collision
When the hash function generates the same index for multiple keys (multiple elements), a conflict will occur, i.e. a collision. To resolve the hash collision, two methods are commonly used:

1. `Collision resolution by chaining`: Elements where the hash function produces the same index are stored in the same index using a doubly-linked list. If `j` is the slot for multiple elements, it contains a pointer to the head of the list of elements. If no element is present, `j` contains NULL.

2. `Open Addressing: Linear/Quadratic Probing and Double Hashing`: Open addressing doesn't store multiple elements into the same slot. Each slot is either filled with a single key or left NULL. Two common techniques used in open addressing are:

   - `Linear Probing`: A collision is resolved by checking the next slot.
$$h(k, i) = (h'(k) + i) \% m,$$
where $i = \{0, 1, ...\}$ and $h'(k)$ is a `new hash function`.

If a collision occurs at $h(k, 0)$, then $h(k, 1)$ is checked. In this way, the value of `i` is incremented linearly. The main issue with linear probing occurs when there is a cluster of adjacent slots that are filled. Inserting a new element requires the entire cluster to be traversed, which adds to the time required to perform operations on the hash table.

   - `Quadratic Probing`: Works similar to linear probing, except the spacing between the slots is increased (greater than one) by using the following relation.
$$h(k, i) = (h'(k) + c_1i + c_2i^2) \% m,$$
where, $c_1$ and $c_2$ are positive auxiliary constants and $i = \{0, 1, ...\}$.

`Double Hashing`: If a collision occurs after applying a hash function $h(k)$, then another hash function is calculated for finding the next slot.
$$h(k, i) = (h_1(k) + ih_2(k)) \% m$$

#### Good Hash Functions
A good hash function may not prevent the collisions completely, however it can reduce the number of collisions. Different methods to find a good hash function are:

1. `Division Method`: If `k` is a key and `m` is the size of the hash table, the hash function `h()` is calculated as:
$$h(k) = k \% m.$$
For example, if $m = 10$ and $k = 112$, then $h(k) = 112 \% 10 = 2$.

The value of `m` must not be the powers of `2`, since if $m = 2^p$, then $h(k) = k \% m$ is just the p lowest-order bits of $k$. The p lowest-order bits of $k$ are the last p bits when $k$ is written out in binary (i.e., the p rightmost bits). For example, if $p=3$ and $k=17$, then $k = 10001$ in binary and the three lowest-order bits are $001$.

Computing $h(k) = k \% m$ is a relatively expensive operation. However, if $m=2^p$ is a power of `2`, the remainder operation just looks at the p lowest-order bits as it can be done in a single instruction, by taking the `bitwise AND` with $2^p−1$.

Consider the decimal case. $8237643 \% 1034$ is difficult to compute ,but $8237643 \% 1000$ is easy $643$. This is because $1000=10^3$ is a power of ten, whereas $1034$ is not.

2. `Multiplication Method`:
$$h(k) = ⌊m(kA \% 1)⌋,$$
where, $kA \% 1$ gives the fractional part $kA$, $⌊ ⌋$ gives the floor value, and $A$ is any constant. The value of $A $lies between `0` and `1`.

```
k = 12345
A = 0.357840
M = 100

h(12345)  = floor[ 100 (12345*0.357840 mod 1)]
          = floor[ 100 (4417.5348 mod 1) ]
          = floor[ 100 (0.5348) ]
          = floor[ 53.48 ]
          = 53
```

3. `Universal Hashing`: The hash function is chosen at random, independent of keys, from a family of hash functions. The family of hash functions is designed to minimize collisions, regardless of the distribution of keys. By randomly selecting a hash function from the family for each new key, the chance of collisions is further reduced.
