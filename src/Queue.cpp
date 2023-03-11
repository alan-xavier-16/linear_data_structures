#include <iostream>
#include "Queue.h"

// Default Constructor
Queue::Queue(int max) : _capacity(max), _items(max, 0) {}

// isEmpty
int Queue::isEmpty()
{
  if (_front == -1 && _rear == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// isFull
int Queue::isFull()
{
  if (_front == 0 && _rear == _capacity - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// EnQueue: Add to queue
void Queue::enQueue(int newItem)
{
  // Check if full
  if (isFull())
  {
    std::cout << "Queue is full." << std::endl;
  }
  else
  {
    // If queue is empty, front is updated
    if (_front == -1)
      _front = 0;
    _rear++;
    _items[_rear] = newItem;
    std::cout << "Added to queue: "
              << "[Q" << _rear << "] " << _items[_rear] << std::endl;
    _size++;
  }
}

// DeQueue
void Queue::deQueue()
{
  // Check if empty
  if (isEmpty())
  {
    std::cout << "Queue is empty." << std::endl;
  }
  else
  {
    // If front reached end of queue, reset
    if (_front == _rear)
    {
      _front = -1;
      _rear = -1;
    }
    else
    {
      std::cout << "Serving: "
                << "[Q" << _front << "] " << _items[_front] << std::endl;
      _front++;
    }
    _size--;
  }
}

// Print Queue items
void Queue::printQueue()
{
  std::cout << "Queue: Front-> ";
  for (int i = _front; i < _size; i++)
  {
    std::cout << "[Q" << i << "] " << _items[i] << " ";
  }
  std::cout << "<-Rear" << std::endl;
}

// Default Destructor
Queue::~Queue() {}