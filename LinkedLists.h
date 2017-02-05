//
// Created by ehsan on 1/23/17.
//

#ifndef DATASTRUCTURES_LINKEDLISTS_H
#define DATASTRUCTURES_LINKEDLISTS_H

#include <iostream>

template <typename E> class SLinkedList;

template <typename E>
class SNode {
private:
    E elem;
    SNode<E> * next;
    friend class SLinkedList<E>; //Provide SLinkedList access to these private variables
};

template <typename E>
class SLinkedList {
public:

    SLinkedList();
    
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    void addFront(const E& e);
    void removeFront();
    void printAll() const;
private:
    SNode<E> * head;
};

// See http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
#include "LinkedLists.tpp"

#endif //DATASTRUCTURES_LINKEDLISTS_H
