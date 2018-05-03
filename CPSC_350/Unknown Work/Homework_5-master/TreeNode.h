template <class T>
class TreeNode {
public:
	TreeNode();
	TreeNode(T info);
	TreeNode(T info, int key);
	virtual ~TreeNode(); //why do you need virtual?
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
	delete left;
	delete right;
}
