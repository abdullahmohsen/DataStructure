#include "Stack.h"
#include <assert.h>

template <class T>
T Stack<T>::top() //The value of the head
{
	assert(empty() == false); //If the stack is non empty return true
	return head->value;
}

template <class T>
void Stack<T>::pop()
{
	assert(empty() == false); //If the stack is non empty return true
	Node<T>* tmp = head;
	head = head->next;
	delete tmp;
	size--;
}

template <class T>
void Stack<T>::push(T val)
{
	Node<T>* newNode = new Node<T>(val);
	newNode->next = head;
	head = newNode;
	size++;
}

template <class T>
bool Stack<T>::empty()
{
	if (size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
int Stack<T>::getSize()
{
	return size;
}

template <class T>
Stack<T>::Stack() : head(nullptr), size(0)
{
}

template <class T>
Stack<T>::~Stack()
{
	while (empty() == false)
	{
		pop();
	}
}
