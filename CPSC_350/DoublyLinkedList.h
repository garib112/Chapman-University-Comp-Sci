#include "ListNode.h"

template <class T>
class DoublyLinkedList
{
  private:
    unsigned int size;
    ListNode<T> *front;
    ListNode<T> *back;

  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertFront(T data);
    void insertBack(T data);
    void printList();
    T removeFront();
    T remove(T key);

    //T deletePos(int pos);
    //T find(T value);
    unsigned int getSize();
    inline bool isEmpty()
    { return (size == 0); }
    //bool insertAfter(int pos, T val);
};

template <class T>
DoublyLinkedList<T>::DoublyLinkedList()
{
  size = 0;
  front = NULL;
  back = NULL;
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
  //build some character and research it
  while (!isEmpty())
	{
		removeFront();
	}
}

template <class T>
void DoublyLinkedList<T>::insertFront(T data)
{
  ListNode<T> *node = new ListNode<T>(data);

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


template <class T>
void DoublyLinkedList<T>::insertBack(T data)
{

  ListNode<T> *node = new ListNode<T>(data);

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

template <class T>
T DoublyLinkedList<T>::removeFront()
{
  ListNode<T> *node = front;

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
  T temp = node->data;
  delete node;

  --size;
  
  return temp;
  
}

template <class T>
void DoublyLinkedList<T>::printList()
{
  ListNode<T> *curr = front;

  while(curr != NULL)
  {
    cout << curr->data << endl;

    curr = curr->next;
  }
}

/*
T DoublyLinkedList::find(T value)
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

int DoublyLinkedList::deletePos(int pos)
{
  int idx = 0;
  ListNode *curr = front;
  ListNode *prev = front;

  while(idx != pos)
  {
    prev = curr;
    curr = curr->next;
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

template <class T>
T DoublyLinkedList<T>::remove(T key)
{
  ListNode<T> *curr = front;

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

  T temp = curr->data;
  delete curr;

  --size;

  return temp;
}

