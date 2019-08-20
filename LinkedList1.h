#include <iostream>

struct Node
{
  int data;
  Node* link;
};


class LinkedList1
{
private:
  Node* head;
  Node* tail;

public:
  //Constructor
  LinkedList1()
  {
    head = tail = NULL;
  }

  //Deconstructor
  ~LinkedList1();

  //Functions below ~ must define in separate main
  void backward();
  void print();
  void insertFront(int value);
  void insertBack(int value);
  int findValue(int value);
  int sum();


};
