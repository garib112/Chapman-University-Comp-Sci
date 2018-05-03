class TreeNode
{
    public:
        TreeNode();
        TreeNode(int key);
        virtual ~TreeNode(); //research my you need virtual

        TreeNode *left;
        TreeNode *right;
        int key;
};

TreeNode::TreeNode()
{
    key = 0;
    left = NULL;
    right = NULL;
}

TreeNode::TreeNode(int k)
{
    left = NULL;
    right = NULL;
    key = k;
}

TreeNode::~TreeNode()
{
    //build some character
}

class BST
{
    public: 
        BST();
        Virtual ~BST(); //build more character
        void insert(int value);
        bool contains(int value);
        bool deleteNode(int value);
        TreeNode* getSuccessor(TreeNode *d);
        TreeNode* getMin();
        TreeNode* getMax();
        void printTree();
        bool isEmpty();

    private:
        TreeNode *root;
};

BST::BST()
{
    root = NULL;
}

BST::~BST()
{
    //Build character once again
    //iterate and delete
}

TreeNode* BST::getMin()
{
    TreeNode *current = root;
    
    if(root == NULL)
    {
        return NULL;
    }

    while(current->left != NULL)
    {
        current = current ->left;
    }  
    return current;
    //return current-> value (returns the value of the node)
}

TreeNode* BST::getMax()
{
    TreeNode *current = root;
    
    if(root == NULL)
    {
        return NULL;
    }

    while(current->right != NULL)
    {
        current = current ->right;
    }  
    return current;
    //return current-> value (returns the value of the node)
}

void BST::insert(int value)
{
    TreeNode newNode = new TreeNode(value);

    if(root == NULL) //tree is empty
    {
        root = newNode;
    }
    else // not an empty tree
    {
        //search for location
        TreeNode *current = root;
        TreeNode *parent;

        while(true)
        {
            parent = current;
            if(value <  current->key)
            {
                current = current->left;
                
                if(current == NULL)
                {
                    //found out location
                    parent ->left = newNode;
                    break;
                }
            }
            else //go right
            {
                if(value > current->key)
                {
                    current = current->right;

                    if(current = NULL)
                    {
                        parent->right = newNode;
                        break;
                    }
                }
            }
        }
    }
}

bool BST::contains(int value)
{
    if(root == NULL)
    {
        return false;
    }
    else
    {
        TreeNode *current = root;

        while(current->key != value)
        {
            if(value < current->key)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
            if(current == NULL)
            {
                return false;
            }
        }

    }
    return true;
}

bool BST::deleteNode(int key)
{
    if(root == NULL) //tree is empty
    {
        return false;
    }

    TreeNode *current = root;
    TreeNode *parent = root;
    bool isLeft = true;

    while(current->key != k)
    {
        parent = current;

        if(k < current->key)
        {
            isLeft = true;
            current = current->left;
        }
        else
        {
            isLeft = false;
            current = current->right;
        }

        if(current == NULL)
        {
            return false;
        }
    }
    //we have found the node we want to delete

    //deleting a node with no childrem !LEAF!
    if(current->left == NULL && current->right == NULL)
    {
        if(current == root)
        {
            root = NULL;
        }
        else if(isLeft)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
    }
    else if(current->right == NULL)//one child
    {
        if(current == root)
        {
            root = current->left;
        }
        else if(isLeft)
        {
            parent->left = current->left;
        }
        else
        { 
            parent->right = current->right;
        }
    }
    else if(current->left == NULL)//exact opposite of ^^, right child
    {
        if(current == root)
        {
            root = current->right;
        }
        else if(isLeft)
        {
            parent->left = current->right;
        }
        else
        { 
            parent->right = current->right;
        }
    }
    else//has two children, new begin to cry and ask ourselves why we want to major in CS
    {
        TreeNode *successor = getSuccessor(current);

        if(current == root)
        {
            root = successor;
        }
        else if(isLeft)
        {
            parent->left = successor;
        }
        else
        {
            parent->right = successor;
        }

        successor->left = current->left;
    }

    return true;
}

TreeNode* BST::getSuccessor(TreeNode *d)
{
    TreeNode *sp = d;
    TreeNode *successor = d;
    TreeNode *current = d->right;

    while(current !=NULL)
    {
        sp = successor;
        successor = current;
        current = current->left;
    }

    if(successor != d->right)
    {
        sp->left = successor->right;
        successor->right = d->right;
    }
    return successor;
}