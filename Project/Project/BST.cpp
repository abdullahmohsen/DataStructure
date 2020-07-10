#include "BST.h"

template<class T>
void BST<T>::insert(T val)
{
	Node<T>* newNode = new Node<T>(val);
	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		Node<T>* currentNode = root;
		while (true) //currentNode->value != val
		{
			if (val > currentNode->value)
			{
				if (currentNode->right != nullptr)
				{
					currentNode = currentNode->right; //Go to the right node and repeat the condition
				}
				else
				{
					currentNode->right = newNode;
					sz++;
					return;
				}
			}
			else if (val < currentNode->value)
			{
				if (currentNode->left != nullptr)
				{
					currentNode = currentNode->left; //Go to the left node and repeat the condition
				}
				else
				{
					currentNode->left = newNode;
					sz++;
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
}

template<class T>
bool BST<T>::find(T val)
{
	if (root == nullptr)
	{
		return false;
	}
	else
	{
		Node<T>* currentNode = root;
		while (true) //currentNode->value != val
		{
			if (val > currentNode->value)
			{
				if (currentNode->right == nullptr)
				{
					return false;
				}
				else
				{
					currentNode = currentNode->right;
				}
			}
			else if (val < currentNode->value)
			{
				if (currentNode->left == nullptr)
				{
					return false;
				}
				else
				{
					currentNode = currentNode->left;
				}
			}
			else
			{
				return true;
			}
		}
	}
}

template<class T>
BST<T>::BST() : sz(0), root(nullptr)
{
}