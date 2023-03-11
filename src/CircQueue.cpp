#include <iostream>
#include "CircQueue.h"

// Default Constructor
CircQueue::CircQueue(int max) : Queue::Queue(max) {}

// isEmpty
int CircQueue::isEmpty()
{
  if (_front == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// isFull
int CircQueue::isFull()
{
  if (_front == 0 && _rear == _capacity - 1)
  {
    return 1;
  }
  else if (_front == _rear + 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// EnQueue: Add to queue
void CircQueue::enQueue(int newItem)
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
    _rear = (_rear + 1) % _capacity;
    _items[_rear] = newItem;
    std::cout << "Added to queue: "
              << "[Q" << _rear << "] " << _items[_rear] << std::endl;
    _size++;
  }
}

// DeQueue
void CircQueue::deQueue()
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
      _front = (_front + 1) % _capacity;
    }
    _size--;
  }
}

// Print Queue items
void CircQueue::printQueue()
{
  std::cout << "Queue:: Front-> ";
  for (int i = _front; i != _rear; i = (i + 1) % _capacity)
  {
    std::cout << "[Q" << i << "] " << _items[i] << " ";
  }
  for (int i = _rear; i < _front; i++)
  {
    std::cout << "[Q" << i << "] " << _items[i] << " ";
  }
  std::cout << "<-Rear" << std::endl;
}