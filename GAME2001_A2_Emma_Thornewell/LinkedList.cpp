#include <iostream>
#include "LinkedList.h"

template <typename T>
void LinkedList<T>::Push(int priority, const T& data)
{
	Node<T>* newNode = new Node<T>(priority, data);
	newNode->SetNextNode(this->head);
	SetHead(newNode);
	SetSize(GetSize() + 1);
}

template <typename T>
void LinkedList<T>::Pop()
{
	if (GetHead()) 
	{
		Node<T>* temp = GetHead();
		SetHead(temp->GetNextNode());
		delete temp;

		SetSize(GetSize() - 1);
	}
}

template <typename T>
Node<T>* LinkedList<T>::Front() const
{
	return GetHead();
}