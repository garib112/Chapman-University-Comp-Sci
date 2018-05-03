#include "TreeNode.h"
#include <iostream>
using namespace std;

template <class T>
class BST {
public:
	BST();
	virtual ~BST();

	void insert(T value);
	void insert(T value, int key);
	bool contains(T value);
	bool deleteNode(T value);
	TreeNode<T>* getSuccessor(TreeNode<T>* d);
	TreeNode<T>* getMin();
	TreeNode<T>* getMax();
	void printTree();
	
private:
	void inorder(TreeNode<T>* n);
	void preorder(TreeNode<T>* n);
	void postorder(TreeNode<T>* n);
	TreeNode<T>* root;
};

template <class T>
BST<T>::BST() {
	root = NULL;
}

template <class T>
BST<T>::~BST() 
{
	//iterate recursively and delete nodes
}

template <class T>
TreeNode<T>* BST<T>::getMin() {
	TreeNode<T>* current = root;
	if(root == NULL)
		return NULL;

	while (current->left != NULL) {
		current = current->left;
	}

	return current;
}

template <class T>
TreeNode<T>* BST<T>::getMax() {
	TreeNode<T>* current = root;
	if(root == NULL)
		return NULL;

	while (current->right != NULL) {
		current = current->right;
	}

	return current;
}

//for instances with just a value
template <class T>
void BST<T>::insert(T value) {
	TreeNode<T>* newNode = new TreeNode<T>(value);
	if(root == NULL) {
		root = newNode;
	} else { //not empty
		TreeNode<T>* current = root;
		TreeNode<T>* parent;
		while(true) {
			parent = current;
			if(newNode->data < current->data) {
				current = current->left;
				if(current == NULL) {
					//found an open spot in tree
					parent->left = newNode;
					break;
				}
			}
			else if (newNode->data > current->data) {
				current = current->right;
				if(current == NULL) {
					//found an open spot in tree
					parent->right = newNode;
					break;
				}
			}
		}
	}
}

//for things with key + value
template <class T>
void BST<T>::insert(T value, int key) {
	TreeNode<T>* newNode = new TreeNode<T>(value, key);
	if(root == NULL) {
		root = newNode;
	} else { //not empty
		TreeNode<T>* current = root;
		TreeNode<T>* parent;
		while(true) {
			parent = current;
			if(newNode->key < current->key) {
				current = current->left;
				if(current == NULL) {
					//found an open spot in tree
					parent->left = newNode;
					break;
				}
			}
			else if (newNode->key > current->key) {
				current = current->right;
				if(current == NULL) {
					//found an open spot in tree
					parent->right = newNode;
					break;
				}
			}
		}
	}
}

template <class T>
bool BST<T>::contains(T value) {
	if (root == NULL)
		return false;
	TreeNode<T>* current = root;
	while(current->data != value) {
		if(value < current->data)
			current = current->left;
		else if(value->current->data)
			current = current->right;

		if(current == NULL)
			return false;
	}
	return true;
}

template <class T>
bool BST<T>::deleteNode(T value) {
	if (root == NULL) //tree is emtpty
		return false;
	
	TreeNode<T>* current = root;
	TreeNode<T>* parent = root;
	bool isLeft = true;

	while (current->data != value) {
		parent = current;
		if(value < current->data) {
			isLeft = true;
			current = current->left;
		}
		else{
			isLeft = false;
			current = current->right;
		}

		if(current == NULL)
			return false;
	}
	//we have found the node we want to delete
	if (current->left == NULL && current->right == NULL) {
		if(current == root) {
			root = NULL;
		} else if (isLeft) {
			parent->left = NULL;
		} else {
			parent->right = NULL;
		}
	}
	else if (current->right == NULL) {//one child that is a left node
		if(current == root) { //the root
			root = current->left;
		} else if (isLeft) { //left node of a parent
			parent->left = current->left;
		} else {
			parent->right = current->right;
		}
	}
	else if (current->left == NULL) {//one child that is a left node
		if(current == root) { //the root
			root = current->right;
		} else if (isLeft) { //left node of a parent
			parent->left = current->right;
		} else {
			parent->right = current->right;
		}
	}
	//2 children
	else {
		TreeNode<T>* successor = getSuccessor(current);

		if(current == root)
			root = successor;
		else if(isLeft) {
			parent->left = successor;
		} else {
			parent->right = successor;
		}
	}

	return true;
}

template <class T>
TreeNode<T>* BST<T>::getSuccessor(TreeNode<T>* d) {
	//first child to the right of node and all the way to the left
	TreeNode<T>* sp = d; //successor parent
	TreeNode<T>* successor = d;
	TreeNode<T>* current = d->right;

	while(current != NULL) {
		sp = successor;
		successor = current;
		current = current->left;
	}

	if (successor != d->right) {
		sp->left = successor->right;
		successor->right = d->right;
		successor->left = d->left;
	}

	return successor;
}

template <class T>
void BST<T>::printTree() {
	//inorder(root);
	//preorder(root);
	postorder(root);
}

template <class T>
void BST<T>::inorder(TreeNode<T>* n) {
	if(n!=NULL) {
		inorder(n->left);
		if(n->key != 0)
			cout << n->key << " " << n->data << endl;
		else
			cout << n->data << endl;
		inorder(n->right);
	}
}

template <class T>
void BST<T>::preorder(TreeNode<T>* n) {
	if(n!=NULL) {
		if(n->key != 0)
			cout << n->key << " " << n->data << endl;
		else
			cout << n->data << endl;
		preorder(n->left);
		preorder(n->right);
	}
}

template <class T>
void BST<T>::postorder(TreeNode<T>* n) {
	if(n!=NULL) {
		preorder(n->left);
		preorder(n->right);
		if(n->key != 0)
			cout << n->key << " " << n->data << endl;
		else
			cout << n->data << endl;
	}
}
