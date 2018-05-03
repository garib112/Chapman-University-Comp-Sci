#include "TreeNode.h"
#include <iostream>
using namespace std;

template <class T>
class BST {
public:
	BST();
	virtual ~BST();

	//void insertValue(T value);
	void insert(T value, int ID);
	bool contains(int key);
	T search(int key);
	bool deleteNode(T value);
	TreeNode<T>* getSuccessor(TreeNode<T>* d);
	TreeNode<T>* getMin();
	TreeNode<T>* getMax();
	void printTree();
	void printNode(int ID);




private:
	void inorderSearch(TreeNode<T>* n, int ID);
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
BST<T>::~BST() {
	//iterate recursively and delete nodes
}

//this gives the minimum value in the tree
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

//this gives the max value in the tree
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

// this allows pieces of info to be inserted with just a value and no key
//for instances with just a value, not sure if this is needed
/*
template <class T>
void BST<T>::insertValue(T value) {
	TreeNode<T>* newNode = new TreeNode<T>(value;
	if(root == NULL) {
		root = newNode;
	} else { //not empty
		TreeNode<T>* current = root;
		TreeNode<T>* parent;
		while(true) {
			parent = current;

			//This needs to be changed because they arent int values
			//it's the key values that need to be compared
			if(newNode->key < current->key) {
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
*/


//for things with key + value
template <class T>
void BST<T>::insert(T value, int ID) {
	TreeNode<T>* newNode = new TreeNode<T>(value,ID);
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

//this method determines if a node is empty
template <class T>
bool BST<T>::contains(int key) {
	if (root == NULL)
		return false;
	TreeNode<T>* current = root;
	while(current->key != value) {
		if(value < current->key)
			current = current->left;
		else if(value->current->key)
			current = current->right;

		if(current == NULL)
			return false;
	}
	return true;
}

template <class T>
T BST<T>::search(int key) {
	if (root == NULL)
		return 0;
	TreeNode<T>* current = root;
	while(current->key != key) {
		if(value < current->key)
			current = current->left;
		else if(value->current->key)
			current = current->right;

		if(current == NULL)
			return 0;
	}
	return current->data;
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
	inorder(root);
	//preorder(root);
	//postorder(root);
}

template <class T>
void BST<T>::inorder(TreeNode<T>* n)
{
	if(n!=NULL) {
		inorder(n->left);
		n->data.print();
		cout<<endl;
		inorder(n->right);
	}
}

template <class T>
void BST<T>::preorder(TreeNode<T>* n) {
	if(n!=NULL) {
		n->data.print();
		cout<<endl;
		preorder(n->left);
		preorder(n->right);
	}
}

template <class T>
void BST<T>::postorder(TreeNode<T>* n) {
	if(n!=NULL) {
		postorder(n->left);
		postorder(n->right);
		n->data.print();
		cout<<endl;
	}
}

//this method is connect to printNode()
//what this does that it searchs the tree using the given ID by printNode to find the object wanted
template <class T>
void BST<T>::inorderSearch(TreeNode<T>* n, int ID)
{
	if(root == NULL)
	{
		cout<< "The database contains no information." << endl;
	}
	else if(n!=NULL)
	{
		if(n->key == ID)
		{
			n->data.print();
			cout<<endl;

		}
		else
		{
			inorderSearch(n->left,ID);
			inorderSearch(n->right,ID);
		}
	}
}

//this method is to make it easier so that inorderSearch() can be private
//this just needs to be called upon in a new class where all the commans will be
template <class T>
void BST<T>::printNode(int ID)
{
	inorderSearch(root,ID);
}
