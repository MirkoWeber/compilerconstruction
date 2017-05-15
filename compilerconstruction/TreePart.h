#ifndef TREEPART_H
#define TREEPART_H

#include "Symbol.h"
#include <String>
#include <cstdlib>
#include <iostream>
#include "Symbol.h"
#include "Types.h"
#include "lexxer.h"


class TreePart {
public:
    TreePart( Symbol* );
    TreePart();
    Symbol* getSymbol();
    vector<TreePart*>* getSon();
    void print();
    int ebene;
    bool visited;
    int sonPosition;
    int brothers;
protected:
    Symbol* symbol;
    std::vector<TreePart*> son;
    string typeName;
};

#endif /* LEXXER_H */

