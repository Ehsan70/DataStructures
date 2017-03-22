//
// Created by ehsan on 1/23/17.
//

#include "LinkedLists.h"
using namespace std;
template <typename E>
SLinkedList<E>::SLinkedList():head(NULL){};

template <typename E>
bool SLinkedList<E>::empty() const {
    return (head==NULL); }

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E> * node = new SNode<E>;
    node->elem=e;
    node->next=head;
    head=node; }

template <typename E>
void SLinkedList<E>::removeFront() {
    SNode<E> * temp = head;
    head = head->next;
    delete temp; }

template <typename E>
const E& SLinkedList<E>::front() const {
    return head->elem;
}

template <typename E>
SLinkedList<E>::~SLinkedList() {
    while (!empty()){
        removeFront();
    }
}

template <typename  E>
void SLinkedList<E>::printAll() const {
    SNode<E> * itr =head;
    while (itr != NULL){
        cout<<itr->elem<<"  ";
        itr = itr->next;
    }
}


// Functions for Doubly linked list
template <typename F>
DLinkedList<F>::DLinkedList():header(new DNode<F>),trailer(new DNode<F>){
    header->next=trailer;
    trailer->prev = header;
}

template <typename F>
bool DLinkedList<F>::empty() const {
    return (header->next==trailer);
}

template <typename F>
void DLinkedList<F>::addFront(const F& e) {
    add(header->next,e);
}

template <typename F>
void DLinkedList<F>::addBack(const F& e) {
    add(trailer,e);
}

template <typename F>
void DLinkedList<F>::removeFront() {
    remove(header->next);
/*
    DNode<E> * temp = header;
    header->next->prev=header;
    header = header->next;
    delete temp;
*/
 }

template <typename F>
void DLinkedList<F>::removeBack() {
    remove(trailer->prev);
    /*
    DNode<E>* temp;
    temp = trailer;
    trailer->prev->next=trailer->next;
    trailer=trailer->prev;
    delete temp;
     */
}


template <typename F>
const F& DLinkedList<F>::front() const {
    return header->next->elem;
}

template <typename F>
DLinkedList<F>::~DLinkedList() {
    while (!empty()){
        removeFront();
    }
}

template <typename  F>
void DLinkedList<F>::printAll() const {
    DNode<F> * itr = header->next;
    while (itr != trailer){
        cout<<(int)itr->elem<<"  ";
        itr = itr->next;
    }
}

/*Adds an element before V*/
template  <typename F>
void DLinkedList<F>::add(DNode<F> *v, const F &e) {
    DNode<F> * newNode = new DNode<F>;
    newNode->elem = e;
    newNode->next = v;
    newNode->prev = v->prev;
    v->prev  = v->prev->next=newNode;
    //v->prev = newNode;
}

template <typename F>
void DLinkedList<F>::remove(DNode<F> *v) {
    DNode<F> * temp = v;
    v->prev->next=v->next;
    v->next->prev = v->prev;
    delete temp;
}
