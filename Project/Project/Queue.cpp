#include "Queue.h"
#include <assert.h>

template<class T>
void Queue<T>::pop()
{
	assert(empty() == false);
	Node<T>* tmp = head->next;
	delete head;
	head = tmp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	size--;
}

template<class T>
int Queue<T>::getSize()
{
	return size;
}

template<class T>
bool Queue<T>::empty()
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

template<class T>
T Queue<T>::front() //The value of the head
{
	assert(empty() == false);
	return head->value;
}

template<class T>
void Queue<T>::push(T val)
{
	Node<T>* newNode = new Node<T>(val);
	if (tail == nullptr)
	{
		tail = newNode;
		head = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
	size++;
}

template<class T>
Queue<T>::Queue() : head(nullptr), tail(nullptr), size(0)
{
}

template<class T>
Queue<T>::~Queue()
{
	while (empty() == false)
	{
		pop();
	}
}
