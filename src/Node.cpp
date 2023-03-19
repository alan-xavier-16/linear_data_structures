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
void Node::traverse(Node *&head)
{
  Node *temp = head;
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
void Node::insert(Node *&head, Node *&newNode, int loc)
{
  Node *temp = head;
  if (loc == 0) // BEG
  {
    newNode->addNext(head);
    head = newNode;
  }
  else if (loc == 1) // END
  {
    while (temp->getNext() != NULL)
    {
      temp = temp->getNext();
    }
    // Link new node to end
    temp->addNext(newNode);
  }
  else if (loc == 2) // MID
  {
    int size = Node::SIZE - 1; // Node not added as yet
    int midIdx = ((size % 2) + (size / 2));
    for (int i = 1; i < (midIdx + 1); i++)
    {
      if (i != midIdx)
      {
        temp = temp->getNext();
      }
      else
      {
        // Link new node to node after
        newNode->addNext(temp->getNext());
        // Add new node AFTER node before
        temp->addNext(newNode);
      }
    }
  }
}

// Default Destructor
Node::~Node() {}