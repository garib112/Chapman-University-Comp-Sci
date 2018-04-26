#include "DoubleList.h"

template <class T>
class Queue
{
public:
    Queue();
    ~Queue();

    
    void enqueue(T data);
    T dequeue();
    T getFront();
    bool isEmpty();

    DoubleList<T> myQueue;

};

template <class T>
Queue<T>::Queue()
{

}

template <class T>
Queue<T>::~Queue()
{

}

template <class T>
void Queue<T>::enqueue(T data)
{
    myQueue.insertBack(data);
}

template <class T>
T Queue<T>::dequeue()
{
    return myQueue.removeFront();
}

template <class T>
bool Queue<T>::isEmpty()
{
    return myQueue.isEmpty();
}

template <class T>
T Queue<T>::getFront()
{
    return myQueue.getFront();
}


