#include <iostream>
using namespace std;
#include "symbol.h"
#pragma once


class HuffmanTree {
public:
    Symbol *node;

//    Constructor
    HuffmanTree(Symbol *c) {
        node = c;
    }

    long int weightedLength2();
    
};
