#ifndef QUEUE_H
#define QUEUE_H

#include <bits/stdc++.h>
#include <vector>

class Queue
{
protected:
  int _front = -1; // Point to FRONT of Queue, -1 -> Empty
  int _rear = -1;  // Point to REAR of Queue, -1 -> Empty
  int _size = 0;   // Current size of Queue
  int _capacity;
  std::vector<int> _items;

public:
  // Default Constructor
  Queue(int max);

  // isEmpty
  int isEmpty();

  // isFull
  int isFull();

  // EnQueue
  void enQueue(int newItem);

  // DeQueue
  void deQueue();

  // Print Queue items
  void printQueue();

  // Default Destructor
  ~Queue();
};

#endif // QUEUE_H