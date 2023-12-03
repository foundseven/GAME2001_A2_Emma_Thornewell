#pragma once
#include <iostream>

template<typename T>
class Node
{
public:
	//construct
	Node(int priority, const T& data) 
	: priority(priority), data(data), next(nullptr) {}

	//Adding some getters and setters
	const T& GetData()
	{
		return data;
	}

	void SetData(const T& newData)
	{
		data = newData;
	}

	Node* GetNextNode() const
	{
		return next; 
	}
	
	void SetNextNode(Node* newNode)
	{
		next = newNode;
	}

	int GetPriority() const
	{
		return priority;
	}

	void SetPriority(int newPriority)
	{
		priority = newPriority;
	}

private:
	//2)
	//a
	int priority;
	//b putting the data in the template
	T data;
	//3) ref to the next node
	Node *next;

};
