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
protected:
    Symbol* symbol;
    std::vector<TreePart*> son;
    string typeName;
};

#endif /* LEXXER_H */

