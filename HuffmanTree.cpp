#include <iostream>
#include "HuffmanTree.h"
using namespace std;

long int HuffmanTree::weightedLength2() {
    return node->weightedLength(0);
}