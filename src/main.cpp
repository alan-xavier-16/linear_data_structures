#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "CircQueue.h"

int main()
{
  /* ---------------------------------- Stack --------------------------------- */
  std::cout << "Testing Stack: " << std::endl;
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
  std::cout << "End\n"
            << std::endl;
  /* ---------------------------------- Queue --------------------------------- */
  std::cout << "Testing Queue: " << std::endl;
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
  std::cout << "End\n"
            << std::endl;
  /* ---------------------------------- Circular Queue --------------------------------- */
  std::cout << "Testing Circular Queue: " << std::endl;
  CircQueue *cq = new CircQueue(5);

  // Can't remove from empty queue
  cq->deQueue();

  // Add to queue
  cq->enQueue(1);
  cq->enQueue(2);
  cq->enQueue(3);
  cq->enQueue(4);
  cq->enQueue(5);

  // Unable to add to full queue
  cq->enQueue(6);

  std::cout << "Before dequeue." << std::endl;
  cq->printQueue();

  // Remove first element in queue
  cq->deQueue();

  std::cout << "After dequeue." << std::endl;
  cq->printQueue();

  // Add to queue
  cq->enQueue(6);

  std::cout << "After enqueue." << std::endl;
  cq->printQueue();

  // Unable to add to full queue
  cq->enQueue(7);

  delete cq;
  std::cout << "End\n"
            << std::endl;
}