#include "LinkedList1.h"
#include <iostream>

using namespace std;

LinkedList1::~LinkedList1()
{
  Node* current;
  current = head;

  while(current->link != NULL)
  {
    current = current->link;
    delete current;
  }
}

void LinkedList1::backward()
{
  Node* prev;
  Node* current;
  Node* next;

  current = head;
  prev = NULL;

  while(current != NULL)
  {
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
  }
  head = prev;


}

void LinkedList1::print()
{
  Node* temp;
  temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->link;
  }
  cout << endl;
}

void LinkedList1::insertFront(int x)
{
  Node* temp = new Node();
  temp->data = x;
  temp->link = head;
  head = temp;
}

void LinkedList1::insertBack(int x)
{
  Node* temp = new Node();
  Node* current;
  temp->data = x;
  temp->link = NULL;
  current = head;
  if(head == NULL)
  {
    head = temp;
  }
  while(current->link != NULL)
  {
    current = current->link;
  }
  current->link = temp;
}

int LinkedList1::sum()
{
  int value = 0;
  Node* current = head;

  while(current != NULL)
  {
    value += current->data;
    current = current->link;
  }
  return value;
}

int LinkedList1::findValue(int pos)
{
  int value = 0;
  Node* current = head;
  while(current != NULL)
  {
    if (value == pos)
    {
      return current->data;
    }
    value++;
    current = current->link;
  }
}

int LinkedList1::smallest()
{
  
  Node* current = head;
  while(current != NULL)
  {
    if( current->data)
    {
      return current->data;
    }
    current = current->link;

  }
}
