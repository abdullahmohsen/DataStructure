#pragma once
#include "Node.h"
class LinkedList
{
private:
	Node* head;
	int size; //Number of nodes in the List
public:
	void append(int val);
	void print();
	LinkedList(); //Constructor
	~LinkedList(); //Destructor
};

