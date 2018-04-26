#include <iostream>

class GenQueue
{
	public:
		GenQueue(int maxSize);
		~GenQueue();
		void insert(char data); //enqueue()
		char remove(); //dequeue
		char peek();//front()

		int isFull();
		int isEmpty();

		int head; // front
		int tail; // back

		int max;

		int numElements;

		int getSize();

		char *myQueue;
}