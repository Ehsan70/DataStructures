#include <iostream>
#include "LinkedLists.h"
using namespace std;


int main() {
    cout << "Hello, World!" << endl;
    DLinkedList<int> test ;
    test.addFront(2);
    test.addFront(3);
    test.addFront(6);
    test.addFront(8);
    test.addFront(19);
    test.printAll();



    return 0;
}

