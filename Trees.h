//
// Created by ehsan on 4/5/17.
//

#ifndef DATASTRUCTURES_TREES_H
#define DATASTRUCTURES_TREES_H

#include <list>

using namespace std;

// Implementing doubly linked list
template <typename E>
class Position<E> {
private:
    E& operator*();
    Position* parent;
    std::list<Position> children;

    bool isRoot() const ;
    bool isExternal() const;
};


template <typename E>
class Tree<E> {
private:
    Position root;
    list<Position> allPositions;
public:
    int size() const;
    bool empty() const;
    list<Position> getAllPositions() const;
};


#endif //DATASTRUCTURES_TREES_H
