#include <iostream>
#include "Node.h"

template <typename Item>
class Queue
{
private:
    int n;
    Node<Item> * first;
    Node<Item> * last;
public:
    Queue();
    bool isEmpty();
    int size();
    void enqueue(Item item);
    int dequeue();
    Item peek();
};

template <typename Item>
Queue<Item>::Queue() : n(0),first(NULL){}

template <typename Item>
bool Queue<Item>::isEmpty()
{
    return first == NULL;
}

template <typename Item>
int Queue<Item>::size()
{
    return n;
}

template <typename Item>
void Queue<Item>::enqueue(Item item)
{
    Node<Item> * oldlast = last;
    last = new Node<Item>;
    last -> item = item;
    last -> next = NULL;
    if(isEmpty())
        first = last;
    else
        oldlast -> next = last;
    n = n + 1;
}

template <typename Item>
int Queue<Item>::dequeue()
{
    Item item = first -> item;
    first = first -> next;
    n = n - 1;
    if(isEmpty())
        last = NULL;
    return item;
}

template <typename Item>
Item Queue<Item>::peek()
{
    return (first -> item);
}
