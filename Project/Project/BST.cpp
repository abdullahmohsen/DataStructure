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
Node<T>* findMin(Node<T>* root)
{
	while (root->left != nullptr)
	{
		root = root->left;
	}
	return root;
}

template<class T>
void removePrivate(T val, Node<T> *&root)
{
	if (root == nullptr)
	{
		return;
	}
	else if (val < root->value)
	{
		removePrivate(val, root->left);
	}
	else if (val > root->value)
	{
		removePrivate(val, root->right);
	}
	else
	{
		//Case 1: Deleting a Leaf Node
		if (root->left == nullptr && root->right == nullptr)
		{
			delete root;
			root = nullptr;
		}
		//Case 2: Deleting a Node with 1 Child
		else if (root->left == nullptr)
		{
			Node<T>* currentNode = root;
			root = root->right;
			delete currentNode;
		}
		else if (root->right == nullptr)
		{
			Node<T>* currentNode = root;
			root = root->left;
			delete currentNode;
		}
		//Case 3: Deleting a Node with 2 Children
		else
		{
			Node<T>* currentNode = findMin(root->right);
			root->value = currentNode->value;
			removePrivate(currentNode->value, root->right);
		}
	}
}

template<class T>
BST<T>::BST() : sz(0), root(nullptr)
{
}