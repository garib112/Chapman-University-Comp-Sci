#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;

template <class T>
class TreeNode {
public:
	TreeNode();
	TreeNode(T info);
	TreeNode(T info, int key);
	virtual ~TreeNode(); 
	T data;
	int key;
	TreeNode<T>* left;
	TreeNode<T>* right;
};

template <class T>
TreeNode<T>::TreeNode() {
	data = 0;
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
	left = NULL;
	right = NULL;
}

#endif
