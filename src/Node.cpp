#include <iostream>
#include "Node.h"

// Static Variable Counter
int Node::SIZE = 0;

// Default Constructor
Node::Node()
{
  SIZE++;
}

Node::Node(int data) : _data(data)
{
  SIZE++;
}

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

// TRAVERSE List
void Node::traverse(Node *temp)
{
  while (temp != NULL)
  {
    temp->getData();
    temp = temp->getNext();
  }
}

// INSERT List:
// * temp -> HEAD of list
// * newNode -> New node to add
// * loc -> BEG: 0, END: 1, MID: 2
void Node::insert(Node *temp, Node *newNode, int loc)
{
  if (loc == 0) // BEG
  {
    newNode->addNext(temp);
    temp = newNode;
  }
  else if (loc == 1) // END
  {
    for (int i = 0; i < (Node::SIZE - 1); i++) // -1 as new node added to list length before insertion
    {
      if (temp->getNext() == NULL)
      {
        // Link new node to end
        temp->addNext(newNode);
      }
      else
      {
        temp = temp->getNext();
      }
    }
  }
  else if (loc == 2) // MID
  {
    int midIdx = (((Node::SIZE - 1) % 2) + ((Node::SIZE - 1) / 2)); // -1 as new node added to list length before insertion
    for (int i = 1; i < (midIdx + 1); i++)
    {
      if (i == midIdx)
      {
        // Link new node to node after
        newNode->addNext(temp->getNext());
        // Add new node AFTER node before
        temp->addNext(newNode);
      }
      else
      {
        temp = temp->getNext();
      }
    }
  }
}

// Default Destructor
Node::~Node() {}