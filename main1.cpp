#include "LinkedList1.h"
#include <iostream>

using namespace std;

int main()
{
  int sum,value,result;
  LinkedList1 list;
  list.insertFront(3);
  list.insertFront(4);
  list.insertFront(5);
  list.insertBack(1);
  list.insertBack(7);
  list.print();
  list.backward();
  list.print();
  sum = list.sum();
  cout << "\nSum.." << sum;

  cout << "\nEnter position: ";
  cin >> value;
  result = list.findValue(value);
  cout << "Position " << value << " has integer: " << result;


  return 0;
}
