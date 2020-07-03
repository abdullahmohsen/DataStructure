#include "LinkedList.h"
#include <iostream>
#include <assert.h>
using namespace std;

//Put a newNode in the last List
void LinkedList::append(int val)
{
	Node* newNode = new Node(val); //Create a newNode
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* currentNode = head; //currentNode is a pointer points on head
		while (currentNode->next != nullptr) //Next of currentNode not equal Null
		{
			currentNode = currentNode->next; //currentNode equal next of currentNode
		}
		currentNode->next = newNode; //Next of currentNode equal newNode
	}
	size++; //when I make a newNode the number of nodes in the list will be increases 
}

//Put a newNode in the any index in the List
void LinkedList::insert(int index, int val)
{
	assert(index >= 0 && index <= size); //Runtime error if the condition is false (index != negative)
	Node* newNode = new Node(val); //Create a newNode
	if (index == 0) //Put a newNode in the place of the head
	{
		newNode->next = head; //Next of newNode equal head
		head = newNode;
	}
	else
	{
		Node* currentNode = head; //currentNode is a pointer points on head
		int i = 0; //i is the index of nodes in the list
		while (i < index - 1)
		{
			currentNode = currentNode->next;
			i++;
		}
		newNode->next = currentNode->next; //next of newNode equal next of currentNode
		currentNode->next = newNode; //next of currentNode equal newNode
	}
	size++;
}

//Print values of currentNode 
void LinkedList::print()
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

LinkedList::LinkedList() : head(nullptr), size(0)
{
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		Node* currentNode = head->next; //currentNode is a pointer points on the next of head
		delete head;
		head = currentNode;
	}
}

