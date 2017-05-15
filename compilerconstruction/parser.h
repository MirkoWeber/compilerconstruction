#ifndef COMPILERCONSTRUCTION_PARSER_H
#define COMPILERCONSTRUCTION_PARSER_H

#include <cstdlib>
#include "Symbol.h"
#include "lexxer.h"
#include "TreePart.h"

using namespace std;

class parser {
public:
    parser();
    void printTree(TreePart*);

private:
    TreePart* root;
    int getDepth();
};


#endif //COMPILERCONSTRUCTION_PARSER_H
