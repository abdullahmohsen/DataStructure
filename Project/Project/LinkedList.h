#pragma once
#include "Node.h"
#include "Node.cpp"
template <class T>
class LinkedList
{
private:
	Node<T>* head;
	int size; //Number of nodes in the List
public:
	void append(T val);
	void insert(int index, T val);
	void removeAt(int index);
	void print();
	LinkedList(); //Constructor
	~LinkedList(); //Destructor
};

