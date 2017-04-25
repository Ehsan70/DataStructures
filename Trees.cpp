//
// Created by ehsan on 4/5/17.
//

#include <stddef.h>
#include "Trees.h"

bool Position::isRoot() const {
    return this->parent == NULL ? true : false;
}


bool Position::isExternal() const {
    return this->children.size() == 0 ? true : false;
}

Position* Position::parent() const {
    if(this->isRoot()) return NULL;
}


// Implementation for tree class
int Tree::size() const {
    return this->allPositions.size();
}

bool Tree::empty() const {
    return this->allPositions.size()==0 ? true : false;
}

list<Position> Tree::getAllPositions() const {
    return allPositions;
}




