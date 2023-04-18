//
//  LinkedList.cpp
//  assign 4 (2)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "LinkedList.hpp"
#include "Node.h"

LinkedList::LinkedList()
{
    head = NULL;
    
}
void LinkedList::addNode(int l)
{
  // Search for l inside linkedlist if exists
  Node *c = head;
  while (c!= NULL)
  {
    // if data found, increase the count
    if (c->data == l)
    {
      c->count++;
      return;
    }
    c = c->next;
  }
  // if l not exist then create a new node
  Node *n = new Node;
  n->data = l;
  n->count = 1;
  n->next = head;
  head = n;
}
void LinkedList::removeNode(int a)
{
  if (head == NULL)
  {
    return;
  }
  else if (head->data == a)
  {
    head = head->next;
  }
  else
  {
    Node *c = head;
    while (c->next != NULL)
    {
      if (c->next->data == a)
      {
        c->next = c->next->next;
        return;
      }
    }
  }
}
void LinkedList::display()
{
  Node *c = head; 
  while (c != NULL)
  {
    cout << c->data << "/" << c->count << endl;
    c = c->next;
  }
}

int LinkedList::sum()
{
  Node *c = head;
  int sum = 0;
  while (c != NULL)
  {
    sum = sum + c->data;
    c = c->next;
  }
  return sum;
}
