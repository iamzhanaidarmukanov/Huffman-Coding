#include <iostream>
#include "Symbol.h"
using namespace std;

//
void Symbol::pushTo1(Symbol *c) {
        frequency += c->frequency;
        child1 = c;
}
void Symbol::pushTo2(Symbol *c) {
        frequency += c->frequency;
        child2 = c;
}
    
long int Symbol::weightedLength(int degree) {
        if (child1 == NULL)
            if (child2 == NULL)
                return frequency * degree;
            else
                return child2->weightedLength(degree + 1);
        else
            if (child2 == NULL)
                return    child1->weightedLength(degree + 1);
            else
                return child1->weightedLength(degree + 1) + child2->weightedLength(degree + 1);
}