#ifndef COMPILERCONSTRUCTION_IMPORTDECLARATION_H
#define COMPILERCONSTRUCTION_IMPORTDECLARATION_H

#include <String>
#include <cstdlib>
#include "../Symbol.h"

using namespace std;

class ImportDeclaration {
public:
    ImportDeclaration(Symbol sym);
private:
    Symbol symbol;
};


#endif //COMPILERCONSTRUCTION_IMPORTDECLARATION_H
