#include <iostream>
//#include "genstack.h"

using namespace std;


template <class T>
class genstack
{
	public:
		genstack(int maxsize);
		~genstack();

		void push(T data);
		T pop();
		T peek();
		int isFull();
		int isEmpty();

		int top;
		int max;

		T *myArray;

};

template <class T>
genstack<T>::genstack(int maxsize)
{
	myArray = new T[maxsize];
	max = maxsize;
	top = -1;
}

template <class T>
genstack<T>::~genstack()
{
	cout << "object destroyed" << endl;
	//i'll let you figure out what goes here
}

template <class T>
void genstack<T>::push(T data)
{
	myArray[++top] = data;
}

template <class T>
T genstack<T>::pop()
{
	return myArray[top--];
}

//top()
template <class T>
T genstack<T>::peek()
{
	return myArray[top];
}

template <class T>
int genstack<T>::isFull()
{
	return (top == max -1);
}

template <class T>
int genstack<T>::isEmpty()
{
	return (top == -1);
}
