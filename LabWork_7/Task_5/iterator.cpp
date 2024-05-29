#include "iterator.h"


template<typename T>
Iterator<T> Iterator<T>::begin()
{
    Node<T>* firstNode = _node;
    while(_node->prev)
    {
        firstNode = firstNode->prev;
    }

    return Iterator<T>(firstNode, 0);
}

template<typename T>
Iterator<T> Iterator<T>::end()
{
    Node<T>* lastNode = _node;

    while(lastNode->next)
    {
        lastNode = lastNode->next;
    }

    return Iterator<T>(lastNode, lastNode->count - 1);
}
