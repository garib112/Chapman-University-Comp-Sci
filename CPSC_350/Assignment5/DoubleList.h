#include "ListNode.h"
#include <iostream>
using namespace std;

//class for the doubly linked list
template <class T>
class DoubleList {
private:
	unsigned int size; //cannot be negative
	ListNode<T> *front;
	ListNode<T> *back;
public:
	DoubleList<T>();
	~DoubleList<T>();

	void insertFront(T data);
	void insertBack(T data);
	void printList();
	T removeFront();
	T removeBack();
	T deletePos(int pos);
	int find(T value);
	T search(int pos);
	T remove(T value);
	T getFront();

	bool isEmpty();
	unsigned int getSize();
};

template <class T>
DoubleList<T>::DoubleList() {
	front = NULL;
	back = NULL;
}

template <class T>
DoubleList<T>::~DoubleList() {
	if (size > 0) {
		ListNode<T> *curr = front;
		for(int x=0; x < size-1; ++x) {
			curr = curr->next;
			delete curr->prev;
		}
		delete curr;
	}
}

template <class T>
void DoubleList<T>::insertFront(T data) {
	//create the new node & point it to the previous front
	ListNode<T> *node = new ListNode<T>(data);
	//if list is empty
	if (size == 0)
		back = node;
	//if it's not empty
	else {
		front->prev = node;
		node->next = front;
	}
	front = node;
	++size;
}

template <class T>
T DoubleList<T>::removeFront() {
	ListNode<T> *node = front; //holds pointer so it can be deleted
	if (front->next == NULL) {
		back = NULL;
		front = NULL;
	} else {
		front->next->prev = NULL;
	}
	front = front->next;
	node->next = NULL;
	T temp = node->data;
	delete node;
	--size;
	return temp;
}

template <class T>
T DoubleList<T>::removeBack() {
	ListNode<T> *node = back; //holds pointer so it can be deleted
	if (back->prev == NULL) {
		back = NULL;
		front = NULL;
	} else {
		back->prev->next = NULL;
	}
	back = back->prev;
	back->prev = NULL;
	T temp = node->data;
	delete node;
	--size;
	return temp;
}

template <class T>
void DoubleList<T>::printList() {
	ListNode<T> *current = front;
	while (current == true) {
		cout << current->data << endl;
		current = current->next;
	}
}

template <class T>
int DoubleList<T>::find(T value) {

	int index = -1;
	ListNode<T> *current = front;
	//start searching for value
	while(current != NULL) {
		++index;
		//finds the value
		if(current->data == value)
			break;
		else
			current = current->next;
	}
	//what if it couldn't find the value?
	if (current == NULL)
		index = -1;

	return index;
}

template <class T>
T DoubleList<T>::search(int pos) {
	int index = 0;
	ListNode<T> *current = front;
	ListNode<T> *prev = front;

	//find the index
	while(index != pos) {
		prev = current;
		current = current->next;
		++index;
	}

	//delete current & make prev->next = current->next
	prev->next = current->next;
	current->next = NULL;
	T d = current->data;
	delete current;

	size--;
	return d;
}

template <class T>
T DoubleList<T>::deletePos(int pos) {
	int index = 0;
	ListNode<T> *current = front;
	ListNode<T> *prev = front;

	//find the index
	while(index != pos) {
		prev = current;
		current = current->next;
		++index;
	}

	//delete current & make prev->next = current->next
	prev->next = current->next;
	current->next = NULL;
	T d = current->data;
	delete current;

	size--;
	return d;
}

template <class T>
void DoubleList<T>::insertBack(T d) {
	//create the new node & point it to the previous front
	ListNode<T> *node = new ListNode<T> (d);
	//if list is empty
	if (size == 0)
		front = node;
	//if it's not empty
	else {
		back->next = node;
		node->prev = back;
	}
	back = node;
	++size;
}

template <class T>
T DoubleList<T>::remove(T value) {
	ListNode<T> *current = front;
	while (current->data != value) {
		current = current->next;
		if (current == NULL) {
			return 0;
		}
	}
	if(current == front) {
		//return removeFront();
		front = current->next;
	}
	else {
		current->prev->next = current->next;
	}

	if(current == back) {
		back = current->prev;
	}
	else{
		current->next->prev = current->prev;
	}

	current->next = NULL;
	current->prev = NULL;

	int temp = current->data;
	delete current;

	--size;

	return temp;
}

template <class T>
T DoubleList<T>::getFront() {
	return front->data;
}

template <class T>
bool DoubleList<T>::isEmpty() {
	return front == NULL;
}

template <class T>
unsigned int DoubleList<T>::getSize() {
	return size;
}
