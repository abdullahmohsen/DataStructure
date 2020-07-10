#pragma once
template <class T> //The node accept any value of data type I give to it & it will be store in T
class Node
{
public:
	T value; //the value that in the node & the data type of it is template "T"
	Node<T>* next; //Type of Node value is T & next is a pointer have the address of the next node & points on it.
	
	Node<T>* left; //Left is a pointer have the address of the left node in binary search tree & points on it.
	Node<T>* right;//Right is a pointer have the address of the right node in binary search tree & points on it.

	Node(T val); //Constructor of Node have the value & the next points on nullptr in the first
};

