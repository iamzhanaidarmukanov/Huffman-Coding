//
//  Created by Zhanaidar Mukanov
//  Copyright © 2021 Zhanaidar Mukanov. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

#include "symbol.h"
#include "HuffmanTree.h"
#include "SymbolCompare.h"

int main(int argc, const char * argv[]) {
    int N;
    while (cin >> N) {
        priority_queue <Symbol*, vector<Symbol*>, SymbolCompare> huffTree;
        for (int i = 0; i < N; i++) {
            int frequency;
            cin >> frequency;
            huffTree.push(new Symbol(frequency));
        }
        for (int i = 0; i < N - 1; i++) {
            Symbol *c = new Symbol();
            Symbol *c1 = huffTree.top();
            c->pushTo1(new Symbol(c1));
            huffTree.pop();
            Symbol *c2 = huffTree.top();
            c->pushTo2(new Symbol(c2));
            huffTree.pop();
            huffTree.push(c);
        }
        
        HuffmanTree HF = HuffmanTree(huffTree.top());
        huffTree.pop();
        cout << HF.weightedLength2() << endl;
        
    }
    return 0;
}