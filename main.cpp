//Display linked list backwards
//This file is provided for you so that all of your work can be done defining the class. This will run all of the expected functions.
//Compile alongside the header and "LinkedList.o" to see what results are expected from your work.
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
	LinkedList stack;
	stack.display();
	stack.push_back(8);
	stack.push_back(10);
	cout << "Popped " << stack.pop_back() << endl;
	stack.push_back(12);
	stack.display();
	cout << "Dequeued " << stack.dequeue_front() << endl;
	stack.insert_front(100);
	stack.display();
	cout << stack.size() << endl;
}
