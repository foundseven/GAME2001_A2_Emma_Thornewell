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


	//adding getters and setters for the linked list
	Node<T>* GetHead() const
	{
		return head;
	}

	void SetHead(Node<T>* newHead)
	{
		head = newHead;
	}

	int GetSize() const
	{
		return size;
	}

	void SetSize(int newSize)
	{
		size = newSize;
	}

	//methods
	void Push(int priority, const T& data);
	void Pop();
	Node<T>* Front() const;


private:
	Node<T>* head;
	int size;
};