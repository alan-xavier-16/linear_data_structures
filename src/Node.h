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
  // Static Variable Counter
  static int SIZE;

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

  // TRAVERSE List
  void traverse(Node *&head);

  // INSERT List: loc -> BEG: 0, END: 1, MID: 2
  void insert(Node *&head, Node *&newNode, int loc);

  // DELETE List: loc -> BEG: 0, END: 1, MID: 2
  void del(Node *&head, int loc);

  // Default Destructor
  ~Node();
};

#endif // NODE_H