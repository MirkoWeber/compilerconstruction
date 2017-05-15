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
    int getDepth(TreePart* , int);
    TreePart* getLeafEbene(TreePart* , int );
    int depth;
};


#endif //COMPILERCONSTRUCTION_PARSER_H
