#include "LinkedList.h"
#include <iostream>
#include <assert.h>
using namespace std;

//Insert newNode at the end of List
template <class T>
void LinkedList<T>::append(T val)
{
	Node<T>* newNode = new Node<T>(val); //Create a newNode
	//Case 1 : Empty List
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	//Case 2 : List is not empty
	{
		Node<T>* currentNode = head; //currentNode is a pointer points on head
		while (currentNode->next != nullptr) //Next of currentNode not equal Null
		{
			currentNode = currentNode->next; //currentNode equal next of currentNode
		}
		currentNode->next = newNode; //Next of currentNode equal newNode
	}
	//Increment size counter
	size++; //when I insert newNode the number of nodes of the list will be increases 
}

//Insert newNode at a certain position within list by given an index and a value
template <class T>
void LinkedList<T>::insert(int index, T val)
{
	assert(index >= 0 && index <= size); //Runtime error if the condition is false (index != negative)
	Node<T>* newNode = new Node<T>(val); //Create a newNode
	if (index == 0) //Put a newNode in the first of the list
	{
		newNode->next = head; //Next of newNode equal head
		head = newNode;
	}
	else
	{
		Node<T>* currentNode = head; //currentNode is a pointer points on head
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

//Remove node at a certain position from list by given it an index
template <class T>
void LinkedList<T>::removeAt(int index)
{
	assert(index >= 0 && index < size);
	Node<T>* currentNode = head; //currentNode is a pointer points on head
	if (index == 0) //Remove first node from the list
	{
		head = currentNode->next; //the next of current node equal head
		delete currentNode;
		//return;
	}
	else
	{
		int i = 0;
		while (i < index - 1) //To get the node before I want to remove it
		{
			currentNode = currentNode->next;
			i++;
		}
		Node<T>* deletedNode = currentNode->next; //deletedNode is a pointer points on the next of currentNode
		currentNode->next = deletedNode->next; //the next of currentNode equal the next of deletedNode
		//currentNode->next = currentNode->next->next;
		delete deletedNode;
	}
	size--;
}

//Print values of currentNode 
template <class T>
void LinkedList<T>::print()
{
	Node<T>* currentNode = head;
	while (currentNode != nullptr)
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

template <class T>
LinkedList<T>::LinkedList() : head(nullptr), size(0)
{
}

template <class T>
LinkedList<T>::~LinkedList()
{
	while (head != nullptr)
	{
		Node<T>* currentNode = head->next; //currentNode is a pointer points on the next of head
		delete head;
		head = currentNode;
	}
}

