#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>
#include <vector>

class Node
{
private:
  int _data;
  Node *_next = NULL; // Point to NEXT NODE in LIST, Default is NULL
  Node *_prev = NULL; // Point to PREVIOUS NODE in LIST, Default is NULL

public:
  // Default Constructor
  Node();
  Node(int data);

  // Next Node in List
  void addNext(Node *next);

  // Previous Node in List
  void addPrev(Node *prev);

  // Next Node in List
  Node *getNext();

  // Previous Node in List
  Node *getPrev();

  // Show Data
  int getData();

  // Display List
  void display(Node *temp);

  // Default Destructor
  ~Node();
};

#endif // NODE_H