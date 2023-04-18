//
//  main.cpp
//  assign 4 (1)
//
//  Created by Adham Ali on 11/04/2023.
//

#include <iostream>
#include <vector>
using namespace std;

void insertAfter(vector<int> &a, int num1, int num2)
{
  // create result vector
  vector<int> r;
  // loop on the original (given) vector
  for (int i = 0; i < a.size(); i++)
  {
    // copy the element from given vector to new one
    r.push_back(a[i]);
    if (a[i] == num1)
    {
      // if first number found in the given vector, insert the second element
      r.push_back(num2);
    }
  }
  a = r;
}

int main()
{
  // first take number of values
  int n, c;
  cout << "How many numbers ?"<<endl;
  cin >> n;
    
  // create the vector and loop n times to take all values
  vector<int> a;
    
  for (int i = 0; i < n; i++)
  {
    cout << "enter the number";
    cin >> c;
    a.push_back(c);
  }
  // take first number and second number
  int num1, num2;
  cout << "enter the first number:";
  cin >> num1;

  cout << "enter the second number:";
  cin >> num2;
    
  // calling the function
  insertAfter(a, num1, num2);
    
  // print vector after making the changes
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
