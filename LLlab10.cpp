#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::~LinkedList()
{

}

int LinkedList::size()
{
  int count = 0;
  Node* temp = head;
  while (temp != NULL)
  {
    temp = temp->link;
    count++;
  }
  return count;
}

void LinkedList::display()
{
  Node* temp = new Node();
  temp = head;
  while(temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->link;
  }
}

void LinkedList::push_back(int x)
{
  Node* temp = new Node();
  temp->data = x;
  temp->link = NULL;

  if(head == NULL)
  {
    head = temp;
    tail = temp;
    temp = NULL;
  }
  else
  {
    tail->link = temp;
    tail = temp;
  }


}

void LinkedList::insert_front(int x)
{
  Node* temp = new Node();
  temp->data = x;
  temp->link = head;
  head = temp;
}


int LinkedList::dequeue_front()
{
  Node* temp = new Node();
  temp = head;
  head = head->link;
  return temp->data;
  delete temp;

}

int LinkedList::pop_back()
{
  Node* temp = new Node();
  Node* previous = new Node();
  temp = head;
  while (temp->link != NULL)
  {
    previous = temp;
    temp = temp->link;
  }
  tail = previous;
  previous->link = NULL;
  return temp->data;
  delete temp;

}
