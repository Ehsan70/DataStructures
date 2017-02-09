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
template <typename E>
DLinkedList<E>::DLinkedList():header(NULL),trailer(NULL){};

template <typename E>
bool DLinkedList<E>::empty() const {
    return (header==NULL);
}

template <typename E>
void DLinkedList<E>::addFront(const E& e) {
    DNode<E> * node = new DNode<E>;
    node->elem=e;
    node->next=header;
    node->prev=header->prev;
    header->prev=node;
    header=node;
}

template <typename E>
void DLinkedList<E>::addBack(const E& e) {
    DNode<E> * node = new DNode<E>(e);
    node->next=trailer->next;
    node->prev=trailer;
    trailer->next=node;
    trailer=node;

}

template <typename E>
void DLinkedList<E>::removeFront() {
    DNode<E> * temp = header;
    header->next->prev=header;
    header = header->next;
    delete temp;
}

template <typename E>
void DLinkedList<E>::removeBack() {
    DNode<E>* temp;
    temp = trailer;
    trailer->prev->next=trailer->next;
    trailer=trailer->prev;
    delete temp;
}


template <typename E>
const E& DLinkedList<E>::front() const {
    return header->elem;
}

template <typename E>
DLinkedList<E>::~DLinkedList() {
    while (!empty()){
        removeFront();
    }
}

template <typename  E>
void DLinkedList<E>::printAll() const {
    DNode<E> * itr =header;
    while (itr != NULL){
        cout<<itr->elem<<"  ";
        itr = itr->next;
    }
}










