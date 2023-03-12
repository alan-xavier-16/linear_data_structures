#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "CircQueue.h"
#include "Node.h"

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
  /* ---------------------------------- Linked List --------------------------------- */
  std::cout << "Testing Linked List: " << std::endl;

  // Create pointers to Nodes
  Node *head;
  Node *n0 = new Node(0);
  Node *n1 = new Node(1);
  Node *n2 = new Node(2);
  Node *n3 = new Node(3);

  // Connect Nodes, Linear Linked List
  n0->addNext(n1);
  n1->addNext(n2);
  n2->addNext(n3);

  // Assign HEAD of list
  head = n0;

  // TRAVERSE List
  std::cout << "HEAD: ";
  Node *temp = head;
  while (temp != NULL)
  {
    temp->getData();
    temp = temp->getNext();
  }
  std::cout << "NULL" << std::endl;

  // INSERT at beginning
  Node *n4 = new Node(4);
  n4->addNext(head);
  head = n4;

  std::cout << "Insert Beginning::HEAD: ";
  temp = head;
  while (temp != NULL)
  {
    temp->getData();
    temp = temp->getNext();
  }
  std::cout << "NULL" << std::endl;

  delete n0;
  delete n1;
  delete n2;
  delete n3;
  delete n4;

  std::cout << "End\n"
            << std::endl;
}