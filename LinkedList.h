#include <iostream>

struct Node
{
  int data;
  Node* link;
};

class LinkedList
{
  private:

    Node* head;
    Node* tail;

  public:
    //Constructor initializes values upon declaration
  	LinkedList() {
  		head = tail = NULL;
  	}
  	//Deconstructor frees up any dynamic memory space granted to this class
  	~LinkedList();
  	//Returns the number of nodes that are contained in the linked list. USEFUL IN OTHER MEMBER FUNCTIONS.
  	int size();
  	//Displays all values in the list in order, starting from the head. Assume T interacts with cout.
  	void display();//Sample: 8->3->NULL
  	void insert_front(int value);//Inserts a node containing value to the front of the list, becoming the new head
  	void push_back(int value);//Inserts a node containing value to the end of the list, becoming the last node (aka Enqueue)
  							//Returns the value of the node removed.
  	int dequeue_front();//Removes the first node (pointed at by head), and updates the Linked List appropriately.
  	int pop_back();//Removes the last node of the linked list, and updates the Linked List appropriately
};
