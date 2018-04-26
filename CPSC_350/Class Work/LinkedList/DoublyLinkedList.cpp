class ListNode
{
public:
  int data;
  ListNode *next;
  ListNode *prev;
  ListNode();
  ListNode(int data)
  ~ListNode();
};

ListNode::ListNode(){}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
  prev = NULL;
}

ListNode::~ListNode()
{
  next = NULL;
  prev = NULL;
}

class DoublyLinkedList
{
  private:
    unsigned int size;
    ListNode *front;
    ListNode *back;

  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertFront(int data);
    void insertBack(int data);
    void printList();
    int removeFront();
    int removeBack();
    int deletePos(int pos);
    int find(int value);
    unsigned int getSize();
    bool isEmpty();
    bool insertAfter(int pos, int val);
};

DoublyLinkedList::DoublyLinkedList()
{
  size = 0;
  front = NULL;
  back = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
  //build some character and research it
}
void DoublyLinkedList::insertFront(int data)
{
  ListNode *node = new ListNode(d);

  if(size == 0)
    back = node;
  else //not empty
  {
    front->prev = node;
    node->next = front;
  }

  front = node;
  size++;
}

DoublyLinkedList::insertBack(int d)
{

  ListNode *node = new ListNode(d);

  if(size == 0)
  {
    front = node;
  }
  else
  {
    back->next = node;
    node->prev = back;
  }
  back = node;
  ++size;
}

insertFront DoublyLinkedList::removeFront()
{
  ListNode *node = front;

  //only node in the list
  if(front->next == NULL)
  {
    back = NULL;
  }
  else
  {
    front->next->prev = NULL;
  }
  front = front->next;
  node->next = NULL;
  int temp = node->data;
  delete node;

  return temp;
  --size;
}

void DoublyLinkedList::printList()
{


}

int DoublyLinkedList::find(int value)
{
  int idx = -1;

  ListNode *curr = front;

  while(curr != NULL) //start searching for value
  {
    ++idx;

    if(curr->data == value)//found it
    {
      break;
    }
    else
      curr = curr->next;
  }
  if(curr == NULL)
    idx = -1;

    return idx;
}
/*
int DoublyLinkedList::deletePos(int pos)
{
  int idx = 0;
  ListNode *curr = front;
  ListNode *prev = front;

  while(idx != pos)
  {
    prev = curr;
    curr = curr->;
    ++idx;
  }

  //i found the position, now it's time to update pointers
  prev->next = curr->next;
  curr->next = NULL;
  int d = curr->data;

  delete curr;

  size--;
  return d;
}
*/

int DoublyLinkedList::remove(int key)
{
  ListNode *curr = front;

  //start looking for node

  while(curr->data != key)
  {
    curr = curr->next;

    if(curr == NULL)
    {
      return NULL;
    }
  }
  //found it

  if(curr == front)
  {
    front = curr->next;
  }
  else
  {
    curr->prev->next = curr->next;
  }

  if(curr == back)
  {
    back = curr->prev;
  }
  else
  {
    curr->next->prev = curr->prev;
  }

  curr->next = NULL;
  curr->prev = NULL;

  int temp = curr->data;
  delete curr;

  --size;

  return temp;
}
