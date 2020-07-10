#include "Vector.h"
#include <assert.h>
template<class T>

//Helper Function 
void Vector<T>::doubling()
{
	cap *= 2; //Make the capacity multiple 2
	T* newArr = new T[cap]; //Reserve new array;
	for (int i = 0; i < sz; i++)
	{
		newArr[i] = arr[i]; //Copy data from old array to new array
	}
	delete[] arr; //Delete the old array
	arr = newArr; //New array is the main array
}

template<class T>
void Vector<T>::push_back(T val)
{
	if (sz == cap)
	{
		doubling();
	}
	arr[sz] = val; //Put the value of push_back in the size of array
	sz++;
}

template<class T>
void Vector<T>::pop_back()
{
	assert(sz != 0);
	sz--;
}

template<class T>
int Vector<T>::size()
{
	return sz;
}

template<class T>
T Vector<T>::back()
{
	assert(sz != 0);
	return arr[sz - 1]; //return last element in the size
}
//Show the value of element 
template<class T>
T& Vector<T>::operator[](int i)
{
	assert(i >= 0 && i < sz);
	return arr[i]; //Return the element that I needed in the v[i]
}

template<class T>
Vector<T>::Vector()
{
	sz = 0;
	cap = 1;
	arr = new T[cap]; //arr of "size of capacity"
}