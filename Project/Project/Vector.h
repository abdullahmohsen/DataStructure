#pragma once
template <class T>
class Vector
{
private:
	T* arr; //Old array 
	int sz, cap;
	void doubling();
public:
	void push_back(T val);
	void pop_back();
	int size();
	T back();
	T& operator [] (int i); //& means that it return the main place of element not the copy of it

	Vector(); //Constructor
};

