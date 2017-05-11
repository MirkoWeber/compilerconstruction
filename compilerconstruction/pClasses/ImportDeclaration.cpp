#include "ImportDeclaration.h"

ImportDeclaration::ImportDeclaration() : TreePart() {
    Types types = Types();
    lexxer myLexer = lexxer();
    symbol = myLexer.next();
    if(symbol->getType() == types.constantString){
    } else {
        int line = symbol->getLine();
        std::cout << "ERR: import without specified file to import " << line;
        exit(123);
    }

}