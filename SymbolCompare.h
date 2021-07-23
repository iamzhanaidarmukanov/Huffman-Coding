#include <iostream>
using namespace std;
#include "symbol.h"
#pragma once

class SymbolCompare {
public:
    bool operator () (Symbol *c1, Symbol *c2);
};