#include <iostream>
using namespace std;

template <class T>
class TreeNode {

public:

	TreeNode();
	TreeNode(T info);

	TreeNode(T info, int ID);
	virtual ~TreeNode();

	TreeNode<T>* left;
	TreeNode<T>* right;
	T data;
	int key;
};


template <class T>
TreeNode<T>::TreeNode() {
	data = T();
	key = 0;
	left = NULL;
	right = NULL;
}


template <class T>
TreeNode<T>::TreeNode(T info) {
	data = info;
	key = 0;
	left = NULL;
	right = NULL;
}

template <class T>
TreeNode<T>::TreeNode(T info, int ID) {
	data = info;
	key = ID;
	left = NULL;
	right = NULL;
}

template <class T>
TreeNode<T>::~TreeNode() {
	delete left;
	delete right;
}
