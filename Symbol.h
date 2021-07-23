#include <iostream>
using namespace std;
#pragma once


struct Symbol {
public:
    int frequency = 0;
    Symbol * child1 = NULL;
    Symbol * child2 = NULL;
    
//    Constructor
    Symbol() {
        
    }
    Symbol(Symbol *c) {
        frequency = c->frequency;
        child1 = c->child1;
        child2 = c->child2;
    }
    Symbol(int f) {
        frequency = f;
    }
        
//    Functions
    void pushTo1(Symbol *c);
    void pushTo2(Symbol *c);
    long int weightedLength(int level);
    
};