//
//  LinkedList.hpp
//  assign 4 (2)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;


class LinkedList
{
private:
  Node *head;

public:
  LinkedList();
  void addNode(int l);
  void removeNode(int a);
  void display();
  int sum();
};


#endif /* LinkedList_hpp */
