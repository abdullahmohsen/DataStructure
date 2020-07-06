#pragma once
#include "Node.h"
#include "Node.cpp"

template <class T> //To Use any data type
class Stack
{
private:
	Node<T>* head; //Type of Node value is T
	int size;
public:
	T top();
	void pop();
	void push(T val);
	bool empty(); //IF the stack empty return ture and vice versa
	int getSize(); //Size of the stack
	Stack(); //Constructor
	~Stack(); //Distructor
};

