//Alberto Garibay
//2271460
//garib112@mail.chapman.edu
//CPSC350 Sec-2
//Assignment 3

/* This is the genstack template
Its purpose is to be a stack that can take any datatype*/

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
	delete [] myArray;

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
