#include <iostream>
#include "LinkedList.h"

int main()
{

	LinkedList<int> priorityQueue;

	//testing the push method... it works!
	priorityQueue.Push(6, 50);
	priorityQueue.Push(2, 16);
	priorityQueue.Push(4, 37);
	priorityQueue.Push(1, 2);
	priorityQueue.Push(5, 44);
	priorityQueue.Push(3, 23);

	std::cout << "Priority Queue: " << std::endl;
	priorityQueue.PrintList();
	std::cout << "------------" << std::endl;

	std::cout << "Printing the size of the list: " << std::endl;
	priorityQueue.PrintSize();
	std::cout << "------------" << std::endl;

	//testing front method next, this is supposed to hold the first node but not delete it
	//i will check this by printing out the first node and then reprinting the list
	Node<int>* frontNode = priorityQueue.Front();
	if (frontNode) 
	{
		std::cout << "Front Node: Priority = " << frontNode->GetPriority() << ", Data = " << frontNode->GetData() << std::endl;
	}

	std::cout << "------------" << std::endl;
	std::cout << "Priority Queue after using the front method: " << std::endl;
	priorityQueue.PrintList();
	std::cout << "------------" << std::endl;

	//testing out the pop function slay
	priorityQueue.Pop(); //pop and then printing out what is first
	frontNode = priorityQueue.Front();
	if (frontNode) 
	{
		std::cout << "Front Node after Pop: Priority = " << frontNode->GetPriority() << ", Data = " << frontNode->GetData() << std::endl;
	}

	//lastly we print out the list again to make sure its gone
	std::cout << "------------" << std::endl;
	std::cout << "Priority Queue after using the pop method: " << std::endl;
	priorityQueue.PrintList();

	//lets add another number in there after to see what itll look like after
	priorityQueue.Push(7, 64);
	std::cout << "------------" << std::endl;
	std::cout << "Priority Queue after all the stuff i put it through and re-adding another number to the end: " << std::endl;
	priorityQueue.PrintList();

	//making sure the size of the list is correct
	std::cout << "------------" << std::endl;
	std::cout << "Printing the size of the list: " << std::endl;
	priorityQueue.PrintSize();

	return 0;
}