#include "HashTable.h"

// Ensure Table size 'm' is OK
int HashTable::checkPrime(int n)
{
  // Not Prime
  if (n < 2)
    return 0;
  for (int i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
      return 0;
  }
  // is Prime
  return 1;
}

// Determine Table size 'm'
int HashTable::getPrime(int n)
{
  if (n % 2 == 0)
    n++;
  while (!checkPrime(n))
    n++;
  return n;
}

// Default Constructor
HashTable::HashTable(int c) : _capacity(getPrime(c))
{
  std::cout << "m=" << _capacity << std::endl;
  // Create Hash Table
  this->_table = new std::list<TableItem>[_capacity];
}

// Hash Function --> Division Method
int HashTable::hashFunction(int key)
{
  return key % _capacity;
}

// Insert Item to Table
void HashTable::insertItem(TableItem &item)
{
  // Determine hash index using specific hash function
  int idx = hashFunction(item.key);
  // Add item to table by 'chaining' to avoid collisions
  _table[idx].push_back(item);
}

// Delete Item to Table
void HashTable::deleteItem(TableItem &item)
{
  // Determine hash index
  int idx = hashFunction(item.key);
  // Create iterator
  std::list<TableItem>::iterator i;
  // Point to the first element of the linked list at a specific table index
  for (i = _table[idx].begin(); i != _table[idx].end(); i++)
  {
    // Dereference item and compare to key
    if (i->key == item.key)
    {
      break;
    }
  }

  // Delete item from linked list
  if (i != _table[idx].end())
    _table[idx].erase(i);
}

// Display hash for item
void HashTable::displayHash()
{
  for (int i = 0; i < _capacity; i++)
  {
    // At a specific table index
    std::cout << "Table[" << i << "]";
    // Loop over linked list
    for (auto d : _table[i])
    {
      std::cout << "--> {" << d.key << ", " << d.data << "}";
    }
    std::cout << std::endl;
  }
}

// Default Destructor
HashTable::~HashTable()
{
  delete[] _table;
}