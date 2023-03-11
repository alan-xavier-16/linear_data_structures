#ifndef CIRCQUEUE_H
#define CIRCQUEUE_H

#include <bits/stdc++.h>
#include <vector>
#include "Queue.h"

class CircQueue : public Queue
{
public:
  // Default Constructor
  CircQueue(int max);

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
};

#endif // CIRCQUEUE_H