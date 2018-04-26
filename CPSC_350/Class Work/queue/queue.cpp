#include <iostream>
#include "queue.h"

using namespace std;

GenQueue::GenQueue(int maxSize)
{
	myQueue = new char[maxSize]; //dynamic memory allocation
	head = 0;
	tail = -1;
	max = maxSize;
	numElements = 0;
}

GenQueue::~GenQueue()
{
	//you know what to do
	cout << "object destroyed" << endl;
}

void GenQueue::insert(char data)
{
	//make all necessary checks

	//circulat queue
	if(tail == max-1)
			tail = -1;
		
	myQueue[++tail] = data;
	++numElements;

}

char GenQueue::remove() // always remove from the front
{
	char c = '\0';
	c = myQueue[head];
	++head;

	--numElements;
	return c;
}

char GenQueue::peek()
{
	return myQueue[head];
}

int GenQueue::isFull()
{
	return (numElements == max);
}

int GenQueue::isEmpty()
{
	return (numElements == 0);
}

int GenQueue::getSize()
{
	return numElements;
}


