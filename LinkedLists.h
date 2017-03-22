//
// Created by ehsan on 1/23/17.
//

#ifndef DATASTRUCTURES_LINKEDLISTS_H
#define DATASTRUCTURES_LINKEDLISTS_H

#include <iostream>

template <typename E> class SLinkedList;
template <typename E> class DLinkedList;


// Implementing singly linked list
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



// Implementing doubly linked list
template <typename F>
class DNode {
private:
    F elem;
    DNode<F> * next;
    DNode<F> * prev;
    friend class DLinkedList<F>; //Provide SLinkedList access to these private variables
};

template <typename F>
class DLinkedList {
public:

    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const F& front() const;
    void addFront(const F& e);
    void addBack(const F& e);
    void removeFront();
    void removeBack();
    void printAll() const;
private:
    DNode<F> * header;
    DNode<F> * trailer;
protected:
    void add (DNode<F>* v, const F& e); //Insert new node before v
    void remove (DNode<F>* v); //Remove node v
};




// See http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
#include "LinkedLists.tpp"

#endif //DATASTRUCTURES_LINKEDLISTS_H
