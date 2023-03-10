#ifndef STACK_H
#define STACK_H

#include <bits/stdc++.h>
#include <vector>

class Stack
{
private:
  int _top = -1; // Point to TOP of Stack, -1 -> Empty
  int _size = 0; // Current size of stack
  int _capacity;
  std::vector<int> _items;

public:
  // Default Constructor
  Stack(int max);

  // Empty
  void Empty();

  // isEmpty
  int isEmpty();

  // isFull
  int isFull();

  // Push
  void push(int newItem);

  // Pop
  void pop();

  // Print stack items
  void printStack();

  // Default Destructor
  ~Stack();
};

#endif // STACK_H