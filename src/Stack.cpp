#include <iostream>
#include "Stack.h"

// Default Constructor
Stack::Stack(int max) : _capacity(max), _items(max, 0) {}

// Empty
void Stack::Empty()
{
  _top = -1;
  _size = 0;
  std::cout << "Stack has been emptied." << std::endl;
}

// isEmpty
int Stack::isEmpty()
{
  if (_top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// isFull
int Stack::isFull()
{
  if (_top == _capacity - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

// Push
void Stack::push(int newItem)
{
  if (isFull())
  {
    std::cout << "Stack is full, its capacity is: " << _capacity << std::endl;
  }
  else
  {
    _top++;
    _items[_top] = newItem;
    _size++;
  }
}

// Pop
void Stack::pop()
{
  if (isEmpty())
  {
    std::cout << "Stack is empty." << std::endl;
  }
  else
  {
    std::cout << "Item popped is: " << _items[_top] << std::endl;
    _top--;
    _size--;
  }
}

// Print stack items
void Stack::printStack()
{
  std::cout << "Stack: ";
  for (int i = 0; i < _size; i++)
  {
    std::cout << _items[i] << " ";
  }
  std::cout << std::endl;
}

// Default Destructor
Stack::~Stack()
{
}