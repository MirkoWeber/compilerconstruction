#include "PackageClause.h"
#include <iostream>

PackageClause::PackageClause() : TreePart() {
    typeName = "PC  ";
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    if(symbol->getType() == types.identifier){
        
    } else {
        int line = symbol->getLine();
        std::cout << "ERR: no Package name specified, at line " << line;
        exit(123);
    }

}