#pragma once
#include "Node.h"

template <typename T>
class LinkedList
{
public:
	//construct
	LinkedList()
		: head(nullptr), size(0) {}
	//Deconstuct
	~LinkedList();


private:
	Node<T>* head;
	int size;
};