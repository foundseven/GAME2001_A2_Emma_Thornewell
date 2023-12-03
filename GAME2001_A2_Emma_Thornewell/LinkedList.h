#pragma once
#include "Node.h"

//making it a template class
template <typename T>
class LinkedList
{
public:
	//construct
	LinkedList()
		: head(nullptr), size(0) {}


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

	void PrintSize()
	{
		std::cout << "Size: " << GetSize() << std::endl;
	}

public:

	//methods
	void Push(int priority, const T& data)
	{
			Node<T>* newNode = new Node<T>(priority, data);

		//if the list is empty // or the new node has higher priority than the head
		if (!GetHead() || priority < GetHead()->GetPriority())
		{
			newNode->SetNextNode(this->head);
			SetHead(newNode);
		}
		else
		{
			Node<T>* current = GetHead();
			// traverse the little bittle list
			while (current->GetNextNode() && priority >= current->GetNextNode()->GetPriority())
			{
				current = current->GetNextNode();
			}

			// insert that new node baby
			newNode->SetNextNode(current->GetNextNode());
			current->SetNextNode(newNode);
		}
			SetSize(GetSize() + 1);
	};

	void Pop()
	{
		if (GetHead())
		{
			Node<T>* temp = GetHead();
			SetHead(temp->GetNextNode());
			delete temp;

			SetSize(GetSize() - 1);
		}
	};

	Node<T>* Front() const
	{
		return GetHead();
	};

	void PrintList() const
	{
		Node<T>* current = GetHead();
		while (current)
		{
			std::cout << "Priority: " << current->GetPriority() << ", Data: " << current->GetData() << std::endl;
			current = current->GetNextNode();
		}
	};

private:
	Node<T>* head;
	int size;
};