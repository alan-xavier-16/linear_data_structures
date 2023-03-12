#include <iostream>
#include "Node.h"

// Default Constructor
Node::Node() {}
Node::Node(int data) : _data(data) {}

// Add Next Node in List
void Node::addNext(Node *next)
{
  _next = next;
}

// Add Prev Node in List
void Node::addPrev(Node *prev)
{
  _prev = prev;
}

// Next Node in List
Node *Node::getNext()
{
  return _next;
}

// Previous Node in List
Node *Node::getPrev()
{
  return _prev;
}

// Show Data
int Node::getData()
{
  std::cout << _data << "->";
  return _data;
}

// Display List
void Node::display(Node *temp)
{
  while (temp != NULL)
  {
    temp->getData();
    temp = temp->getNext();
  }
}

// Default Destructor
Node::~Node() {}