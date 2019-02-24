#include <iostream>
#include "Node.h"

template <typename Item>
class Stack
{
private:
    int n;
    Node<Item> * first;

public:
    Stack();
    bool isEmpty();
    bool size();
    void push(Item item);
    Item pop();
    Item peek();
};

template <typename Item>
Stack<Item>::Stack() : n(0), first(NULL) {}

template <typename Item>
bool Stack<Item>::isEmpty()
{
    return first == NULL;
}

template <typename Item>
Item Stack<Item>::peek()
{
    return (first -> item);
}

template <typename Item>
void Stack<Item>::push(Item item)
{
    Node<Item> * oldfirst = first;
    first = new Node<Item>;
    first -> item = item;
    first -> next = oldfirst;
    n = n + 1;
}

template <typename Item>
Item Stack<Item>::pop()
{
    if(isEmpty())
        return 0;

    Item item = first -> item;
    Node<Item> * oldfirst = first;
    first = first -> next;
    n = n - 1;
    return item;
}
