#ifndef ADT_LIST_H
#define ADT_LIST_H

class List
{
public:
	virtual void addBack(Student &d) = 0;

	virtual void removeFront() = 0;

	virtual Student getFront() = 0;

	virtual bool isEmpty() = 0; //checking if empty
	virtual int getSize() = 0; //getting the size
};
#endif 