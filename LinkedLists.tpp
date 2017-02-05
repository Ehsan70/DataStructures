//
// Created by ehsan on 1/23/17.
//

#include "LinkedLists.h"

using namespace std;


template <typename E>
SLinkedList<E>::SLinkedList():head(NULL){};

template <typename E>
bool SLinkedList<E>::empty() const {
    return (head==NULL);
}


template <typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E> * node = new SNode<E>;
    node->elem=e;
    node->next=head;
    head=node;
}

template <typename E>
void SLinkedList<E>::removeFront() {
    SNode<E> * temp = head;
    head = head->next;
    delete temp;
}


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