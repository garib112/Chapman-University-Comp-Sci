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

ListNode::ListNode()
{

}

ListNode::ListNode(int d)
{
  data = d;
  next = NULL;
}

ListNode::~ListNode()
{
  if(next != NUll)
    delete next;
}

class NaiveList
{
  private:
    unsigned int size;
    ListNode *front;
    ListNode *back;

  public:
    NaiveList();
    ~NaiveList();

    void insertFront(int data);
    void insertBack(int data);
    void printList();
    int removeFront();
    int deletePos(int pos);
    int find(int value);
    unsigned int getSize();
    bool isEmpty();
};

void NaiveList::insertFront(int data)
{
  ++size;
  ListNode *node = new ListNode(data);
  node->next = front;
  front = node;
}

NaiveList::insertBack(int d)
{
  ++size;
  ListNode *node = new ListNode(d);

  if(front == NULL)
  {
    front = back;
  }
  else
  {
    back->next = node;
    back = node;
  }
}

insertFront NaiveList::removeFront()
{
  --size;
  int temp = front->data;
  ListNode *ft = front;
  front = front->next;
  ft->next = null;
  delete ft;
  return temp;
}

void NaiveList::printList()
{
  ListNode *curr = front;

  while(curr == true)
  {
    cout<< curr->data << endl;
    curr = curr->next;n
  }
}

int NaiveList::find(int value)
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

int NaiveList::deletePos(int pos)
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
