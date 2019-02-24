#include <iostream>

template <typename Item>
class Node
{
public:
    Item item;
    Node<Item> * next;
};
