#include <iostream>

using namespace std;

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



template <typename E>
SLinkedList<E>::SLinkedList():head(NULL){};

template <typename E>
bool SLinkedList<E>::empty() const {
    return (head==NULL);
}


template <typename E>
void SLinkedList<E>::addFront(const E &e) {
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




int main() {
    cout << "Hello, World!" << endl;
    SLinkedList<int> test ;
    test.addFront(2);
    test.addFront(3);
    test.addFront(6);
    test.addFront(8);
    test.addFront(19);
    test.printAll();



    return 0;
}