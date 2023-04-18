//
//  main.cpp
//  assign 4 (2)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "LinkedList.hpp"

LinkedList create(vector<int> v)
{
  LinkedList s;
  for (int i = 0; i < v.size(); i++)
  {
    s.addNode(v[i]);
  }
  return s;
}

int main()
{
  vector<int> v = {6, 5, 4, 3, 8, 12, 4, 7, 3, 1, 9};
  LinkedList r = create(v);
    
  // calling function display
  r.display();
  cout << "Sum = " << r.sum() << endl;
}
