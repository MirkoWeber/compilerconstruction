//
// Created by raynn on 11.05.2017.
//

#ifndef COMPILERCONSTRUCTION_PACKAGECLAUSE_H
#define COMPILERCONSTRUCTION_PACKAGECLAUSE_H

#include <String>
#include <cstdlib>
#include "../Symbol.h"
#include "../Types.h"

using namespace std;

class PackageClause {
public:
    PackageClause(Symbol symbol);
private:
    Symbol symbol;
};


#endif //COMPILERCONSTRUCTION_PACKAGECLAUSE_H
