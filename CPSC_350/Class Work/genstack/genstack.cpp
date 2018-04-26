#include <iostream>
#include "genstack.h"

using namespace std;


genstack::genstack(int maxsize)
{
	myArray = new char[maxsize];
	max = maxsize;
	top = -1;
}

genstack::~genstack()
{
	cout << "object destroyed" << endl;
	//i'll let you figure out what goes here 
}

void genstack::push(char data)
{
	myArray[++top] = data;
}

char genstack::pop()
{
	return myArray[top--];
}

//top()
char genstack::peek()
{
	return myArray[top];
}

int genstack::isFull()
{
	return (top == max -1);
}

int genstack::isEmpty()
{
	return (top == -1);
}
