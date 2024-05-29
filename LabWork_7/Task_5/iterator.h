#ifndef ITERATOR_H
#define ITERATOR_H

#include "node.h"
#include "node.cpp"


template <typename T>
class Iterator
{
public:
    Iterator(){};
    Iterator(Node<T>* node) : _node(node){};
    Iterator(Node<T>* node, int index) : _node(node), _index(index) {};
    ~Iterator(){};

    Iterator<T> begin();
    Iterator<T> end();

private:
    Node<T>* _node;
    int _index;
};

#endif // ITERATOR_H
