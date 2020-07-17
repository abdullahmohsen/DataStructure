#pragma once
#include "Node.h"
#include "Node.cpp"
//Binary search tree class
template <class T>
class BST
{
private:
	Node<T>* root; //The main node
	int sz;
public:
	void insert(T val);
	bool find(T val); //If the node is found or not !
	void remove(T val) {
		removePrivate(val, root);
		sz--;
	}
	BST();
};


