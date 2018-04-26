#include <iostream>

//class for the list node
template <class T>
class ListNode {
public:
	T data;
	ListNode<T> *next;
	ListNode<T> *prev;
	ListNode();
	ListNode(T theData);
	~ListNode();
};

template <class T>
ListNode<T>::ListNode(T theData) {
	T data = theData;
	next = NULL;
	prev = NULL;
}

template <class T>
ListNode<T>::~ListNode() {
	//if something is in the pointer, delete it
	cout << "\nNode Destruct\n" << endl;
	if (next != NULL) {
		next = NULL;
	}
	if (prev != NULL) {
		prev = NULL;
	}
}
