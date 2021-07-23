#include <iostream>
#include "SymbolCompare.h"
using namespace std;

bool SymbolCompare::operator()(Symbol *c1, Symbol *c2) {
    return c1->frequency > c2->frequency;
}
