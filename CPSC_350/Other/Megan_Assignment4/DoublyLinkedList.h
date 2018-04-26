#ifndef DLIST_H
#define DLIST_H

#include "list.h"
#include "ListNode.h"

class DoublyLinkedList : public List
{
public:
	inline DoublyLinkedList();

	inline ~DoublyLinkedList();
	inline void addBack(Student &d);
	inline void removeFront();
	inline Student getFront();

	inline bool isEmpty()  //checking if empty
	{ return (size == 0); }

	inline int getSize() //getting the size
	{ return size; }
private:
	ListNode *front;
	ListNode *back;
	int size;
};

DoublyLinkedList::DoublyLinkedList()
{
	size = 0;
	front = 0;
	back = 0;
}

DoublyLinkedList::~DoublyLinkedList()
{
	while (!isEmpty())
	{
		removeFront();
	}
}

void DoublyLinkedList::addBack(Student &d)
{
	ListNode *node = new ListNode(d);

	if (isEmpty())
	{
		front = node;
		back = node;
		++size;
	} else
	{
		back->next = node;
		node->prev = back;
		back = node;
		++size;
	}
}

void DoublyLinkedList::removeFront()
{
	ListNode *node = front;

	if (getSize() == 1)
	{
		front = node->next;
		back = NULL;
		--size;
	} else
	{
		front = node->next;
		front->prev = NULL;
		--size;
	}
}

Student DoublyLinkedList::getFront()
{
	ListNode *node = front;
	return node->data;
}

#endif 
