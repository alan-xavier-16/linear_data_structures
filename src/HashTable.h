#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <bits/stdc++.h>
#include <iostream>
#include <list>

class HashTable
{
private:
  // No. of buckets
  int _capacity;
  // Pointer to linked list containing buckets
  std::list<int> *_table;

public:
  // Ensure Table size 'm' is OK
  int checkPrime(int n);

  // Determine Table size 'm'
  int getPrime(int n);

  // Default Constructor
  HashTable(int c);

  // Hash Function
  int hashFunction(int key);

  // Insert Item to Table
  void insertItem(int key);

  // Delete Item to Table
  void deleteItem(int key);

  // Display hash for item
  void displayHash();

  // Default Destructor
  ~HashTable();
};

#endif // HASHTABLE_H