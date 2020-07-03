#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), size(0)
{
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		Node* currentNode = head->next; //currentNode is a pointer points on the next of head
		delete head;
		head = currentNode;
	}
}

