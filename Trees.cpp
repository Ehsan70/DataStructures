//
// Created by ehsan on 4/5/17.
//

#include <stddef.h>
#include "Trees.h"

Elem &LinkedBinaryTree::Position::operator*() {
    return _v->elt;
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::left() const {
    return _v->left;
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::right() const {
    return _v->right;
}

bool LinkedBinaryTree::Position::isRoot() const {
    return _v->parent==NULL;
}

LinkedBinaryTree::Position LinkedBinaryTree::Position::parent() const {
    return _v->parent;
}

bool LinkedBinaryTree::Position::isExternal() const {
    return _v->left==NULL && _v->right==NULL;
}

LinkedBinaryTree::LinkedBinaryTree() {

}

bool LinkedBinaryTree::empty() const {
    return false;
}

int LinkedBinaryTree::size() const {
    return 0;
}

LinkedBinaryTree::Position LinkedBinaryTree::root() const {
    return LinkedBinaryTree::Position(nullptr);
}


void LinkedBinaryTree::addRoot() {

}

void LinkedBinaryTree::expandExternal(const LinkedBinaryTree::Position &p) {

}

LinkedBinaryTree::Position LinkedBinaryTree::removeAboveExternal(const LinkedBinaryTree::Position &p) {
    return LinkedBinaryTree::Position(nullptr);
}

void LinkedBinaryTree::preorder(LinkedBinaryTree::Node *v, list <Position> &pl) const {

}

list<LinkedBinaryTree::Position> LinkedBinaryTree::getAllPositions() const {

}
