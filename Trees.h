//
// Created by ehsan on 4/5/17.
//

#ifndef DATASTRUCTURES_TREES_H
#define DATASTRUCTURES_TREES_H

#include <list>

using namespace std;


typedef int Elem;
class LinkedBinaryTree{
protected:
    struct Node{
        Elem elt;
        Node* parent;
        Node* left;
        Node* right;
        Node():elt(),parent(NULL),left(NULL),right(NULL){}
    };

public:
    // position in a tree
    class Position{
    private:
        Node* _v;
    public:
        Position(Node* v):_v(v){}
        Elem& operator*();
        Position left() const;
        Position right() const;
        Position parent() const;
        bool isRoot() const;
        bool isExternal() const;
        friend class LinkedBinaryTree; // Give tree access
    };
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    list<Position> getAllPositions() const;
    void addRoot();
    void expandExternal(const Position& p);
    Position removeAboveExternal(const Position& p);
public:
    void preorder(Node* v, list<Position>& pl) const;

private:
    Node* _root;
    int n;
};

#endif //DATASTRUCTURES_TREES_H
