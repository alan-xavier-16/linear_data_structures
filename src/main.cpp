#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
  /* ---------------------------------- Stack --------------------------------- */
  Stack *st = new Stack(10);

  // Push to stack
  st->push(1);
  st->push(2);
  st->push(3);
  st->push(4);

  std::cout << "Before pop." << std::endl;
  st->printStack();

  // Pop last element to enter from stack
  st->pop();

  std::cout << "After pop." << std::endl;
  st->printStack();

  delete st;
  /* ---------------------------------- Queue --------------------------------- */
  Queue *q = new Queue(5);

  // Can't remove from empty queue
  q->deQueue();

  // Add to queue
  q->enQueue(1);
  q->enQueue(2);
  q->enQueue(3);
  q->enQueue(4);
  q->enQueue(5);

  // Unable to add to full queue
  q->enQueue(6);

  std::cout << "Before dequeue." << std::endl;
  q->printQueue();

  // Remove first element in queue
  q->deQueue();

  std::cout << "After dequeue." << std::endl;
  q->printQueue();

  delete q;
}